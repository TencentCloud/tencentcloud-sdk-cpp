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

#include <tencentcloud/tci/v20190318/model/PersonInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

PersonInfo::PersonInfo() :
    m_personIdHasBeenSet(false),
    m_coverBeginUrlHasBeenSet(false),
    m_coverEndUrlHasBeenSet(false)
{
}

CoreInternalOutcome PersonInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PersonId") && !value["PersonId"].IsNull())
    {
        if (!value["PersonId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.PersonId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personId = string(value["PersonId"].GetString());
        m_personIdHasBeenSet = true;
    }

    if (value.HasMember("CoverBeginUrl") && !value["CoverBeginUrl"].IsNull())
    {
        if (!value["CoverBeginUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.CoverBeginUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverBeginUrl = string(value["CoverBeginUrl"].GetString());
        m_coverBeginUrlHasBeenSet = true;
    }

    if (value.HasMember("CoverEndUrl") && !value["CoverEndUrl"].IsNull())
    {
        if (!value["CoverEndUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PersonInfo.CoverEndUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverEndUrl = string(value["CoverEndUrl"].GetString());
        m_coverEndUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PersonInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_personIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PersonId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_personId.c_str(), allocator).Move(), allocator);
    }

    if (m_coverBeginUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverBeginUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverBeginUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_coverEndUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverEndUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverEndUrl.c_str(), allocator).Move(), allocator);
    }

}


string PersonInfo::GetPersonId() const
{
    return m_personId;
}

void PersonInfo::SetPersonId(const string& _personId)
{
    m_personId = _personId;
    m_personIdHasBeenSet = true;
}

bool PersonInfo::PersonIdHasBeenSet() const
{
    return m_personIdHasBeenSet;
}

string PersonInfo::GetCoverBeginUrl() const
{
    return m_coverBeginUrl;
}

void PersonInfo::SetCoverBeginUrl(const string& _coverBeginUrl)
{
    m_coverBeginUrl = _coverBeginUrl;
    m_coverBeginUrlHasBeenSet = true;
}

bool PersonInfo::CoverBeginUrlHasBeenSet() const
{
    return m_coverBeginUrlHasBeenSet;
}

string PersonInfo::GetCoverEndUrl() const
{
    return m_coverEndUrl;
}

void PersonInfo::SetCoverEndUrl(const string& _coverEndUrl)
{
    m_coverEndUrl = _coverEndUrl;
    m_coverEndUrlHasBeenSet = true;
}

bool PersonInfo::CoverEndUrlHasBeenSet() const
{
    return m_coverEndUrlHasBeenSet;
}

