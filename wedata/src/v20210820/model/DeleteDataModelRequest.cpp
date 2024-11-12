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

#include <tencentcloud/wedata/v20210820/model/DeleteDataModelRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DeleteDataModelRequest::DeleteDataModelRequest() :
    m_cloudappIdHasBeenSet(false),
    m_dataModelIdHasBeenSet(false),
    m_userIdHasBeenSet(false)
{
}

string DeleteDataModelRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cloudappIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudappId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cloudappId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataModelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataModelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataModelId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDataModelRequest::GetCloudappId() const
{
    return m_cloudappId;
}

void DeleteDataModelRequest::SetCloudappId(const string& _cloudappId)
{
    m_cloudappId = _cloudappId;
    m_cloudappIdHasBeenSet = true;
}

bool DeleteDataModelRequest::CloudappIdHasBeenSet() const
{
    return m_cloudappIdHasBeenSet;
}

string DeleteDataModelRequest::GetDataModelId() const
{
    return m_dataModelId;
}

void DeleteDataModelRequest::SetDataModelId(const string& _dataModelId)
{
    m_dataModelId = _dataModelId;
    m_dataModelIdHasBeenSet = true;
}

bool DeleteDataModelRequest::DataModelIdHasBeenSet() const
{
    return m_dataModelIdHasBeenSet;
}

string DeleteDataModelRequest::GetUserId() const
{
    return m_userId;
}

void DeleteDataModelRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool DeleteDataModelRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}


