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

#include <tencentcloud/chc/v20230418/model/Distribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

Distribution::Distribution() :
    m_rackNumberHasBeenSet(false),
    m_rackUsageSetHasBeenSet(false)
{
}

CoreInternalOutcome Distribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RackNumber") && !value["RackNumber"].IsNull())
    {
        if (!value["RackNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Distribution.RackNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackNumber = string(value["RackNumber"].GetString());
        m_rackNumberHasBeenSet = true;
    }

    if (value.HasMember("RackUsageSet") && !value["RackUsageSet"].IsNull())
    {
        if (!value["RackUsageSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Distribution.RackUsageSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RackUsageSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RackUsage item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rackUsageSet.push_back(item);
        }
        m_rackUsageSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Distribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rackNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_rackUsageSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackUsageSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rackUsageSet.begin(); itr != m_rackUsageSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Distribution::GetRackNumber() const
{
    return m_rackNumber;
}

void Distribution::SetRackNumber(const string& _rackNumber)
{
    m_rackNumber = _rackNumber;
    m_rackNumberHasBeenSet = true;
}

bool Distribution::RackNumberHasBeenSet() const
{
    return m_rackNumberHasBeenSet;
}

vector<RackUsage> Distribution::GetRackUsageSet() const
{
    return m_rackUsageSet;
}

void Distribution::SetRackUsageSet(const vector<RackUsage>& _rackUsageSet)
{
    m_rackUsageSet = _rackUsageSet;
    m_rackUsageSetHasBeenSet = true;
}

bool Distribution::RackUsageSetHasBeenSet() const
{
    return m_rackUsageSetHasBeenSet;
}

