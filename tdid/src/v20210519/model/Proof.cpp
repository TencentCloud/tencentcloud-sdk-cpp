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

#include <tencentcloud/tdid/v20210519/model/Proof.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdid::V20210519::Model;
using namespace std;

Proof::Proof() :
    m_createdHasBeenSet(false),
    m_creatorHasBeenSet(false),
    m_saltJsonHasBeenSet(false),
    m_signatureValueHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome Proof::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Created") && !value["Created"].IsNull())
    {
        if (!value["Created"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Proof.Created` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_created = value["Created"].GetInt64();
        m_createdHasBeenSet = true;
    }

    if (value.HasMember("Creator") && !value["Creator"].IsNull())
    {
        if (!value["Creator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Proof.Creator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creator = string(value["Creator"].GetString());
        m_creatorHasBeenSet = true;
    }

    if (value.HasMember("SaltJson") && !value["SaltJson"].IsNull())
    {
        if (!value["SaltJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Proof.SaltJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_saltJson = string(value["SaltJson"].GetString());
        m_saltJsonHasBeenSet = true;
    }

    if (value.HasMember("SignatureValue") && !value["SignatureValue"].IsNull())
    {
        if (!value["SignatureValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Proof.SignatureValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signatureValue = string(value["SignatureValue"].GetString());
        m_signatureValueHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Proof.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Proof::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Created";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_created, allocator);
    }

    if (m_creatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Creator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creator.c_str(), allocator).Move(), allocator);
    }

    if (m_saltJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaltJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_saltJson.c_str(), allocator).Move(), allocator);
    }

    if (m_signatureValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignatureValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signatureValue.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

}


int64_t Proof::GetCreated() const
{
    return m_created;
}

void Proof::SetCreated(const int64_t& _created)
{
    m_created = _created;
    m_createdHasBeenSet = true;
}

bool Proof::CreatedHasBeenSet() const
{
    return m_createdHasBeenSet;
}

string Proof::GetCreator() const
{
    return m_creator;
}

void Proof::SetCreator(const string& _creator)
{
    m_creator = _creator;
    m_creatorHasBeenSet = true;
}

bool Proof::CreatorHasBeenSet() const
{
    return m_creatorHasBeenSet;
}

string Proof::GetSaltJson() const
{
    return m_saltJson;
}

void Proof::SetSaltJson(const string& _saltJson)
{
    m_saltJson = _saltJson;
    m_saltJsonHasBeenSet = true;
}

bool Proof::SaltJsonHasBeenSet() const
{
    return m_saltJsonHasBeenSet;
}

string Proof::GetSignatureValue() const
{
    return m_signatureValue;
}

void Proof::SetSignatureValue(const string& _signatureValue)
{
    m_signatureValue = _signatureValue;
    m_signatureValueHasBeenSet = true;
}

bool Proof::SignatureValueHasBeenSet() const
{
    return m_signatureValueHasBeenSet;
}

string Proof::GetType() const
{
    return m_type;
}

void Proof::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Proof::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

