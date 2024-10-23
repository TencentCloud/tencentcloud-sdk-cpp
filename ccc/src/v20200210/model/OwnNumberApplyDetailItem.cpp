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

#include <tencentcloud/ccc/v20200210/model/OwnNumberApplyDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

OwnNumberApplyDetailItem::OwnNumberApplyDetailItem() :
    m_callTypeHasBeenSet(false),
    m_phoneNumberHasBeenSet(false),
    m_maxCallCountHasBeenSet(false),
    m_maxCallPSecHasBeenSet(false),
    m_outboundCalleeFormatHasBeenSet(false)
{
}

CoreInternalOutcome OwnNumberApplyDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwnNumberApplyDetailItem.CallType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callType = value["CallType"].GetInt64();
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("PhoneNumber") && !value["PhoneNumber"].IsNull())
    {
        if (!value["PhoneNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnNumberApplyDetailItem.PhoneNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNumber = string(value["PhoneNumber"].GetString());
        m_phoneNumberHasBeenSet = true;
    }

    if (value.HasMember("MaxCallCount") && !value["MaxCallCount"].IsNull())
    {
        if (!value["MaxCallCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwnNumberApplyDetailItem.MaxCallCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCallCount = value["MaxCallCount"].GetInt64();
        m_maxCallCountHasBeenSet = true;
    }

    if (value.HasMember("MaxCallPSec") && !value["MaxCallPSec"].IsNull())
    {
        if (!value["MaxCallPSec"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OwnNumberApplyDetailItem.MaxCallPSec` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCallPSec = value["MaxCallPSec"].GetInt64();
        m_maxCallPSecHasBeenSet = true;
    }

    if (value.HasMember("OutboundCalleeFormat") && !value["OutboundCalleeFormat"].IsNull())
    {
        if (!value["OutboundCalleeFormat"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OwnNumberApplyDetailItem.OutboundCalleeFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outboundCalleeFormat = string(value["OutboundCalleeFormat"].GetString());
        m_outboundCalleeFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OwnNumberApplyDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callType, allocator);
    }

    if (m_phoneNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_maxCallCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCallCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCallCount, allocator);
    }

    if (m_maxCallPSecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCallPSec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCallPSec, allocator);
    }

    if (m_outboundCalleeFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutboundCalleeFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outboundCalleeFormat.c_str(), allocator).Move(), allocator);
    }

}


int64_t OwnNumberApplyDetailItem::GetCallType() const
{
    return m_callType;
}

void OwnNumberApplyDetailItem::SetCallType(const int64_t& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool OwnNumberApplyDetailItem::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

string OwnNumberApplyDetailItem::GetPhoneNumber() const
{
    return m_phoneNumber;
}

void OwnNumberApplyDetailItem::SetPhoneNumber(const string& _phoneNumber)
{
    m_phoneNumber = _phoneNumber;
    m_phoneNumberHasBeenSet = true;
}

bool OwnNumberApplyDetailItem::PhoneNumberHasBeenSet() const
{
    return m_phoneNumberHasBeenSet;
}

int64_t OwnNumberApplyDetailItem::GetMaxCallCount() const
{
    return m_maxCallCount;
}

void OwnNumberApplyDetailItem::SetMaxCallCount(const int64_t& _maxCallCount)
{
    m_maxCallCount = _maxCallCount;
    m_maxCallCountHasBeenSet = true;
}

bool OwnNumberApplyDetailItem::MaxCallCountHasBeenSet() const
{
    return m_maxCallCountHasBeenSet;
}

int64_t OwnNumberApplyDetailItem::GetMaxCallPSec() const
{
    return m_maxCallPSec;
}

void OwnNumberApplyDetailItem::SetMaxCallPSec(const int64_t& _maxCallPSec)
{
    m_maxCallPSec = _maxCallPSec;
    m_maxCallPSecHasBeenSet = true;
}

bool OwnNumberApplyDetailItem::MaxCallPSecHasBeenSet() const
{
    return m_maxCallPSecHasBeenSet;
}

string OwnNumberApplyDetailItem::GetOutboundCalleeFormat() const
{
    return m_outboundCalleeFormat;
}

void OwnNumberApplyDetailItem::SetOutboundCalleeFormat(const string& _outboundCalleeFormat)
{
    m_outboundCalleeFormat = _outboundCalleeFormat;
    m_outboundCalleeFormatHasBeenSet = true;
}

bool OwnNumberApplyDetailItem::OutboundCalleeFormatHasBeenSet() const
{
    return m_outboundCalleeFormatHasBeenSet;
}

