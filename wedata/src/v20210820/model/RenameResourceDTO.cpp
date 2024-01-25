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

#include <tencentcloud/wedata/v20210820/model/RenameResourceDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RenameResourceDTO::RenameResourceDTO() :
    m_renameSuccessHasBeenSet(false),
    m_updateUserHasBeenSet(false),
    m_updateUserIdHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_fullPathHasBeenSet(false)
{
}

CoreInternalOutcome RenameResourceDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RenameSuccess") && !value["RenameSuccess"].IsNull())
    {
        if (!value["RenameSuccess"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RenameResourceDTO.RenameSuccess` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renameSuccess = value["RenameSuccess"].GetBool();
        m_renameSuccessHasBeenSet = true;
    }

    if (value.HasMember("UpdateUser") && !value["UpdateUser"].IsNull())
    {
        if (!value["UpdateUser"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenameResourceDTO.UpdateUser` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUser = string(value["UpdateUser"].GetString());
        m_updateUserHasBeenSet = true;
    }

    if (value.HasMember("UpdateUserId") && !value["UpdateUserId"].IsNull())
    {
        if (!value["UpdateUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenameResourceDTO.UpdateUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateUserId = string(value["UpdateUserId"].GetString());
        m_updateUserIdHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RenameResourceDTO.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("FullPath") && !value["FullPath"].IsNull())
    {
        if (!value["FullPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenameResourceDTO.FullPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullPath = string(value["FullPath"].GetString());
        m_fullPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenameResourceDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_renameSuccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenameSuccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renameSuccess, allocator);
    }

    if (m_updateUserHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUser";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUser.c_str(), allocator).Move(), allocator);
    }

    if (m_updateUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_fullPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullPath.c_str(), allocator).Move(), allocator);
    }

}


bool RenameResourceDTO::GetRenameSuccess() const
{
    return m_renameSuccess;
}

void RenameResourceDTO::SetRenameSuccess(const bool& _renameSuccess)
{
    m_renameSuccess = _renameSuccess;
    m_renameSuccessHasBeenSet = true;
}

bool RenameResourceDTO::RenameSuccessHasBeenSet() const
{
    return m_renameSuccessHasBeenSet;
}

string RenameResourceDTO::GetUpdateUser() const
{
    return m_updateUser;
}

void RenameResourceDTO::SetUpdateUser(const string& _updateUser)
{
    m_updateUser = _updateUser;
    m_updateUserHasBeenSet = true;
}

bool RenameResourceDTO::UpdateUserHasBeenSet() const
{
    return m_updateUserHasBeenSet;
}

string RenameResourceDTO::GetUpdateUserId() const
{
    return m_updateUserId;
}

void RenameResourceDTO::SetUpdateUserId(const string& _updateUserId)
{
    m_updateUserId = _updateUserId;
    m_updateUserIdHasBeenSet = true;
}

bool RenameResourceDTO::UpdateUserIdHasBeenSet() const
{
    return m_updateUserIdHasBeenSet;
}

int64_t RenameResourceDTO::GetUpdateTime() const
{
    return m_updateTime;
}

void RenameResourceDTO::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RenameResourceDTO::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RenameResourceDTO::GetFullPath() const
{
    return m_fullPath;
}

void RenameResourceDTO::SetFullPath(const string& _fullPath)
{
    m_fullPath = _fullPath;
    m_fullPathHasBeenSet = true;
}

bool RenameResourceDTO::FullPathHasBeenSet() const
{
    return m_fullPathHasBeenSet;
}

