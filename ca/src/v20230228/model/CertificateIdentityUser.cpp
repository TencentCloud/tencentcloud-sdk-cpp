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

#include <tencentcloud/ca/v20230228/model/CertificateIdentityUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ca::V20230228::Model;
using namespace std;

CertificateIdentityUser::CertificateIdentityUser() :
    m_nameHasBeenSet(false),
    m_identityUniqueIdHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_identificationTypeHasBeenSet(false),
    m_identificationMeasuresHasBeenSet(false)
{
}

CoreInternalOutcome CertificateIdentityUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateIdentityUser.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdentityUniqueId") && !value["IdentityUniqueId"].IsNull())
    {
        if (!value["IdentityUniqueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateIdentityUser.IdentityUniqueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityUniqueId = string(value["IdentityUniqueId"].GetString());
        m_identityUniqueIdHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateIdentityUser.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("IdentificationType") && !value["IdentificationType"].IsNull())
    {
        if (!value["IdentificationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateIdentityUser.IdentificationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identificationType = string(value["IdentificationType"].GetString());
        m_identificationTypeHasBeenSet = true;
    }

    if (value.HasMember("IdentificationMeasures") && !value["IdentificationMeasures"].IsNull())
    {
        if (!value["IdentificationMeasures"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CertificateIdentityUser.IdentificationMeasures` is not array type"));

        const rapidjson::Value &tmpValue = value["IdentificationMeasures"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_identificationMeasures.push_back((*itr).GetString());
        }
        m_identificationMeasuresHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateIdentityUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_identityUniqueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityUniqueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityUniqueId.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_identificationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identificationType.c_str(), allocator).Move(), allocator);
    }

    if (m_identificationMeasuresHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentificationMeasures";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_identificationMeasures.begin(); itr != m_identificationMeasures.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CertificateIdentityUser::GetName() const
{
    return m_name;
}

void CertificateIdentityUser::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CertificateIdentityUser::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CertificateIdentityUser::GetIdentityUniqueId() const
{
    return m_identityUniqueId;
}

void CertificateIdentityUser::SetIdentityUniqueId(const string& _identityUniqueId)
{
    m_identityUniqueId = _identityUniqueId;
    m_identityUniqueIdHasBeenSet = true;
}

bool CertificateIdentityUser::IdentityUniqueIdHasBeenSet() const
{
    return m_identityUniqueIdHasBeenSet;
}

string CertificateIdentityUser::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CertificateIdentityUser::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CertificateIdentityUser::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CertificateIdentityUser::GetIdentificationType() const
{
    return m_identificationType;
}

void CertificateIdentityUser::SetIdentificationType(const string& _identificationType)
{
    m_identificationType = _identificationType;
    m_identificationTypeHasBeenSet = true;
}

bool CertificateIdentityUser::IdentificationTypeHasBeenSet() const
{
    return m_identificationTypeHasBeenSet;
}

vector<string> CertificateIdentityUser::GetIdentificationMeasures() const
{
    return m_identificationMeasures;
}

void CertificateIdentityUser::SetIdentificationMeasures(const vector<string>& _identificationMeasures)
{
    m_identificationMeasures = _identificationMeasures;
    m_identificationMeasuresHasBeenSet = true;
}

bool CertificateIdentityUser::IdentificationMeasuresHasBeenSet() const
{
    return m_identificationMeasuresHasBeenSet;
}

