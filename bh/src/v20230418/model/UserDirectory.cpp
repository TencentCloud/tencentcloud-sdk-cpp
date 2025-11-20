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

#include <tencentcloud/bh/v20230418/model/UserDirectory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

UserDirectory::UserDirectory() :
    m_idHasBeenSet(false),
    m_dirIdHasBeenSet(false),
    m_dirNameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_userTotalHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_userOrgSetHasBeenSet(false)
{
}

CoreInternalOutcome UserDirectory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DirId") && !value["DirId"].IsNull())
    {
        if (!value["DirId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.DirId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_dirId = value["DirId"].GetUint64();
        m_dirIdHasBeenSet = true;
    }

    if (value.HasMember("DirName") && !value["DirName"].IsNull())
    {
        if (!value["DirName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.DirName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dirName = string(value["DirName"].GetString());
        m_dirNameHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.Source` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetUint64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("UserTotal") && !value["UserTotal"].IsNull())
    {
        if (!value["UserTotal"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.UserTotal` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userTotal = value["UserTotal"].GetUint64();
        m_userTotalHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDirectory.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UserOrgSet") && !value["UserOrgSet"].IsNull())
    {
        if (!value["UserOrgSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UserDirectory.UserOrgSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UserOrgSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserOrg item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_userOrgSet.push_back(item);
        }
        m_userOrgSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDirectory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_dirIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dirId, allocator);
    }

    if (m_dirNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dirName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_userTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userTotal, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userOrgSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserOrgSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_userOrgSet.begin(); itr != m_userOrgSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t UserDirectory::GetId() const
{
    return m_id;
}

void UserDirectory::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UserDirectory::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t UserDirectory::GetDirId() const
{
    return m_dirId;
}

void UserDirectory::SetDirId(const uint64_t& _dirId)
{
    m_dirId = _dirId;
    m_dirIdHasBeenSet = true;
}

bool UserDirectory::DirIdHasBeenSet() const
{
    return m_dirIdHasBeenSet;
}

string UserDirectory::GetDirName() const
{
    return m_dirName;
}

void UserDirectory::SetDirName(const string& _dirName)
{
    m_dirName = _dirName;
    m_dirNameHasBeenSet = true;
}

bool UserDirectory::DirNameHasBeenSet() const
{
    return m_dirNameHasBeenSet;
}

uint64_t UserDirectory::GetSource() const
{
    return m_source;
}

void UserDirectory::SetSource(const uint64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool UserDirectory::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string UserDirectory::GetSourceName() const
{
    return m_sourceName;
}

void UserDirectory::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool UserDirectory::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

uint64_t UserDirectory::GetUserTotal() const
{
    return m_userTotal;
}

void UserDirectory::SetUserTotal(const uint64_t& _userTotal)
{
    m_userTotal = _userTotal;
    m_userTotalHasBeenSet = true;
}

bool UserDirectory::UserTotalHasBeenSet() const
{
    return m_userTotalHasBeenSet;
}

string UserDirectory::GetCreateTime() const
{
    return m_createTime;
}

void UserDirectory::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UserDirectory::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<UserOrg> UserDirectory::GetUserOrgSet() const
{
    return m_userOrgSet;
}

void UserDirectory::SetUserOrgSet(const vector<UserOrg>& _userOrgSet)
{
    m_userOrgSet = _userOrgSet;
    m_userOrgSetHasBeenSet = true;
}

bool UserDirectory::UserOrgSetHasBeenSet() const
{
    return m_userOrgSetHasBeenSet;
}

