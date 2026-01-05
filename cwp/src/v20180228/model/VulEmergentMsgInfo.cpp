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

#include <tencentcloud/cwp/v20180228/model/VulEmergentMsgInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulEmergentMsgInfo::VulEmergentMsgInfo() :
    m_vulIdHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_supportFixHasBeenSet(false),
    m_supportDefenseHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_kbNumberHasBeenSet(false)
{
}

CoreInternalOutcome VulEmergentMsgInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.VulId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetUint64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("SupportFix") && !value["SupportFix"].IsNull())
    {
        if (!value["SupportFix"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.SupportFix` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportFix = value["SupportFix"].GetInt64();
        m_supportFixHasBeenSet = true;
    }

    if (value.HasMember("SupportDefense") && !value["SupportDefense"].IsNull())
    {
        if (!value["SupportDefense"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.SupportDefense` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_supportDefense = value["SupportDefense"].GetInt64();
        m_supportDefenseHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.KbId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = value["KbId"].GetUint64();
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("KbNumber") && !value["KbNumber"].IsNull())
    {
        if (!value["KbNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulEmergentMsgInfo.KbNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbNumber = string(value["KbNumber"].GetString());
        m_kbNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulEmergentMsgInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_supportFixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportFix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportFix, allocator);
    }

    if (m_supportDefenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SupportDefense";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_supportDefense, allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbId, allocator);
    }

    if (m_kbNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbNumber.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulEmergentMsgInfo::GetVulId() const
{
    return m_vulId;
}

void VulEmergentMsgInfo::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulEmergentMsgInfo::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

string VulEmergentMsgInfo::GetPublishTime() const
{
    return m_publishTime;
}

void VulEmergentMsgInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulEmergentMsgInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string VulEmergentMsgInfo::GetName() const
{
    return m_name;
}

void VulEmergentMsgInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VulEmergentMsgInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VulEmergentMsgInfo::GetNameEn() const
{
    return m_nameEn;
}

void VulEmergentMsgInfo::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool VulEmergentMsgInfo::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

int64_t VulEmergentMsgInfo::GetSupportFix() const
{
    return m_supportFix;
}

void VulEmergentMsgInfo::SetSupportFix(const int64_t& _supportFix)
{
    m_supportFix = _supportFix;
    m_supportFixHasBeenSet = true;
}

bool VulEmergentMsgInfo::SupportFixHasBeenSet() const
{
    return m_supportFixHasBeenSet;
}

int64_t VulEmergentMsgInfo::GetSupportDefense() const
{
    return m_supportDefense;
}

void VulEmergentMsgInfo::SetSupportDefense(const int64_t& _supportDefense)
{
    m_supportDefense = _supportDefense;
    m_supportDefenseHasBeenSet = true;
}

bool VulEmergentMsgInfo::SupportDefenseHasBeenSet() const
{
    return m_supportDefenseHasBeenSet;
}

uint64_t VulEmergentMsgInfo::GetKbId() const
{
    return m_kbId;
}

void VulEmergentMsgInfo::SetKbId(const uint64_t& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool VulEmergentMsgInfo::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string VulEmergentMsgInfo::GetKbNumber() const
{
    return m_kbNumber;
}

void VulEmergentMsgInfo::SetKbNumber(const string& _kbNumber)
{
    m_kbNumber = _kbNumber;
    m_kbNumberHasBeenSet = true;
}

bool VulEmergentMsgInfo::KbNumberHasBeenSet() const
{
    return m_kbNumberHasBeenSet;
}

