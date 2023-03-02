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

#include <tencentcloud/mrs/v20200910/model/IssueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

IssueInfo::IssueInfo() :
    m_certNumberHasBeenSet(false),
    m_issuedAuthorityHasBeenSet(false),
    m_issuedDateHasBeenSet(false)
{
}

CoreInternalOutcome IssueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertNumber") && !value["CertNumber"].IsNull())
    {
        if (!value["CertNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueInfo.CertNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certNumber = string(value["CertNumber"].GetString());
        m_certNumberHasBeenSet = true;
    }

    if (value.HasMember("IssuedAuthority") && !value["IssuedAuthority"].IsNull())
    {
        if (!value["IssuedAuthority"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueInfo.IssuedAuthority` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedAuthority = string(value["IssuedAuthority"].GetString());
        m_issuedAuthorityHasBeenSet = true;
    }

    if (value.HasMember("IssuedDate") && !value["IssuedDate"].IsNull())
    {
        if (!value["IssuedDate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IssueInfo.IssuedDate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issuedDate = string(value["IssuedDate"].GetString());
        m_issuedDateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IssueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedAuthorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedAuthority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedAuthority.c_str(), allocator).Move(), allocator);
    }

    if (m_issuedDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssuedDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issuedDate.c_str(), allocator).Move(), allocator);
    }

}


string IssueInfo::GetCertNumber() const
{
    return m_certNumber;
}

void IssueInfo::SetCertNumber(const string& _certNumber)
{
    m_certNumber = _certNumber;
    m_certNumberHasBeenSet = true;
}

bool IssueInfo::CertNumberHasBeenSet() const
{
    return m_certNumberHasBeenSet;
}

string IssueInfo::GetIssuedAuthority() const
{
    return m_issuedAuthority;
}

void IssueInfo::SetIssuedAuthority(const string& _issuedAuthority)
{
    m_issuedAuthority = _issuedAuthority;
    m_issuedAuthorityHasBeenSet = true;
}

bool IssueInfo::IssuedAuthorityHasBeenSet() const
{
    return m_issuedAuthorityHasBeenSet;
}

string IssueInfo::GetIssuedDate() const
{
    return m_issuedDate;
}

void IssueInfo::SetIssuedDate(const string& _issuedDate)
{
    m_issuedDate = _issuedDate;
    m_issuedDateHasBeenSet = true;
}

bool IssueInfo::IssuedDateHasBeenSet() const
{
    return m_issuedDateHasBeenSet;
}

