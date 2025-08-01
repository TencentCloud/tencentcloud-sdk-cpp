/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dlc/v20210125/model/DeleteNativeSparkSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DeleteNativeSparkSessionRequest::DeleteNativeSparkSessionRequest() :
    m_dataEngineIdHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_engineSessionNameHasBeenSet(false)
{
}

string DeleteNativeSparkSessionRequest::ToJsonString() const
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

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSessionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_engineSessionName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteNativeSparkSessionRequest::GetDataEngineId() const
{
    return m_dataEngineId;
}

void DeleteNativeSparkSessionRequest::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool DeleteNativeSparkSessionRequest::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string DeleteNativeSparkSessionRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void DeleteNativeSparkSessionRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool DeleteNativeSparkSessionRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string DeleteNativeSparkSessionRequest::GetEngineSessionName() const
{
    return m_engineSessionName;
}

void DeleteNativeSparkSessionRequest::SetEngineSessionName(const string& _engineSessionName)
{
    m_engineSessionName = _engineSessionName;
    m_engineSessionNameHasBeenSet = true;
}

bool DeleteNativeSparkSessionRequest::EngineSessionNameHasBeenSet() const
{
    return m_engineSessionNameHasBeenSet;
}


