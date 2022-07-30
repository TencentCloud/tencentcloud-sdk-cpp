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

#include <tencentcloud/pts/v20210728/model/SLAPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

SLAPolicy::SLAPolicy() :
    m_sLARulesHasBeenSet(false),
    m_alertChannelHasBeenSet(false)
{
}

CoreInternalOutcome SLAPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SLARules") && !value["SLARules"].IsNull())
    {
        if (!value["SLARules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SLAPolicy.SLARules` is not array type"));

        const rapidjson::Value &tmpValue = value["SLARules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SLARule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sLARules.push_back(item);
        }
        m_sLARulesHasBeenSet = true;
    }

    if (value.HasMember("AlertChannel") && !value["AlertChannel"].IsNull())
    {
        if (!value["AlertChannel"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SLAPolicy.AlertChannel` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_alertChannel.Deserialize(value["AlertChannel"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_alertChannelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SLAPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sLARulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLARules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sLARules.begin(); itr != m_sLARules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alertChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlertChannel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_alertChannel.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<SLARule> SLAPolicy::GetSLARules() const
{
    return m_sLARules;
}

void SLAPolicy::SetSLARules(const vector<SLARule>& _sLARules)
{
    m_sLARules = _sLARules;
    m_sLARulesHasBeenSet = true;
}

bool SLAPolicy::SLARulesHasBeenSet() const
{
    return m_sLARulesHasBeenSet;
}

AlertChannel SLAPolicy::GetAlertChannel() const
{
    return m_alertChannel;
}

void SLAPolicy::SetAlertChannel(const AlertChannel& _alertChannel)
{
    m_alertChannel = _alertChannel;
    m_alertChannelHasBeenSet = true;
}

bool SLAPolicy::AlertChannelHasBeenSet() const
{
    return m_alertChannelHasBeenSet;
}

