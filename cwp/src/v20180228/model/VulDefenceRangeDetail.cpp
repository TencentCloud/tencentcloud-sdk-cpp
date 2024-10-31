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

#include <tencentcloud/cwp/v20180228/model/VulDefenceRangeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

VulDefenceRangeDetail::VulDefenceRangeDetail() :
    m_vulNameHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_cveIdHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_vulIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome VulDefenceRangeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.CvssScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = value["CvssScore"].GetDouble();
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("CveId") && !value["CveId"].IsNull())
    {
        if (!value["CveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.CveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cveId = string(value["CveId"].GetString());
        m_cveIdHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("VulId") && !value["VulId"].IsNull())
    {
        if (!value["VulId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.VulId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulId = value["VulId"].GetInt64();
        m_vulIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulDefenceRangeDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulDefenceRangeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
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

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_cveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cveId.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

}


string VulDefenceRangeDetail::GetVulName() const
{
    return m_vulName;
}

void VulDefenceRangeDetail::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulDefenceRangeDetail::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulDefenceRangeDetail::GetLabel() const
{
    return m_label;
}

void VulDefenceRangeDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool VulDefenceRangeDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

uint64_t VulDefenceRangeDetail::GetLevel() const
{
    return m_level;
}

void VulDefenceRangeDetail::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulDefenceRangeDetail::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

double VulDefenceRangeDetail::GetCvssScore() const
{
    return m_cvssScore;
}

void VulDefenceRangeDetail::SetCvssScore(const double& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool VulDefenceRangeDetail::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string VulDefenceRangeDetail::GetCveId() const
{
    return m_cveId;
}

void VulDefenceRangeDetail::SetCveId(const string& _cveId)
{
    m_cveId = _cveId;
    m_cveIdHasBeenSet = true;
}

bool VulDefenceRangeDetail::CveIdHasBeenSet() const
{
    return m_cveIdHasBeenSet;
}

string VulDefenceRangeDetail::GetPublishTime() const
{
    return m_publishTime;
}

void VulDefenceRangeDetail::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulDefenceRangeDetail::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

int64_t VulDefenceRangeDetail::GetVulId() const
{
    return m_vulId;
}

void VulDefenceRangeDetail::SetVulId(const int64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool VulDefenceRangeDetail::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

int64_t VulDefenceRangeDetail::GetStatus() const
{
    return m_status;
}

void VulDefenceRangeDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VulDefenceRangeDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

