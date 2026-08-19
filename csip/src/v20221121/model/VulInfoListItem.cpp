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

#include <tencentcloud/csip/v20221121/model/VulInfoListItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

VulInfoListItem::VulInfoListItem() :
    m_levelHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_vULNameHasBeenSet(false),
    m_vULIDHasBeenSet(false)
{
}

CoreInternalOutcome VulInfoListItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoListItem.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("SubmitTime") && !value["SubmitTime"].IsNull())
    {
        if (!value["SubmitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoListItem.SubmitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_submitTime = string(value["SubmitTime"].GetString());
        m_submitTimeHasBeenSet = true;
    }

    if (value.HasMember("VULName") && !value["VULName"].IsNull())
    {
        if (!value["VULName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoListItem.VULName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULName = string(value["VULName"].GetString());
        m_vULNameHasBeenSet = true;
    }

    if (value.HasMember("VULID") && !value["VULID"].IsNull())
    {
        if (!value["VULID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulInfoListItem.VULID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vULID = string(value["VULID"].GetString());
        m_vULIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulInfoListItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_submitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubmitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_submitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vULNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULName.c_str(), allocator).Move(), allocator);
    }

    if (m_vULIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VULID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vULID.c_str(), allocator).Move(), allocator);
    }

}


string VulInfoListItem::GetLevel() const
{
    return m_level;
}

void VulInfoListItem::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool VulInfoListItem::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string VulInfoListItem::GetSubmitTime() const
{
    return m_submitTime;
}

void VulInfoListItem::SetSubmitTime(const string& _submitTime)
{
    m_submitTime = _submitTime;
    m_submitTimeHasBeenSet = true;
}

bool VulInfoListItem::SubmitTimeHasBeenSet() const
{
    return m_submitTimeHasBeenSet;
}

string VulInfoListItem::GetVULName() const
{
    return m_vULName;
}

void VulInfoListItem::SetVULName(const string& _vULName)
{
    m_vULName = _vULName;
    m_vULNameHasBeenSet = true;
}

bool VulInfoListItem::VULNameHasBeenSet() const
{
    return m_vULNameHasBeenSet;
}

string VulInfoListItem::GetVULID() const
{
    return m_vULID;
}

void VulInfoListItem::SetVULID(const string& _vULID)
{
    m_vULID = _vULID;
    m_vULIDHasBeenSet = true;
}

bool VulInfoListItem::VULIDHasBeenSet() const
{
    return m_vULIDHasBeenSet;
}

