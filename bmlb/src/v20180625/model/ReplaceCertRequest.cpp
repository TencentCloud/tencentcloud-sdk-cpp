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

#include <tencentcloud/bmlb/v20180625/model/ReplaceCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

ReplaceCertRequest::ReplaceCertRequest() :
    m_oldCertIdHasBeenSet(false),
    m_newCertHasBeenSet(false),
    m_newAliasHasBeenSet(false),
    m_newKeyHasBeenSet(false),
    m_deleteOldHasBeenSet(false)
{
}

string ReplaceCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_oldCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_oldCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_newCertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewCert";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newCert.c_str(), allocator).Move(), allocator);
    }

    if (m_newAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_newKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newKey.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteOldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteOld";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteOld, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ReplaceCertRequest::GetOldCertId() const
{
    return m_oldCertId;
}

void ReplaceCertRequest::SetOldCertId(const string& _oldCertId)
{
    m_oldCertId = _oldCertId;
    m_oldCertIdHasBeenSet = true;
}

bool ReplaceCertRequest::OldCertIdHasBeenSet() const
{
    return m_oldCertIdHasBeenSet;
}

string ReplaceCertRequest::GetNewCert() const
{
    return m_newCert;
}

void ReplaceCertRequest::SetNewCert(const string& _newCert)
{
    m_newCert = _newCert;
    m_newCertHasBeenSet = true;
}

bool ReplaceCertRequest::NewCertHasBeenSet() const
{
    return m_newCertHasBeenSet;
}

string ReplaceCertRequest::GetNewAlias() const
{
    return m_newAlias;
}

void ReplaceCertRequest::SetNewAlias(const string& _newAlias)
{
    m_newAlias = _newAlias;
    m_newAliasHasBeenSet = true;
}

bool ReplaceCertRequest::NewAliasHasBeenSet() const
{
    return m_newAliasHasBeenSet;
}

string ReplaceCertRequest::GetNewKey() const
{
    return m_newKey;
}

void ReplaceCertRequest::SetNewKey(const string& _newKey)
{
    m_newKey = _newKey;
    m_newKeyHasBeenSet = true;
}

bool ReplaceCertRequest::NewKeyHasBeenSet() const
{
    return m_newKeyHasBeenSet;
}

uint64_t ReplaceCertRequest::GetDeleteOld() const
{
    return m_deleteOld;
}

void ReplaceCertRequest::SetDeleteOld(const uint64_t& _deleteOld)
{
    m_deleteOld = _deleteOld;
    m_deleteOldHasBeenSet = true;
}

bool ReplaceCertRequest::DeleteOldHasBeenSet() const
{
    return m_deleteOldHasBeenSet;
}


