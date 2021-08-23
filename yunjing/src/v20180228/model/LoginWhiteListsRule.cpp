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

#include <tencentcloud/yunjing/v20180228/model/LoginWhiteListsRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

LoginWhiteListsRule::LoginWhiteListsRule() :
    m_placesHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_hostIpHasBeenSet(false),
    m_idHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome LoginWhiteListsRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Places") && !value["Places"].IsNull())
    {
        if (!value["Places"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.Places` is not array type"));

        const rapidjson::Value &tmpValue = value["Places"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Place item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_places.push_back(item);
        }
        m_placesHasBeenSet = true;
    }

    if (value.HasMember("SrcIp") && !value["SrcIp"].IsNull())
    {
        if (!value["SrcIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.IsGlobal` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetBool();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("HostIp") && !value["HostIp"].IsNull())
    {
        if (!value["HostIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.HostIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostIp = string(value["HostIp"].GetString());
        m_hostIpHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginWhiteListsRule.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginWhiteListsRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_placesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Places";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_places.begin(); itr != m_places.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_srcIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIp.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_isGlobalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGlobal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGlobal, allocator);
    }

    if (m_hostIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostIp.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

}


vector<Place> LoginWhiteListsRule::GetPlaces() const
{
    return m_places;
}

void LoginWhiteListsRule::SetPlaces(const vector<Place>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool LoginWhiteListsRule::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

string LoginWhiteListsRule::GetSrcIp() const
{
    return m_srcIp;
}

void LoginWhiteListsRule::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool LoginWhiteListsRule::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string LoginWhiteListsRule::GetUserName() const
{
    return m_userName;
}

void LoginWhiteListsRule::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LoginWhiteListsRule::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

bool LoginWhiteListsRule::GetIsGlobal() const
{
    return m_isGlobal;
}

void LoginWhiteListsRule::SetIsGlobal(const bool& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool LoginWhiteListsRule::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

string LoginWhiteListsRule::GetHostIp() const
{
    return m_hostIp;
}

void LoginWhiteListsRule::SetHostIp(const string& _hostIp)
{
    m_hostIp = _hostIp;
    m_hostIpHasBeenSet = true;
}

bool LoginWhiteListsRule::HostIpHasBeenSet() const
{
    return m_hostIpHasBeenSet;
}

uint64_t LoginWhiteListsRule::GetId() const
{
    return m_id;
}

void LoginWhiteListsRule::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool LoginWhiteListsRule::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string LoginWhiteListsRule::GetStartTime() const
{
    return m_startTime;
}

void LoginWhiteListsRule::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool LoginWhiteListsRule::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string LoginWhiteListsRule::GetEndTime() const
{
    return m_endTime;
}

void LoginWhiteListsRule::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool LoginWhiteListsRule::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

