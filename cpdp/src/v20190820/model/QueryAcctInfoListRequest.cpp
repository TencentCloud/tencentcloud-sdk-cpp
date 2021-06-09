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

#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryAcctInfoListRequest::QueryAcctInfoListRequest() :
    m_midasAppIdHasBeenSet(false),
    m_queryAcctBeginTimeHasBeenSet(false),
    m_queryAcctEndTimeHasBeenSet(false),
    m_pageOffsetHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false)
{
}

string QueryAcctInfoListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryAcctBeginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAcctBeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryAcctBeginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_queryAcctEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryAcctEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryAcctEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_pageOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageOffset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pageOffset.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryAcctInfoListRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void QueryAcctInfoListRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool QueryAcctInfoListRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string QueryAcctInfoListRequest::GetQueryAcctBeginTime() const
{
    return m_queryAcctBeginTime;
}

void QueryAcctInfoListRequest::SetQueryAcctBeginTime(const string& _queryAcctBeginTime)
{
    m_queryAcctBeginTime = _queryAcctBeginTime;
    m_queryAcctBeginTimeHasBeenSet = true;
}

bool QueryAcctInfoListRequest::QueryAcctBeginTimeHasBeenSet() const
{
    return m_queryAcctBeginTimeHasBeenSet;
}

string QueryAcctInfoListRequest::GetQueryAcctEndTime() const
{
    return m_queryAcctEndTime;
}

void QueryAcctInfoListRequest::SetQueryAcctEndTime(const string& _queryAcctEndTime)
{
    m_queryAcctEndTime = _queryAcctEndTime;
    m_queryAcctEndTimeHasBeenSet = true;
}

bool QueryAcctInfoListRequest::QueryAcctEndTimeHasBeenSet() const
{
    return m_queryAcctEndTimeHasBeenSet;
}

string QueryAcctInfoListRequest::GetPageOffset() const
{
    return m_pageOffset;
}

void QueryAcctInfoListRequest::SetPageOffset(const string& _pageOffset)
{
    m_pageOffset = _pageOffset;
    m_pageOffsetHasBeenSet = true;
}

bool QueryAcctInfoListRequest::PageOffsetHasBeenSet() const
{
    return m_pageOffsetHasBeenSet;
}

string QueryAcctInfoListRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void QueryAcctInfoListRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool QueryAcctInfoListRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string QueryAcctInfoListRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void QueryAcctInfoListRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool QueryAcctInfoListRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string QueryAcctInfoListRequest::GetEncryptType() const
{
    return m_encryptType;
}

void QueryAcctInfoListRequest::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool QueryAcctInfoListRequest::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string QueryAcctInfoListRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void QueryAcctInfoListRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool QueryAcctInfoListRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}


