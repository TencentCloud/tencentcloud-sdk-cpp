/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/LicenseBindScheduleItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

LicenseBindScheduleItem::LicenseBindScheduleItem() :
    m_quuidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errMsgHasBeenSet(false),
    m_fixMessageHasBeenSet(false)
{
}

CoreInternalOutcome LicenseBindScheduleItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Quuid") && !value["Quuid"].IsNull())
    {
        if (!value["Quuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindScheduleItem.Quuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quuid = string(value["Quuid"].GetString());
        m_quuidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindScheduleItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrMsg") && !value["ErrMsg"].IsNull())
    {
        if (!value["ErrMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindScheduleItem.ErrMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errMsg = string(value["ErrMsg"].GetString());
        m_errMsgHasBeenSet = true;
    }

    if (value.HasMember("FixMessage") && !value["FixMessage"].IsNull())
    {
        if (!value["FixMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LicenseBindScheduleItem.FixMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMessage = string(value["FixMessage"].GetString());
        m_fixMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LicenseBindScheduleItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_quuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Quuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quuid.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_errMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_fixMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMessage.c_str(), allocator).Move(), allocator);
    }

}


string LicenseBindScheduleItem::GetQuuid() const
{
    return m_quuid;
}

void LicenseBindScheduleItem::SetQuuid(const string& _quuid)
{
    m_quuid = _quuid;
    m_quuidHasBeenSet = true;
}

bool LicenseBindScheduleItem::QuuidHasBeenSet() const
{
    return m_quuidHasBeenSet;
}

int64_t LicenseBindScheduleItem::GetStatus() const
{
    return m_status;
}

void LicenseBindScheduleItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LicenseBindScheduleItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LicenseBindScheduleItem::GetErrMsg() const
{
    return m_errMsg;
}

void LicenseBindScheduleItem::SetErrMsg(const string& _errMsg)
{
    m_errMsg = _errMsg;
    m_errMsgHasBeenSet = true;
}

bool LicenseBindScheduleItem::ErrMsgHasBeenSet() const
{
    return m_errMsgHasBeenSet;
}

string LicenseBindScheduleItem::GetFixMessage() const
{
    return m_fixMessage;
}

void LicenseBindScheduleItem::SetFixMessage(const string& _fixMessage)
{
    m_fixMessage = _fixMessage;
    m_fixMessageHasBeenSet = true;
}

bool LicenseBindScheduleItem::FixMessageHasBeenSet() const
{
    return m_fixMessageHasBeenSet;
}

