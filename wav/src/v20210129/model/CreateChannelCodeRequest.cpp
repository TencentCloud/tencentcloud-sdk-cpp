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

#include <tencentcloud/wav/v20210129/model/CreateChannelCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

CreateChannelCodeRequest::CreateChannelCodeRequest() :
    m_typeHasBeenSet(false),
    m_useUserIdHasBeenSet(false),
    m_useUserOpenIdHasBeenSet(false),
    m_appIdsHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_skipVerifyHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_sourceTypeHasBeenSet(false)
{
}

string CreateChannelCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_useUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_useUserId.begin(); itr != m_useUserId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_useUserOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UseUserOpenId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_useUserOpenId.begin(); itr != m_useUserOpenId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_appIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appIds.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tag.begin(); itr != m_tag.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_skipVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkipVerify";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skipVerify, allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_msgId, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateChannelCodeRequest::GetType() const
{
    return m_type;
}

void CreateChannelCodeRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateChannelCodeRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<int64_t> CreateChannelCodeRequest::GetUseUserId() const
{
    return m_useUserId;
}

void CreateChannelCodeRequest::SetUseUserId(const vector<int64_t>& _useUserId)
{
    m_useUserId = _useUserId;
    m_useUserIdHasBeenSet = true;
}

bool CreateChannelCodeRequest::UseUserIdHasBeenSet() const
{
    return m_useUserIdHasBeenSet;
}

vector<string> CreateChannelCodeRequest::GetUseUserOpenId() const
{
    return m_useUserOpenId;
}

void CreateChannelCodeRequest::SetUseUserOpenId(const vector<string>& _useUserOpenId)
{
    m_useUserOpenId = _useUserOpenId;
    m_useUserOpenIdHasBeenSet = true;
}

bool CreateChannelCodeRequest::UseUserOpenIdHasBeenSet() const
{
    return m_useUserOpenIdHasBeenSet;
}

string CreateChannelCodeRequest::GetAppIds() const
{
    return m_appIds;
}

void CreateChannelCodeRequest::SetAppIds(const string& _appIds)
{
    m_appIds = _appIds;
    m_appIdsHasBeenSet = true;
}

bool CreateChannelCodeRequest::AppIdsHasBeenSet() const
{
    return m_appIdsHasBeenSet;
}

string CreateChannelCodeRequest::GetSource() const
{
    return m_source;
}

void CreateChannelCodeRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateChannelCodeRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateChannelCodeRequest::GetSourceName() const
{
    return m_sourceName;
}

void CreateChannelCodeRequest::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool CreateChannelCodeRequest::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string CreateChannelCodeRequest::GetName() const
{
    return m_name;
}

void CreateChannelCodeRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateChannelCodeRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<WeComTagDetail> CreateChannelCodeRequest::GetTag() const
{
    return m_tag;
}

void CreateChannelCodeRequest::SetTag(const vector<WeComTagDetail>& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool CreateChannelCodeRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

int64_t CreateChannelCodeRequest::GetSkipVerify() const
{
    return m_skipVerify;
}

void CreateChannelCodeRequest::SetSkipVerify(const int64_t& _skipVerify)
{
    m_skipVerify = _skipVerify;
    m_skipVerifyHasBeenSet = true;
}

bool CreateChannelCodeRequest::SkipVerifyHasBeenSet() const
{
    return m_skipVerifyHasBeenSet;
}

int64_t CreateChannelCodeRequest::GetMsgId() const
{
    return m_msgId;
}

void CreateChannelCodeRequest::SetMsgId(const int64_t& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool CreateChannelCodeRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string CreateChannelCodeRequest::GetRemark() const
{
    return m_remark;
}

void CreateChannelCodeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateChannelCodeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t CreateChannelCodeRequest::GetSourceType() const
{
    return m_sourceType;
}

void CreateChannelCodeRequest::SetSourceType(const int64_t& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool CreateChannelCodeRequest::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}


