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

#include <tencentcloud/cwp/v20180228/model/HostLoginWhiteObj.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

HostLoginWhiteObj::HostLoginWhiteObj() :
    m_placesHasBeenSet(false),
    m_srcIpHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_isGlobalHasBeenSet(false),
    m_hostInfosHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

CoreInternalOutcome HostLoginWhiteObj::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Places") && !value["Places"].IsNull())
    {
        if (!value["Places"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.Places` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.SrcIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIp = string(value["SrcIp"].GetString());
        m_srcIpHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("IsGlobal") && !value["IsGlobal"].IsNull())
    {
        if (!value["IsGlobal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.IsGlobal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGlobal = value["IsGlobal"].GetUint64();
        m_isGlobalHasBeenSet = true;
    }

    if (value.HasMember("HostInfos") && !value["HostInfos"].IsNull())
    {
        if (!value["HostInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.HostInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["HostInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HostInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hostInfos.push_back(item);
        }
        m_hostInfosHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("StartTime") && !value["StartTime"].IsNull())
    {
        if (!value["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(value["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HostLoginWhiteObj.EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(value["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HostLoginWhiteObj::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hostInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hostInfos.begin(); itr != m_hostInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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


vector<Place> HostLoginWhiteObj::GetPlaces() const
{
    return m_places;
}

void HostLoginWhiteObj::SetPlaces(const vector<Place>& _places)
{
    m_places = _places;
    m_placesHasBeenSet = true;
}

bool HostLoginWhiteObj::PlacesHasBeenSet() const
{
    return m_placesHasBeenSet;
}

string HostLoginWhiteObj::GetSrcIp() const
{
    return m_srcIp;
}

void HostLoginWhiteObj::SetSrcIp(const string& _srcIp)
{
    m_srcIp = _srcIp;
    m_srcIpHasBeenSet = true;
}

bool HostLoginWhiteObj::SrcIpHasBeenSet() const
{
    return m_srcIpHasBeenSet;
}

string HostLoginWhiteObj::GetUserName() const
{
    return m_userName;
}

void HostLoginWhiteObj::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool HostLoginWhiteObj::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t HostLoginWhiteObj::GetIsGlobal() const
{
    return m_isGlobal;
}

void HostLoginWhiteObj::SetIsGlobal(const uint64_t& _isGlobal)
{
    m_isGlobal = _isGlobal;
    m_isGlobalHasBeenSet = true;
}

bool HostLoginWhiteObj::IsGlobalHasBeenSet() const
{
    return m_isGlobalHasBeenSet;
}

vector<HostInfo> HostLoginWhiteObj::GetHostInfos() const
{
    return m_hostInfos;
}

void HostLoginWhiteObj::SetHostInfos(const vector<HostInfo>& _hostInfos)
{
    m_hostInfos = _hostInfos;
    m_hostInfosHasBeenSet = true;
}

bool HostLoginWhiteObj::HostInfosHasBeenSet() const
{
    return m_hostInfosHasBeenSet;
}

string HostLoginWhiteObj::GetRemark() const
{
    return m_remark;
}

void HostLoginWhiteObj::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool HostLoginWhiteObj::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string HostLoginWhiteObj::GetStartTime() const
{
    return m_startTime;
}

void HostLoginWhiteObj::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool HostLoginWhiteObj::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string HostLoginWhiteObj::GetEndTime() const
{
    return m_endTime;
}

void HostLoginWhiteObj::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool HostLoginWhiteObj::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

