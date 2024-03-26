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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

GetFaceIdTokenRequest::GetFaceIdTokenRequest() :
    m_compareLibHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_imageBase64HasBeenSet(false),
    m_metaHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_useCosHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string GetFaceIdTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_compareLibHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompareLib";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_compareLib.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

    if (m_metaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Meta";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meta.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_useCosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseCos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_useCos, allocator);
    }

    if (m_encryptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encryption";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_encryption.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFaceIdTokenRequest::GetCompareLib() const
{
    return m_compareLib;
}

void GetFaceIdTokenRequest::SetCompareLib(const string& _compareLib)
{
    m_compareLib = _compareLib;
    m_compareLibHasBeenSet = true;
}

bool GetFaceIdTokenRequest::CompareLibHasBeenSet() const
{
    return m_compareLibHasBeenSet;
}

string GetFaceIdTokenRequest::GetIdCard() const
{
    return m_idCard;
}

void GetFaceIdTokenRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool GetFaceIdTokenRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string GetFaceIdTokenRequest::GetName() const
{
    return m_name;
}

void GetFaceIdTokenRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool GetFaceIdTokenRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string GetFaceIdTokenRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void GetFaceIdTokenRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool GetFaceIdTokenRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

string GetFaceIdTokenRequest::GetMeta() const
{
    return m_meta;
}

void GetFaceIdTokenRequest::SetMeta(const string& _meta)
{
    m_meta = _meta;
    m_metaHasBeenSet = true;
}

bool GetFaceIdTokenRequest::MetaHasBeenSet() const
{
    return m_metaHasBeenSet;
}

string GetFaceIdTokenRequest::GetExtra() const
{
    return m_extra;
}

void GetFaceIdTokenRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool GetFaceIdTokenRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

bool GetFaceIdTokenRequest::GetUseCos() const
{
    return m_useCos;
}

void GetFaceIdTokenRequest::SetUseCos(const bool& _useCos)
{
    m_useCos = _useCos;
    m_useCosHasBeenSet = true;
}

bool GetFaceIdTokenRequest::UseCosHasBeenSet() const
{
    return m_useCosHasBeenSet;
}

Encryption GetFaceIdTokenRequest::GetEncryption() const
{
    return m_encryption;
}

void GetFaceIdTokenRequest::SetEncryption(const Encryption& _encryption)
{
    m_encryption = _encryption;
    m_encryptionHasBeenSet = true;
}

bool GetFaceIdTokenRequest::EncryptionHasBeenSet() const
{
    return m_encryptionHasBeenSet;
}

string GetFaceIdTokenRequest::GetRuleId() const
{
    return m_ruleId;
}

void GetFaceIdTokenRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool GetFaceIdTokenRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


