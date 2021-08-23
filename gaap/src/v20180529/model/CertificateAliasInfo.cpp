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

#include <tencentcloud/gaap/v20180529/model/CertificateAliasInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CertificateAliasInfo::CertificateAliasInfo() :
    m_certificateIdHasBeenSet(false),
    m_certificateAliasHasBeenSet(false)
{
}

CoreInternalOutcome CertificateAliasInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertificateId") && !value["CertificateId"].IsNull())
    {
        if (!value["CertificateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateAliasInfo.CertificateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateId = string(value["CertificateId"].GetString());
        m_certificateIdHasBeenSet = true;
    }

    if (value.HasMember("CertificateAlias") && !value["CertificateAlias"].IsNull())
    {
        if (!value["CertificateAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertificateAliasInfo.CertificateAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certificateAlias = string(value["CertificateAlias"].GetString());
        m_certificateAliasHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertificateAliasInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certificateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateId.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certificateAlias.c_str(), allocator).Move(), allocator);
    }

}


string CertificateAliasInfo::GetCertificateId() const
{
    return m_certificateId;
}

void CertificateAliasInfo::SetCertificateId(const string& _certificateId)
{
    m_certificateId = _certificateId;
    m_certificateIdHasBeenSet = true;
}

bool CertificateAliasInfo::CertificateIdHasBeenSet() const
{
    return m_certificateIdHasBeenSet;
}

string CertificateAliasInfo::GetCertificateAlias() const
{
    return m_certificateAlias;
}

void CertificateAliasInfo::SetCertificateAlias(const string& _certificateAlias)
{
    m_certificateAlias = _certificateAlias;
    m_certificateAliasHasBeenSet = true;
}

bool CertificateAliasInfo::CertificateAliasHasBeenSet() const
{
    return m_certificateAliasHasBeenSet;
}

