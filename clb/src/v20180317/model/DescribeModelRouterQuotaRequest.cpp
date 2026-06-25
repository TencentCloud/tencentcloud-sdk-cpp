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

#include <tencentcloud/clb/v20180317/model/DescribeModelRouterQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DescribeModelRouterQuotaRequest::DescribeModelRouterQuotaRequest() :
    m_quotaTypesHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_displayFieldsHasBeenSet(false)
{
}

string DescribeModelRouterQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_quotaTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quotaTypes.begin(); itr != m_quotaTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resourceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceIds.begin(); itr != m_resourceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_displayFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayFields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_displayFields.begin(); itr != m_displayFields.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeModelRouterQuotaRequest::GetQuotaTypes() const
{
    return m_quotaTypes;
}

void DescribeModelRouterQuotaRequest::SetQuotaTypes(const vector<string>& _quotaTypes)
{
    m_quotaTypes = _quotaTypes;
    m_quotaTypesHasBeenSet = true;
}

bool DescribeModelRouterQuotaRequest::QuotaTypesHasBeenSet() const
{
    return m_quotaTypesHasBeenSet;
}

vector<string> DescribeModelRouterQuotaRequest::GetResourceIds() const
{
    return m_resourceIds;
}

void DescribeModelRouterQuotaRequest::SetResourceIds(const vector<string>& _resourceIds)
{
    m_resourceIds = _resourceIds;
    m_resourceIdsHasBeenSet = true;
}

bool DescribeModelRouterQuotaRequest::ResourceIdsHasBeenSet() const
{
    return m_resourceIdsHasBeenSet;
}

vector<string> DescribeModelRouterQuotaRequest::GetDisplayFields() const
{
    return m_displayFields;
}

void DescribeModelRouterQuotaRequest::SetDisplayFields(const vector<string>& _displayFields)
{
    m_displayFields = _displayFields;
    m_displayFieldsHasBeenSet = true;
}

bool DescribeModelRouterQuotaRequest::DisplayFieldsHasBeenSet() const
{
    return m_displayFieldsHasBeenSet;
}


