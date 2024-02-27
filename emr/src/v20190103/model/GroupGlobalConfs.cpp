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

#include <tencentcloud/emr/v20190103/model/GroupGlobalConfs.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

GroupGlobalConfs::GroupGlobalConfs() :
    m_groupGlobalConfHasBeenSet(false),
    m_currentNodesHasBeenSet(false),
    m_currentPostPaidNodesHasBeenSet(false),
    m_currentSpotPaidNodesHasBeenSet(false)
{
}

CoreInternalOutcome GroupGlobalConfs::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupGlobalConf") && !value["GroupGlobalConf"].IsNull())
    {
        if (!value["GroupGlobalConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `GroupGlobalConfs.GroupGlobalConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_groupGlobalConf.Deserialize(value["GroupGlobalConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_groupGlobalConfHasBeenSet = true;
    }

    if (value.HasMember("CurrentNodes") && !value["CurrentNodes"].IsNull())
    {
        if (!value["CurrentNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupGlobalConfs.CurrentNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentNodes = value["CurrentNodes"].GetInt64();
        m_currentNodesHasBeenSet = true;
    }

    if (value.HasMember("CurrentPostPaidNodes") && !value["CurrentPostPaidNodes"].IsNull())
    {
        if (!value["CurrentPostPaidNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupGlobalConfs.CurrentPostPaidNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentPostPaidNodes = value["CurrentPostPaidNodes"].GetInt64();
        m_currentPostPaidNodesHasBeenSet = true;
    }

    if (value.HasMember("CurrentSpotPaidNodes") && !value["CurrentSpotPaidNodes"].IsNull())
    {
        if (!value["CurrentSpotPaidNodes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `GroupGlobalConfs.CurrentSpotPaidNodes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentSpotPaidNodes = value["CurrentSpotPaidNodes"].GetInt64();
        m_currentSpotPaidNodesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GroupGlobalConfs::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupGlobalConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupGlobalConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_groupGlobalConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_currentNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentNodes, allocator);
    }

    if (m_currentPostPaidNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentPostPaidNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentPostPaidNodes, allocator);
    }

    if (m_currentSpotPaidNodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentSpotPaidNodes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentSpotPaidNodes, allocator);
    }

}


AutoScaleResourceConf GroupGlobalConfs::GetGroupGlobalConf() const
{
    return m_groupGlobalConf;
}

void GroupGlobalConfs::SetGroupGlobalConf(const AutoScaleResourceConf& _groupGlobalConf)
{
    m_groupGlobalConf = _groupGlobalConf;
    m_groupGlobalConfHasBeenSet = true;
}

bool GroupGlobalConfs::GroupGlobalConfHasBeenSet() const
{
    return m_groupGlobalConfHasBeenSet;
}

int64_t GroupGlobalConfs::GetCurrentNodes() const
{
    return m_currentNodes;
}

void GroupGlobalConfs::SetCurrentNodes(const int64_t& _currentNodes)
{
    m_currentNodes = _currentNodes;
    m_currentNodesHasBeenSet = true;
}

bool GroupGlobalConfs::CurrentNodesHasBeenSet() const
{
    return m_currentNodesHasBeenSet;
}

int64_t GroupGlobalConfs::GetCurrentPostPaidNodes() const
{
    return m_currentPostPaidNodes;
}

void GroupGlobalConfs::SetCurrentPostPaidNodes(const int64_t& _currentPostPaidNodes)
{
    m_currentPostPaidNodes = _currentPostPaidNodes;
    m_currentPostPaidNodesHasBeenSet = true;
}

bool GroupGlobalConfs::CurrentPostPaidNodesHasBeenSet() const
{
    return m_currentPostPaidNodesHasBeenSet;
}

int64_t GroupGlobalConfs::GetCurrentSpotPaidNodes() const
{
    return m_currentSpotPaidNodes;
}

void GroupGlobalConfs::SetCurrentSpotPaidNodes(const int64_t& _currentSpotPaidNodes)
{
    m_currentSpotPaidNodes = _currentSpotPaidNodes;
    m_currentSpotPaidNodesHasBeenSet = true;
}

bool GroupGlobalConfs::CurrentSpotPaidNodesHasBeenSet() const
{
    return m_currentSpotPaidNodesHasBeenSet;
}

