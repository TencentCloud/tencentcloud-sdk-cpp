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

#include <tencentcloud/gse/v20191112/model/DescribeAssetSystemsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gse::V20191112::Model;
using namespace rapidjson;
using namespace std;

DescribeAssetSystemsRequest::DescribeAssetSystemsRequest() :
    m_osTypeHasBeenSet(false),
    m_osBitHasBeenSet(false)
{
}

string DescribeAssetSystemsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_osTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_osType.c_str(), allocator).Move(), allocator);
    }

    if (m_osBitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsBit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_osBit, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAssetSystemsRequest::GetOsType() const
{
    return m_osType;
}

void DescribeAssetSystemsRequest::SetOsType(const string& _osType)
{
    m_osType = _osType;
    m_osTypeHasBeenSet = true;
}

bool DescribeAssetSystemsRequest::OsTypeHasBeenSet() const
{
    return m_osTypeHasBeenSet;
}

int64_t DescribeAssetSystemsRequest::GetOsBit() const
{
    return m_osBit;
}

void DescribeAssetSystemsRequest::SetOsBit(const int64_t& _osBit)
{
    m_osBit = _osBit;
    m_osBitHasBeenSet = true;
}

bool DescribeAssetSystemsRequest::OsBitHasBeenSet() const
{
    return m_osBitHasBeenSet;
}


