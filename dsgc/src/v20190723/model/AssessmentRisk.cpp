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

#include <tencentcloud/dsgc/v20190723/model/AssessmentRisk.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

AssessmentRisk::AssessmentRisk() :
    m_riskIdHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_controlItemIdHasBeenSet(false),
    m_controlItemNameHasBeenSet(false),
    m_controlItemDescHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_riskMitigationHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_riskOwnerHasBeenSet(false),
    m_relatedAssetHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_securityProductHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_riskSideHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome AssessmentRisk::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskId") && !value["RiskId"].IsNull())
    {
        if (!value["RiskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskId = string(value["RiskId"].GetString());
        m_riskIdHasBeenSet = true;
    }

    if (value.HasMember("RiskDescription") && !value["RiskDescription"].IsNull())
    {
        if (!value["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(value["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("ControlItemId") && !value["ControlItemId"].IsNull())
    {
        if (!value["ControlItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.ControlItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_controlItemId = string(value["ControlItemId"].GetString());
        m_controlItemIdHasBeenSet = true;
    }

    if (value.HasMember("ControlItemName") && !value["ControlItemName"].IsNull())
    {
        if (!value["ControlItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.ControlItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_controlItemName = string(value["ControlItemName"].GetString());
        m_controlItemNameHasBeenSet = true;
    }

    if (value.HasMember("ControlItemDesc") && !value["ControlItemDesc"].IsNull())
    {
        if (!value["ControlItemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.ControlItemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_controlItemDesc = string(value["ControlItemDesc"].GetString());
        m_controlItemDescHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RiskMitigation") && !value["RiskMitigation"].IsNull())
    {
        if (!value["RiskMitigation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskMitigation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskMitigation = string(value["RiskMitigation"].GetString());
        m_riskMitigationHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("RiskOwner") && !value["RiskOwner"].IsNull())
    {
        if (!value["RiskOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskOwner = string(value["RiskOwner"].GetString());
        m_riskOwnerHasBeenSet = true;
    }

    if (value.HasMember("RelatedAsset") && !value["RelatedAsset"].IsNull())
    {
        if (!value["RelatedAsset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RelatedAsset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedAsset = string(value["RelatedAsset"].GetString());
        m_relatedAssetHasBeenSet = true;
    }

    if (value.HasMember("DataSourceId") && !value["DataSourceId"].IsNull())
    {
        if (!value["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(value["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (value.HasMember("DataSourceName") && !value["DataSourceName"].IsNull())
    {
        if (!value["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(value["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (value.HasMember("AssetName") && !value["AssetName"].IsNull())
    {
        if (!value["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(value["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (value.HasMember("SecurityProduct") && !value["SecurityProduct"].IsNull())
    {
        if (!value["SecurityProduct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.SecurityProduct` is not array type"));

        const rapidjson::Value &tmpValue = value["SecurityProduct"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityProduct item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_securityProduct.push_back(item);
        }
        m_securityProductHasBeenSet = true;
    }

    if (value.HasMember("RiskType") && !value["RiskType"].IsNull())
    {
        if (!value["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(value["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskSide") && !value["RiskSide"].IsNull())
    {
        if (!value["RiskSide"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.RiskSide` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskSide = string(value["RiskSide"].GetString());
        m_riskSideHasBeenSet = true;
    }

    if (value.HasMember("DataSourceType") && !value["DataSourceType"].IsNull())
    {
        if (!value["DataSourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentRisk.DataSourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceType = string(value["DataSourceType"].GetString());
        m_dataSourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssessmentRisk::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskId.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_controlItemId.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_controlItemName.c_str(), allocator).Move(), allocator);
    }

    if (m_controlItemDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ControlItemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_controlItemDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_riskMitigationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskMitigation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskMitigation.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_riskOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedAsset.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_assetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetName.c_str(), allocator).Move(), allocator);
    }

    if (m_securityProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_securityProduct.begin(); itr != m_securityProduct.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskSideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSide";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskSide.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }

}


string AssessmentRisk::GetRiskId() const
{
    return m_riskId;
}

void AssessmentRisk::SetRiskId(const string& _riskId)
{
    m_riskId = _riskId;
    m_riskIdHasBeenSet = true;
}

bool AssessmentRisk::RiskIdHasBeenSet() const
{
    return m_riskIdHasBeenSet;
}

string AssessmentRisk::GetRiskDescription() const
{
    return m_riskDescription;
}

void AssessmentRisk::SetRiskDescription(const string& _riskDescription)
{
    m_riskDescription = _riskDescription;
    m_riskDescriptionHasBeenSet = true;
}

bool AssessmentRisk::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

string AssessmentRisk::GetTemplateId() const
{
    return m_templateId;
}

void AssessmentRisk::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool AssessmentRisk::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AssessmentRisk::GetTemplateName() const
{
    return m_templateName;
}

void AssessmentRisk::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool AssessmentRisk::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

string AssessmentRisk::GetControlItemId() const
{
    return m_controlItemId;
}

void AssessmentRisk::SetControlItemId(const string& _controlItemId)
{
    m_controlItemId = _controlItemId;
    m_controlItemIdHasBeenSet = true;
}

bool AssessmentRisk::ControlItemIdHasBeenSet() const
{
    return m_controlItemIdHasBeenSet;
}

string AssessmentRisk::GetControlItemName() const
{
    return m_controlItemName;
}

void AssessmentRisk::SetControlItemName(const string& _controlItemName)
{
    m_controlItemName = _controlItemName;
    m_controlItemNameHasBeenSet = true;
}

bool AssessmentRisk::ControlItemNameHasBeenSet() const
{
    return m_controlItemNameHasBeenSet;
}

string AssessmentRisk::GetControlItemDesc() const
{
    return m_controlItemDesc;
}

void AssessmentRisk::SetControlItemDesc(const string& _controlItemDesc)
{
    m_controlItemDesc = _controlItemDesc;
    m_controlItemDescHasBeenSet = true;
}

bool AssessmentRisk::ControlItemDescHasBeenSet() const
{
    return m_controlItemDescHasBeenSet;
}

string AssessmentRisk::GetRiskLevel() const
{
    return m_riskLevel;
}

void AssessmentRisk::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool AssessmentRisk::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string AssessmentRisk::GetRiskMitigation() const
{
    return m_riskMitigation;
}

void AssessmentRisk::SetRiskMitigation(const string& _riskMitigation)
{
    m_riskMitigation = _riskMitigation;
    m_riskMitigationHasBeenSet = true;
}

bool AssessmentRisk::RiskMitigationHasBeenSet() const
{
    return m_riskMitigationHasBeenSet;
}

string AssessmentRisk::GetStatus() const
{
    return m_status;
}

void AssessmentRisk::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AssessmentRisk::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string AssessmentRisk::GetCreatedTime() const
{
    return m_createdTime;
}

void AssessmentRisk::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool AssessmentRisk::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string AssessmentRisk::GetRiskOwner() const
{
    return m_riskOwner;
}

void AssessmentRisk::SetRiskOwner(const string& _riskOwner)
{
    m_riskOwner = _riskOwner;
    m_riskOwnerHasBeenSet = true;
}

bool AssessmentRisk::RiskOwnerHasBeenSet() const
{
    return m_riskOwnerHasBeenSet;
}

string AssessmentRisk::GetRelatedAsset() const
{
    return m_relatedAsset;
}

void AssessmentRisk::SetRelatedAsset(const string& _relatedAsset)
{
    m_relatedAsset = _relatedAsset;
    m_relatedAssetHasBeenSet = true;
}

bool AssessmentRisk::RelatedAssetHasBeenSet() const
{
    return m_relatedAssetHasBeenSet;
}

string AssessmentRisk::GetDataSourceId() const
{
    return m_dataSourceId;
}

void AssessmentRisk::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool AssessmentRisk::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string AssessmentRisk::GetDataSourceName() const
{
    return m_dataSourceName;
}

void AssessmentRisk::SetDataSourceName(const string& _dataSourceName)
{
    m_dataSourceName = _dataSourceName;
    m_dataSourceNameHasBeenSet = true;
}

bool AssessmentRisk::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string AssessmentRisk::GetAssetName() const
{
    return m_assetName;
}

void AssessmentRisk::SetAssetName(const string& _assetName)
{
    m_assetName = _assetName;
    m_assetNameHasBeenSet = true;
}

bool AssessmentRisk::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

vector<SecurityProduct> AssessmentRisk::GetSecurityProduct() const
{
    return m_securityProduct;
}

void AssessmentRisk::SetSecurityProduct(const vector<SecurityProduct>& _securityProduct)
{
    m_securityProduct = _securityProduct;
    m_securityProductHasBeenSet = true;
}

bool AssessmentRisk::SecurityProductHasBeenSet() const
{
    return m_securityProductHasBeenSet;
}

string AssessmentRisk::GetRiskType() const
{
    return m_riskType;
}

void AssessmentRisk::SetRiskType(const string& _riskType)
{
    m_riskType = _riskType;
    m_riskTypeHasBeenSet = true;
}

bool AssessmentRisk::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string AssessmentRisk::GetRiskSide() const
{
    return m_riskSide;
}

void AssessmentRisk::SetRiskSide(const string& _riskSide)
{
    m_riskSide = _riskSide;
    m_riskSideHasBeenSet = true;
}

bool AssessmentRisk::RiskSideHasBeenSet() const
{
    return m_riskSideHasBeenSet;
}

string AssessmentRisk::GetDataSourceType() const
{
    return m_dataSourceType;
}

void AssessmentRisk::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool AssessmentRisk::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

