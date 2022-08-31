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

#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareRespInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankProfitShareRespInfo::OpenBankProfitShareRespInfo() :
    m_recvIdHasBeenSet(false),
    m_profitShareFeeHasBeenSet(false),
    m_realProfitShareFeeHasBeenSet(false),
    m_profitShareStatusHasBeenSet(false),
    m_profitFinishTimeHasBeenSet(false),
    m_profitShareTypeHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankProfitShareRespInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecvId") && !value["RecvId"].IsNull())
    {
        if (!value["RecvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.RecvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvId = string(value["RecvId"].GetString());
        m_recvIdHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareFee") && !value["ProfitShareFee"].IsNull())
    {
        if (!value["ProfitShareFee"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.ProfitShareFee` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_profitShareFee = value["ProfitShareFee"].GetInt64();
        m_profitShareFeeHasBeenSet = true;
    }

    if (value.HasMember("RealProfitShareFee") && !value["RealProfitShareFee"].IsNull())
    {
        if (!value["RealProfitShareFee"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.RealProfitShareFee` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_realProfitShareFee = value["RealProfitShareFee"].GetInt64();
        m_realProfitShareFeeHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareStatus") && !value["ProfitShareStatus"].IsNull())
    {
        if (!value["ProfitShareStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.ProfitShareStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profitShareStatus = string(value["ProfitShareStatus"].GetString());
        m_profitShareStatusHasBeenSet = true;
    }

    if (value.HasMember("ProfitFinishTime") && !value["ProfitFinishTime"].IsNull())
    {
        if (!value["ProfitFinishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.ProfitFinishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_profitFinishTime = string(value["ProfitFinishTime"].GetString());
        m_profitFinishTimeHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareType") && !value["ProfitShareType"].IsNull())
    {
        if (!value["ProfitShareType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareRespInfo.ProfitShareType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_profitShareType = value["ProfitShareType"].GetInt64();
        m_profitShareTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankProfitShareRespInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recvIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recvId.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_profitShareFee, allocator);
    }

    if (m_realProfitShareFeeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealProfitShareFee";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_realProfitShareFee, allocator);
    }

    if (m_profitShareStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profitShareStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_profitFinishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitFinishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_profitFinishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_profitShareTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfitShareType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_profitShareType, allocator);
    }

}


string OpenBankProfitShareRespInfo::GetRecvId() const
{
    return m_recvId;
}

void OpenBankProfitShareRespInfo::SetRecvId(const string& _recvId)
{
    m_recvId = _recvId;
    m_recvIdHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::RecvIdHasBeenSet() const
{
    return m_recvIdHasBeenSet;
}

int64_t OpenBankProfitShareRespInfo::GetProfitShareFee() const
{
    return m_profitShareFee;
}

void OpenBankProfitShareRespInfo::SetProfitShareFee(const int64_t& _profitShareFee)
{
    m_profitShareFee = _profitShareFee;
    m_profitShareFeeHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::ProfitShareFeeHasBeenSet() const
{
    return m_profitShareFeeHasBeenSet;
}

int64_t OpenBankProfitShareRespInfo::GetRealProfitShareFee() const
{
    return m_realProfitShareFee;
}

void OpenBankProfitShareRespInfo::SetRealProfitShareFee(const int64_t& _realProfitShareFee)
{
    m_realProfitShareFee = _realProfitShareFee;
    m_realProfitShareFeeHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::RealProfitShareFeeHasBeenSet() const
{
    return m_realProfitShareFeeHasBeenSet;
}

string OpenBankProfitShareRespInfo::GetProfitShareStatus() const
{
    return m_profitShareStatus;
}

void OpenBankProfitShareRespInfo::SetProfitShareStatus(const string& _profitShareStatus)
{
    m_profitShareStatus = _profitShareStatus;
    m_profitShareStatusHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::ProfitShareStatusHasBeenSet() const
{
    return m_profitShareStatusHasBeenSet;
}

string OpenBankProfitShareRespInfo::GetProfitFinishTime() const
{
    return m_profitFinishTime;
}

void OpenBankProfitShareRespInfo::SetProfitFinishTime(const string& _profitFinishTime)
{
    m_profitFinishTime = _profitFinishTime;
    m_profitFinishTimeHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::ProfitFinishTimeHasBeenSet() const
{
    return m_profitFinishTimeHasBeenSet;
}

int64_t OpenBankProfitShareRespInfo::GetProfitShareType() const
{
    return m_profitShareType;
}

void OpenBankProfitShareRespInfo::SetProfitShareType(const int64_t& _profitShareType)
{
    m_profitShareType = _profitShareType;
    m_profitShareTypeHasBeenSet = true;
}

bool OpenBankProfitShareRespInfo::ProfitShareTypeHasBeenSet() const
{
    return m_profitShareTypeHasBeenSet;
}

