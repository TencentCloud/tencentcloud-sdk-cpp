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

#include <tencentcloud/sqlserver/v20180328/model/ModifyInstanceEncryptAttributesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ModifyInstanceEncryptAttributesRequest::ModifyInstanceEncryptAttributesRequest() :
    m_instanceIdHasBeenSet(false),
    m_certificateAttributionHasBeenSet(false),
    m_quoteUinHasBeenSet(false),
    m_keyIdHasBeenSet(false),
    m_keyRegionHasBeenSet(false)
{
}

string ModifyInstanceEncryptAttributesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAttributionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAttribution";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certificateAttribution.c_str(), allocator).Move(), allocator);
    }

    if (m_quoteUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuoteUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_quoteUin.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyInstanceEncryptAttributesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyInstanceEncryptAttributesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyInstanceEncryptAttributesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyInstanceEncryptAttributesRequest::GetCertificateAttribution() const
{
    return m_certificateAttribution;
}

void ModifyInstanceEncryptAttributesRequest::SetCertificateAttribution(const string& _certificateAttribution)
{
    m_certificateAttribution = _certificateAttribution;
    m_certificateAttributionHasBeenSet = true;
}

bool ModifyInstanceEncryptAttributesRequest::CertificateAttributionHasBeenSet() const
{
    return m_certificateAttributionHasBeenSet;
}

string ModifyInstanceEncryptAttributesRequest::GetQuoteUin() const
{
    return m_quoteUin;
}

void ModifyInstanceEncryptAttributesRequest::SetQuoteUin(const string& _quoteUin)
{
    m_quoteUin = _quoteUin;
    m_quoteUinHasBeenSet = true;
}

bool ModifyInstanceEncryptAttributesRequest::QuoteUinHasBeenSet() const
{
    return m_quoteUinHasBeenSet;
}

string ModifyInstanceEncryptAttributesRequest::GetKeyId() const
{
    return m_keyId;
}

void ModifyInstanceEncryptAttributesRequest::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool ModifyInstanceEncryptAttributesRequest::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string ModifyInstanceEncryptAttributesRequest::GetKeyRegion() const
{
    return m_keyRegion;
}

void ModifyInstanceEncryptAttributesRequest::SetKeyRegion(const string& _keyRegion)
{
    m_keyRegion = _keyRegion;
    m_keyRegionHasBeenSet = true;
}

bool ModifyInstanceEncryptAttributesRequest::KeyRegionHasBeenSet() const
{
    return m_keyRegionHasBeenSet;
}


