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

#include <tencentcloud/dlc/v20210125/model/DataEngineConfigInstanceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineConfigInstanceInfo::DataEngineConfigInstanceInfo() :
    m_dataEngineIdHasBeenSet(false),
    m_dataEngineConfigPairsHasBeenSet(false),
    m_sessionResourceTemplateHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineConfigInstanceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineConfigInstanceInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("DataEngineConfigPairs") && !value["DataEngineConfigPairs"].IsNull())
    {
        if (!value["DataEngineConfigPairs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataEngineConfigInstanceInfo.DataEngineConfigPairs` is not array type"));

        const rapidjson::Value &tmpValue = value["DataEngineConfigPairs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DataEngineConfigPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dataEngineConfigPairs.push_back(item);
        }
        m_dataEngineConfigPairsHasBeenSet = true;
    }

    if (value.HasMember("SessionResourceTemplate") && !value["SessionResourceTemplate"].IsNull())
    {
        if (!value["SessionResourceTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineConfigInstanceInfo.SessionResourceTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sessionResourceTemplate.Deserialize(value["SessionResourceTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sessionResourceTemplateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineConfigInstanceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataEngineConfigPairs.begin(); itr != m_dataEngineConfigPairs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sessionResourceTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionResourceTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionResourceTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DataEngineConfigInstanceInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void DataEngineConfigInstanceInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool DataEngineConfigInstanceInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

vector<DataEngineConfigPair> DataEngineConfigInstanceInfo::GetDataEngineConfigPairs() const
{
    return m_dataEngineConfigPairs;
}

void DataEngineConfigInstanceInfo::SetDataEngineConfigPairs(const vector<DataEngineConfigPair>& _dataEngineConfigPairs)
{
    m_dataEngineConfigPairs = _dataEngineConfigPairs;
    m_dataEngineConfigPairsHasBeenSet = true;
}

bool DataEngineConfigInstanceInfo::DataEngineConfigPairsHasBeenSet() const
{
    return m_dataEngineConfigPairsHasBeenSet;
}

SessionResourceTemplate DataEngineConfigInstanceInfo::GetSessionResourceTemplate() const
{
    return m_sessionResourceTemplate;
}

void DataEngineConfigInstanceInfo::SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate)
{
    m_sessionResourceTemplate = _sessionResourceTemplate;
    m_sessionResourceTemplateHasBeenSet = true;
}

bool DataEngineConfigInstanceInfo::SessionResourceTemplateHasBeenSet() const
{
    return m_sessionResourceTemplateHasBeenSet;
}

