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

#include <tencentcloud/csip/v20221121/model/ImageVirusWhitelistDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageVirusWhitelistDetail::ImageVirusWhitelistDetail() :
    m_ruleIdHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_md5ListHasBeenSet(false)
{
}

CoreInternalOutcome ImageVirusWhitelistDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.ImageIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_imageIds.push_back((*itr).GetUint64());
        }
        m_imageIdsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Md5List") && !value["Md5List"].IsNull())
    {
        if (!value["Md5List"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVirusWhitelistDetail.Md5List` is not array type"));

        const rapidjson::Value &tmpValue = value["Md5List"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_md5List.push_back((*itr).GetString());
        }
        m_md5ListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVirusWhitelistDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scope, allocator);
    }

    if (m_imageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_imageIds.begin(); itr != m_imageIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

}


uint64_t ImageVirusWhitelistDetail::GetRuleId() const
{
    return m_ruleId;
}

void ImageVirusWhitelistDetail::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ImageVirusWhitelistDetail::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageVirusWhitelistDetail::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageVirusWhitelistDetail::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageVirusWhitelistDetail::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageVirusWhitelistDetail::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageVirusWhitelistDetail::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

uint64_t ImageVirusWhitelistDetail::GetScope() const
{
    return m_scope;
}

void ImageVirusWhitelistDetail::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<uint64_t> ImageVirusWhitelistDetail::GetImageIds() const
{
    return m_imageIds;
}

void ImageVirusWhitelistDetail::SetImageIds(const vector<uint64_t>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string ImageVirusWhitelistDetail::GetRemark() const
{
    return m_remark;
}

void ImageVirusWhitelistDetail::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<string> ImageVirusWhitelistDetail::GetMd5List() const
{
    return m_md5List;
}

void ImageVirusWhitelistDetail::SetMd5List(const vector<string>& _md5List)
{
    m_md5List = _md5List;
    m_md5ListHasBeenSet = true;
}

bool ImageVirusWhitelistDetail::Md5ListHasBeenSet() const
{
    return m_md5ListHasBeenSet;
}

