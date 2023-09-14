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

#include <tencentcloud/tse/v20201207/model/NetworkAccessControl.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

NetworkAccessControl::NetworkAccessControl() :
    m_modeHasBeenSet(false),
    m_cidrWhiteListHasBeenSet(false),
    m_cidrBlackListHasBeenSet(false)
{
}

CoreInternalOutcome NetworkAccessControl::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkAccessControl.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("CidrWhiteList") && !value["CidrWhiteList"].IsNull())
    {
        if (!value["CidrWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAccessControl.CidrWhiteList` is not array type"));

        const rapidjson::Value &tmpValue = value["CidrWhiteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrWhiteList.push_back((*itr).GetString());
        }
        m_cidrWhiteListHasBeenSet = true;
    }

    if (value.HasMember("CidrBlackList") && !value["CidrBlackList"].IsNull())
    {
        if (!value["CidrBlackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkAccessControl.CidrBlackList` is not array type"));

        const rapidjson::Value &tmpValue = value["CidrBlackList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrBlackList.push_back((*itr).GetString());
        }
        m_cidrBlackListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkAccessControl::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cidrWhiteList.begin(); itr != m_cidrWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cidrBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlackList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cidrBlackList.begin(); itr != m_cidrBlackList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string NetworkAccessControl::GetMode() const
{
    return m_mode;
}

void NetworkAccessControl::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool NetworkAccessControl::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> NetworkAccessControl::GetCidrWhiteList() const
{
    return m_cidrWhiteList;
}

void NetworkAccessControl::SetCidrWhiteList(const vector<string>& _cidrWhiteList)
{
    m_cidrWhiteList = _cidrWhiteList;
    m_cidrWhiteListHasBeenSet = true;
}

bool NetworkAccessControl::CidrWhiteListHasBeenSet() const
{
    return m_cidrWhiteListHasBeenSet;
}

vector<string> NetworkAccessControl::GetCidrBlackList() const
{
    return m_cidrBlackList;
}

void NetworkAccessControl::SetCidrBlackList(const vector<string>& _cidrBlackList)
{
    m_cidrBlackList = _cidrBlackList;
    m_cidrBlackListHasBeenSet = true;
}

bool NetworkAccessControl::CidrBlackListHasBeenSet() const
{
    return m_cidrBlackListHasBeenSet;
}

