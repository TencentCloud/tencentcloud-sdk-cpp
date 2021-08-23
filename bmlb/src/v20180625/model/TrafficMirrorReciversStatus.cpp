/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/bmlb/v20180625/model/TrafficMirrorReciversStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

TrafficMirrorReciversStatus::TrafficMirrorReciversStatus() :
    m_lanIpHasBeenSet(false),
    m_receiversPortStatusSetHasBeenSet(false)
{
}

CoreInternalOutcome TrafficMirrorReciversStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LanIp") && !value["LanIp"].IsNull())
    {
        if (!value["LanIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReciversStatus.LanIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lanIp = string(value["LanIp"].GetString());
        m_lanIpHasBeenSet = true;
    }

    if (value.HasMember("ReceiversPortStatusSet") && !value["ReceiversPortStatusSet"].IsNull())
    {
        if (!value["ReceiversPortStatusSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrafficMirrorReciversStatus.ReceiversPortStatusSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiversPortStatusSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TrafficMirrorPortStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiversPortStatusSet.push_back(item);
        }
        m_receiversPortStatusSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficMirrorReciversStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lanIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lanIp.c_str(), allocator).Move(), allocator);
    }

    if (m_receiversPortStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiversPortStatusSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiversPortStatusSet.begin(); itr != m_receiversPortStatusSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string TrafficMirrorReciversStatus::GetLanIp() const
{
    return m_lanIp;
}

void TrafficMirrorReciversStatus::SetLanIp(const string& _lanIp)
{
    m_lanIp = _lanIp;
    m_lanIpHasBeenSet = true;
}

bool TrafficMirrorReciversStatus::LanIpHasBeenSet() const
{
    return m_lanIpHasBeenSet;
}

vector<TrafficMirrorPortStatus> TrafficMirrorReciversStatus::GetReceiversPortStatusSet() const
{
    return m_receiversPortStatusSet;
}

void TrafficMirrorReciversStatus::SetReceiversPortStatusSet(const vector<TrafficMirrorPortStatus>& _receiversPortStatusSet)
{
    m_receiversPortStatusSet = _receiversPortStatusSet;
    m_receiversPortStatusSetHasBeenSet = true;
}

bool TrafficMirrorReciversStatus::ReceiversPortStatusSetHasBeenSet() const
{
    return m_receiversPortStatusSetHasBeenSet;
}

