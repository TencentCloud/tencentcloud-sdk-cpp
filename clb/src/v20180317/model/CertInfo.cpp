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

#include <tencentcloud/clb/v20180317/model/CertInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

CertInfo::CertInfo() :
    m_certIdHasBeenSet(false),
    m_certNameHasBeenSet(false),
    m_certContentHasBeenSet(false),
    m_certKeyHasBeenSet(false)
{
}

CoreInternalOutcome CertInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }

    if (value.HasMember("CertName") && !value["CertName"].IsNull())
    {
        if (!value["CertName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certName = string(value["CertName"].GetString());
        m_certNameHasBeenSet = true;
    }

    if (value.HasMember("CertContent") && !value["CertContent"].IsNull())
    {
        if (!value["CertContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certContent = string(value["CertContent"].GetString());
        m_certContentHasBeenSet = true;
    }

    if (value.HasMember("CertKey") && !value["CertKey"].IsNull())
    {
        if (!value["CertKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CertInfo.CertKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certKey = string(value["CertKey"].GetString());
        m_certKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CertInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

    if (m_certNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certName.c_str(), allocator).Move(), allocator);
    }

    if (m_certContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certContent.c_str(), allocator).Move(), allocator);
    }

    if (m_certKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certKey.c_str(), allocator).Move(), allocator);
    }

}


string CertInfo::GetCertId() const
{
    return m_certId;
}

void CertInfo::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool CertInfo::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

string CertInfo::GetCertName() const
{
    return m_certName;
}

void CertInfo::SetCertName(const string& _certName)
{
    m_certName = _certName;
    m_certNameHasBeenSet = true;
}

bool CertInfo::CertNameHasBeenSet() const
{
    return m_certNameHasBeenSet;
}

string CertInfo::GetCertContent() const
{
    return m_certContent;
}

void CertInfo::SetCertContent(const string& _certContent)
{
    m_certContent = _certContent;
    m_certContentHasBeenSet = true;
}

bool CertInfo::CertContentHasBeenSet() const
{
    return m_certContentHasBeenSet;
}

string CertInfo::GetCertKey() const
{
    return m_certKey;
}

void CertInfo::SetCertKey(const string& _certKey)
{
    m_certKey = _certKey;
    m_certKeyHasBeenSet = true;
}

bool CertInfo::CertKeyHasBeenSet() const
{
    return m_certKeyHasBeenSet;
}

