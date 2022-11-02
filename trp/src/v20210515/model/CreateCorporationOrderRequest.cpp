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

#include <tencentcloud/trp/v20210515/model/CreateCorporationOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CreateCorporationOrderRequest::CreateCorporationOrderRequest() :
    m_corpNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_codeQuotaHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_amountHasBeenSet(false),
    m_corpIdHasBeenSet(false),
    m_contactPersonHasBeenSet(false),
    m_contactNumberHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateCorporationOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_corpNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_corpName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_codeQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_codeQuota, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_amountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Amount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_amount, allocator);
    }

    if (m_corpIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_corpId, allocator);
    }

    if (m_contactPersonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactPerson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactPerson.c_str(), allocator).Move(), allocator);
    }

    if (m_contactNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContactNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contactNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCorporationOrderRequest::GetCorpName() const
{
    return m_corpName;
}

void CreateCorporationOrderRequest::SetCorpName(const string& _corpName)
{
    m_corpName = _corpName;
    m_corpNameHasBeenSet = true;
}

bool CreateCorporationOrderRequest::CorpNameHasBeenSet() const
{
    return m_corpNameHasBeenSet;
}

string CreateCorporationOrderRequest::GetOwner() const
{
    return m_owner;
}

void CreateCorporationOrderRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateCorporationOrderRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

uint64_t CreateCorporationOrderRequest::GetCodeQuota() const
{
    return m_codeQuota;
}

void CreateCorporationOrderRequest::SetCodeQuota(const uint64_t& _codeQuota)
{
    m_codeQuota = _codeQuota;
    m_codeQuotaHasBeenSet = true;
}

bool CreateCorporationOrderRequest::CodeQuotaHasBeenSet() const
{
    return m_codeQuotaHasBeenSet;
}

string CreateCorporationOrderRequest::GetExpireTime() const
{
    return m_expireTime;
}

void CreateCorporationOrderRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool CreateCorporationOrderRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t CreateCorporationOrderRequest::GetAmount() const
{
    return m_amount;
}

void CreateCorporationOrderRequest::SetAmount(const int64_t& _amount)
{
    m_amount = _amount;
    m_amountHasBeenSet = true;
}

bool CreateCorporationOrderRequest::AmountHasBeenSet() const
{
    return m_amountHasBeenSet;
}

uint64_t CreateCorporationOrderRequest::GetCorpId() const
{
    return m_corpId;
}

void CreateCorporationOrderRequest::SetCorpId(const uint64_t& _corpId)
{
    m_corpId = _corpId;
    m_corpIdHasBeenSet = true;
}

bool CreateCorporationOrderRequest::CorpIdHasBeenSet() const
{
    return m_corpIdHasBeenSet;
}

string CreateCorporationOrderRequest::GetContactPerson() const
{
    return m_contactPerson;
}

void CreateCorporationOrderRequest::SetContactPerson(const string& _contactPerson)
{
    m_contactPerson = _contactPerson;
    m_contactPersonHasBeenSet = true;
}

bool CreateCorporationOrderRequest::ContactPersonHasBeenSet() const
{
    return m_contactPersonHasBeenSet;
}

string CreateCorporationOrderRequest::GetContactNumber() const
{
    return m_contactNumber;
}

void CreateCorporationOrderRequest::SetContactNumber(const string& _contactNumber)
{
    m_contactNumber = _contactNumber;
    m_contactNumberHasBeenSet = true;
}

bool CreateCorporationOrderRequest::ContactNumberHasBeenSet() const
{
    return m_contactNumberHasBeenSet;
}

string CreateCorporationOrderRequest::GetRemark() const
{
    return m_remark;
}

void CreateCorporationOrderRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateCorporationOrderRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


