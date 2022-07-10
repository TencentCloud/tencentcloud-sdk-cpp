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

#include <tencentcloud/cpdp/v20190820/model/CreateOpenBankVerificationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateOpenBankVerificationResult::CreateOpenBankVerificationResult() :
    m_channelVerificationIdHasBeenSet(false),
    m_thirdVerificationIdHasBeenSet(false),
    m_verificationStatusHasBeenSet(false),
    m_verificationAmountHasBeenSet(false),
    m_thirdVerificationReturnInfoHasBeenSet(false)
{
}

CoreInternalOutcome CreateOpenBankVerificationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelVerificationId") && !value["ChannelVerificationId"].IsNull())
    {
        if (!value["ChannelVerificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankVerificationResult.ChannelVerificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelVerificationId = string(value["ChannelVerificationId"].GetString());
        m_channelVerificationIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdVerificationId") && !value["ThirdVerificationId"].IsNull())
    {
        if (!value["ThirdVerificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankVerificationResult.ThirdVerificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdVerificationId = string(value["ThirdVerificationId"].GetString());
        m_thirdVerificationIdHasBeenSet = true;
    }

    if (value.HasMember("VerificationStatus") && !value["VerificationStatus"].IsNull())
    {
        if (!value["VerificationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankVerificationResult.VerificationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationStatus = string(value["VerificationStatus"].GetString());
        m_verificationStatusHasBeenSet = true;
    }

    if (value.HasMember("VerificationAmount") && !value["VerificationAmount"].IsNull())
    {
        if (!value["VerificationAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankVerificationResult.VerificationAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verificationAmount = value["VerificationAmount"].GetInt64();
        m_verificationAmountHasBeenSet = true;
    }

    if (value.HasMember("ThirdVerificationReturnInfo") && !value["ThirdVerificationReturnInfo"].IsNull())
    {
        if (!value["ThirdVerificationReturnInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateOpenBankVerificationResult.ThirdVerificationReturnInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdVerificationReturnInfo = string(value["ThirdVerificationReturnInfo"].GetString());
        m_thirdVerificationReturnInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateOpenBankVerificationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_channelVerificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelVerificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelVerificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdVerificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdVerificationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdVerificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_verificationAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verificationAmount, allocator);
    }

    if (m_thirdVerificationReturnInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdVerificationReturnInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdVerificationReturnInfo.c_str(), allocator).Move(), allocator);
    }

}


string CreateOpenBankVerificationResult::GetChannelVerificationId() const
{
    return m_channelVerificationId;
}

void CreateOpenBankVerificationResult::SetChannelVerificationId(const string& _channelVerificationId)
{
    m_channelVerificationId = _channelVerificationId;
    m_channelVerificationIdHasBeenSet = true;
}

bool CreateOpenBankVerificationResult::ChannelVerificationIdHasBeenSet() const
{
    return m_channelVerificationIdHasBeenSet;
}

string CreateOpenBankVerificationResult::GetThirdVerificationId() const
{
    return m_thirdVerificationId;
}

void CreateOpenBankVerificationResult::SetThirdVerificationId(const string& _thirdVerificationId)
{
    m_thirdVerificationId = _thirdVerificationId;
    m_thirdVerificationIdHasBeenSet = true;
}

bool CreateOpenBankVerificationResult::ThirdVerificationIdHasBeenSet() const
{
    return m_thirdVerificationIdHasBeenSet;
}

string CreateOpenBankVerificationResult::GetVerificationStatus() const
{
    return m_verificationStatus;
}

void CreateOpenBankVerificationResult::SetVerificationStatus(const string& _verificationStatus)
{
    m_verificationStatus = _verificationStatus;
    m_verificationStatusHasBeenSet = true;
}

bool CreateOpenBankVerificationResult::VerificationStatusHasBeenSet() const
{
    return m_verificationStatusHasBeenSet;
}

int64_t CreateOpenBankVerificationResult::GetVerificationAmount() const
{
    return m_verificationAmount;
}

void CreateOpenBankVerificationResult::SetVerificationAmount(const int64_t& _verificationAmount)
{
    m_verificationAmount = _verificationAmount;
    m_verificationAmountHasBeenSet = true;
}

bool CreateOpenBankVerificationResult::VerificationAmountHasBeenSet() const
{
    return m_verificationAmountHasBeenSet;
}

string CreateOpenBankVerificationResult::GetThirdVerificationReturnInfo() const
{
    return m_thirdVerificationReturnInfo;
}

void CreateOpenBankVerificationResult::SetThirdVerificationReturnInfo(const string& _thirdVerificationReturnInfo)
{
    m_thirdVerificationReturnInfo = _thirdVerificationReturnInfo;
    m_thirdVerificationReturnInfoHasBeenSet = true;
}

bool CreateOpenBankVerificationResult::ThirdVerificationReturnInfoHasBeenSet() const
{
    return m_thirdVerificationReturnInfoHasBeenSet;
}

