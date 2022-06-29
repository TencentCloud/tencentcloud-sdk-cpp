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

#include <tencentcloud/cpdp/v20190820/model/PayeeInfoResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

PayeeInfoResult::PayeeInfoResult() :
    m_payeeIdHasBeenSet(false),
    m_outUserIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idTypeHasBeenSet(false),
    m_idNoHasBeenSet(false),
    m_serviceProviderIdHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome PayeeInfoResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PayeeId") && !value["PayeeId"].IsNull())
    {
        if (!value["PayeeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.PayeeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_payeeId = string(value["PayeeId"].GetString());
        m_payeeIdHasBeenSet = true;
    }

    if (value.HasMember("OutUserId") && !value["OutUserId"].IsNull())
    {
        if (!value["OutUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.OutUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outUserId = string(value["OutUserId"].GetString());
        m_outUserIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdType") && !value["IdType"].IsNull())
    {
        if (!value["IdType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.IdType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idType = value["IdType"].GetInt64();
        m_idTypeHasBeenSet = true;
    }

    if (value.HasMember("IdNo") && !value["IdNo"].IsNull())
    {
        if (!value["IdNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.IdNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idNo = string(value["IdNo"].GetString());
        m_idNoHasBeenSet = true;
    }

    if (value.HasMember("ServiceProviderId") && !value["ServiceProviderId"].IsNull())
    {
        if (!value["ServiceProviderId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.ServiceProviderId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceProviderId = string(value["ServiceProviderId"].GetString());
        m_serviceProviderIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PayeeInfoResult.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PayeeInfoResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_payeeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayeeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_payeeId.c_str(), allocator).Move(), allocator);
    }

    if (m_outUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idType, allocator);
    }

    if (m_idNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idNo.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceProviderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceProviderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceProviderId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string PayeeInfoResult::GetPayeeId() const
{
    return m_payeeId;
}

void PayeeInfoResult::SetPayeeId(const string& _payeeId)
{
    m_payeeId = _payeeId;
    m_payeeIdHasBeenSet = true;
}

bool PayeeInfoResult::PayeeIdHasBeenSet() const
{
    return m_payeeIdHasBeenSet;
}

string PayeeInfoResult::GetOutUserId() const
{
    return m_outUserId;
}

void PayeeInfoResult::SetOutUserId(const string& _outUserId)
{
    m_outUserId = _outUserId;
    m_outUserIdHasBeenSet = true;
}

bool PayeeInfoResult::OutUserIdHasBeenSet() const
{
    return m_outUserIdHasBeenSet;
}

string PayeeInfoResult::GetName() const
{
    return m_name;
}

void PayeeInfoResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool PayeeInfoResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t PayeeInfoResult::GetIdType() const
{
    return m_idType;
}

void PayeeInfoResult::SetIdType(const int64_t& _idType)
{
    m_idType = _idType;
    m_idTypeHasBeenSet = true;
}

bool PayeeInfoResult::IdTypeHasBeenSet() const
{
    return m_idTypeHasBeenSet;
}

string PayeeInfoResult::GetIdNo() const
{
    return m_idNo;
}

void PayeeInfoResult::SetIdNo(const string& _idNo)
{
    m_idNo = _idNo;
    m_idNoHasBeenSet = true;
}

bool PayeeInfoResult::IdNoHasBeenSet() const
{
    return m_idNoHasBeenSet;
}

string PayeeInfoResult::GetServiceProviderId() const
{
    return m_serviceProviderId;
}

void PayeeInfoResult::SetServiceProviderId(const string& _serviceProviderId)
{
    m_serviceProviderId = _serviceProviderId;
    m_serviceProviderIdHasBeenSet = true;
}

bool PayeeInfoResult::ServiceProviderIdHasBeenSet() const
{
    return m_serviceProviderIdHasBeenSet;
}

string PayeeInfoResult::GetRemark() const
{
    return m_remark;
}

void PayeeInfoResult::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool PayeeInfoResult::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

