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

#include <tencentcloud/tcss/v20201101/model/SecLogJoinInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

SecLogJoinInfo::SecLogJoinInfo() :
    m_countHasBeenSet(false),
    m_superNodeCountHasBeenSet(false),
    m_isJoinedHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_clusterCountHasBeenSet(false)
{
}

CoreInternalOutcome SecLogJoinInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinInfo.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("SuperNodeCount") && !value["SuperNodeCount"].IsNull())
    {
        if (!value["SuperNodeCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinInfo.SuperNodeCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_superNodeCount = value["SuperNodeCount"].GetUint64();
        m_superNodeCountHasBeenSet = true;
    }

    if (value.HasMember("IsJoined") && !value["IsJoined"].IsNull())
    {
        if (!value["IsJoined"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinInfo.IsJoined` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isJoined = value["IsJoined"].GetBool();
        m_isJoinedHasBeenSet = true;
    }

    if (value.HasMember("LogType") && !value["LogType"].IsNull())
    {
        if (!value["LogType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinInfo.LogType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logType = string(value["LogType"].GetString());
        m_logTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterCount") && !value["ClusterCount"].IsNull())
    {
        if (!value["ClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SecLogJoinInfo.ClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clusterCount = value["ClusterCount"].GetUint64();
        m_clusterCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecLogJoinInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_superNodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuperNodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_superNodeCount, allocator);
    }

    if (m_isJoinedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsJoined";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isJoined, allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clusterCount, allocator);
    }

}


uint64_t SecLogJoinInfo::GetCount() const
{
    return m_count;
}

void SecLogJoinInfo::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SecLogJoinInfo::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t SecLogJoinInfo::GetSuperNodeCount() const
{
    return m_superNodeCount;
}

void SecLogJoinInfo::SetSuperNodeCount(const uint64_t& _superNodeCount)
{
    m_superNodeCount = _superNodeCount;
    m_superNodeCountHasBeenSet = true;
}

bool SecLogJoinInfo::SuperNodeCountHasBeenSet() const
{
    return m_superNodeCountHasBeenSet;
}

bool SecLogJoinInfo::GetIsJoined() const
{
    return m_isJoined;
}

void SecLogJoinInfo::SetIsJoined(const bool& _isJoined)
{
    m_isJoined = _isJoined;
    m_isJoinedHasBeenSet = true;
}

bool SecLogJoinInfo::IsJoinedHasBeenSet() const
{
    return m_isJoinedHasBeenSet;
}

string SecLogJoinInfo::GetLogType() const
{
    return m_logType;
}

void SecLogJoinInfo::SetLogType(const string& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool SecLogJoinInfo::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

uint64_t SecLogJoinInfo::GetClusterCount() const
{
    return m_clusterCount;
}

void SecLogJoinInfo::SetClusterCount(const uint64_t& _clusterCount)
{
    m_clusterCount = _clusterCount;
    m_clusterCountHasBeenSet = true;
}

bool SecLogJoinInfo::ClusterCountHasBeenSet() const
{
    return m_clusterCountHasBeenSet;
}

