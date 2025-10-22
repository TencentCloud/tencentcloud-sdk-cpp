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

#include <tencentcloud/essbasic/v20201222/model/DescribeCatalogSignComponentsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

DescribeCatalogSignComponentsRequest::DescribeCatalogSignComponentsRequest() :
    m_callerHasBeenSet(false),
    m_catalogIdHasBeenSet(false)
{
}

string DescribeCatalogSignComponentsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_catalogIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CatalogId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_catalogId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller DescribeCatalogSignComponentsRequest::GetCaller() const
{
    return m_caller;
}

void DescribeCatalogSignComponentsRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool DescribeCatalogSignComponentsRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string DescribeCatalogSignComponentsRequest::GetCatalogId() const
{
    return m_catalogId;
}

void DescribeCatalogSignComponentsRequest::SetCatalogId(const string& _catalogId)
{
    m_catalogId = _catalogId;
    m_catalogIdHasBeenSet = true;
}

bool DescribeCatalogSignComponentsRequest::CatalogIdHasBeenSet() const
{
    return m_catalogIdHasBeenSet;
}


