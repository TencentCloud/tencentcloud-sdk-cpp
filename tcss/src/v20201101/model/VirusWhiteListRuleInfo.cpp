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

#include <tencentcloud/tcss/v20201101/model/VirusWhiteListRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VirusWhiteListRuleInfo::VirusWhiteListRuleInfo() :
    m_idHasBeenSet(false),
    m_md5ListHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_imageCountHasBeenSet(false),
    m_md5CountHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_insertTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome VirusWhiteListRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Md5List") && !value["Md5List"].IsNull())
    {
        if (!value["Md5List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.Md5List` is not array type"));

        const rapidjson::Value &tmpValue = value["Md5List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_md5List.push_back((*itr).GetString());
        }
        m_md5ListHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetString());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ImageCount") && !value["ImageCount"].IsNull())
    {
        if (!value["ImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.ImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageCount = value["ImageCount"].GetUint64();
        m_imageCountHasBeenSet = true;
    }

    if (value.HasMember("Md5Count") && !value["Md5Count"].IsNull())
    {
        if (!value["Md5Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.Md5Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_md5Count = value["Md5Count"].GetUint64();
        m_md5CountHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusWhiteListRuleInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirusWhiteListRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_md5ListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5List";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_md5List.begin(); itr != m_md5List.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_imageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageCount, allocator);
    }

    if (m_md5CountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Md5Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_md5Count, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t VirusWhiteListRuleInfo::GetId() const
{
    return m_id;
}

void VirusWhiteListRuleInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<string> VirusWhiteListRuleInfo::GetMd5List() const
{
    return m_md5List;
}

void VirusWhiteListRuleInfo::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

vector<string> VirusWhiteListRuleInfo::GetImageIds() const
{
    return m_imageIds;
}

void VirusWhiteListRuleInfo::SetImageIds(const vector<string>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

uint64_t VirusWhiteListRuleInfo::GetScope() const
{
    return m_scope;
}

void VirusWhiteListRuleInfo::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

uint64_t VirusWhiteListRuleInfo::GetImageCount() const
{
    return m_imageCount;
}

void VirusWhiteListRuleInfo::SetImageCount(const uint64_t& _imageCount)
{
    m_imageCount = _imageCount;
    m_imageCountHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::ImageCountHasBeenSet() const
{
    return m_imageCountHasBeenSet;
}

uint64_t VirusWhiteListRuleInfo::GetMd5Count() const
{
    return m_md5Count;
}

void VirusWhiteListRuleInfo::SetMd5Count(const uint64_t& _md5Count)
{
    m_md5Count = _md5Count;
    m_md5CountHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::Md5CountHasBeenSet() const
{
    return m_md5CountHasBeenSet;
}

string VirusWhiteListRuleInfo::GetRemark() const
{
    return m_remark;
}

void VirusWhiteListRuleInfo::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string VirusWhiteListRuleInfo::GetInsertTime() const
{
    return m_insertTime;
}

void VirusWhiteListRuleInfo::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string VirusWhiteListRuleInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void VirusWhiteListRuleInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool VirusWhiteListRuleInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

