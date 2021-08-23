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

#include <tencentcloud/gse/v20191112/model/RelatedCcnInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

RelatedCcnInfo::RelatedCcnInfo() :
    m_accountIdHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_attachTypeHasBeenSet(false)
{
}

CoreInternalOutcome RelatedCcnInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountId") && !value["AccountId"].IsNull())
    {
        if (!value["AccountId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedCcnInfo.AccountId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountId = string(value["AccountId"].GetString());
        m_accountIdHasBeenSet = true;
    }

    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedCcnInfo.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("AttachType") && !value["AttachType"].IsNull())
    {
        if (!value["AttachType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelatedCcnInfo.AttachType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachType = string(value["AttachType"].GetString());
        m_attachTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelatedCcnInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_attachTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attachType.c_str(), allocator).Move(), allocator);
    }

}


string RelatedCcnInfo::GetAccountId() const
{
    return m_accountId;
}

void RelatedCcnInfo::SetAccountId(const string& _accountId)
{
    m_accountId = _accountId;
    m_accountIdHasBeenSet = true;
}

bool RelatedCcnInfo::AccountIdHasBeenSet() const
{
    return m_accountIdHasBeenSet;
}

string RelatedCcnInfo::GetCcnId() const
{
    return m_ccnId;
}

void RelatedCcnInfo::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool RelatedCcnInfo::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string RelatedCcnInfo::GetAttachType() const
{
    return m_attachType;
}

void RelatedCcnInfo::SetAttachType(const string& _attachType)
{
    m_attachType = _attachType;
    m_attachTypeHasBeenSet = true;
}

bool RelatedCcnInfo::AttachTypeHasBeenSet() const
{
    return m_attachTypeHasBeenSet;
}

