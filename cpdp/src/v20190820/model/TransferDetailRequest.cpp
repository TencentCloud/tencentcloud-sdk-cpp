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

#include <tencentcloud/cpdp/v20190820/model/TransferDetailRequest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

TransferDetailRequest::TransferDetailRequest() :
    m_merchantDetailNoHasBeenSet(false),
    m_transferAmountHasBeenSet(false),
    m_transferRemarkHasBeenSet(false),
    m_openIdHasBeenSet(false),
    m_userNameHasBeenSet(false)
{
}

CoreInternalOutcome TransferDetailRequest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MerchantDetailNo") && !value["MerchantDetailNo"].IsNull())
    {
        if (!value["MerchantDetailNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailRequest.MerchantDetailNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_merchantDetailNo = string(value["MerchantDetailNo"].GetString());
        m_merchantDetailNoHasBeenSet = true;
    }

    if (value.HasMember("TransferAmount") && !value["TransferAmount"].IsNull())
    {
        if (!value["TransferAmount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailRequest.TransferAmount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_transferAmount = value["TransferAmount"].GetUint64();
        m_transferAmountHasBeenSet = true;
    }

    if (value.HasMember("TransferRemark") && !value["TransferRemark"].IsNull())
    {
        if (!value["TransferRemark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailRequest.TransferRemark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transferRemark = string(value["TransferRemark"].GetString());
        m_transferRemarkHasBeenSet = true;
    }

    if (value.HasMember("OpenId") && !value["OpenId"].IsNull())
    {
        if (!value["OpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailRequest.OpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_openId = string(value["OpenId"].GetString());
        m_openIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TransferDetailRequest.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TransferDetailRequest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_merchantDetailNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MerchantDetailNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_merchantDetailNo.c_str(), allocator).Move(), allocator);
    }

    if (m_transferAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferAmount, allocator);
    }

    if (m_transferRemarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferRemark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transferRemark.c_str(), allocator).Move(), allocator);
    }

    if (m_openIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_openId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

}


string TransferDetailRequest::GetMerchantDetailNo() const
{
    return m_merchantDetailNo;
}

void TransferDetailRequest::SetMerchantDetailNo(const string& _merchantDetailNo)
{
    m_merchantDetailNo = _merchantDetailNo;
    m_merchantDetailNoHasBeenSet = true;
}

bool TransferDetailRequest::MerchantDetailNoHasBeenSet() const
{
    return m_merchantDetailNoHasBeenSet;
}

uint64_t TransferDetailRequest::GetTransferAmount() const
{
    return m_transferAmount;
}

void TransferDetailRequest::SetTransferAmount(const uint64_t& _transferAmount)
{
    m_transferAmount = _transferAmount;
    m_transferAmountHasBeenSet = true;
}

bool TransferDetailRequest::TransferAmountHasBeenSet() const
{
    return m_transferAmountHasBeenSet;
}

string TransferDetailRequest::GetTransferRemark() const
{
    return m_transferRemark;
}

void TransferDetailRequest::SetTransferRemark(const string& _transferRemark)
{
    m_transferRemark = _transferRemark;
    m_transferRemarkHasBeenSet = true;
}

bool TransferDetailRequest::TransferRemarkHasBeenSet() const
{
    return m_transferRemarkHasBeenSet;
}

string TransferDetailRequest::GetOpenId() const
{
    return m_openId;
}

void TransferDetailRequest::SetOpenId(const string& _openId)
{
    m_openId = _openId;
    m_openIdHasBeenSet = true;
}

bool TransferDetailRequest::OpenIdHasBeenSet() const
{
    return m_openIdHasBeenSet;
}

string TransferDetailRequest::GetUserName() const
{
    return m_userName;
}

void TransferDetailRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool TransferDetailRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

