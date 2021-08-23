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

#include <tencentcloud/ms/v20180408/model/ResourceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

ResourceInfo::ResourceInfo() :
    m_resourceIdHasBeenSet(false),
    m_pidHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isBindHasBeenSet(false),
    m_bindInfoHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

CoreInternalOutcome ResourceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("Pid") && !value["Pid"].IsNull())
    {
        if (!value["Pid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.Pid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pid = value["Pid"].GetUint64();
        m_pidHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ExpireTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetUint64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsBind") && !value["IsBind"].IsNull())
    {
        if (!value["IsBind"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.IsBind` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isBind = value["IsBind"].GetInt64();
        m_isBindHasBeenSet = true;
    }

    if (value.HasMember("BindInfo") && !value["BindInfo"].IsNull())
    {
        if (!value["BindInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.BindInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bindInfo.Deserialize(value["BindInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bindInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceName") && !value["ResourceName"].IsNull())
    {
        if (!value["ResourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceInfo.ResourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceName = string(value["ResourceName"].GetString());
        m_resourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_pidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pid, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_isBindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isBind, allocator);
    }

    if (m_bindInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bindInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceName.c_str(), allocator).Move(), allocator);
    }

}


string ResourceInfo::GetResourceId() const
{
    return m_resourceId;
}

void ResourceInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool ResourceInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t ResourceInfo::GetPid() const
{
    return m_pid;
}

void ResourceInfo::SetPid(const uint64_t& _pid)
{
    m_pid = _pid;
    m_pidHasBeenSet = true;
}

bool ResourceInfo::PidHasBeenSet() const
{
    return m_pidHasBeenSet;
}

uint64_t ResourceInfo::GetCreateTime() const
{
    return m_createTime;
}

void ResourceInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ResourceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ResourceInfo::GetExpireTime() const
{
    return m_expireTime;
}

void ResourceInfo::SetExpireTime(const uint64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ResourceInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t ResourceInfo::GetIsBind() const
{
    return m_isBind;
}

void ResourceInfo::SetIsBind(const int64_t& _isBind)
{
    m_isBind = _isBind;
    m_isBindHasBeenSet = true;
}

bool ResourceInfo::IsBindHasBeenSet() const
{
    return m_isBindHasBeenSet;
}

BindInfo ResourceInfo::GetBindInfo() const
{
    return m_bindInfo;
}

void ResourceInfo::SetBindInfo(const BindInfo& _bindInfo)
{
    m_bindInfo = _bindInfo;
    m_bindInfoHasBeenSet = true;
}

bool ResourceInfo::BindInfoHasBeenSet() const
{
    return m_bindInfoHasBeenSet;
}

string ResourceInfo::GetResourceName() const
{
    return m_resourceName;
}

void ResourceInfo::SetResourceName(const string& _resourceName)
{
    m_resourceName = _resourceName;
    m_resourceNameHasBeenSet = true;
}

bool ResourceInfo::ResourceNameHasBeenSet() const
{
    return m_resourceNameHasBeenSet;
}

