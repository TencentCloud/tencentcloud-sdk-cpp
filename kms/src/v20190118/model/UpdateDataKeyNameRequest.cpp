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

#include <tencentcloud/kms/v20190118/model/UpdateDataKeyNameRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Kms::V20190118::Model;
using namespace std;

UpdateDataKeyNameRequest::UpdateDataKeyNameRequest() :
    m_dataKeyIdHasBeenSet(false),
    m_dataKeyNameHasBeenSet(false)
{
}

string UpdateDataKeyNameRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataKeyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataKeyName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataKeyName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateDataKeyNameRequest::GetDataKeyId() const
{
    return m_dataKeyId;
}

void UpdateDataKeyNameRequest::SetDataKeyId(const string& _dataKeyId)
{
    m_dataKeyId = _dataKeyId;
    m_dataKeyIdHasBeenSet = true;
}

bool UpdateDataKeyNameRequest::DataKeyIdHasBeenSet() const
{
    return m_dataKeyIdHasBeenSet;
}

string UpdateDataKeyNameRequest::GetDataKeyName() const
{
    return m_dataKeyName;
}

void UpdateDataKeyNameRequest::SetDataKeyName(const string& _dataKeyName)
{
    m_dataKeyName = _dataKeyName;
    m_dataKeyNameHasBeenSet = true;
}

bool UpdateDataKeyNameRequest::DataKeyNameHasBeenSet() const
{
    return m_dataKeyNameHasBeenSet;
}


