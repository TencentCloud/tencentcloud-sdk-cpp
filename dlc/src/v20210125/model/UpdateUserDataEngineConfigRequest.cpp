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

#include <tencentcloud/dlc/v20210125/model/UpdateUserDataEngineConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateUserDataEngineConfigRequest::UpdateUserDataEngineConfigRequest() :
    m_dataEngineIdHasBeenSet(false),
    m_dataEngineConfigPairsHasBeenSet(false),
    m_sessionResourceTemplateHasBeenSet(false)
{
}

string UpdateUserDataEngineConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineConfigPairsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigPairs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dataEngineConfigPairs.begin(); itr != m_dataEngineConfigPairs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sessionResourceTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionResourceTemplate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sessionResourceTemplate.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateUserDataEngineConfigRequest::GetDataEngineId() const
{
    return m_dataEngineId;
}

void UpdateUserDataEngineConfigRequest::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool UpdateUserDataEngineConfigRequest::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

vector<DataEngineConfigPair> UpdateUserDataEngineConfigRequest::GetDataEngineConfigPairs() const
{
    return m_dataEngineConfigPairs;
}

void UpdateUserDataEngineConfigRequest::SetDataEngineConfigPairs(const vector<DataEngineConfigPair>& _dataEngineConfigPairs)
{
    m_dataEngineConfigPairs = _dataEngineConfigPairs;
    m_dataEngineConfigPairsHasBeenSet = true;
}

bool UpdateUserDataEngineConfigRequest::DataEngineConfigPairsHasBeenSet() const
{
    return m_dataEngineConfigPairsHasBeenSet;
}

SessionResourceTemplate UpdateUserDataEngineConfigRequest::GetSessionResourceTemplate() const
{
    return m_sessionResourceTemplate;
}

void UpdateUserDataEngineConfigRequest::SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate)
{
    m_sessionResourceTemplate = _sessionResourceTemplate;
    m_sessionResourceTemplateHasBeenSet = true;
}

bool UpdateUserDataEngineConfigRequest::SessionResourceTemplateHasBeenSet() const
{
    return m_sessionResourceTemplateHasBeenSet;
}


