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

#include <tencentcloud/live/v20180801/model/SnapshotTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

SnapshotTemplateInfo::SnapshotTemplateInfo() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_snapshotIntervalHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_pornFlagHasBeenSet(false),
    m_cosAppIdHasBeenSet(false),
    m_cosBucketHasBeenSet(false),
    m_cosRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_cosPrefixHasBeenSet(false),
    m_cosFileNameHasBeenSet(false)
{
}

CoreInternalOutcome SnapshotTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("SnapshotInterval") && !value["SnapshotInterval"].IsNull())
    {
        if (!value["SnapshotInterval"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.SnapshotInterval` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotInterval = value["SnapshotInterval"].GetInt64();
        m_snapshotIntervalHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("PornFlag") && !value["PornFlag"].IsNull())
    {
        if (!value["PornFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.PornFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pornFlag = value["PornFlag"].GetInt64();
        m_pornFlagHasBeenSet = true;
    }

    if (value.HasMember("CosAppId") && !value["CosAppId"].IsNull())
    {
        if (!value["CosAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.CosAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cosAppId = value["CosAppId"].GetInt64();
        m_cosAppIdHasBeenSet = true;
    }

    if (value.HasMember("CosBucket") && !value["CosBucket"].IsNull())
    {
        if (!value["CosBucket"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.CosBucket` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosBucket = string(value["CosBucket"].GetString());
        m_cosBucketHasBeenSet = true;
    }

    if (value.HasMember("CosRegion") && !value["CosRegion"].IsNull())
    {
        if (!value["CosRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.CosRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosRegion = string(value["CosRegion"].GetString());
        m_cosRegionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CosPrefix") && !value["CosPrefix"].IsNull())
    {
        if (!value["CosPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.CosPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPrefix = string(value["CosPrefix"].GetString());
        m_cosPrefixHasBeenSet = true;
    }

    if (value.HasMember("CosFileName") && !value["CosFileName"].IsNull())
    {
        if (!value["CosFileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotTemplateInfo.CosFileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosFileName = string(value["CosFileName"].GetString());
        m_cosFileNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SnapshotTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotIntervalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotInterval";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_snapshotInterval, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_pornFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pornFlag, allocator);
    }

    if (m_cosAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cosAppId, allocator);
    }

    if (m_cosBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosBucket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosBucket.c_str(), allocator).Move(), allocator);
    }

    if (m_cosRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_cosFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosFileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosFileName.c_str(), allocator).Move(), allocator);
    }

}


int64_t SnapshotTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void SnapshotTemplateInfo::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SnapshotTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SnapshotTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void SnapshotTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool SnapshotTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t SnapshotTemplateInfo::GetSnapshotInterval() const
{
    return m_snapshotInterval;
}

void SnapshotTemplateInfo::SetSnapshotInterval(const int64_t& _snapshotInterval)
{
    m_snapshotInterval = _snapshotInterval;
    m_snapshotIntervalHasBeenSet = true;
}

bool SnapshotTemplateInfo::SnapshotIntervalHasBeenSet() const
{
    return m_snapshotIntervalHasBeenSet;
}

int64_t SnapshotTemplateInfo::GetWidth() const
{
    return m_width;
}

void SnapshotTemplateInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool SnapshotTemplateInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t SnapshotTemplateInfo::GetHeight() const
{
    return m_height;
}

void SnapshotTemplateInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool SnapshotTemplateInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t SnapshotTemplateInfo::GetPornFlag() const
{
    return m_pornFlag;
}

void SnapshotTemplateInfo::SetPornFlag(const int64_t& _pornFlag)
{
    m_pornFlag = _pornFlag;
    m_pornFlagHasBeenSet = true;
}

bool SnapshotTemplateInfo::PornFlagHasBeenSet() const
{
    return m_pornFlagHasBeenSet;
}

int64_t SnapshotTemplateInfo::GetCosAppId() const
{
    return m_cosAppId;
}

void SnapshotTemplateInfo::SetCosAppId(const int64_t& _cosAppId)
{
    m_cosAppId = _cosAppId;
    m_cosAppIdHasBeenSet = true;
}

bool SnapshotTemplateInfo::CosAppIdHasBeenSet() const
{
    return m_cosAppIdHasBeenSet;
}

string SnapshotTemplateInfo::GetCosBucket() const
{
    return m_cosBucket;
}

void SnapshotTemplateInfo::SetCosBucket(const string& _cosBucket)
{
    m_cosBucket = _cosBucket;
    m_cosBucketHasBeenSet = true;
}

bool SnapshotTemplateInfo::CosBucketHasBeenSet() const
{
    return m_cosBucketHasBeenSet;
}

string SnapshotTemplateInfo::GetCosRegion() const
{
    return m_cosRegion;
}

void SnapshotTemplateInfo::SetCosRegion(const string& _cosRegion)
{
    m_cosRegion = _cosRegion;
    m_cosRegionHasBeenSet = true;
}

bool SnapshotTemplateInfo::CosRegionHasBeenSet() const
{
    return m_cosRegionHasBeenSet;
}

string SnapshotTemplateInfo::GetDescription() const
{
    return m_description;
}

void SnapshotTemplateInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SnapshotTemplateInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SnapshotTemplateInfo::GetCosPrefix() const
{
    return m_cosPrefix;
}

void SnapshotTemplateInfo::SetCosPrefix(const string& _cosPrefix)
{
    m_cosPrefix = _cosPrefix;
    m_cosPrefixHasBeenSet = true;
}

bool SnapshotTemplateInfo::CosPrefixHasBeenSet() const
{
    return m_cosPrefixHasBeenSet;
}

string SnapshotTemplateInfo::GetCosFileName() const
{
    return m_cosFileName;
}

void SnapshotTemplateInfo::SetCosFileName(const string& _cosFileName)
{
    m_cosFileName = _cosFileName;
    m_cosFileNameHasBeenSet = true;
}

bool SnapshotTemplateInfo::CosFileNameHasBeenSet() const
{
    return m_cosFileNameHasBeenSet;
}

