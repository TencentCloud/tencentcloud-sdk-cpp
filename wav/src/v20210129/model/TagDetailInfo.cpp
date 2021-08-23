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

#include <tencentcloud/wav/v20210129/model/TagDetailInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

TagDetailInfo::TagDetailInfo() :
    m_tagNameHasBeenSet(false),
    m_bizTagIdHasBeenSet(false),
    m_tagIdHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome TagDetailInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagDetailInfo.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("BizTagId") && !value["BizTagId"].IsNull())
    {
        if (!value["BizTagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagDetailInfo.BizTagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizTagId = string(value["BizTagId"].GetString());
        m_bizTagIdHasBeenSet = true;
    }

    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagDetailInfo.TagId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = string(value["TagId"].GetString());
        m_tagIdHasBeenSet = true;
    }

    if (value.HasMember("Sort") && !value["Sort"].IsNull())
    {
        if (!value["Sort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagDetailInfo.Sort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sort = value["Sort"].GetUint64();
        m_sortHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TagDetailInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagDetailInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizTagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizTagId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagId.c_str(), allocator).Move(), allocator);
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

}


string TagDetailInfo::GetTagName() const
{
    return m_tagName;
}

void TagDetailInfo::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool TagDetailInfo::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string TagDetailInfo::GetBizTagId() const
{
    return m_bizTagId;
}

void TagDetailInfo::SetBizTagId(const string& _bizTagId)
{
    m_bizTagId = _bizTagId;
    m_bizTagIdHasBeenSet = true;
}

bool TagDetailInfo::BizTagIdHasBeenSet() const
{
    return m_bizTagIdHasBeenSet;
}

string TagDetailInfo::GetTagId() const
{
    return m_tagId;
}

void TagDetailInfo::SetTagId(const string& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool TagDetailInfo::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

uint64_t TagDetailInfo::GetSort() const
{
    return m_sort;
}

void TagDetailInfo::SetSort(const uint64_t& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool TagDetailInfo::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

uint64_t TagDetailInfo::GetCreateTime() const
{
    return m_createTime;
}

void TagDetailInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TagDetailInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

