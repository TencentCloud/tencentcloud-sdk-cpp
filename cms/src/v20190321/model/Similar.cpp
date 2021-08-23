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

#include <tencentcloud/cms/v20190321/model/Similar.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

Similar::Similar() :
    m_evilTypeHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_seedUrlHasBeenSet(false)
{
}

CoreInternalOutcome Similar::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Similar.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Similar.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("SeedUrl") && !value["SeedUrl"].IsNull())
    {
        if (!value["SeedUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Similar.SeedUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_seedUrl = string(value["SeedUrl"].GetString());
        m_seedUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Similar::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_seedUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeedUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_seedUrl.c_str(), allocator).Move(), allocator);
    }

}


int64_t Similar::GetEvilType() const
{
    return m_evilType;
}

void Similar::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool Similar::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

int64_t Similar::GetHitFlag() const
{
    return m_hitFlag;
}

void Similar::SetHitFlag(const int64_t& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool Similar::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

string Similar::GetSeedUrl() const
{
    return m_seedUrl;
}

void Similar::SetSeedUrl(const string& _seedUrl)
{
    m_seedUrl = _seedUrl;
    m_seedUrlHasBeenSet = true;
}

bool Similar::SeedUrlHasBeenSet() const
{
    return m_seedUrlHasBeenSet;
}

