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

#include <tencentcloud/ssa/v20180608/model/SocCheckItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

SocCheckItem::SocCheckItem() :
    m_nameHasBeenSet(false),
    m_levelIdHasBeenSet(false),
    m_successCountHasBeenSet(false),
    m_failCountHasBeenSet(false)
{
}

CoreInternalOutcome SocCheckItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("LevelId") && !value["LevelId"].IsNull())
    {
        if (!value["LevelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItem.LevelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_levelId = string(value["LevelId"].GetString());
        m_levelIdHasBeenSet = true;
    }

    if (value.HasMember("SuccessCount") && !value["SuccessCount"].IsNull())
    {
        if (!value["SuccessCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItem.SuccessCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_successCount = value["SuccessCount"].GetInt64();
        m_successCountHasBeenSet = true;
    }

    if (value.HasMember("FailCount") && !value["FailCount"].IsNull())
    {
        if (!value["FailCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SocCheckItem.FailCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failCount = value["FailCount"].GetInt64();
        m_failCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SocCheckItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LevelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_levelId.c_str(), allocator).Move(), allocator);
    }

    if (m_successCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_successCount, allocator);
    }

    if (m_failCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failCount, allocator);
    }

}


string SocCheckItem::GetName() const
{
    return m_name;
}

void SocCheckItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SocCheckItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SocCheckItem::GetLevelId() const
{
    return m_levelId;
}

void SocCheckItem::SetLevelId(const string& _levelId)
{
    m_levelId = _levelId;
    m_levelIdHasBeenSet = true;
}

bool SocCheckItem::LevelIdHasBeenSet() const
{
    return m_levelIdHasBeenSet;
}

int64_t SocCheckItem::GetSuccessCount() const
{
    return m_successCount;
}

void SocCheckItem::SetSuccessCount(const int64_t& _successCount)
{
    m_successCount = _successCount;
    m_successCountHasBeenSet = true;
}

bool SocCheckItem::SuccessCountHasBeenSet() const
{
    return m_successCountHasBeenSet;
}

int64_t SocCheckItem::GetFailCount() const
{
    return m_failCount;
}

void SocCheckItem::SetFailCount(const int64_t& _failCount)
{
    m_failCount = _failCount;
    m_failCountHasBeenSet = true;
}

bool SocCheckItem::FailCountHasBeenSet() const
{
    return m_failCountHasBeenSet;
}

