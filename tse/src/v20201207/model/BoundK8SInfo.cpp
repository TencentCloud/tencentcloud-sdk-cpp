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

#include <tencentcloud/tse/v20201207/model/BoundK8SInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

BoundK8SInfo::BoundK8SInfo() :
    m_boundClusterIdHasBeenSet(false),
    m_boundClusterTypeHasBeenSet(false),
    m_syncModeHasBeenSet(false),
    m_bindRegionHasBeenSet(false)
{
}

CoreInternalOutcome BoundK8SInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BoundClusterId") && !value["BoundClusterId"].IsNull())
    {
        if (!value["BoundClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoundK8SInfo.BoundClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boundClusterId = string(value["BoundClusterId"].GetString());
        m_boundClusterIdHasBeenSet = true;
    }

    if (value.HasMember("BoundClusterType") && !value["BoundClusterType"].IsNull())
    {
        if (!value["BoundClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoundK8SInfo.BoundClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_boundClusterType = string(value["BoundClusterType"].GetString());
        m_boundClusterTypeHasBeenSet = true;
    }

    if (value.HasMember("SyncMode") && !value["SyncMode"].IsNull())
    {
        if (!value["SyncMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoundK8SInfo.SyncMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_syncMode = string(value["SyncMode"].GetString());
        m_syncModeHasBeenSet = true;
    }

    if (value.HasMember("BindRegion") && !value["BindRegion"].IsNull())
    {
        if (!value["BindRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BoundK8SInfo.BindRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindRegion = string(value["BindRegion"].GetString());
        m_bindRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BoundK8SInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_boundClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boundClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_boundClusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_boundClusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_syncModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SyncMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_syncMode.c_str(), allocator).Move(), allocator);
    }

    if (m_bindRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindRegion.c_str(), allocator).Move(), allocator);
    }

}


string BoundK8SInfo::GetBoundClusterId() const
{
    return m_boundClusterId;
}

void BoundK8SInfo::SetBoundClusterId(const string& _boundClusterId)
{
    m_boundClusterId = _boundClusterId;
    m_boundClusterIdHasBeenSet = true;
}

bool BoundK8SInfo::BoundClusterIdHasBeenSet() const
{
    return m_boundClusterIdHasBeenSet;
}

string BoundK8SInfo::GetBoundClusterType() const
{
    return m_boundClusterType;
}

void BoundK8SInfo::SetBoundClusterType(const string& _boundClusterType)
{
    m_boundClusterType = _boundClusterType;
    m_boundClusterTypeHasBeenSet = true;
}

bool BoundK8SInfo::BoundClusterTypeHasBeenSet() const
{
    return m_boundClusterTypeHasBeenSet;
}

string BoundK8SInfo::GetSyncMode() const
{
    return m_syncMode;
}

void BoundK8SInfo::SetSyncMode(const string& _syncMode)
{
    m_syncMode = _syncMode;
    m_syncModeHasBeenSet = true;
}

bool BoundK8SInfo::SyncModeHasBeenSet() const
{
    return m_syncModeHasBeenSet;
}

string BoundK8SInfo::GetBindRegion() const
{
    return m_bindRegion;
}

void BoundK8SInfo::SetBindRegion(const string& _bindRegion)
{
    m_bindRegion = _bindRegion;
    m_bindRegionHasBeenSet = true;
}

bool BoundK8SInfo::BindRegionHasBeenSet() const
{
    return m_bindRegionHasBeenSet;
}

