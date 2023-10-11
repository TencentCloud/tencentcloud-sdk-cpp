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

#include <tencentcloud/dlc/v20210125/model/UpdateDataEngineConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

UpdateDataEngineConfigRequest::UpdateDataEngineConfigRequest() :
    m_dataEngineIdsHasBeenSet(false),
    m_dataEngineConfigCommandHasBeenSet(false)
{
}

string UpdateDataEngineConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataEngineIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dataEngineIds.begin(); itr != m_dataEngineIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dataEngineConfigCommandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineConfigCommand";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataEngineConfigCommand.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateDataEngineConfigRequest::GetDataEngineIds() const
{
    return m_dataEngineIds;
}

void UpdateDataEngineConfigRequest::SetDataEngineIds(const vector<string>& _dataEngineIds)
{
    m_dataEngineIds = _dataEngineIds;
    m_dataEngineIdsHasBeenSet = true;
}

bool UpdateDataEngineConfigRequest::DataEngineIdsHasBeenSet() const
{
    return m_dataEngineIdsHasBeenSet;
}

string UpdateDataEngineConfigRequest::GetDataEngineConfigCommand() const
{
    return m_dataEngineConfigCommand;
}

void UpdateDataEngineConfigRequest::SetDataEngineConfigCommand(const string& _dataEngineConfigCommand)
{
    m_dataEngineConfigCommand = _dataEngineConfigCommand;
    m_dataEngineConfigCommandHasBeenSet = true;
}

bool UpdateDataEngineConfigRequest::DataEngineConfigCommandHasBeenSet() const
{
    return m_dataEngineConfigCommandHasBeenSet;
}


