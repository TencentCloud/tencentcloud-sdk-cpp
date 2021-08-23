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

#include <tencentcloud/wss/v20180426/model/SSLProjectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wss::V20180426::Model;
using namespace std;

SSLProjectInfo::SSLProjectInfo() :
    m_projectIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome SSLProjectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.OwnerUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = value["OwnerUin"].GetInt64();
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.CreatorUin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = value["CreatorUin"].GetInt64();
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SSLProjectInfo.Info` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_info = string(value["Info"].GetString());
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SSLProjectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerUin, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creatorUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

}


string SSLProjectInfo::GetProjectId() const
{
    return m_projectId;
}

void SSLProjectInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool SSLProjectInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

int64_t SSLProjectInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void SSLProjectInfo::SetOwnerUin(const int64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool SSLProjectInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

string SSLProjectInfo::GetName() const
{
    return m_name;
}

void SSLProjectInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SSLProjectInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t SSLProjectInfo::GetCreatorUin() const
{
    return m_creatorUin;
}

void SSLProjectInfo::SetCreatorUin(const int64_t& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool SSLProjectInfo::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string SSLProjectInfo::GetCreateTime() const
{
    return m_createTime;
}

void SSLProjectInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SSLProjectInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SSLProjectInfo::GetInfo() const
{
    return m_info;
}

void SSLProjectInfo::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool SSLProjectInfo::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

