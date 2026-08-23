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

#include <tencentcloud/csip/v20221121/model/ImageVulWhitelist.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageVulWhitelist::ImageVulWhitelist() :
    m_ruleIdHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_imageIdsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_pocIdHasBeenSet(false),
    m_vulNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome ImageVulWhitelist::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.RuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetUint64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.Scope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_scope = value["Scope"].GetUint64();
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ImageIds") && !value["ImageIds"].IsNull())
    {
        if (!value["ImageIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.ImageIds` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("PocId") && !value["PocId"].IsNull())
    {
        if (!value["PocId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.PocId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pocId = string(value["PocId"].GetString());
        m_pocIdHasBeenSet = true;
    }

    if (value.HasMember("VulName") && !value["VulName"].IsNull())
    {
        if (!value["VulName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.VulName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vulName = string(value["VulName"].GetString());
        m_vulNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVulWhitelist.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVulWhitelist::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pocIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PocId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pocId.c_str(), allocator).Move(), allocator);
    }

    if (m_vulNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vulName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageVulWhitelist::GetRuleId() const
{
    return m_ruleId;
}

void ImageVulWhitelist::SetRuleId(const uint64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ImageVulWhitelist::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ImageVulWhitelist::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageVulWhitelist::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageVulWhitelist::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageVulWhitelist::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageVulWhitelist::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageVulWhitelist::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageVulWhitelist::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageVulWhitelist::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageVulWhitelist::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

uint64_t ImageVulWhitelist::GetScope() const
{
    return m_scope;
}

void ImageVulWhitelist::SetScope(const uint64_t& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool ImageVulWhitelist::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

vector<uint64_t> ImageVulWhitelist::GetImageIds() const
{
    return m_imageIds;
}

void ImageVulWhitelist::SetImageIds(const vector<uint64_t>& _imageIds)
{
    m_imageIds = _imageIds;
    m_imageIdsHasBeenSet = true;
}

bool ImageVulWhitelist::ImageIdsHasBeenSet() const
{
    return m_imageIdsHasBeenSet;
}

string ImageVulWhitelist::GetRemark() const
{
    return m_remark;
}

void ImageVulWhitelist::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ImageVulWhitelist::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ImageVulWhitelist::GetPocId() const
{
    return m_pocId;
}

void ImageVulWhitelist::SetPocId(const string& _pocId)
{
    m_pocId = _pocId;
    m_pocIdHasBeenSet = true;
}

bool ImageVulWhitelist::PocIdHasBeenSet() const
{
    return m_pocIdHasBeenSet;
}

string ImageVulWhitelist::GetVulName() const
{
    return m_vulName;
}

void ImageVulWhitelist::SetVulName(const string& _vulName)
{
    m_vulName = _vulName;
    m_vulNameHasBeenSet = true;
}

bool ImageVulWhitelist::VulNameHasBeenSet() const
{
    return m_vulNameHasBeenSet;
}

uint64_t ImageVulWhitelist::GetStatus() const
{
    return m_status;
}

void ImageVulWhitelist::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImageVulWhitelist::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ImageVulWhitelist::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageVulWhitelist::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageVulWhitelist::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

