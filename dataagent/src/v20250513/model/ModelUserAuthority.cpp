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

#include <tencentcloud/dataagent/v20250513/model/ModelUserAuthority.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ModelUserAuthority::ModelUserAuthority() :
    m_instanceIdHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_objectIdHasBeenSet(false),
    m_useScopeHasBeenSet(false),
    m_authorityUinsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ModelUserAuthority::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("ObjectId") && !value["ObjectId"].IsNull())
    {
        if (!value["ObjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.ObjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectId = string(value["ObjectId"].GetString());
        m_objectIdHasBeenSet = true;
    }

    if (value.HasMember("UseScope") && !value["UseScope"].IsNull())
    {
        if (!value["UseScope"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.UseScope` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_useScope = value["UseScope"].GetInt64();
        m_useScopeHasBeenSet = true;
    }

    if (value.HasMember("AuthorityUins") && !value["AuthorityUins"].IsNull())
    {
        if (!value["AuthorityUins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.AuthorityUins` is not array type"));

        const rapidjson::Value &tmpValue = value["AuthorityUins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_authorityUins.push_back((*itr).GetString());
        }
        m_authorityUinsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelUserAuthority.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelUserAuthority::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_objectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectId.c_str(), allocator).Move(), allocator);
    }

    if (m_useScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_useScope, allocator);
    }

    if (m_authorityUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorityUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_authorityUins.begin(); itr != m_authorityUins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string ModelUserAuthority::GetInstanceId() const
{
    return m_instanceId;
}

void ModelUserAuthority::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModelUserAuthority::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModelUserAuthority::GetModule() const
{
    return m_module;
}

void ModelUserAuthority::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool ModelUserAuthority::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string ModelUserAuthority::GetCreatorUin() const
{
    return m_creatorUin;
}

void ModelUserAuthority::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool ModelUserAuthority::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string ModelUserAuthority::GetObjectId() const
{
    return m_objectId;
}

void ModelUserAuthority::SetObjectId(const string& _objectId)
{
    m_objectId = _objectId;
    m_objectIdHasBeenSet = true;
}

bool ModelUserAuthority::ObjectIdHasBeenSet() const
{
    return m_objectIdHasBeenSet;
}

int64_t ModelUserAuthority::GetUseScope() const
{
    return m_useScope;
}

void ModelUserAuthority::SetUseScope(const int64_t& _useScope)
{
    m_useScope = _useScope;
    m_useScopeHasBeenSet = true;
}

bool ModelUserAuthority::UseScopeHasBeenSet() const
{
    return m_useScopeHasBeenSet;
}

vector<string> ModelUserAuthority::GetAuthorityUins() const
{
    return m_authorityUins;
}

void ModelUserAuthority::SetAuthorityUins(const vector<string>& _authorityUins)
{
    m_authorityUins = _authorityUins;
    m_authorityUinsHasBeenSet = true;
}

bool ModelUserAuthority::AuthorityUinsHasBeenSet() const
{
    return m_authorityUinsHasBeenSet;
}

string ModelUserAuthority::GetCreateTime() const
{
    return m_createTime;
}

void ModelUserAuthority::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ModelUserAuthority::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ModelUserAuthority::GetUpdateTime() const
{
    return m_updateTime;
}

void ModelUserAuthority::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ModelUserAuthority::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

