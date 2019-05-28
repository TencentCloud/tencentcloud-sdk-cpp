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

#include <tencentcloud/vod/v20180717/model/ModifyMediaInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ModifyMediaInfoRequest::ModifyMediaInfoRequest() :
    m_fileIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_classIdHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_coverDataHasBeenSet(false),
    m_addKeyFrameDescsHasBeenSet(false),
    m_deleteKeyFrameDescsHasBeenSet(false),
    m_clearKeyFrameDescsHasBeenSet(false),
    m_addTagsHasBeenSet(false),
    m_deleteTagsHasBeenSet(false),
    m_clearTagsHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ModifyMediaInfoRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_classIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClassId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_classId, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coverDataHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CoverData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_coverData.c_str(), allocator).Move(), allocator);
    }

    if (m_addKeyFrameDescsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddKeyFrameDescs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_addKeyFrameDescs.begin(); itr != m_addKeyFrameDescs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_deleteKeyFrameDescsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteKeyFrameDescs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_deleteKeyFrameDescs.begin(); itr != m_deleteKeyFrameDescs.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetDouble(*itr), allocator);
        }
    }

    if (m_clearKeyFrameDescsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClearKeyFrameDescs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearKeyFrameDescs, allocator);
    }

    if (m_addTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_addTags.begin(); itr != m_addTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deleteTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DeleteTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_deleteTags.begin(); itr != m_deleteTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clearTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClearTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_clearTags, allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMediaInfoRequest::GetFileId() const
{
    return m_fileId;
}

void ModifyMediaInfoRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool ModifyMediaInfoRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

string ModifyMediaInfoRequest::GetName() const
{
    return m_name;
}

void ModifyMediaInfoRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyMediaInfoRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyMediaInfoRequest::GetDescription() const
{
    return m_description;
}

void ModifyMediaInfoRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyMediaInfoRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyMediaInfoRequest::GetClassId() const
{
    return m_classId;
}

void ModifyMediaInfoRequest::SetClassId(const int64_t& _classId)
{
    m_classId = _classId;
    m_classIdHasBeenSet = true;
}

bool ModifyMediaInfoRequest::ClassIdHasBeenSet() const
{
    return m_classIdHasBeenSet;
}

string ModifyMediaInfoRequest::GetExpireTime() const
{
    return m_expireTime;
}

void ModifyMediaInfoRequest::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool ModifyMediaInfoRequest::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string ModifyMediaInfoRequest::GetCoverData() const
{
    return m_coverData;
}

void ModifyMediaInfoRequest::SetCoverData(const string& _coverData)
{
    m_coverData = _coverData;
    m_coverDataHasBeenSet = true;
}

bool ModifyMediaInfoRequest::CoverDataHasBeenSet() const
{
    return m_coverDataHasBeenSet;
}

vector<MediaKeyFrameDescItem> ModifyMediaInfoRequest::GetAddKeyFrameDescs() const
{
    return m_addKeyFrameDescs;
}

void ModifyMediaInfoRequest::SetAddKeyFrameDescs(const vector<MediaKeyFrameDescItem>& _addKeyFrameDescs)
{
    m_addKeyFrameDescs = _addKeyFrameDescs;
    m_addKeyFrameDescsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::AddKeyFrameDescsHasBeenSet() const
{
    return m_addKeyFrameDescsHasBeenSet;
}

vector<double> ModifyMediaInfoRequest::GetDeleteKeyFrameDescs() const
{
    return m_deleteKeyFrameDescs;
}

void ModifyMediaInfoRequest::SetDeleteKeyFrameDescs(const vector<double>& _deleteKeyFrameDescs)
{
    m_deleteKeyFrameDescs = _deleteKeyFrameDescs;
    m_deleteKeyFrameDescsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::DeleteKeyFrameDescsHasBeenSet() const
{
    return m_deleteKeyFrameDescsHasBeenSet;
}

int64_t ModifyMediaInfoRequest::GetClearKeyFrameDescs() const
{
    return m_clearKeyFrameDescs;
}

void ModifyMediaInfoRequest::SetClearKeyFrameDescs(const int64_t& _clearKeyFrameDescs)
{
    m_clearKeyFrameDescs = _clearKeyFrameDescs;
    m_clearKeyFrameDescsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::ClearKeyFrameDescsHasBeenSet() const
{
    return m_clearKeyFrameDescsHasBeenSet;
}

vector<string> ModifyMediaInfoRequest::GetAddTags() const
{
    return m_addTags;
}

void ModifyMediaInfoRequest::SetAddTags(const vector<string>& _addTags)
{
    m_addTags = _addTags;
    m_addTagsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::AddTagsHasBeenSet() const
{
    return m_addTagsHasBeenSet;
}

vector<string> ModifyMediaInfoRequest::GetDeleteTags() const
{
    return m_deleteTags;
}

void ModifyMediaInfoRequest::SetDeleteTags(const vector<string>& _deleteTags)
{
    m_deleteTags = _deleteTags;
    m_deleteTagsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::DeleteTagsHasBeenSet() const
{
    return m_deleteTagsHasBeenSet;
}

int64_t ModifyMediaInfoRequest::GetClearTags() const
{
    return m_clearTags;
}

void ModifyMediaInfoRequest::SetClearTags(const int64_t& _clearTags)
{
    m_clearTags = _clearTags;
    m_clearTagsHasBeenSet = true;
}

bool ModifyMediaInfoRequest::ClearTagsHasBeenSet() const
{
    return m_clearTagsHasBeenSet;
}

uint64_t ModifyMediaInfoRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyMediaInfoRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyMediaInfoRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


