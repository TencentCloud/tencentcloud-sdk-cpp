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

#include <tencentcloud/ccc/v20200210/model/PhoneNumBuyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

PhoneNumBuyInfo::PhoneNumBuyInfo() :
    m_phoneNumHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_buyTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

CoreInternalOutcome PhoneNumBuyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PhoneNum") && !value["PhoneNum"].IsNull())
    {
        if (!value["PhoneNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.PhoneNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phoneNum = string(value["PhoneNum"].GetString());
        m_phoneNumHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.CallType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callType = value["CallType"].GetInt64();
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("BuyTime") && !value["BuyTime"].IsNull())
    {
        if (!value["BuyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.BuyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_buyTime = value["BuyTime"].GetInt64();
        m_buyTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneNumBuyInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PhoneNumBuyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_phoneNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phoneNum.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callType, allocator);
    }

    if (m_buyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_buyTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

}


string PhoneNumBuyInfo::GetPhoneNum() const
{
    return m_phoneNum;
}

void PhoneNumBuyInfo::SetPhoneNum(const string& _phoneNum)
{
    m_phoneNum = _phoneNum;
    m_phoneNumHasBeenSet = true;
}

bool PhoneNumBuyInfo::PhoneNumHasBeenSet() const
{
    return m_phoneNumHasBeenSet;
}

int64_t PhoneNumBuyInfo::GetType() const
{
    return m_type;
}

void PhoneNumBuyInfo::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool PhoneNumBuyInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t PhoneNumBuyInfo::GetCallType() const
{
    return m_callType;
}

void PhoneNumBuyInfo::SetCallType(const int64_t& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool PhoneNumBuyInfo::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

int64_t PhoneNumBuyInfo::GetBuyTime() const
{
    return m_buyTime;
}

void PhoneNumBuyInfo::SetBuyTime(const int64_t& _buyTime)
{
    m_buyTime = _buyTime;
    m_buyTimeHasBeenSet = true;
}

bool PhoneNumBuyInfo::BuyTimeHasBeenSet() const
{
    return m_buyTimeHasBeenSet;
}

int64_t PhoneNumBuyInfo::GetEndTime() const
{
    return m_endTime;
}

void PhoneNumBuyInfo::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool PhoneNumBuyInfo::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

int64_t PhoneNumBuyInfo::GetState() const
{
    return m_state;
}

void PhoneNumBuyInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool PhoneNumBuyInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

