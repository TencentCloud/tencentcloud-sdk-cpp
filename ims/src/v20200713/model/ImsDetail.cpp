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

#include <tencentcloud/ims/v20200713/model/ImsDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20200713::Model;
using namespace std;

ImsDetail::ImsDetail() :
    m_contentHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_evilTypeHasBeenSet(false),
    m_moderationTimeHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_contentIdHasBeenSet(false),
    m_operEvilTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImsDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.Content` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_content = string(value["Content"].GetString());
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("DataSource") && !value["DataSource"].IsNull())
    {
        if (!value["DataSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.DataSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataSource = value["DataSource"].GetInt64();
        m_dataSourceHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("EvilType") && !value["EvilType"].IsNull())
    {
        if (!value["EvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.EvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_evilType = value["EvilType"].GetInt64();
        m_evilTypeHasBeenSet = true;
    }

    if (value.HasMember("ModerationTime") && !value["ModerationTime"].IsNull())
    {
        if (!value["ModerationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.ModerationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_moderationTime = string(value["ModerationTime"].GetString());
        m_moderationTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("OperEvilType") && !value["OperEvilType"].IsNull())
    {
        if (!value["OperEvilType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImsDetail.OperEvilType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operEvilType = value["OperEvilType"].GetInt64();
        m_operEvilTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImsDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataSource, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_evilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_evilType, allocator);
    }

    if (m_moderationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModerationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_moderationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_operEvilTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperEvilType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operEvilType, allocator);
    }

}


string ImsDetail::GetContent() const
{
    return m_content;
}

void ImsDetail::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool ImsDetail::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

int64_t ImsDetail::GetDataSource() const
{
    return m_dataSource;
}

void ImsDetail::SetDataSource(const int64_t& _dataSource)
{
    m_dataSource = _dataSource;
    m_dataSourceHasBeenSet = true;
}

bool ImsDetail::DataSourceHasBeenSet() const
{
    return m_dataSourceHasBeenSet;
}

string ImsDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void ImsDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImsDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t ImsDetail::GetEvilType() const
{
    return m_evilType;
}

void ImsDetail::SetEvilType(const int64_t& _evilType)
{
    m_evilType = _evilType;
    m_evilTypeHasBeenSet = true;
}

bool ImsDetail::EvilTypeHasBeenSet() const
{
    return m_evilTypeHasBeenSet;
}

string ImsDetail::GetModerationTime() const
{
    return m_moderationTime;
}

void ImsDetail::SetModerationTime(const string& _moderationTime)
{
    m_moderationTime = _moderationTime;
    m_moderationTimeHasBeenSet = true;
}

bool ImsDetail::ModerationTimeHasBeenSet() const
{
    return m_moderationTimeHasBeenSet;
}

string ImsDetail::GetUpdateUser() const
{
    return m_updateUser;
}

void ImsDetail::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool ImsDetail::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string ImsDetail::GetContentId() const
{
    return m_contentId;
}

void ImsDetail::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool ImsDetail::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

int64_t ImsDetail::GetOperEvilType() const
{
    return m_operEvilType;
}

void ImsDetail::SetOperEvilType(const int64_t& _operEvilType)
{
    m_operEvilType = _operEvilType;
    m_operEvilTypeHasBeenSet = true;
}

bool ImsDetail::OperEvilTypeHasBeenSet() const
{
    return m_operEvilTypeHasBeenSet;
}

