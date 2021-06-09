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

#include <tencentcloud/habo/v20181203/model/DescribeStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Habo::V20181203::Model;
using namespace std;

DescribeStatusRequest::DescribeStatusRequest() :
    m_pkHasBeenSet(false),
    m_md5HasBeenSet(false)
{
}

string DescribeStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pk.c_str(), allocator).Move(), allocator);
    }

    if (m_md5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_md5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeStatusRequest::GetPk() const
{
    return m_pk;
}

void DescribeStatusRequest::SetPk(const string& _pk)
{
    m_pk = _pk;
    m_pkHasBeenSet = true;
}

bool DescribeStatusRequest::PkHasBeenSet() const
{
    return m_pkHasBeenSet;
}

string DescribeStatusRequest::GetMd5() const
{
    return m_md5;
}

void DescribeStatusRequest::SetMd5(const string& _md5)
{
    m_md5 = _md5;
    m_md5HasBeenSet = true;
}

bool DescribeStatusRequest::Md5HasBeenSet() const
{
    return m_md5HasBeenSet;
}


