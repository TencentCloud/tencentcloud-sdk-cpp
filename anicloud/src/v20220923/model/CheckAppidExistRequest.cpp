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

#include <tencentcloud/anicloud/v20220923/model/CheckAppidExistRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Anicloud::V20220923::Model;
using namespace std;

CheckAppidExistRequest::CheckAppidExistRequest() :
    m_sDKAppidHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

string CheckAppidExistRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sDKAppidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDKAppid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sDKAppid.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CheckAppidExistRequest::GetSDKAppid() const
{
    return m_sDKAppid;
}

void CheckAppidExistRequest::SetSDKAppid(const string& _sDKAppid)
{
    m_sDKAppid = _sDKAppid;
    m_sDKAppidHasBeenSet = true;
}

bool CheckAppidExistRequest::SDKAppidHasBeenSet() const
{
    return m_sDKAppidHasBeenSet;
}

string CheckAppidExistRequest::GetType() const
{
    return m_type;
}

void CheckAppidExistRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CheckAppidExistRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}


