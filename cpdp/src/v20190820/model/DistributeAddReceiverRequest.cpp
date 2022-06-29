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

#include <tencentcloud/cpdp/v20190820/model/DistributeAddReceiverRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

DistributeAddReceiverRequest::DistributeAddReceiverRequest() :
    m_openIdHasBeenSet(false),
    m_openKeyHasBeenSet(false),
    m_merchantNoHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string DistributeAddReceiverRequest::ToJsonString() const
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


string DistributeAddReceiverRequest::GetOpenId() const
{
    return m_openId;
}

void DistributeAddReceiverRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool DistributeAddReceiverRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string DistributeAddReceiverRequest::GetOpenKey() const
{
    return m_openKey;
}

void DistributeAddReceiverRequest::SetOpenKey(const string& _openKey)
{
    m_openKey = _openKey;
    m_openKeyHasBeenSet = true;
}

bool DistributeAddReceiverRequest::OpenKeyHasBeenSet() const
{
    return m_openKeyHasBeenSet;
}

string DistributeAddReceiverRequest::GetMerchantNo() const
{
    return m_merchantNo;
}

void DistributeAddReceiverRequest::SetMerchantNo(const string& _merchantNo)
{
    m_merchantNo = _merchantNo;
    m_merchantNoHasBeenSet = true;
}

bool DistributeAddReceiverRequest::MerchantNoHasBeenSet() const
{
    return m_merchantNoHasBeenSet;
}

string DistributeAddReceiverRequest::GetRemark() const
{
    return m_remark;
}

void DistributeAddReceiverRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DistributeAddReceiverRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string DistributeAddReceiverRequest::GetProfile() const
{
    return m_profile;
}

void DistributeAddReceiverRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool DistributeAddReceiverRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


