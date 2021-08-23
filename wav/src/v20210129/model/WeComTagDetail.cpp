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

#include <tencentcloud/wav/v20210129/model/WeComTagDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

WeComTagDetail::WeComTagDetail() :
    m_groupNameHasBeenSet(false),
    m_bizGroupIdHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_bizTagIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_bizTagIdStrHasBeenSet(false)
{
}

CoreInternalOutcome WeComTagDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("BizGroupId") && !value["BizGroupId"].IsNull())
    {
        if (!value["BizGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.BizGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizGroupId = string(value["BizGroupId"].GetString());
        m_bizGroupIdHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("BizTagId") && !value["BizTagId"].IsNull())
    {
        if (!value["BizTagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.BizTagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizTagId = string(value["BizTagId"].GetString());
        m_bizTagIdHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("BizTagIdStr") && !value["BizTagIdStr"].IsNull())
    {
        if (!value["BizTagIdStr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WeComTagDetail.BizTagIdStr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizTagIdStr = string(value["BizTagIdStr"].GetString());
        m_bizTagIdStrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WeComTagDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_bizGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizTagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizTagId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_bizTagIdStrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizTagIdStr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizTagIdStr.c_str(), allocator).Move(), allocator);
    }

}


string WeComTagDetail::GetGroupName() const
{
    return m_groupName;
}

void WeComTagDetail::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool WeComTagDetail::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string WeComTagDetail::GetBizGroupId() const
{
    return m_bizGroupId;
}

void WeComTagDetail::SetBizGroupId(const string& _bizGroupId)
{
    m_bizGroupId = _bizGroupId;
    m_bizGroupIdHasBeenSet = true;
}

bool WeComTagDetail::BizGroupIdHasBeenSet() const
{
    return m_bizGroupIdHasBeenSet;
}

string WeComTagDetail::GetTagName() const
{
    return m_tagName;
}

void WeComTagDetail::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool WeComTagDetail::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string WeComTagDetail::GetTagId() const
{
    return m_tagId;
}

void WeComTagDetail::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool WeComTagDetail::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

string WeComTagDetail::GetBizTagId() const
{
    return m_bizTagId;
}

void WeComTagDetail::SetBizTagId(const string& _bizTagId)
{
    m_bizTagId = _bizTagId;
    m_bizTagIdHasBeenSet = true;
}

bool WeComTagDetail::BizTagIdHasBeenSet() const
{
    return m_bizTagIdHasBeenSet;
}

int64_t WeComTagDetail::GetType() const
{
    return m_type;
}

void WeComTagDetail::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool WeComTagDetail::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string WeComTagDetail::GetBizTagIdStr() const
{
    return m_bizTagIdStr;
}

void WeComTagDetail::SetBizTagIdStr(const string& _bizTagIdStr)
{
    m_bizTagIdStr = _bizTagIdStr;
    m_bizTagIdStrHasBeenSet = true;
}

bool WeComTagDetail::BizTagIdStrHasBeenSet() const
{
    return m_bizTagIdStrHasBeenSet;
}

