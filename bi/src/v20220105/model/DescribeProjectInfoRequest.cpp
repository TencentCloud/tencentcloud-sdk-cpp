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

#include <tencentcloud/bi/v20220105/model/DescribeProjectInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

DescribeProjectInfoRequest::DescribeProjectInfoRequest() :
    m_idHasBeenSet(false),
    m_defaultPanelTypeHasBeenSet(false)
{
}

string DescribeProjectInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_defaultPanelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultPanelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_defaultPanelType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeProjectInfoRequest::GetId() const
{
    return m_id;
}

void DescribeProjectInfoRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool DescribeProjectInfoRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

int64_t DescribeProjectInfoRequest::GetDefaultPanelType() const
{
    return m_defaultPanelType;
}

void DescribeProjectInfoRequest::SetDefaultPanelType(const int64_t& _defaultPanelType)
{
    m_defaultPanelType = _defaultPanelType;
    m_defaultPanelTypeHasBeenSet = true;
}

bool DescribeProjectInfoRequest::DefaultPanelTypeHasBeenSet() const
{
    return m_defaultPanelTypeHasBeenSet;
}


