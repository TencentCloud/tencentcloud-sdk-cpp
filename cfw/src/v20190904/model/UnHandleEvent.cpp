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

#include <tencentcloud/cfw/v20190904/model/UnHandleEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

UnHandleEvent::UnHandleEvent() :
    m_eventTableListStructHasBeenSet(false),
    m_baseLineUserHasBeenSet(false),
    m_baseLineInSwitchHasBeenSet(false),
    m_baseLineOutSwitchHasBeenSet(false),
    m_vpcFwCountHasBeenSet(false)
{
}

CoreInternalOutcome UnHandleEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EventTableListStruct") && !value["EventTableListStruct"].IsNull())
    {
        if (!value["EventTableListStruct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UnHandleEvent.EventTableListStruct` is not array type"));

        const rapidjson::Value &tmpValue = value["EventTableListStruct"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnHandleEventDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_eventTableListStruct.push_back(item);
        }
        m_eventTableListStructHasBeenSet = true;
    }

    if (value.HasMember("BaseLineUser") && !value["BaseLineUser"].IsNull())
    {
        if (!value["BaseLineUser"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnHandleEvent.BaseLineUser` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseLineUser = value["BaseLineUser"].GetUint64();
        m_baseLineUserHasBeenSet = true;
    }

    if (value.HasMember("BaseLineInSwitch") && !value["BaseLineInSwitch"].IsNull())
    {
        if (!value["BaseLineInSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnHandleEvent.BaseLineInSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseLineInSwitch = value["BaseLineInSwitch"].GetUint64();
        m_baseLineInSwitchHasBeenSet = true;
    }

    if (value.HasMember("BaseLineOutSwitch") && !value["BaseLineOutSwitch"].IsNull())
    {
        if (!value["BaseLineOutSwitch"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnHandleEvent.BaseLineOutSwitch` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baseLineOutSwitch = value["BaseLineOutSwitch"].GetUint64();
        m_baseLineOutSwitchHasBeenSet = true;
    }

    if (value.HasMember("VpcFwCount") && !value["VpcFwCount"].IsNull())
    {
        if (!value["VpcFwCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnHandleEvent.VpcFwCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vpcFwCount = value["VpcFwCount"].GetUint64();
        m_vpcFwCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UnHandleEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eventTableListStructHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTableListStruct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_eventTableListStruct.begin(); itr != m_eventTableListStruct.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_baseLineUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLineUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseLineUser, allocator);
    }

    if (m_baseLineInSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLineInSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseLineInSwitch, allocator);
    }

    if (m_baseLineOutSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseLineOutSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baseLineOutSwitch, allocator);
    }

    if (m_vpcFwCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcFwCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcFwCount, allocator);
    }

}


vector<UnHandleEventDetail> UnHandleEvent::GetEventTableListStruct() const
{
    return m_eventTableListStruct;
}

void UnHandleEvent::SetEventTableListStruct(const vector<UnHandleEventDetail>& _eventTableListStruct)
{
    m_eventTableListStruct = _eventTableListStruct;
    m_eventTableListStructHasBeenSet = true;
}

bool UnHandleEvent::EventTableListStructHasBeenSet() const
{
    return m_eventTableListStructHasBeenSet;
}

uint64_t UnHandleEvent::GetBaseLineUser() const
{
    return m_baseLineUser;
}

void UnHandleEvent::SetBaseLineUser(const uint64_t& _baseLineUser)
{
    m_baseLineUser = _baseLineUser;
    m_baseLineUserHasBeenSet = true;
}

bool UnHandleEvent::BaseLineUserHasBeenSet() const
{
    return m_baseLineUserHasBeenSet;
}

uint64_t UnHandleEvent::GetBaseLineInSwitch() const
{
    return m_baseLineInSwitch;
}

void UnHandleEvent::SetBaseLineInSwitch(const uint64_t& _baseLineInSwitch)
{
    m_baseLineInSwitch = _baseLineInSwitch;
    m_baseLineInSwitchHasBeenSet = true;
}

bool UnHandleEvent::BaseLineInSwitchHasBeenSet() const
{
    return m_baseLineInSwitchHasBeenSet;
}

uint64_t UnHandleEvent::GetBaseLineOutSwitch() const
{
    return m_baseLineOutSwitch;
}

void UnHandleEvent::SetBaseLineOutSwitch(const uint64_t& _baseLineOutSwitch)
{
    m_baseLineOutSwitch = _baseLineOutSwitch;
    m_baseLineOutSwitchHasBeenSet = true;
}

bool UnHandleEvent::BaseLineOutSwitchHasBeenSet() const
{
    return m_baseLineOutSwitchHasBeenSet;
}

uint64_t UnHandleEvent::GetVpcFwCount() const
{
    return m_vpcFwCount;
}

void UnHandleEvent::SetVpcFwCount(const uint64_t& _vpcFwCount)
{
    m_vpcFwCount = _vpcFwCount;
    m_vpcFwCountHasBeenSet = true;
}

bool UnHandleEvent::VpcFwCountHasBeenSet() const
{
    return m_vpcFwCountHasBeenSet;
}

