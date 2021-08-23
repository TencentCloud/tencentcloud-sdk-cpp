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

#include <tencentcloud/wav/v20210129/model/TagGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

TagGroup::TagGroup() :
    m_groupIdHasBeenSet(false),
    m_bizGroupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome TagGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagGroup.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("BizGroupId") && !value["BizGroupId"].IsNull())
    {
        if (!value["BizGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagGroup.BizGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizGroupId = string(value["BizGroupId"].GetString());
        m_bizGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagGroup.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagGroup.Sort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetUint64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagGroup.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagGroup.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagDetailInfo item;
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

void TagGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sort, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
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


string TagGroup::GetGroupId() const
{
    return m_groupId;
}

void TagGroup::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool TagGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string TagGroup::GetBizGroupId() const
{
    return m_bizGroupId;
}

void TagGroup::SetBizGroupId(const string& _bizGroupId)
{
    m_bizGroupId = _bizGroupId;
    m_bizGroupIdHasBeenSet = true;
}

bool TagGroup::BizGroupIdHasBeenSet() const
{
    return m_bizGroupIdHasBeenSet;
}

string TagGroup::GetGroupName() const
{
    return m_groupName;
}

void TagGroup::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool TagGroup::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t TagGroup::GetSort() const
{
    return m_sort;
}

void TagGroup::SetSort(const uint64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool TagGroup::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t TagGroup::GetCreateTime() const
{
    return m_createTime;
}

void TagGroup::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TagGroup::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<TagDetailInfo> TagGroup::GetTags() const
{
    return m_tags;
}

void TagGroup::SetTags(const vector<TagDetailInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool TagGroup::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

