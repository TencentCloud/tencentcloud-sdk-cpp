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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankVerificationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankVerificationResult::QueryOpenBankVerificationResult() :
    m_channelVerificationIdHasBeenSet(false),
    m_thirdVerificationIdHasBeenSet(false),
    m_verificationAmountHasBeenSet(false),
    m_verificationStatusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_thirdVerificationReturnDataHasBeenSet(false)
{
}

CoreInternalOutcome QueryOpenBankVerificationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ChannelVerificationId") && !value["ChannelVerificationId"].IsNull())
    {
        if (!value["ChannelVerificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.ChannelVerificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelVerificationId = string(value["ChannelVerificationId"].GetString());
        m_channelVerificationIdHasBeenSet = true;
    }

    if (value.HasMember("ThirdVerificationId") && !value["ThirdVerificationId"].IsNull())
    {
        if (!value["ThirdVerificationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.ThirdVerificationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdVerificationId = string(value["ThirdVerificationId"].GetString());
        m_thirdVerificationIdHasBeenSet = true;
    }

    if (value.HasMember("VerificationAmount") && !value["VerificationAmount"].IsNull())
    {
        if (!value["VerificationAmount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.VerificationAmount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_verificationAmount = value["VerificationAmount"].GetInt64();
        m_verificationAmountHasBeenSet = true;
    }

    if (value.HasMember("VerificationStatus") && !value["VerificationStatus"].IsNull())
    {
        if (!value["VerificationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.VerificationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_verificationStatus = string(value["VerificationStatus"].GetString());
        m_verificationStatusHasBeenSet = true;
    }

    if (value.HasMember("FailReason") && !value["FailReason"].IsNull())
    {
        if (!value["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(value["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (value.HasMember("ThirdVerificationReturnData") && !value["ThirdVerificationReturnData"].IsNull())
    {
        if (!value["ThirdVerificationReturnData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryOpenBankVerificationResult.ThirdVerificationReturnData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thirdVerificationReturnData = string(value["ThirdVerificationReturnData"].GetString());
        m_thirdVerificationReturnDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryOpenBankVerificationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_verificationAmountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationAmount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verificationAmount, allocator);
    }

    if (m_verificationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerificationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_verificationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_thirdVerificationReturnDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdVerificationReturnData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thirdVerificationReturnData.c_str(), allocator).Move(), allocator);
    }

}


string QueryOpenBankVerificationResult::GetChannelVerificationId() const
{
    return m_channelVerificationId;
}

void QueryOpenBankVerificationResult::SetChannelVerificationId(const string& _channelVerificationId)
{
    m_channelVerificationId = _channelVerificationId;
    m_channelVerificationIdHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::ChannelVerificationIdHasBeenSet() const
{
    return m_channelVerificationIdHasBeenSet;
}

string QueryOpenBankVerificationResult::GetThirdVerificationId() const
{
    return m_thirdVerificationId;
}

void QueryOpenBankVerificationResult::SetThirdVerificationId(const string& _thirdVerificationId)
{
    m_thirdVerificationId = _thirdVerificationId;
    m_thirdVerificationIdHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::ThirdVerificationIdHasBeenSet() const
{
    return m_thirdVerificationIdHasBeenSet;
}

int64_t QueryOpenBankVerificationResult::GetVerificationAmount() const
{
    return m_verificationAmount;
}

void QueryOpenBankVerificationResult::SetVerificationAmount(const int64_t& _verificationAmount)
{
    m_verificationAmount = _verificationAmount;
    m_verificationAmountHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::VerificationAmountHasBeenSet() const
{
    return m_verificationAmountHasBeenSet;
}

string QueryOpenBankVerificationResult::GetVerificationStatus() const
{
    return m_verificationStatus;
}

void QueryOpenBankVerificationResult::SetVerificationStatus(const string& _verificationStatus)
{
    m_verificationStatus = _verificationStatus;
    m_verificationStatusHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::VerificationStatusHasBeenSet() const
{
    return m_verificationStatusHasBeenSet;
}

string QueryOpenBankVerificationResult::GetFailReason() const
{
    return m_failReason;
}

void QueryOpenBankVerificationResult::SetFailReason(const string& _failReason)
{
    m_failReason = _failReason;
    m_failReasonHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string QueryOpenBankVerificationResult::GetThirdVerificationReturnData() const
{
    return m_thirdVerificationReturnData;
}

void QueryOpenBankVerificationResult::SetThirdVerificationReturnData(const string& _thirdVerificationReturnData)
{
    m_thirdVerificationReturnData = _thirdVerificationReturnData;
    m_thirdVerificationReturnDataHasBeenSet = true;
}

bool QueryOpenBankVerificationResult::ThirdVerificationReturnDataHasBeenSet() const
{
    return m_thirdVerificationReturnDataHasBeenSet;
}

