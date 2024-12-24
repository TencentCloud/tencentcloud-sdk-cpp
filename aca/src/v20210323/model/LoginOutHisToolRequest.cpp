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

#include <tencentcloud/aca/v20210323/model/LoginOutHisToolRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

LoginOutHisToolRequest::LoginOutHisToolRequest() :
    m_headerHasBeenSet(false),
    m_dataHasBeenSet(false)
{
}

string LoginOutHisToolRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_header.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_data.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


LoginOutHeader LoginOutHisToolRequest::GetHeader() const
{
    return m_header;
}

void LoginOutHisToolRequest::SetHeader(const LoginOutHeader& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool LoginOutHisToolRequest::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

LoginOutData LoginOutHisToolRequest::GetData() const
{
    return m_data;
}

void LoginOutHisToolRequest::SetData(const LoginOutData& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool LoginOutHisToolRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}


