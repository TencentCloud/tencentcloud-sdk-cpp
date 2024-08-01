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

#include <tencentcloud/rce/v20201103/model/DeleteNameListDataRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

DeleteNameListDataRequest::DeleteNameListDataRequest() :
    m_businessSecurityDataHasBeenSet(false)
{
}

string DeleteNameListDataRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessSecurityDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessSecurityData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_businessSecurityData.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputDeleteNameListData DeleteNameListDataRequest::GetBusinessSecurityData() const
{
    return m_businessSecurityData;
}

void DeleteNameListDataRequest::SetBusinessSecurityData(const InputDeleteNameListData& _businessSecurityData)
{
    m_businessSecurityData = _businessSecurityData;
    m_businessSecurityDataHasBeenSet = true;
}

bool DeleteNameListDataRequest::BusinessSecurityDataHasBeenSet() const
{
    return m_businessSecurityDataHasBeenSet;
}


