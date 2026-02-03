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

#include <tencentcloud/cynosdb/v20190107/model/ReplicationObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

ReplicationObject::ReplicationObject() :
    m_srcInstanceTypeHasBeenSet(false),
    m_srcClusterIdHasBeenSet(false),
    m_srcInstanceIdHasBeenSet(false),
    m_replicationJobIdHasBeenSet(false),
    m_migrateObjectsHasBeenSet(false)
{
}

CoreInternalOutcome ReplicationObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SrcInstanceType") && !value["SrcInstanceType"].IsNull())
    {
        if (!value["SrcInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationObject.SrcInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceType = string(value["SrcInstanceType"].GetString());
        m_srcInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcClusterId") && !value["SrcClusterId"].IsNull())
    {
        if (!value["SrcClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationObject.SrcClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcClusterId = string(value["SrcClusterId"].GetString());
        m_srcClusterIdHasBeenSet = true;
    }

    if (value.HasMember("SrcInstanceId") && !value["SrcInstanceId"].IsNull())
    {
        if (!value["SrcInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationObject.SrcInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcInstanceId = string(value["SrcInstanceId"].GetString());
        m_srcInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("ReplicationJobId") && !value["ReplicationJobId"].IsNull())
    {
        if (!value["ReplicationJobId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationObject.ReplicationJobId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replicationJobId = string(value["ReplicationJobId"].GetString());
        m_replicationJobIdHasBeenSet = true;
    }

    if (value.HasMember("MigrateObjects") && !value["MigrateObjects"].IsNull())
    {
        if (!value["MigrateObjects"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReplicationObject.MigrateObjects` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_migrateObjects.Deserialize(value["MigrateObjects"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_migrateObjectsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReplicationObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_srcInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_replicationJobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplicationJobId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replicationJobId.c_str(), allocator).Move(), allocator);
    }

    if (m_migrateObjectsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrateObjects";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_migrateObjects.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReplicationObject::GetSrcInstanceType() const
{
    return m_srcInstanceType;
}

void ReplicationObject::SetSrcInstanceType(const string& _srcInstanceType)
{
    m_srcInstanceType = _srcInstanceType;
    m_srcInstanceTypeHasBeenSet = true;
}

bool ReplicationObject::SrcInstanceTypeHasBeenSet() const
{
    return m_srcInstanceTypeHasBeenSet;
}

string ReplicationObject::GetSrcClusterId() const
{
    return m_srcClusterId;
}

void ReplicationObject::SetSrcClusterId(const string& _srcClusterId)
{
    m_srcClusterId = _srcClusterId;
    m_srcClusterIdHasBeenSet = true;
}

bool ReplicationObject::SrcClusterIdHasBeenSet() const
{
    return m_srcClusterIdHasBeenSet;
}

string ReplicationObject::GetSrcInstanceId() const
{
    return m_srcInstanceId;
}

void ReplicationObject::SetSrcInstanceId(const string& _srcInstanceId)
{
    m_srcInstanceId = _srcInstanceId;
    m_srcInstanceIdHasBeenSet = true;
}

bool ReplicationObject::SrcInstanceIdHasBeenSet() const
{
    return m_srcInstanceIdHasBeenSet;
}

string ReplicationObject::GetReplicationJobId() const
{
    return m_replicationJobId;
}

void ReplicationObject::SetReplicationJobId(const string& _replicationJobId)
{
    m_replicationJobId = _replicationJobId;
    m_replicationJobIdHasBeenSet = true;
}

bool ReplicationObject::ReplicationJobIdHasBeenSet() const
{
    return m_replicationJobIdHasBeenSet;
}

MigrateOpt ReplicationObject::GetMigrateObjects() const
{
    return m_migrateObjects;
}

void ReplicationObject::SetMigrateObjects(const MigrateOpt& _migrateObjects)
{
    m_migrateObjects = _migrateObjects;
    m_migrateObjectsHasBeenSet = true;
}

bool ReplicationObject::MigrateObjectsHasBeenSet() const
{
    return m_migrateObjectsHasBeenSet;
}

