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

#include <tencentcloud/iotexplorer/v20190423/model/ProjectEntryEx.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ProjectEntryEx::ProjectEntryEx() :
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_projectDescHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_productCountHasBeenSet(false),
    m_nativeAppCountHasBeenSet(false),
    m_webAppCountHasBeenSet(false)
{
}

CoreInternalOutcome ProjectEntryEx::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectDesc") && !value["ProjectDesc"].IsNull())
    {
        if (!value["ProjectDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.ProjectDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectDesc = string(value["ProjectDesc"].GetString());
        m_projectDescHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ProductCount") && !value["ProductCount"].IsNull())
    {
        if (!value["ProductCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.ProductCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_productCount = value["ProductCount"].GetUint64();
        m_productCountHasBeenSet = true;
    }

    if (value.HasMember("NativeAppCount") && !value["NativeAppCount"].IsNull())
    {
        if (!value["NativeAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.NativeAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nativeAppCount = value["NativeAppCount"].GetUint64();
        m_nativeAppCountHasBeenSet = true;
    }

    if (value.HasMember("WebAppCount") && !value["WebAppCount"].IsNull())
    {
        if (!value["WebAppCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectEntryEx.WebAppCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_webAppCount = value["WebAppCount"].GetUint64();
        m_webAppCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProjectEntryEx::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_projectDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_productCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProductCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productCount, allocator);
    }

    if (m_nativeAppCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NativeAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nativeAppCount, allocator);
    }

    if (m_webAppCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "WebAppCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_webAppCount, allocator);
    }

}


int64_t ProjectEntryEx::GetProjectId() const
{
    return m_projectId;
}

void ProjectEntryEx::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ProjectEntryEx::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string ProjectEntryEx::GetProjectName() const
{
    return m_projectName;
}

void ProjectEntryEx::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool ProjectEntryEx::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

string ProjectEntryEx::GetProjectDesc() const
{
    return m_projectDesc;
}

void ProjectEntryEx::SetProjectDesc(const string& _projectDesc)
{
    m_projectDesc = _projectDesc;
    m_projectDescHasBeenSet = true;
}

bool ProjectEntryEx::ProjectDescHasBeenSet() const
{
    return m_projectDescHasBeenSet;
}

uint64_t ProjectEntryEx::GetCreateTime() const
{
    return m_createTime;
}

void ProjectEntryEx::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProjectEntryEx::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProjectEntryEx::GetUpdateTime() const
{
    return m_updateTime;
}

void ProjectEntryEx::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProjectEntryEx::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ProjectEntryEx::GetProductCount() const
{
    return m_productCount;
}

void ProjectEntryEx::SetProductCount(const uint64_t& _productCount)
{
    m_productCount = _productCount;
    m_productCountHasBeenSet = true;
}

bool ProjectEntryEx::ProductCountHasBeenSet() const
{
    return m_productCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetNativeAppCount() const
{
    return m_nativeAppCount;
}

void ProjectEntryEx::SetNativeAppCount(const uint64_t& _nativeAppCount)
{
    m_nativeAppCount = _nativeAppCount;
    m_nativeAppCountHasBeenSet = true;
}

bool ProjectEntryEx::NativeAppCountHasBeenSet() const
{
    return m_nativeAppCountHasBeenSet;
}

uint64_t ProjectEntryEx::GetWebAppCount() const
{
    return m_webAppCount;
}

void ProjectEntryEx::SetWebAppCount(const uint64_t& _webAppCount)
{
    m_webAppCount = _webAppCount;
    m_webAppCountHasBeenSet = true;
}

bool ProjectEntryEx::WebAppCountHasBeenSet() const
{
    return m_webAppCountHasBeenSet;
}

