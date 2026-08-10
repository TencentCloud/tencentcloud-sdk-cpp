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

#include <tencentcloud/csip/v20221121/model/VulBriefInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulBriefInfo::VulBriefInfo() :
    m_vulIDHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_cVEIDHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_cvssScoreHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_publishTimeHasBeenSet(false)
{
}

CoreInternalOutcome VulBriefInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulID") && !value["VulID"].IsNull())
    {
        if (!value["VulID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.VulID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vulID = value["VulID"].GetUint64();
        m_vulIDHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("CVEID") && !value["CVEID"].IsNull())
    {
        if (!value["CVEID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.CVEID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cVEID = string(value["CVEID"].GetString());
        m_cVEIDHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.Label` is not array type"));

        const rapidjson::Value &tmpValue = value["Label"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VPRLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_label.push_back(item);
        }
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("CvssScore") && !value["CvssScore"].IsNull())
    {
        if (!value["CvssScore"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.CvssScore` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_cvssScore = value["CvssScore"].GetDouble();
        m_cvssScoreHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulBriefInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulBriefInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulID, allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_cVEIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cVEID.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_label.begin(); itr != m_label.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cvssScoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvssScore";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cvssScore, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VulBriefInfo::GetVulID() const
{
    return m_vulID;
}

void VulBriefInfo::SetVulID(const uint64_t& _vulID)
{
    m_vulID = _vulID;
    m_vulIDHasBeenSet = true;
}

bool VulBriefInfo::VulIDHasBeenSet() const
{
    return m_vulIDHasBeenSet;
}

string VulBriefInfo::GetVulName() const
{
    return m_vulName;
}

void VulBriefInfo::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool VulBriefInfo::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

string VulBriefInfo::GetCVEID() const
{
    return m_cVEID;
}

void VulBriefInfo::SetCVEID(const string& _cVEID)
{
    m_cVEID = _cVEID;
    m_cVEIDHasBeenSet = true;
}

bool VulBriefInfo::CVEIDHasBeenSet() const
{
    return m_cVEIDHasBeenSet;
}

vector<VPRLabel> VulBriefInfo::GetLabel() const
{
    return m_label;
}

void VulBriefInfo::SetLabel(const vector<VPRLabel>& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool VulBriefInfo::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

double VulBriefInfo::GetCvssScore() const
{
    return m_cvssScore;
}

void VulBriefInfo::SetCvssScore(const double& _cvssScore)
{
    m_cvssScore = _cvssScore;
    m_cvssScoreHasBeenSet = true;
}

bool VulBriefInfo::CvssScoreHasBeenSet() const
{
    return m_cvssScoreHasBeenSet;
}

string VulBriefInfo::GetLevel() const
{
    return m_level;
}

void VulBriefInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulBriefInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulBriefInfo::GetPublishTime() const
{
    return m_publishTime;
}

void VulBriefInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool VulBriefInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

