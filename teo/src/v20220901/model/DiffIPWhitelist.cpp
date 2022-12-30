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

#include <tencentcloud/teo/v20220901/model/DiffIPWhitelist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DiffIPWhitelist::DiffIPWhitelist() :
    m_latestIPWhitelistHasBeenSet(false),
    m_addedIPWhitelistHasBeenSet(false),
    m_removedIPWhitelistHasBeenSet(false),
    m_noChangeIPWhitelistHasBeenSet(false)
{
}

CoreInternalOutcome DiffIPWhitelist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LatestIPWhitelist") && !value["LatestIPWhitelist"].IsNull())
    {
        if (!value["LatestIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiffIPWhitelist.LatestIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_latestIPWhitelist.Deserialize(value["LatestIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_latestIPWhitelistHasBeenSet = true;
    }

    if (value.HasMember("AddedIPWhitelist") && !value["AddedIPWhitelist"].IsNull())
    {
        if (!value["AddedIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiffIPWhitelist.AddedIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_addedIPWhitelist.Deserialize(value["AddedIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_addedIPWhitelistHasBeenSet = true;
    }

    if (value.HasMember("RemovedIPWhitelist") && !value["RemovedIPWhitelist"].IsNull())
    {
        if (!value["RemovedIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiffIPWhitelist.RemovedIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removedIPWhitelist.Deserialize(value["RemovedIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removedIPWhitelistHasBeenSet = true;
    }

    if (value.HasMember("NoChangeIPWhitelist") && !value["NoChangeIPWhitelist"].IsNull())
    {
        if (!value["NoChangeIPWhitelist"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiffIPWhitelist.NoChangeIPWhitelist` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_noChangeIPWhitelist.Deserialize(value["NoChangeIPWhitelist"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_noChangeIPWhitelistHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DiffIPWhitelist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_latestIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_latestIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_addedIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddedIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addedIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removedIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemovedIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removedIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_noChangeIPWhitelistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoChangeIPWhitelist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_noChangeIPWhitelist.ToJsonObject(value[key.c_str()], allocator);
    }

}


IPWhitelist DiffIPWhitelist::GetLatestIPWhitelist() const
{
    return m_latestIPWhitelist;
}

void DiffIPWhitelist::SetLatestIPWhitelist(const IPWhitelist& _latestIPWhitelist)
{
    m_latestIPWhitelist = _latestIPWhitelist;
    m_latestIPWhitelistHasBeenSet = true;
}

bool DiffIPWhitelist::LatestIPWhitelistHasBeenSet() const
{
    return m_latestIPWhitelistHasBeenSet;
}

IPWhitelist DiffIPWhitelist::GetAddedIPWhitelist() const
{
    return m_addedIPWhitelist;
}

void DiffIPWhitelist::SetAddedIPWhitelist(const IPWhitelist& _addedIPWhitelist)
{
    m_addedIPWhitelist = _addedIPWhitelist;
    m_addedIPWhitelistHasBeenSet = true;
}

bool DiffIPWhitelist::AddedIPWhitelistHasBeenSet() const
{
    return m_addedIPWhitelistHasBeenSet;
}

IPWhitelist DiffIPWhitelist::GetRemovedIPWhitelist() const
{
    return m_removedIPWhitelist;
}

void DiffIPWhitelist::SetRemovedIPWhitelist(const IPWhitelist& _removedIPWhitelist)
{
    m_removedIPWhitelist = _removedIPWhitelist;
    m_removedIPWhitelistHasBeenSet = true;
}

bool DiffIPWhitelist::RemovedIPWhitelistHasBeenSet() const
{
    return m_removedIPWhitelistHasBeenSet;
}

IPWhitelist DiffIPWhitelist::GetNoChangeIPWhitelist() const
{
    return m_noChangeIPWhitelist;
}

void DiffIPWhitelist::SetNoChangeIPWhitelist(const IPWhitelist& _noChangeIPWhitelist)
{
    m_noChangeIPWhitelist = _noChangeIPWhitelist;
    m_noChangeIPWhitelistHasBeenSet = true;
}

bool DiffIPWhitelist::NoChangeIPWhitelistHasBeenSet() const
{
    return m_noChangeIPWhitelistHasBeenSet;
}

