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

#include <tencentcloud/apigateway/v20180808/model/CreateUsagePlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

CreateUsagePlanRequest::CreateUsagePlanRequest() :
    m_usagePlanNameHasBeenSet(false),
    m_usagePlanDescHasBeenSet(false),
    m_maxRequestNumHasBeenSet(false),
    m_maxRequestNumPreSecHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateUsagePlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_usagePlanNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usagePlanName.c_str(), allocator).Move(), allocator);
    }

    if (m_usagePlanDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsagePlanDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usagePlanDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_maxRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRequestNum, allocator);
    }

    if (m_maxRequestNumPreSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNumPreSec";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxRequestNumPreSec, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateUsagePlanRequest::GetUsagePlanName() const
{
    return m_usagePlanName;
}

void CreateUsagePlanRequest::SetUsagePlanName(const string& _usagePlanName)
{
    m_usagePlanName = _usagePlanName;
    m_usagePlanNameHasBeenSet = true;
}

bool CreateUsagePlanRequest::UsagePlanNameHasBeenSet() const
{
    return m_usagePlanNameHasBeenSet;
}

string CreateUsagePlanRequest::GetUsagePlanDesc() const
{
    return m_usagePlanDesc;
}

void CreateUsagePlanRequest::SetUsagePlanDesc(const string& _usagePlanDesc)
{
    m_usagePlanDesc = _usagePlanDesc;
    m_usagePlanDescHasBeenSet = true;
}

bool CreateUsagePlanRequest::UsagePlanDescHasBeenSet() const
{
    return m_usagePlanDescHasBeenSet;
}

int64_t CreateUsagePlanRequest::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

void CreateUsagePlanRequest::SetMaxRequestNum(const int64_t& _maxRequestNum)
{
    m_maxRequestNum = _maxRequestNum;
    m_maxRequestNumHasBeenSet = true;
}

bool CreateUsagePlanRequest::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

int64_t CreateUsagePlanRequest::GetMaxRequestNumPreSec() const
{
    return m_maxRequestNumPreSec;
}

void CreateUsagePlanRequest::SetMaxRequestNumPreSec(const int64_t& _maxRequestNumPreSec)
{
    m_maxRequestNumPreSec = _maxRequestNumPreSec;
    m_maxRequestNumPreSecHasBeenSet = true;
}

bool CreateUsagePlanRequest::MaxRequestNumPreSecHasBeenSet() const
{
    return m_maxRequestNumPreSecHasBeenSet;
}

vector<Tag> CreateUsagePlanRequest::GetTags() const
{
    return m_tags;
}

void CreateUsagePlanRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateUsagePlanRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


