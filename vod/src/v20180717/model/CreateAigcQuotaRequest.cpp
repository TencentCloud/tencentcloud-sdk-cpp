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

#include <tencentcloud/vod/v20180717/model/CreateAigcQuotaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateAigcQuotaRequest::CreateAigcQuotaRequest() :
    m_subAppIdHasBeenSet(false),
    m_quotaTypeHasBeenSet(false),
    m_quotaLimitHasBeenSet(false),
    m_apiTokenHasBeenSet(false)
{
}

string CreateAigcQuotaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_quotaTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quotaType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_quotaLimit, allocator);
    }

    if (m_apiTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apiToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateAigcQuotaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateAigcQuotaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateAigcQuotaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateAigcQuotaRequest::GetQuotaType() const
{
    return m_quotaType;
}

void CreateAigcQuotaRequest::SetQuotaType(const string& _quotaType)
{
    m_quotaType = _quotaType;
    m_quotaTypeHasBeenSet = true;
}

bool CreateAigcQuotaRequest::QuotaTypeHasBeenSet() const
{
    return m_quotaTypeHasBeenSet;
}

uint64_t CreateAigcQuotaRequest::GetQuotaLimit() const
{
    return m_quotaLimit;
}

void CreateAigcQuotaRequest::SetQuotaLimit(const uint64_t& _quotaLimit)
{
    m_quotaLimit = _quotaLimit;
    m_quotaLimitHasBeenSet = true;
}

bool CreateAigcQuotaRequest::QuotaLimitHasBeenSet() const
{
    return m_quotaLimitHasBeenSet;
}

string CreateAigcQuotaRequest::GetApiToken() const
{
    return m_apiToken;
}

void CreateAigcQuotaRequest::SetApiToken(const string& _apiToken)
{
    m_apiToken = _apiToken;
    m_apiTokenHasBeenSet = true;
}

bool CreateAigcQuotaRequest::ApiTokenHasBeenSet() const
{
    return m_apiTokenHasBeenSet;
}


