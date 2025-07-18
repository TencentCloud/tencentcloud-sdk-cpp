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

#include <tencentcloud/cpdp/v20190820/model/DistributeRemoveReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeRemoveReceiverRequest::DistributeRemoveReceiverRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DistributeRemoveReceiverRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_openKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openKey.c_str(), allocator).Move(), allocator);
    }

    if (m_merchantNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_merchantNo.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DistributeRemoveReceiverRequest::GetOpenId() const
{
    return m_openId;
}

void DistributeRemoveReceiverRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DistributeRemoveReceiverRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DistributeRemoveReceiverRequest::GetOpenKey() const
{
    return m_openKey;
}

void DistributeRemoveReceiverRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DistributeRemoveReceiverRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DistributeRemoveReceiverRequest::GetMerchantNo() const
{
    return m_merchantNo;
}

void DistributeRemoveReceiverRequest::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool DistributeRemoveReceiverRequest::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string DistributeRemoveReceiverRequest::GetRemark() const
{
    return m_remark;
}

void DistributeRemoveReceiverRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DistributeRemoveReceiverRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DistributeRemoveReceiverRequest::GetProfile() const
{
    return m_profile;
}

void DistributeRemoveReceiverRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DistributeRemoveReceiverRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


