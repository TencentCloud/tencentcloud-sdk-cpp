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

#include <tencentcloud/bsca/v20210811/model/DescribeKBComponentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

DescribeKBComponentRequest::DescribeKBComponentRequest() :
    m_pURLHasBeenSet(false)
{
}

string DescribeKBComponentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_pURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PURL";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pURL.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


PURL DescribeKBComponentRequest::GetPURL() const
{
    return m_pURL;
}

void DescribeKBComponentRequest::SetPURL(const PURL& _pURL)
{
    m_pURL = _pURL;
    m_pURLHasBeenSet = true;
}

bool DescribeKBComponentRequest::PURLHasBeenSet() const
{
    return m_pURLHasBeenSet;
}


