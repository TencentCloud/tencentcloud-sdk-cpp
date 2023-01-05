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

#include <tencentcloud/hasim/v20210716/model/TeleOperatorCard.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

TeleOperatorCard::TeleOperatorCard() :
    m_accountTimeHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_iCCIDHasBeenSet(false),
    m_linkIDHasBeenSet(false),
    m_msisdnHasBeenSet(false),
    m_iMSIHasBeenSet(false),
    m_teleOperatorHasBeenSet(false)
{
}

CoreInternalOutcome TeleOperatorCard::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountTime") && !value["AccountTime"].IsNull())
    {
        if (!value["AccountTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.AccountTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accountTime = string(value["AccountTime"].GetString());
        m_accountTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.ActiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = string(value["ActiveTime"].GetString());
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("ICCID") && !value["ICCID"].IsNull())
    {
        if (!value["ICCID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.ICCID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iCCID = string(value["ICCID"].GetString());
        m_iCCIDHasBeenSet = true;
    }

    if (value.HasMember("LinkID") && !value["LinkID"].IsNull())
    {
        if (!value["LinkID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.LinkID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linkID = value["LinkID"].GetInt64();
        m_linkIDHasBeenSet = true;
    }

    if (value.HasMember("Msisdn") && !value["Msisdn"].IsNull())
    {
        if (!value["Msisdn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.Msisdn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msisdn = string(value["Msisdn"].GetString());
        m_msisdnHasBeenSet = true;
    }

    if (value.HasMember("IMSI") && !value["IMSI"].IsNull())
    {
        if (!value["IMSI"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.IMSI` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iMSI = string(value["IMSI"].GetString());
        m_iMSIHasBeenSet = true;
    }

    if (value.HasMember("TeleOperator") && !value["TeleOperator"].IsNull())
    {
        if (!value["TeleOperator"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TeleOperatorCard.TeleOperator` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_teleOperator = value["TeleOperator"].GetInt64();
        m_teleOperatorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TeleOperatorCard::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accountTime.c_str(), allocator).Move(), allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_iCCIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ICCID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iCCID.c_str(), allocator).Move(), allocator);
    }

    if (m_linkIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinkID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linkID, allocator);
    }

    if (m_msisdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msisdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msisdn.c_str(), allocator).Move(), allocator);
    }

    if (m_iMSIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMSI";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iMSI.c_str(), allocator).Move(), allocator);
    }

    if (m_teleOperatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TeleOperator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_teleOperator, allocator);
    }

}


string TeleOperatorCard::GetAccountTime() const
{
    return m_accountTime;
}

void TeleOperatorCard::SetAccountTime(const string& _accountTime)
{
    m_accountTime = _accountTime;
    m_accountTimeHasBeenSet = true;
}

bool TeleOperatorCard::AccountTimeHasBeenSet() const
{
    return m_accountTimeHasBeenSet;
}

string TeleOperatorCard::GetActiveTime() const
{
    return m_activeTime;
}

void TeleOperatorCard::SetActiveTime(const string& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool TeleOperatorCard::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

string TeleOperatorCard::GetICCID() const
{
    return m_iCCID;
}

void TeleOperatorCard::SetICCID(const string& _iCCID)
{
    m_iCCID = _iCCID;
    m_iCCIDHasBeenSet = true;
}

bool TeleOperatorCard::ICCIDHasBeenSet() const
{
    return m_iCCIDHasBeenSet;
}

int64_t TeleOperatorCard::GetLinkID() const
{
    return m_linkID;
}

void TeleOperatorCard::SetLinkID(const int64_t& _linkID)
{
    m_linkID = _linkID;
    m_linkIDHasBeenSet = true;
}

bool TeleOperatorCard::LinkIDHasBeenSet() const
{
    return m_linkIDHasBeenSet;
}

string TeleOperatorCard::GetMsisdn() const
{
    return m_msisdn;
}

void TeleOperatorCard::SetMsisdn(const string& _msisdn)
{
    m_msisdn = _msisdn;
    m_msisdnHasBeenSet = true;
}

bool TeleOperatorCard::MsisdnHasBeenSet() const
{
    return m_msisdnHasBeenSet;
}

string TeleOperatorCard::GetIMSI() const
{
    return m_iMSI;
}

void TeleOperatorCard::SetIMSI(const string& _iMSI)
{
    m_iMSI = _iMSI;
    m_iMSIHasBeenSet = true;
}

bool TeleOperatorCard::IMSIHasBeenSet() const
{
    return m_iMSIHasBeenSet;
}

int64_t TeleOperatorCard::GetTeleOperator() const
{
    return m_teleOperator;
}

void TeleOperatorCard::SetTeleOperator(const int64_t& _teleOperator)
{
    m_teleOperator = _teleOperator;
    m_teleOperatorHasBeenSet = true;
}

bool TeleOperatorCard::TeleOperatorHasBeenSet() const
{
    return m_teleOperatorHasBeenSet;
}

