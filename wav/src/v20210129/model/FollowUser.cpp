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

#include <tencentcloud/wav/v20210129/model/FollowUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

FollowUser::FollowUser() :
    m_userIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_addWayHasBeenSet(false),
    m_operUserIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome FollowUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AddWay") && !value["AddWay"].IsNull())
    {
        if (!value["AddWay"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.AddWay` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addWay = value["AddWay"].GetInt64();
        m_addWayHasBeenSet = true;
    }

    if (value.HasMember("OperUserId") && !value["OperUserId"].IsNull())
    {
        if (!value["OperUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowUser.OperUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operUserId = string(value["OperUserId"].GetString());
        m_operUserIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FollowUser.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ExternalContactTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FollowUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_addWayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddWay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addWay, allocator);
    }

    if (m_operUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string FollowUser::GetUserId() const
{
    return m_userId;
}

void FollowUser::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool FollowUser::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string FollowUser::GetRemark() const
{
    return m_remark;
}

void FollowUser::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool FollowUser::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string FollowUser::GetDescription() const
{
    return m_description;
}

void FollowUser::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FollowUser::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t FollowUser::GetCreateTime() const
{
    return m_createTime;
}

void FollowUser::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FollowUser::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t FollowUser::GetAddWay() const
{
    return m_addWay;
}

void FollowUser::SetAddWay(const int64_t& _addWay)
{
    m_addWay = _addWay;
    m_addWayHasBeenSet = true;
}

bool FollowUser::AddWayHasBeenSet() const
{
    return m_addWayHasBeenSet;
}

string FollowUser::GetOperUserId() const
{
    return m_operUserId;
}

void FollowUser::SetOperUserId(const string& _operUserId)
{
    m_operUserId = _operUserId;
    m_operUserIdHasBeenSet = true;
}

bool FollowUser::OperUserIdHasBeenSet() const
{
    return m_operUserIdHasBeenSet;
}

vector<ExternalContactTag> FollowUser::GetTags() const
{
    return m_tags;
}

void FollowUser::SetTags(const vector<ExternalContactTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool FollowUser::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

