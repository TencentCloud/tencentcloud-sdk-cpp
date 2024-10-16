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

#include <tencentcloud/cls/v20201016/model/NoticeContentTemplate.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NoticeContentTemplate::NoticeContentTemplate() :
    m_noticeContentIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_noticeContentsHasBeenSet(false),
    m_flagHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContentTemplate::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NoticeContentId") && !value["NoticeContentId"].IsNull())
    {
        if (!value["NoticeContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.NoticeContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_noticeContentId = string(value["NoticeContentId"].GetString());
        m_noticeContentIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("NoticeContents") && !value["NoticeContents"].IsNull())
    {
        if (!value["NoticeContents"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.NoticeContents` is not array type"));

        const rapidjson::Value &tmpValue = value["NoticeContents"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NoticeContent item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_noticeContents.push_back(item);
        }
        m_noticeContentsHasBeenSet = true;
    }

    if (value.HasMember("Flag") && !value["Flag"].IsNull())
    {
        if (!value["Flag"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.Flag` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_flag = value["Flag"].GetUint64();
        m_flagHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.Uin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uin = value["Uin"].GetUint64();
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.SubUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = value["SubUin"].GetUint64();
        m_subUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContentTemplate.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContentTemplate::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_noticeContentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_noticeContentId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_noticeContentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NoticeContents";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_noticeContents.begin(); itr != m_noticeContents.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_flagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Flag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flag, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uin, allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subUin, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

}


string NoticeContentTemplate::GetNoticeContentId() const
{
    return m_noticeContentId;
}

void NoticeContentTemplate::SetNoticeContentId(const string& _noticeContentId)
{
    m_noticeContentId = _noticeContentId;
    m_noticeContentIdHasBeenSet = true;
}

bool NoticeContentTemplate::NoticeContentIdHasBeenSet() const
{
    return m_noticeContentIdHasBeenSet;
}

string NoticeContentTemplate::GetName() const
{
    return m_name;
}

void NoticeContentTemplate::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NoticeContentTemplate::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t NoticeContentTemplate::GetType() const
{
    return m_type;
}

void NoticeContentTemplate::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NoticeContentTemplate::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<NoticeContent> NoticeContentTemplate::GetNoticeContents() const
{
    return m_noticeContents;
}

void NoticeContentTemplate::SetNoticeContents(const vector<NoticeContent>& _noticeContents)
{
    m_noticeContents = _noticeContents;
    m_noticeContentsHasBeenSet = true;
}

bool NoticeContentTemplate::NoticeContentsHasBeenSet() const
{
    return m_noticeContentsHasBeenSet;
}

uint64_t NoticeContentTemplate::GetFlag() const
{
    return m_flag;
}

void NoticeContentTemplate::SetFlag(const uint64_t& _flag)
{
    m_flag = _flag;
    m_flagHasBeenSet = true;
}

bool NoticeContentTemplate::FlagHasBeenSet() const
{
    return m_flagHasBeenSet;
}

uint64_t NoticeContentTemplate::GetUin() const
{
    return m_uin;
}

void NoticeContentTemplate::SetUin(const uint64_t& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool NoticeContentTemplate::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

uint64_t NoticeContentTemplate::GetSubUin() const
{
    return m_subUin;
}

void NoticeContentTemplate::SetSubUin(const uint64_t& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool NoticeContentTemplate::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

int64_t NoticeContentTemplate::GetCreateTime() const
{
    return m_createTime;
}

void NoticeContentTemplate::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool NoticeContentTemplate::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t NoticeContentTemplate::GetUpdateTime() const
{
    return m_updateTime;
}

void NoticeContentTemplate::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool NoticeContentTemplate::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

