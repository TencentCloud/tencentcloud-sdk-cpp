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

#include <tencentcloud/tione/v20211111/model/APIConfigDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

APIConfigDetail::APIConfigDetail() :
    m_idHasBeenSet(false),
    m_serviceGroupIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_relativeUrlHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_httpMethodHasBeenSet(false),
    m_httpInputExampleHasBeenSet(false),
    m_httpOutputExampleHasBeenSet(false),
    m_updatedByHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_subUinHasBeenSet(false)
{
}

CoreInternalOutcome APIConfigDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ServiceGroupId") && !value["ServiceGroupId"].IsNull())
    {
        if (!value["ServiceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.ServiceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGroupId = string(value["ServiceGroupId"].GetString());
        m_serviceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RelativeUrl") && !value["RelativeUrl"].IsNull())
    {
        if (!value["RelativeUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.RelativeUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relativeUrl = string(value["RelativeUrl"].GetString());
        m_relativeUrlHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("HttpMethod") && !value["HttpMethod"].IsNull())
    {
        if (!value["HttpMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.HttpMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpMethod = string(value["HttpMethod"].GetString());
        m_httpMethodHasBeenSet = true;
    }

    if (value.HasMember("HttpInputExample") && !value["HttpInputExample"].IsNull())
    {
        if (!value["HttpInputExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.HttpInputExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpInputExample = string(value["HttpInputExample"].GetString());
        m_httpInputExampleHasBeenSet = true;
    }

    if (value.HasMember("HttpOutputExample") && !value["HttpOutputExample"].IsNull())
    {
        if (!value["HttpOutputExample"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.HttpOutputExample` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpOutputExample = string(value["HttpOutputExample"].GetString());
        m_httpOutputExampleHasBeenSet = true;
    }

    if (value.HasMember("UpdatedBy") && !value["UpdatedBy"].IsNull())
    {
        if (!value["UpdatedBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.UpdatedBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedBy = string(value["UpdatedBy"].GetString());
        m_updatedByHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(value["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SubUin") && !value["SubUin"].IsNull())
    {
        if (!value["SubUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `APIConfigDetail.SubUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subUin = string(value["SubUin"].GetString());
        m_subUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void APIConfigDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_relativeUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelativeUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relativeUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_httpMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_httpInputExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpInputExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpInputExample.c_str(), allocator).Move(), allocator);
    }

    if (m_httpOutputExampleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpOutputExample";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpOutputExample.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedBy.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_subUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subUin.c_str(), allocator).Move(), allocator);
    }

}


string APIConfigDetail::GetId() const
{
    return m_id;
}

void APIConfigDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool APIConfigDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string APIConfigDetail::GetServiceGroupId() const
{
    return m_serviceGroupId;
}

void APIConfigDetail::SetServiceGroupId(const string& _serviceGroupId)
{
    m_serviceGroupId = _serviceGroupId;
    m_serviceGroupIdHasBeenSet = true;
}

bool APIConfigDetail::ServiceGroupIdHasBeenSet() const
{
    return m_serviceGroupIdHasBeenSet;
}

string APIConfigDetail::GetDescription() const
{
    return m_description;
}

void APIConfigDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool APIConfigDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string APIConfigDetail::GetRelativeUrl() const
{
    return m_relativeUrl;
}

void APIConfigDetail::SetRelativeUrl(const string& _relativeUrl)
{
    m_relativeUrl = _relativeUrl;
    m_relativeUrlHasBeenSet = true;
}

bool APIConfigDetail::RelativeUrlHasBeenSet() const
{
    return m_relativeUrlHasBeenSet;
}

string APIConfigDetail::GetServiceType() const
{
    return m_serviceType;
}

void APIConfigDetail::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool APIConfigDetail::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

string APIConfigDetail::GetHttpMethod() const
{
    return m_httpMethod;
}

void APIConfigDetail::SetHttpMethod(const string& _httpMethod)
{
    m_httpMethod = _httpMethod;
    m_httpMethodHasBeenSet = true;
}

bool APIConfigDetail::HttpMethodHasBeenSet() const
{
    return m_httpMethodHasBeenSet;
}

string APIConfigDetail::GetHttpInputExample() const
{
    return m_httpInputExample;
}

void APIConfigDetail::SetHttpInputExample(const string& _httpInputExample)
{
    m_httpInputExample = _httpInputExample;
    m_httpInputExampleHasBeenSet = true;
}

bool APIConfigDetail::HttpInputExampleHasBeenSet() const
{
    return m_httpInputExampleHasBeenSet;
}

string APIConfigDetail::GetHttpOutputExample() const
{
    return m_httpOutputExample;
}

void APIConfigDetail::SetHttpOutputExample(const string& _httpOutputExample)
{
    m_httpOutputExample = _httpOutputExample;
    m_httpOutputExampleHasBeenSet = true;
}

bool APIConfigDetail::HttpOutputExampleHasBeenSet() const
{
    return m_httpOutputExampleHasBeenSet;
}

string APIConfigDetail::GetUpdatedBy() const
{
    return m_updatedBy;
}

void APIConfigDetail::SetUpdatedBy(const string& _updatedBy)
{
    m_updatedBy = _updatedBy;
    m_updatedByHasBeenSet = true;
}

bool APIConfigDetail::UpdatedByHasBeenSet() const
{
    return m_updatedByHasBeenSet;
}

string APIConfigDetail::GetUpdatedAt() const
{
    return m_updatedAt;
}

void APIConfigDetail::SetUpdatedAt(const string& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool APIConfigDetail::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

string APIConfigDetail::GetUin() const
{
    return m_uin;
}

void APIConfigDetail::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool APIConfigDetail::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string APIConfigDetail::GetSubUin() const
{
    return m_subUin;
}

void APIConfigDetail::SetSubUin(const string& _subUin)
{
    m_subUin = _subUin;
    m_subUinHasBeenSet = true;
}

bool APIConfigDetail::SubUinHasBeenSet() const
{
    return m_subUinHasBeenSet;
}

