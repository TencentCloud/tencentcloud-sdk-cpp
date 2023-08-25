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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAAssessmentLatestRiskDetailInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAAssessmentLatestRiskDetailInfoResponse::DescribeDSPAAssessmentLatestRiskDetailInfoResponse() :
    m_dataSourceIdHasBeenSet(false),
    m_dataSourceNameHasBeenSet(false),
    m_assetNameHasBeenSet(false),
    m_assessmentTemplateIdHasBeenSet(false),
    m_identifyTemplateIdHasBeenSet(false),
    m_riskTypeHasBeenSet(false),
    m_riskNameHasBeenSet(false),
    m_riskDescriptionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_suggestActionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_securityProductHasBeenSet(false),
    m_riskDimensionHasBeenSet(false),
    m_relationAssetHasBeenSet(false),
    m_accountRiskDetailHasBeenSet(false),
    m_privilegeRiskDetailHasBeenSet(false),
    m_policyRiskCosFileListHasBeenSet(false),
    m_aKSKLeakHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAAssessmentLatestRiskDetailInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DataSourceId") && !rsp["DataSourceId"].IsNull())
    {
        if (!rsp["DataSourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceId = string(rsp["DataSourceId"].GetString());
        m_dataSourceIdHasBeenSet = true;
    }

    if (rsp.HasMember("DataSourceName") && !rsp["DataSourceName"].IsNull())
    {
        if (!rsp["DataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataSourceName = string(rsp["DataSourceName"].GetString());
        m_dataSourceNameHasBeenSet = true;
    }

    if (rsp.HasMember("AssetName") && !rsp["AssetName"].IsNull())
    {
        if (!rsp["AssetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetName = string(rsp["AssetName"].GetString());
        m_assetNameHasBeenSet = true;
    }

    if (rsp.HasMember("AssessmentTemplateId") && !rsp["AssessmentTemplateId"].IsNull())
    {
        if (!rsp["AssessmentTemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AssessmentTemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assessmentTemplateId = rsp["AssessmentTemplateId"].GetInt64();
        m_assessmentTemplateIdHasBeenSet = true;
    }

    if (rsp.HasMember("IdentifyTemplateId") && !rsp["IdentifyTemplateId"].IsNull())
    {
        if (!rsp["IdentifyTemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IdentifyTemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyTemplateId = rsp["IdentifyTemplateId"].GetInt64();
        m_identifyTemplateIdHasBeenSet = true;
    }

    if (rsp.HasMember("RiskType") && !rsp["RiskType"].IsNull())
    {
        if (!rsp["RiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskType = string(rsp["RiskType"].GetString());
        m_riskTypeHasBeenSet = true;
    }

    if (rsp.HasMember("RiskName") && !rsp["RiskName"].IsNull())
    {
        if (!rsp["RiskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskName = string(rsp["RiskName"].GetString());
        m_riskNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskDescription") && !rsp["RiskDescription"].IsNull())
    {
        if (!rsp["RiskDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDescription = string(rsp["RiskDescription"].GetString());
        m_riskDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestAction") && !rsp["SuggestAction"].IsNull())
    {
        if (!rsp["SuggestAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestAction = string(rsp["SuggestAction"].GetString());
        m_suggestActionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Remark") && !rsp["Remark"].IsNull())
    {
        if (!rsp["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(rsp["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (rsp.HasMember("SecurityProduct") && !rsp["SecurityProduct"].IsNull())
    {
        if (!rsp["SecurityProduct"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityProduct` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SecurityProduct"];
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

    if (rsp.HasMember("RiskDimension") && !rsp["RiskDimension"].IsNull())
    {
        if (!rsp["RiskDimension"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskDimension` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskDimension = string(rsp["RiskDimension"].GetString());
        m_riskDimensionHasBeenSet = true;
    }

    if (rsp.HasMember("RelationAsset") && !rsp["RelationAsset"].IsNull())
    {
        if (!rsp["RelationAsset"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RelationAsset` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RelationAsset"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relationAsset.push_back((*itr).GetString());
        }
        m_relationAssetHasBeenSet = true;
    }

    if (rsp.HasMember("AccountRiskDetail") && !rsp["AccountRiskDetail"].IsNull())
    {
        if (!rsp["AccountRiskDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountRiskDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AccountRiskDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccountRisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accountRiskDetail.push_back(item);
        }
        m_accountRiskDetailHasBeenSet = true;
    }

    if (rsp.HasMember("PrivilegeRiskDetail") && !rsp["PrivilegeRiskDetail"].IsNull())
    {
        if (!rsp["PrivilegeRiskDetail"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrivilegeRiskDetail` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PrivilegeRiskDetail"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PrivilegeRisk item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_privilegeRiskDetail.push_back(item);
        }
        m_privilegeRiskDetailHasBeenSet = true;
    }

    if (rsp.HasMember("PolicyRiskCosFileList") && !rsp["PolicyRiskCosFileList"].IsNull())
    {
        if (!rsp["PolicyRiskCosFileList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PolicyRiskCosFileList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["PolicyRiskCosFileList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_policyRiskCosFileList.push_back((*itr).GetString());
        }
        m_policyRiskCosFileListHasBeenSet = true;
    }

    if (rsp.HasMember("AKSKLeak") && !rsp["AKSKLeak"].IsNull())
    {
        if (!rsp["AKSKLeak"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AKSKLeak` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AKSKLeak"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AKSKLeak item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_aKSKLeak.push_back(item);
        }
        m_aKSKLeakHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_assessmentTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssessmentTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assessmentTemplateId, allocator);
    }

    if (m_identifyTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyTemplateId, allocator);
    }

    if (m_riskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestAction.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
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

    if (m_riskDimensionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskDimension";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskDimension.c_str(), allocator).Move(), allocator);
    }

    if (m_relationAssetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationAsset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relationAsset.begin(); itr != m_relationAsset.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_accountRiskDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountRiskDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accountRiskDetail.begin(); itr != m_accountRiskDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_privilegeRiskDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivilegeRiskDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_privilegeRiskDetail.begin(); itr != m_privilegeRiskDetail.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_policyRiskCosFileListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyRiskCosFileList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_policyRiskCosFileList.begin(); itr != m_policyRiskCosFileList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aKSKLeakHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AKSKLeak";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_aKSKLeak.begin(); itr != m_aKSKLeak.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetDataSourceId() const
{
    return m_dataSourceId;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetDataSourceName() const
{
    return m_dataSourceName;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::DataSourceNameHasBeenSet() const
{
    return m_dataSourceNameHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetAssetName() const
{
    return m_assetName;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::AssetNameHasBeenSet() const
{
    return m_assetNameHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetAssessmentTemplateId() const
{
    return m_assessmentTemplateId;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::AssessmentTemplateIdHasBeenSet() const
{
    return m_assessmentTemplateIdHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetIdentifyTemplateId() const
{
    return m_identifyTemplateId;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::IdentifyTemplateIdHasBeenSet() const
{
    return m_identifyTemplateIdHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRiskType() const
{
    return m_riskType;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RiskTypeHasBeenSet() const
{
    return m_riskTypeHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRiskName() const
{
    return m_riskName;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RiskNameHasBeenSet() const
{
    return m_riskNameHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRiskDescription() const
{
    return m_riskDescription;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RiskDescriptionHasBeenSet() const
{
    return m_riskDescriptionHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetSuggestAction() const
{
    return m_suggestAction;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::SuggestActionHasBeenSet() const
{
    return m_suggestActionHasBeenSet;
}

int64_t DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRemark() const
{
    return m_remark;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

vector<SecurityProduct> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetSecurityProduct() const
{
    return m_securityProduct;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::SecurityProductHasBeenSet() const
{
    return m_securityProductHasBeenSet;
}

string DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRiskDimension() const
{
    return m_riskDimension;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RiskDimensionHasBeenSet() const
{
    return m_riskDimensionHasBeenSet;
}

vector<string> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetRelationAsset() const
{
    return m_relationAsset;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::RelationAssetHasBeenSet() const
{
    return m_relationAssetHasBeenSet;
}

vector<AccountRisk> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetAccountRiskDetail() const
{
    return m_accountRiskDetail;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::AccountRiskDetailHasBeenSet() const
{
    return m_accountRiskDetailHasBeenSet;
}

vector<PrivilegeRisk> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetPrivilegeRiskDetail() const
{
    return m_privilegeRiskDetail;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::PrivilegeRiskDetailHasBeenSet() const
{
    return m_privilegeRiskDetailHasBeenSet;
}

vector<string> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetPolicyRiskCosFileList() const
{
    return m_policyRiskCosFileList;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::PolicyRiskCosFileListHasBeenSet() const
{
    return m_policyRiskCosFileListHasBeenSet;
}

vector<AKSKLeak> DescribeDSPAAssessmentLatestRiskDetailInfoResponse::GetAKSKLeak() const
{
    return m_aKSKLeak;
}

bool DescribeDSPAAssessmentLatestRiskDetailInfoResponse::AKSKLeakHasBeenSet() const
{
    return m_aKSKLeakHasBeenSet;
}


