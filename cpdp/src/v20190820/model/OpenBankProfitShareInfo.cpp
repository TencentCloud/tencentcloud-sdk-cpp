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

#include <tencentcloud/cpdp/v20190820/model/OpenBankProfitShareInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OpenBankProfitShareInfo::OpenBankProfitShareInfo() :
    m_recvIdHasBeenSet(false),
    m_profitShareFeeHasBeenSet(false)
{
}

CoreInternalOutcome OpenBankProfitShareInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecvId") && !value["RecvId"].IsNull())
    {
        if (!value["RecvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareInfo.RecvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recvId = string(value["RecvId"].GetString());
        m_recvIdHasBeenSet = true;
    }

    if (value.HasMember("ProfitShareFee") && !value["ProfitShareFee"].IsNull())
    {
        if (!value["ProfitShareFee"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OpenBankProfitShareInfo.ProfitShareFee` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_profitShareFee = value["ProfitShareFee"].GetInt64();
        m_profitShareFeeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OpenBankProfitShareInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string OpenBankProfitShareInfo::GetRecvId() const
{
    return m_recvId;
}

void OpenBankProfitShareInfo::SetRecvId(const string& _recvId)
{
    m_recvId = _recvId;
    m_recvIdHasBeenSet = true;
}

bool OpenBankProfitShareInfo::RecvIdHasBeenSet() const
{
    return m_recvIdHasBeenSet;
}

int64_t OpenBankProfitShareInfo::GetProfitShareFee() const
{
    return m_profitShareFee;
}

void OpenBankProfitShareInfo::SetProfitShareFee(const int64_t& _profitShareFee)
{
    m_profitShareFee = _profitShareFee;
    m_profitShareFeeHasBeenSet = true;
}

bool OpenBankProfitShareInfo::ProfitShareFeeHasBeenSet() const
{
    return m_profitShareFeeHasBeenSet;
}

