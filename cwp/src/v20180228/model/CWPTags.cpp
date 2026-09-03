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

#include <tencentcloud/cwp/v20180228/model/CWPTags.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CWPTags::CWPTags() :
    m_ridHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_tagIdHasBeenSet(false)
{
}

CoreInternalOutcome CWPTags::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rid") && !value["Rid"].IsNull())
    {
        if (!value["Rid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPTags.Rid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rid = value["Rid"].GetInt64();
        m_ridHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CWPTags.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TagId") && !value["TagId"].IsNull())
    {
        if (!value["TagId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CWPTags.TagId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagId = value["TagId"].GetInt64();
        m_tagIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CWPTags::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ridHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rid, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_tagIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagId, allocator);
    }

}


int64_t CWPTags::GetRid() const
{
    return m_rid;
}

void CWPTags::SetRid(const int64_t& _rid)
{
    m_rid = _rid;
    m_ridHasBeenSet = true;
}

bool CWPTags::RidHasBeenSet() const
{
    return m_ridHasBeenSet;
}

string CWPTags::GetName() const
{
    return m_name;
}

void CWPTags::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CWPTags::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t CWPTags::GetTagId() const
{
    return m_tagId;
}

void CWPTags::SetTagId(const int64_t& _tagId)
{
    m_tagId = _tagId;
    m_tagIdHasBeenSet = true;
}

bool CWPTags::TagIdHasBeenSet() const
{
    return m_tagIdHasBeenSet;
}

