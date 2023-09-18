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

#include <tencentcloud/tse/v20201207/model/KongCertificatesPreview.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

KongCertificatesPreview::KongCertificatesPreview() :
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_bindDomainsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_crtHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_issueTimeHasBeenSet(false),
    m_certSourceHasBeenSet(false),
    m_certIdHasBeenSet(false)
{
}

CoreInternalOutcome KongCertificatesPreview::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("BindDomains") && !value["BindDomains"].IsNull())
    {
        if (!value["BindDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.BindDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["BindDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindDomains.push_back((*itr).GetString());
        }
        m_bindDomainsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Crt") && !value["Crt"].IsNull())
    {
        if (!value["Crt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.Crt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_crt = string(value["Crt"].GetString());
        m_crtHasBeenSet = true;
    }

    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("IssueTime") && !value["IssueTime"].IsNull())
    {
        if (!value["IssueTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.IssueTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_issueTime = string(value["IssueTime"].GetString());
        m_issueTimeHasBeenSet = true;
    }

    if (value.HasMember("CertSource") && !value["CertSource"].IsNull())
    {
        if (!value["CertSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.CertSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certSource = string(value["CertSource"].GetString());
        m_certSourceHasBeenSet = true;
    }

    if (value.HasMember("CertId") && !value["CertId"].IsNull())
    {
        if (!value["CertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KongCertificatesPreview.CertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_certId = string(value["CertId"].GetString());
        m_certIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KongCertificatesPreview::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindDomains.begin(); itr != m_bindDomains.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_crtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Crt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_crt.c_str(), allocator).Move(), allocator);
    }

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_issueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IssueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_issueTime.c_str(), allocator).Move(), allocator);
    }

    if (m_certSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certSource.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_certId.c_str(), allocator).Move(), allocator);
    }

}


string KongCertificatesPreview::GetName() const
{
    return m_name;
}

void KongCertificatesPreview::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KongCertificatesPreview::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string KongCertificatesPreview::GetId() const
{
    return m_id;
}

void KongCertificatesPreview::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool KongCertificatesPreview::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> KongCertificatesPreview::GetBindDomains() const
{
    return m_bindDomains;
}

void KongCertificatesPreview::SetBindDomains(const vector<string>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool KongCertificatesPreview::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

string KongCertificatesPreview::GetStatus() const
{
    return m_status;
}

void KongCertificatesPreview::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool KongCertificatesPreview::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string KongCertificatesPreview::GetCrt() const
{
    return m_crt;
}

void KongCertificatesPreview::SetCrt(const string& _crt)
{
    m_crt = _crt;
    m_crtHasBeenSet = true;
}

bool KongCertificatesPreview::CrtHasBeenSet() const
{
    return m_crtHasBeenSet;
}

string KongCertificatesPreview::GetKey() const
{
    return m_key;
}

void KongCertificatesPreview::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool KongCertificatesPreview::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string KongCertificatesPreview::GetExpireTime() const
{
    return m_expireTime;
}

void KongCertificatesPreview::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool KongCertificatesPreview::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string KongCertificatesPreview::GetCreateTime() const
{
    return m_createTime;
}

void KongCertificatesPreview::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool KongCertificatesPreview::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string KongCertificatesPreview::GetIssueTime() const
{
    return m_issueTime;
}

void KongCertificatesPreview::SetIssueTime(const string& _issueTime)
{
    m_issueTime = _issueTime;
    m_issueTimeHasBeenSet = true;
}

bool KongCertificatesPreview::IssueTimeHasBeenSet() const
{
    return m_issueTimeHasBeenSet;
}

string KongCertificatesPreview::GetCertSource() const
{
    return m_certSource;
}

void KongCertificatesPreview::SetCertSource(const string& _certSource)
{
    m_certSource = _certSource;
    m_certSourceHasBeenSet = true;
}

bool KongCertificatesPreview::CertSourceHasBeenSet() const
{
    return m_certSourceHasBeenSet;
}

string KongCertificatesPreview::GetCertId() const
{
    return m_certId;
}

void KongCertificatesPreview::SetCertId(const string& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool KongCertificatesPreview::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

