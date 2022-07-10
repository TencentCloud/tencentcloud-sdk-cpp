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

#include <tencentcloud/cpdp/v20190820/model/FlexFundingAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

FlexFundingAccountInfo::FlexFundingAccountInfo() :
    m_fundingAccountNoHasBeenSet(false),
    m_fundingAccountTypeHasBeenSet(false),
    m_fundingAccountBindSerialNoHasBeenSet(false),
    m_fundingAccountNameHasBeenSet(false)
{
}

CoreInternalOutcome FlexFundingAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FundingAccountNo") && !value["FundingAccountNo"].IsNull())
    {
        if (!value["FundingAccountNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlexFundingAccountInfo.FundingAccountNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundingAccountNo = string(value["FundingAccountNo"].GetString());
        m_fundingAccountNoHasBeenSet = true;
    }

    if (value.HasMember("FundingAccountType") && !value["FundingAccountType"].IsNull())
    {
        if (!value["FundingAccountType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlexFundingAccountInfo.FundingAccountType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundingAccountType = string(value["FundingAccountType"].GetString());
        m_fundingAccountTypeHasBeenSet = true;
    }

    if (value.HasMember("FundingAccountBindSerialNo") && !value["FundingAccountBindSerialNo"].IsNull())
    {
        if (!value["FundingAccountBindSerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlexFundingAccountInfo.FundingAccountBindSerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundingAccountBindSerialNo = string(value["FundingAccountBindSerialNo"].GetString());
        m_fundingAccountBindSerialNoHasBeenSet = true;
    }

    if (value.HasMember("FundingAccountName") && !value["FundingAccountName"].IsNull())
    {
        if (!value["FundingAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlexFundingAccountInfo.FundingAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fundingAccountName = string(value["FundingAccountName"].GetString());
        m_fundingAccountNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlexFundingAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fundingAccountNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundingAccountNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundingAccountType.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountBindSerialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountBindSerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundingAccountBindSerialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_fundingAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FundingAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fundingAccountName.c_str(), allocator).Move(), allocator);
    }

}


string FlexFundingAccountInfo::GetFundingAccountNo() const
{
    return m_fundingAccountNo;
}

void FlexFundingAccountInfo::SetFundingAccountNo(const string& _fundingAccountNo)
{
    m_fundingAccountNo = _fundingAccountNo;
    m_fundingAccountNoHasBeenSet = true;
}

bool FlexFundingAccountInfo::FundingAccountNoHasBeenSet() const
{
    return m_fundingAccountNoHasBeenSet;
}

string FlexFundingAccountInfo::GetFundingAccountType() const
{
    return m_fundingAccountType;
}

void FlexFundingAccountInfo::SetFundingAccountType(const string& _fundingAccountType)
{
    m_fundingAccountType = _fundingAccountType;
    m_fundingAccountTypeHasBeenSet = true;
}

bool FlexFundingAccountInfo::FundingAccountTypeHasBeenSet() const
{
    return m_fundingAccountTypeHasBeenSet;
}

string FlexFundingAccountInfo::GetFundingAccountBindSerialNo() const
{
    return m_fundingAccountBindSerialNo;
}

void FlexFundingAccountInfo::SetFundingAccountBindSerialNo(const string& _fundingAccountBindSerialNo)
{
    m_fundingAccountBindSerialNo = _fundingAccountBindSerialNo;
    m_fundingAccountBindSerialNoHasBeenSet = true;
}

bool FlexFundingAccountInfo::FundingAccountBindSerialNoHasBeenSet() const
{
    return m_fundingAccountBindSerialNoHasBeenSet;
}

string FlexFundingAccountInfo::GetFundingAccountName() const
{
    return m_fundingAccountName;
}

void FlexFundingAccountInfo::SetFundingAccountName(const string& _fundingAccountName)
{
    m_fundingAccountName = _fundingAccountName;
    m_fundingAccountNameHasBeenSet = true;
}

bool FlexFundingAccountInfo::FundingAccountNameHasBeenSet() const
{
    return m_fundingAccountNameHasBeenSet;
}

