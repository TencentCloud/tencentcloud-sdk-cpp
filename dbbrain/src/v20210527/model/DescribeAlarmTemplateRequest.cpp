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

#include <tencentcloud/dbbrain/v20210527/model/DescribeAlarmTemplateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeAlarmTemplateRequest::DescribeAlarmTemplateRequest() :
    m_templateNameRegexpHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string DescribeAlarmTemplateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateNameRegexpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateNameRegexp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateNameRegexp.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmTemplateRequest::GetTemplateNameRegexp() const
{
    return m_templateNameRegexp;
}

void DescribeAlarmTemplateRequest::SetTemplateNameRegexp(const string& _templateNameRegexp)
{
    m_templateNameRegexp = _templateNameRegexp;
    m_templateNameRegexpHasBeenSet = true;
}

bool DescribeAlarmTemplateRequest::TemplateNameRegexpHasBeenSet() const
{
    return m_templateNameRegexpHasBeenSet;
}

int64_t DescribeAlarmTemplateRequest::GetLimit() const
{
    return m_limit;
}

void DescribeAlarmTemplateRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeAlarmTemplateRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t DescribeAlarmTemplateRequest::GetOffset() const
{
    return m_offset;
}

void DescribeAlarmTemplateRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeAlarmTemplateRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string DescribeAlarmTemplateRequest::GetProduct() const
{
    return m_product;
}

void DescribeAlarmTemplateRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeAlarmTemplateRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


