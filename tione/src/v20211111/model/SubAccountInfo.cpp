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

#include <tencentcloud/tione/v20211111/model/SubAccountInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SubAccountInfo::SubAccountInfo() :
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_subUinNameHasBeenSet(false),
    m_linuxUidHasBeenSet(false),
    m_linuxGidHasBeenSet(false)
{
}

CoreInternalOutcome SubAccountInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("SubUinName") && !value["SubUinName"].IsNull())
    {
        if (!value["SubUinName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.SubUinName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUinName = string(value["SubUinName"].GetString());
        m_subUinNameHasBeenSet = true;
    }

    if (value.HasMember("LinuxUid") && !value["LinuxUid"].IsNull())
    {
        if (!value["LinuxUid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.LinuxUid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linuxUid = value["LinuxUid"].GetInt64();
        m_linuxUidHasBeenSet = true;
    }

    if (value.HasMember("LinuxGid") && !value["LinuxGid"].IsNull())
    {
        if (!value["LinuxGid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAccountInfo.LinuxGid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_linuxGid = value["LinuxGid"].GetInt64();
        m_linuxGidHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubAccountInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUinName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUinName.c_str(), allocator).Move(), allocator);
    }

    if (m_linuxUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linuxUid, allocator);
    }

    if (m_linuxGidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LinuxGid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_linuxGid, allocator);
    }

}


string SubAccountInfo::GetUin() const
{
    return m_uin;
}

void SubAccountInfo::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool SubAccountInfo::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string SubAccountInfo::GetSubUin() const
{
    return m_subUin;
}

void SubAccountInfo::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool SubAccountInfo::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

string SubAccountInfo::GetSubUinName() const
{
    return m_subUinName;
}

void SubAccountInfo::SetSubUinName(const string& _subUinName)
{
    m_subUinName = _subUinName;
    m_subUinNameHasBeenSet = true;
}

bool SubAccountInfo::SubUinNameHasBeenSet() const
{
    return m_subUinNameHasBeenSet;
}

int64_t SubAccountInfo::GetLinuxUid() const
{
    return m_linuxUid;
}

void SubAccountInfo::SetLinuxUid(const int64_t& _linuxUid)
{
    m_linuxUid = _linuxUid;
    m_linuxUidHasBeenSet = true;
}

bool SubAccountInfo::LinuxUidHasBeenSet() const
{
    return m_linuxUidHasBeenSet;
}

int64_t SubAccountInfo::GetLinuxGid() const
{
    return m_linuxGid;
}

void SubAccountInfo::SetLinuxGid(const int64_t& _linuxGid)
{
    m_linuxGid = _linuxGid;
    m_linuxGidHasBeenSet = true;
}

bool SubAccountInfo::LinuxGidHasBeenSet() const
{
    return m_linuxGidHasBeenSet;
}

