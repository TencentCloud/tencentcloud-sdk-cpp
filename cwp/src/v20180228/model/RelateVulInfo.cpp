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

#include <tencentcloud/cwp/v20180228/model/RelateVulInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

RelateVulInfo::RelateVulInfo() :
    m_cveIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cVSSHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

CoreInternalOutcome RelateVulInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CVSS") && !value["CVSS"].IsNull())
    {
        if (!value["CVSS"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.CVSS` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cVSS = value["CVSS"].GetDouble();
        m_cVSSHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RelateVulInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelateVulInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_cVSSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVSS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cVSS, allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

}


string RelateVulInfo::GetCveId() const
{
    return m_cveId;
}

void RelateVulInfo::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool RelateVulInfo::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string RelateVulInfo::GetName() const
{
    return m_name;
}

void RelateVulInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RelateVulInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RelateVulInfo::GetLabel() const
{
    return m_label;
}

void RelateVulInfo::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool RelateVulInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t RelateVulInfo::GetLevel() const
{
    return m_level;
}

void RelateVulInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool RelateVulInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

double RelateVulInfo::GetCVSS() const
{
    return m_cVSS;
}

void RelateVulInfo::SetCVSS(const double& _cVSS)
{
    m_cVSS = _cVSS;
    m_cVSSHasBeenSet = true;
}

bool RelateVulInfo::CVSSHasBeenSet() const
{
    return m_cVSSHasBeenSet;
}

string RelateVulInfo::GetPublishTime() const
{
    return m_publishTime;
}

void RelateVulInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool RelateVulInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

uint64_t RelateVulInfo::GetId() const
{
    return m_id;
}

void RelateVulInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool RelateVulInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

