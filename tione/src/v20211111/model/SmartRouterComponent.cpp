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

#include <tencentcloud/tione/v20211111/model/SmartRouterComponent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

SmartRouterComponent::SmartRouterComponent() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_imageInfoHasBeenSet(false),
    m_resourceConfigHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_resourceSpecHasBeenSet(false),
    m_businessStatusHasBeenSet(false),
    m_billingInfoHasBeenSet(false)
{
}

CoreInternalOutcome SmartRouterComponent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ImageInfo") && !value["ImageInfo"].IsNull())
    {
        if (!value["ImageInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.ImageInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageInfo.Deserialize(value["ImageInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageInfoHasBeenSet = true;
    }

    if (value.HasMember("ResourceConfig") && !value["ResourceConfig"].IsNull())
    {
        if (!value["ResourceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.ResourceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceConfig.Deserialize(value["ResourceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceConfigHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ResourceSpec") && !value["ResourceSpec"].IsNull())
    {
        if (!value["ResourceSpec"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.ResourceSpec` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_resourceSpec.Deserialize(value["ResourceSpec"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resourceSpecHasBeenSet = true;
    }

    if (value.HasMember("BusinessStatus") && !value["BusinessStatus"].IsNull())
    {
        if (!value["BusinessStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.BusinessStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessStatus = string(value["BusinessStatus"].GetString());
        m_businessStatusHasBeenSet = true;
    }

    if (value.HasMember("BillingInfo") && !value["BillingInfo"].IsNull())
    {
        if (!value["BillingInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SmartRouterComponent.BillingInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingInfo = string(value["BillingInfo"].GetString());
        m_billingInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartRouterComponent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_imageInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_resourceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_resourceSpec.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_businessStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_billingInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingInfo.c_str(), allocator).Move(), allocator);
    }

}


string SmartRouterComponent::GetName() const
{
    return m_name;
}

void SmartRouterComponent::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SmartRouterComponent::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SmartRouterComponent::GetType() const
{
    return m_type;
}

void SmartRouterComponent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SmartRouterComponent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

ImageInfo SmartRouterComponent::GetImageInfo() const
{
    return m_imageInfo;
}

void SmartRouterComponent::SetImageInfo(const ImageInfo& _imageInfo)
{
    m_imageInfo = _imageInfo;
    m_imageInfoHasBeenSet = true;
}

bool SmartRouterComponent::ImageInfoHasBeenSet() const
{
    return m_imageInfoHasBeenSet;
}

SmartRouterResourceConfig SmartRouterComponent::GetResourceConfig() const
{
    return m_resourceConfig;
}

void SmartRouterComponent::SetResourceConfig(const SmartRouterResourceConfig& _resourceConfig)
{
    m_resourceConfig = _resourceConfig;
    m_resourceConfigHasBeenSet = true;
}

bool SmartRouterComponent::ResourceConfigHasBeenSet() const
{
    return m_resourceConfigHasBeenSet;
}

string SmartRouterComponent::GetStatus() const
{
    return m_status;
}

void SmartRouterComponent::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SmartRouterComponent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

SmartRouterResourceSpec SmartRouterComponent::GetResourceSpec() const
{
    return m_resourceSpec;
}

void SmartRouterComponent::SetResourceSpec(const SmartRouterResourceSpec& _resourceSpec)
{
    m_resourceSpec = _resourceSpec;
    m_resourceSpecHasBeenSet = true;
}

bool SmartRouterComponent::ResourceSpecHasBeenSet() const
{
    return m_resourceSpecHasBeenSet;
}

string SmartRouterComponent::GetBusinessStatus() const
{
    return m_businessStatus;
}

void SmartRouterComponent::SetBusinessStatus(const string& _businessStatus)
{
    m_businessStatus = _businessStatus;
    m_businessStatusHasBeenSet = true;
}

bool SmartRouterComponent::BusinessStatusHasBeenSet() const
{
    return m_businessStatusHasBeenSet;
}

string SmartRouterComponent::GetBillingInfo() const
{
    return m_billingInfo;
}

void SmartRouterComponent::SetBillingInfo(const string& _billingInfo)
{
    m_billingInfo = _billingInfo;
    m_billingInfoHasBeenSet = true;
}

bool SmartRouterComponent::BillingInfoHasBeenSet() const
{
    return m_billingInfoHasBeenSet;
}

