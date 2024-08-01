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

#include <tencentcloud/organization/v20210331/model/OrganizationServiceAssign.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

OrganizationServiceAssign::OrganizationServiceAssign() :
    m_serviceIdHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_isAssignHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_memberNumHasBeenSet(false),
    m_documentHasBeenSet(false),
    m_consoleUrlHasBeenSet(false),
    m_isUsageStatusHasBeenSet(false),
    m_canAssignCountHasBeenSet(false),
    m_productHasBeenSet(false),
    m_serviceGrantHasBeenSet(false),
    m_grantStatusHasBeenSet(false),
    m_isSetManagementScopeHasBeenSet(false)
{
}

CoreInternalOutcome OrganizationServiceAssign::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.ServiceId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = value["ServiceId"].GetUint64();
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("IsAssign") && !value["IsAssign"].IsNull())
    {
        if (!value["IsAssign"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.IsAssign` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isAssign = value["IsAssign"].GetUint64();
        m_isAssignHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("MemberNum") && !value["MemberNum"].IsNull())
    {
        if (!value["MemberNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.MemberNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_memberNum = string(value["MemberNum"].GetString());
        m_memberNumHasBeenSet = true;
    }

    if (value.HasMember("Document") && !value["Document"].IsNull())
    {
        if (!value["Document"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.Document` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_document = string(value["Document"].GetString());
        m_documentHasBeenSet = true;
    }

    if (value.HasMember("ConsoleUrl") && !value["ConsoleUrl"].IsNull())
    {
        if (!value["ConsoleUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.ConsoleUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_consoleUrl = string(value["ConsoleUrl"].GetString());
        m_consoleUrlHasBeenSet = true;
    }

    if (value.HasMember("IsUsageStatus") && !value["IsUsageStatus"].IsNull())
    {
        if (!value["IsUsageStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.IsUsageStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isUsageStatus = value["IsUsageStatus"].GetUint64();
        m_isUsageStatusHasBeenSet = true;
    }

    if (value.HasMember("CanAssignCount") && !value["CanAssignCount"].IsNull())
    {
        if (!value["CanAssignCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.CanAssignCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_canAssignCount = value["CanAssignCount"].GetUint64();
        m_canAssignCountHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("ServiceGrant") && !value["ServiceGrant"].IsNull())
    {
        if (!value["ServiceGrant"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.ServiceGrant` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_serviceGrant = value["ServiceGrant"].GetUint64();
        m_serviceGrantHasBeenSet = true;
    }

    if (value.HasMember("GrantStatus") && !value["GrantStatus"].IsNull())
    {
        if (!value["GrantStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.GrantStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grantStatus = string(value["GrantStatus"].GetString());
        m_grantStatusHasBeenSet = true;
    }

    if (value.HasMember("IsSetManagementScope") && !value["IsSetManagementScope"].IsNull())
    {
        if (!value["IsSetManagementScope"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `OrganizationServiceAssign.IsSetManagementScope` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isSetManagementScope = value["IsSetManagementScope"].GetUint64();
        m_isSetManagementScopeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OrganizationServiceAssign::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceId, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_isAssignHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAssign";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAssign, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_memberNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_memberNum.c_str(), allocator).Move(), allocator);
    }

    if (m_documentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Document";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_document.c_str(), allocator).Move(), allocator);
    }

    if (m_consoleUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConsoleUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_consoleUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_isUsageStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUsageStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUsageStatus, allocator);
    }

    if (m_canAssignCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanAssignCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canAssignCount, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceGrantHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceGrant";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceGrant, allocator);
    }

    if (m_grantStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrantStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grantStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_isSetManagementScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSetManagementScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isSetManagementScope, allocator);
    }

}


uint64_t OrganizationServiceAssign::GetServiceId() const
{
    return m_serviceId;
}

void OrganizationServiceAssign::SetServiceId(const uint64_t& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool OrganizationServiceAssign::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string OrganizationServiceAssign::GetProductName() const
{
    return m_productName;
}

void OrganizationServiceAssign::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool OrganizationServiceAssign::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

uint64_t OrganizationServiceAssign::GetIsAssign() const
{
    return m_isAssign;
}

void OrganizationServiceAssign::SetIsAssign(const uint64_t& _isAssign)
{
    m_isAssign = _isAssign;
    m_isAssignHasBeenSet = true;
}

bool OrganizationServiceAssign::IsAssignHasBeenSet() const
{
    return m_isAssignHasBeenSet;
}

string OrganizationServiceAssign::GetDescription() const
{
    return m_description;
}

void OrganizationServiceAssign::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OrganizationServiceAssign::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string OrganizationServiceAssign::GetMemberNum() const
{
    return m_memberNum;
}

void OrganizationServiceAssign::SetMemberNum(const string& _memberNum)
{
    m_memberNum = _memberNum;
    m_memberNumHasBeenSet = true;
}

bool OrganizationServiceAssign::MemberNumHasBeenSet() const
{
    return m_memberNumHasBeenSet;
}

string OrganizationServiceAssign::GetDocument() const
{
    return m_document;
}

void OrganizationServiceAssign::SetDocument(const string& _document)
{
    m_document = _document;
    m_documentHasBeenSet = true;
}

bool OrganizationServiceAssign::DocumentHasBeenSet() const
{
    return m_documentHasBeenSet;
}

string OrganizationServiceAssign::GetConsoleUrl() const
{
    return m_consoleUrl;
}

void OrganizationServiceAssign::SetConsoleUrl(const string& _consoleUrl)
{
    m_consoleUrl = _consoleUrl;
    m_consoleUrlHasBeenSet = true;
}

bool OrganizationServiceAssign::ConsoleUrlHasBeenSet() const
{
    return m_consoleUrlHasBeenSet;
}

uint64_t OrganizationServiceAssign::GetIsUsageStatus() const
{
    return m_isUsageStatus;
}

void OrganizationServiceAssign::SetIsUsageStatus(const uint64_t& _isUsageStatus)
{
    m_isUsageStatus = _isUsageStatus;
    m_isUsageStatusHasBeenSet = true;
}

bool OrganizationServiceAssign::IsUsageStatusHasBeenSet() const
{
    return m_isUsageStatusHasBeenSet;
}

uint64_t OrganizationServiceAssign::GetCanAssignCount() const
{
    return m_canAssignCount;
}

void OrganizationServiceAssign::SetCanAssignCount(const uint64_t& _canAssignCount)
{
    m_canAssignCount = _canAssignCount;
    m_canAssignCountHasBeenSet = true;
}

bool OrganizationServiceAssign::CanAssignCountHasBeenSet() const
{
    return m_canAssignCountHasBeenSet;
}

string OrganizationServiceAssign::GetProduct() const
{
    return m_product;
}

void OrganizationServiceAssign::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool OrganizationServiceAssign::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

uint64_t OrganizationServiceAssign::GetServiceGrant() const
{
    return m_serviceGrant;
}

void OrganizationServiceAssign::SetServiceGrant(const uint64_t& _serviceGrant)
{
    m_serviceGrant = _serviceGrant;
    m_serviceGrantHasBeenSet = true;
}

bool OrganizationServiceAssign::ServiceGrantHasBeenSet() const
{
    return m_serviceGrantHasBeenSet;
}

string OrganizationServiceAssign::GetGrantStatus() const
{
    return m_grantStatus;
}

void OrganizationServiceAssign::SetGrantStatus(const string& _grantStatus)
{
    m_grantStatus = _grantStatus;
    m_grantStatusHasBeenSet = true;
}

bool OrganizationServiceAssign::GrantStatusHasBeenSet() const
{
    return m_grantStatusHasBeenSet;
}

uint64_t OrganizationServiceAssign::GetIsSetManagementScope() const
{
    return m_isSetManagementScope;
}

void OrganizationServiceAssign::SetIsSetManagementScope(const uint64_t& _isSetManagementScope)
{
    m_isSetManagementScope = _isSetManagementScope;
    m_isSetManagementScopeHasBeenSet = true;
}

bool OrganizationServiceAssign::IsSetManagementScopeHasBeenSet() const
{
    return m_isSetManagementScopeHasBeenSet;
}

