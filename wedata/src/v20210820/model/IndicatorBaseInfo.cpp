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

#include <tencentcloud/wedata/v20210820/model/IndicatorBaseInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

IndicatorBaseInfo::IndicatorBaseInfo() :
    m_nameHasBeenSet(false),
    m_indicatorCodeHasBeenSet(false),
    m_indicatorTypeHasBeenSet(false),
    m_bizOwnerHasBeenSet(false),
    m_techOwnerHasBeenSet(false),
    m_bizCaliberHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_calLogicHasBeenSet(false),
    m_calFreqHasBeenSet(false),
    m_measureUnitHasBeenSet(false),
    m_accuracyHasBeenSet(false),
    m_sourceIndicatorIdsHasBeenSet(false),
    m_idHasBeenSet(false),
    m_dimensionIdsHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_bizOwnerNameHasBeenSet(false),
    m_techOwnerNameHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_publishAccountHasBeenSet(false),
    m_publishAccountNameHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_lastModifyAccountHasBeenSet(false),
    m_lastModifyAccountNameHasBeenSet(false),
    m_changeLogListHasBeenSet(false),
    m_tableColumnsHasBeenSet(false),
    m_allSourceIndicatorIdsHasBeenSet(false),
    m_assetIdHasBeenSet(false),
    m_assetTypeHasBeenSet(false),
    m_assetCodeHasBeenSet(false),
    m_relatedIndicatorIdsHasBeenSet(false),
    m_bizCatalogIdsHasBeenSet(false),
    m_bizCatalogNamesHasBeenSet(false),
    m_assetLevelHasBeenSet(false),
    m_assetStatusHasBeenSet(false),
    m_assetPublishTimeHasBeenSet(false),
    m_assetPublishAccountHasBeenSet(false),
    m_assetPublishAccountNameHasBeenSet(false),
    m_indicatorPermissionHasBeenSet(false),
    m_operateOptionHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_projectNameHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorBaseInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IndicatorCode") && !value["IndicatorCode"].IsNull())
    {
        if (!value["IndicatorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.IndicatorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorCode = string(value["IndicatorCode"].GetString());
        m_indicatorCodeHasBeenSet = true;
    }

    if (value.HasMember("IndicatorType") && !value["IndicatorType"].IsNull())
    {
        if (!value["IndicatorType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.IndicatorType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indicatorType = value["IndicatorType"].GetInt64();
        m_indicatorTypeHasBeenSet = true;
    }

    if (value.HasMember("BizOwner") && !value["BizOwner"].IsNull())
    {
        if (!value["BizOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.BizOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizOwner = string(value["BizOwner"].GetString());
        m_bizOwnerHasBeenSet = true;
    }

    if (value.HasMember("TechOwner") && !value["TechOwner"].IsNull())
    {
        if (!value["TechOwner"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.TechOwner` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_techOwner = string(value["TechOwner"].GetString());
        m_techOwnerHasBeenSet = true;
    }

    if (value.HasMember("BizCaliber") && !value["BizCaliber"].IsNull())
    {
        if (!value["BizCaliber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.BizCaliber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizCaliber = string(value["BizCaliber"].GetString());
        m_bizCaliberHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("CalLogic") && !value["CalLogic"].IsNull())
    {
        if (!value["CalLogic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.CalLogic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calLogic = string(value["CalLogic"].GetString());
        m_calLogicHasBeenSet = true;
    }

    if (value.HasMember("CalFreq") && !value["CalFreq"].IsNull())
    {
        if (!value["CalFreq"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.CalFreq` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calFreq = string(value["CalFreq"].GetString());
        m_calFreqHasBeenSet = true;
    }

    if (value.HasMember("MeasureUnit") && !value["MeasureUnit"].IsNull())
    {
        if (!value["MeasureUnit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.MeasureUnit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_measureUnit = value["MeasureUnit"].GetInt64();
        m_measureUnitHasBeenSet = true;
    }

    if (value.HasMember("Accuracy") && !value["Accuracy"].IsNull())
    {
        if (!value["Accuracy"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Accuracy` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accuracy = value["Accuracy"].GetInt64();
        m_accuracyHasBeenSet = true;
    }

    if (value.HasMember("SourceIndicatorIds") && !value["SourceIndicatorIds"].IsNull())
    {
        if (!value["SourceIndicatorIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.SourceIndicatorIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceIndicatorIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorBaseSimpleInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceIndicatorIds.push_back(item);
        }
        m_sourceIndicatorIdsHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("DimensionIds") && !value["DimensionIds"].IsNull())
    {
        if (!value["DimensionIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.DimensionIds` is not array type"));

        const rapidjson::Value &tmpValue = value["DimensionIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetDimSimpleVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dimensionIds.push_back(item);
        }
        m_dimensionIdsHasBeenSet = true;
    }

    if (value.HasMember("FolderId") && !value["FolderId"].IsNull())
    {
        if (!value["FolderId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.FolderId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_folderId = value["FolderId"].GetInt64();
        m_folderIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BizOwnerName") && !value["BizOwnerName"].IsNull())
    {
        if (!value["BizOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.BizOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizOwnerName = string(value["BizOwnerName"].GetString());
        m_bizOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("TechOwnerName") && !value["TechOwnerName"].IsNull())
    {
        if (!value["TechOwnerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.TechOwnerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_techOwnerName = string(value["TechOwnerName"].GetString());
        m_techOwnerNameHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("PublishAccount") && !value["PublishAccount"].IsNull())
    {
        if (!value["PublishAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.PublishAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishAccount = string(value["PublishAccount"].GetString());
        m_publishAccountHasBeenSet = true;
    }

    if (value.HasMember("PublishAccountName") && !value["PublishAccountName"].IsNull())
    {
        if (!value["PublishAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.PublishAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishAccountName = string(value["PublishAccountName"].GetString());
        m_publishAccountNameHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.LastModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = string(value["LastModifyTime"].GetString());
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifyAccount") && !value["LastModifyAccount"].IsNull())
    {
        if (!value["LastModifyAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.LastModifyAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyAccount = string(value["LastModifyAccount"].GetString());
        m_lastModifyAccountHasBeenSet = true;
    }

    if (value.HasMember("LastModifyAccountName") && !value["LastModifyAccountName"].IsNull())
    {
        if (!value["LastModifyAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.LastModifyAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyAccountName = string(value["LastModifyAccountName"].GetString());
        m_lastModifyAccountNameHasBeenSet = true;
    }

    if (value.HasMember("ChangeLogList") && !value["ChangeLogList"].IsNull())
    {
        if (!value["ChangeLogList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.ChangeLogList` is not array type"));

        const rapidjson::Value &tmpValue = value["ChangeLogList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ChangeLog item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_changeLogList.push_back(item);
        }
        m_changeLogListHasBeenSet = true;
    }

    if (value.HasMember("TableColumns") && !value["TableColumns"].IsNull())
    {
        if (!value["TableColumns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.TableColumns` is not array type"));

        const rapidjson::Value &tmpValue = value["TableColumns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetDimTableColumn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableColumns.push_back(item);
        }
        m_tableColumnsHasBeenSet = true;
    }

    if (value.HasMember("AllSourceIndicatorIds") && !value["AllSourceIndicatorIds"].IsNull())
    {
        if (!value["AllSourceIndicatorIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AllSourceIndicatorIds` is not array type"));

        const rapidjson::Value &tmpValue = value["AllSourceIndicatorIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorBaseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_allSourceIndicatorIds.push_back(item);
        }
        m_allSourceIndicatorIdsHasBeenSet = true;
    }

    if (value.HasMember("AssetId") && !value["AssetId"].IsNull())
    {
        if (!value["AssetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetId = string(value["AssetId"].GetString());
        m_assetIdHasBeenSet = true;
    }

    if (value.HasMember("AssetType") && !value["AssetType"].IsNull())
    {
        if (!value["AssetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetType = string(value["AssetType"].GetString());
        m_assetTypeHasBeenSet = true;
    }

    if (value.HasMember("AssetCode") && !value["AssetCode"].IsNull())
    {
        if (!value["AssetCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetCode = string(value["AssetCode"].GetString());
        m_assetCodeHasBeenSet = true;
    }

    if (value.HasMember("RelatedIndicatorIds") && !value["RelatedIndicatorIds"].IsNull())
    {
        if (!value["RelatedIndicatorIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.RelatedIndicatorIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RelatedIndicatorIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IndicatorBaseInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_relatedIndicatorIds.push_back(item);
        }
        m_relatedIndicatorIdsHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogIds") && !value["BizCatalogIds"].IsNull())
    {
        if (!value["BizCatalogIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.BizCatalogIds` is not array type"));

        const rapidjson::Value &tmpValue = value["BizCatalogIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizCatalogIds.push_back((*itr).GetInt64());
        }
        m_bizCatalogIdsHasBeenSet = true;
    }

    if (value.HasMember("BizCatalogNames") && !value["BizCatalogNames"].IsNull())
    {
        if (!value["BizCatalogNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.BizCatalogNames` is not array type"));

        const rapidjson::Value &tmpValue = value["BizCatalogNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bizCatalogNames.push_back((*itr).GetString());
        }
        m_bizCatalogNamesHasBeenSet = true;
    }

    if (value.HasMember("AssetLevel") && !value["AssetLevel"].IsNull())
    {
        if (!value["AssetLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetLevel = value["AssetLevel"].GetInt64();
        m_assetLevelHasBeenSet = true;
    }

    if (value.HasMember("AssetStatus") && !value["AssetStatus"].IsNull())
    {
        if (!value["AssetStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_assetStatus = value["AssetStatus"].GetInt64();
        m_assetStatusHasBeenSet = true;
    }

    if (value.HasMember("AssetPublishTime") && !value["AssetPublishTime"].IsNull())
    {
        if (!value["AssetPublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetPublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetPublishTime = string(value["AssetPublishTime"].GetString());
        m_assetPublishTimeHasBeenSet = true;
    }

    if (value.HasMember("AssetPublishAccount") && !value["AssetPublishAccount"].IsNull())
    {
        if (!value["AssetPublishAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetPublishAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetPublishAccount = string(value["AssetPublishAccount"].GetString());
        m_assetPublishAccountHasBeenSet = true;
    }

    if (value.HasMember("AssetPublishAccountName") && !value["AssetPublishAccountName"].IsNull())
    {
        if (!value["AssetPublishAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.AssetPublishAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assetPublishAccountName = string(value["AssetPublishAccountName"].GetString());
        m_assetPublishAccountNameHasBeenSet = true;
    }

    if (value.HasMember("IndicatorPermission") && !value["IndicatorPermission"].IsNull())
    {
        if (!value["IndicatorPermission"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.IndicatorPermission` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_indicatorPermission.Deserialize(value["IndicatorPermission"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_indicatorPermissionHasBeenSet = true;
    }

    if (value.HasMember("OperateOption") && !value["OperateOption"].IsNull())
    {
        if (!value["OperateOption"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.OperateOption` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_operateOption.Deserialize(value["OperateOption"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_operateOptionHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorBaseInfo.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorBaseInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_indicatorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indicatorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_indicatorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indicatorType, allocator);
    }

    if (m_bizOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_techOwnerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_techOwner.c_str(), allocator).Move(), allocator);
    }

    if (m_bizCaliberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCaliber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizCaliber.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_calLogicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalLogic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calLogic.c_str(), allocator).Move(), allocator);
    }

    if (m_calFreqHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalFreq";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calFreq.c_str(), allocator).Move(), allocator);
    }

    if (m_measureUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeasureUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_measureUnit, allocator);
    }

    if (m_accuracyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Accuracy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accuracy, allocator);
    }

    if (m_sourceIndicatorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIndicatorIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceIndicatorIds.begin(); itr != m_sourceIndicatorIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_dimensionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dimensionIds.begin(); itr != m_dimensionIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_folderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FolderId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_folderId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_bizOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_techOwnerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TechOwnerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_techOwnerName.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_publishAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_publishAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifyTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifyAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_lastModifyAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastModifyAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_changeLogListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChangeLogList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_changeLogList.begin(); itr != m_changeLogList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tableColumnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableColumns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableColumns.begin(); itr != m_tableColumns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_allSourceIndicatorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllSourceIndicatorIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_allSourceIndicatorIds.begin(); itr != m_allSourceIndicatorIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetId.c_str(), allocator).Move(), allocator);
    }

    if (m_assetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetType.c_str(), allocator).Move(), allocator);
    }

    if (m_assetCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetCode.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedIndicatorIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedIndicatorIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_relatedIndicatorIds.begin(); itr != m_relatedIndicatorIds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_bizCatalogIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizCatalogIds.begin(); itr != m_bizCatalogIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_bizCatalogNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizCatalogNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bizCatalogNames.begin(); itr != m_bizCatalogNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_assetLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetLevel, allocator);
    }

    if (m_assetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assetStatus, allocator);
    }

    if (m_assetPublishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetPublishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assetPublishAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPublishAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetPublishAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_assetPublishAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetPublishAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assetPublishAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_indicatorPermissionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndicatorPermission";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_indicatorPermission.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_operateOptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateOption";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operateOption.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

}


string IndicatorBaseInfo::GetName() const
{
    return m_name;
}

void IndicatorBaseInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IndicatorBaseInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IndicatorBaseInfo::GetIndicatorCode() const
{
    return m_indicatorCode;
}

void IndicatorBaseInfo::SetIndicatorCode(const string& _indicatorCode)
{
    m_indicatorCode = _indicatorCode;
    m_indicatorCodeHasBeenSet = true;
}

bool IndicatorBaseInfo::IndicatorCodeHasBeenSet() const
{
    return m_indicatorCodeHasBeenSet;
}

int64_t IndicatorBaseInfo::GetIndicatorType() const
{
    return m_indicatorType;
}

void IndicatorBaseInfo::SetIndicatorType(const int64_t& _indicatorType)
{
    m_indicatorType = _indicatorType;
    m_indicatorTypeHasBeenSet = true;
}

bool IndicatorBaseInfo::IndicatorTypeHasBeenSet() const
{
    return m_indicatorTypeHasBeenSet;
}

string IndicatorBaseInfo::GetBizOwner() const
{
    return m_bizOwner;
}

void IndicatorBaseInfo::SetBizOwner(const string& _bizOwner)
{
    m_bizOwner = _bizOwner;
    m_bizOwnerHasBeenSet = true;
}

bool IndicatorBaseInfo::BizOwnerHasBeenSet() const
{
    return m_bizOwnerHasBeenSet;
}

string IndicatorBaseInfo::GetTechOwner() const
{
    return m_techOwner;
}

void IndicatorBaseInfo::SetTechOwner(const string& _techOwner)
{
    m_techOwner = _techOwner;
    m_techOwnerHasBeenSet = true;
}

bool IndicatorBaseInfo::TechOwnerHasBeenSet() const
{
    return m_techOwnerHasBeenSet;
}

string IndicatorBaseInfo::GetBizCaliber() const
{
    return m_bizCaliber;
}

void IndicatorBaseInfo::SetBizCaliber(const string& _bizCaliber)
{
    m_bizCaliber = _bizCaliber;
    m_bizCaliberHasBeenSet = true;
}

bool IndicatorBaseInfo::BizCaliberHasBeenSet() const
{
    return m_bizCaliberHasBeenSet;
}

string IndicatorBaseInfo::GetDescription() const
{
    return m_description;
}

void IndicatorBaseInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IndicatorBaseInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t IndicatorBaseInfo::GetLevel() const
{
    return m_level;
}

void IndicatorBaseInfo::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool IndicatorBaseInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string IndicatorBaseInfo::GetCalLogic() const
{
    return m_calLogic;
}

void IndicatorBaseInfo::SetCalLogic(const string& _calLogic)
{
    m_calLogic = _calLogic;
    m_calLogicHasBeenSet = true;
}

bool IndicatorBaseInfo::CalLogicHasBeenSet() const
{
    return m_calLogicHasBeenSet;
}

string IndicatorBaseInfo::GetCalFreq() const
{
    return m_calFreq;
}

void IndicatorBaseInfo::SetCalFreq(const string& _calFreq)
{
    m_calFreq = _calFreq;
    m_calFreqHasBeenSet = true;
}

bool IndicatorBaseInfo::CalFreqHasBeenSet() const
{
    return m_calFreqHasBeenSet;
}

int64_t IndicatorBaseInfo::GetMeasureUnit() const
{
    return m_measureUnit;
}

void IndicatorBaseInfo::SetMeasureUnit(const int64_t& _measureUnit)
{
    m_measureUnit = _measureUnit;
    m_measureUnitHasBeenSet = true;
}

bool IndicatorBaseInfo::MeasureUnitHasBeenSet() const
{
    return m_measureUnitHasBeenSet;
}

int64_t IndicatorBaseInfo::GetAccuracy() const
{
    return m_accuracy;
}

void IndicatorBaseInfo::SetAccuracy(const int64_t& _accuracy)
{
    m_accuracy = _accuracy;
    m_accuracyHasBeenSet = true;
}

bool IndicatorBaseInfo::AccuracyHasBeenSet() const
{
    return m_accuracyHasBeenSet;
}

vector<IndicatorBaseSimpleInfo> IndicatorBaseInfo::GetSourceIndicatorIds() const
{
    return m_sourceIndicatorIds;
}

void IndicatorBaseInfo::SetSourceIndicatorIds(const vector<IndicatorBaseSimpleInfo>& _sourceIndicatorIds)
{
    m_sourceIndicatorIds = _sourceIndicatorIds;
    m_sourceIndicatorIdsHasBeenSet = true;
}

bool IndicatorBaseInfo::SourceIndicatorIdsHasBeenSet() const
{
    return m_sourceIndicatorIdsHasBeenSet;
}

int64_t IndicatorBaseInfo::GetId() const
{
    return m_id;
}

void IndicatorBaseInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool IndicatorBaseInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

vector<AssetDimSimpleVO> IndicatorBaseInfo::GetDimensionIds() const
{
    return m_dimensionIds;
}

void IndicatorBaseInfo::SetDimensionIds(const vector<AssetDimSimpleVO>& _dimensionIds)
{
    m_dimensionIds = _dimensionIds;
    m_dimensionIdsHasBeenSet = true;
}

bool IndicatorBaseInfo::DimensionIdsHasBeenSet() const
{
    return m_dimensionIdsHasBeenSet;
}

int64_t IndicatorBaseInfo::GetFolderId() const
{
    return m_folderId;
}

void IndicatorBaseInfo::SetFolderId(const int64_t& _folderId)
{
    m_folderId = _folderId;
    m_folderIdHasBeenSet = true;
}

bool IndicatorBaseInfo::FolderIdHasBeenSet() const
{
    return m_folderIdHasBeenSet;
}

int64_t IndicatorBaseInfo::GetStatus() const
{
    return m_status;
}

void IndicatorBaseInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool IndicatorBaseInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string IndicatorBaseInfo::GetBizOwnerName() const
{
    return m_bizOwnerName;
}

void IndicatorBaseInfo::SetBizOwnerName(const string& _bizOwnerName)
{
    m_bizOwnerName = _bizOwnerName;
    m_bizOwnerNameHasBeenSet = true;
}

bool IndicatorBaseInfo::BizOwnerNameHasBeenSet() const
{
    return m_bizOwnerNameHasBeenSet;
}

string IndicatorBaseInfo::GetTechOwnerName() const
{
    return m_techOwnerName;
}

void IndicatorBaseInfo::SetTechOwnerName(const string& _techOwnerName)
{
    m_techOwnerName = _techOwnerName;
    m_techOwnerNameHasBeenSet = true;
}

bool IndicatorBaseInfo::TechOwnerNameHasBeenSet() const
{
    return m_techOwnerNameHasBeenSet;
}

string IndicatorBaseInfo::GetPublishTime() const
{
    return m_publishTime;
}

void IndicatorBaseInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool IndicatorBaseInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

string IndicatorBaseInfo::GetPublishAccount() const
{
    return m_publishAccount;
}

void IndicatorBaseInfo::SetPublishAccount(const string& _publishAccount)
{
    m_publishAccount = _publishAccount;
    m_publishAccountHasBeenSet = true;
}

bool IndicatorBaseInfo::PublishAccountHasBeenSet() const
{
    return m_publishAccountHasBeenSet;
}

string IndicatorBaseInfo::GetPublishAccountName() const
{
    return m_publishAccountName;
}

void IndicatorBaseInfo::SetPublishAccountName(const string& _publishAccountName)
{
    m_publishAccountName = _publishAccountName;
    m_publishAccountNameHasBeenSet = true;
}

bool IndicatorBaseInfo::PublishAccountNameHasBeenSet() const
{
    return m_publishAccountNameHasBeenSet;
}

string IndicatorBaseInfo::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void IndicatorBaseInfo::SetLastModifyTime(const string& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool IndicatorBaseInfo::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

string IndicatorBaseInfo::GetLastModifyAccount() const
{
    return m_lastModifyAccount;
}

void IndicatorBaseInfo::SetLastModifyAccount(const string& _lastModifyAccount)
{
    m_lastModifyAccount = _lastModifyAccount;
    m_lastModifyAccountHasBeenSet = true;
}

bool IndicatorBaseInfo::LastModifyAccountHasBeenSet() const
{
    return m_lastModifyAccountHasBeenSet;
}

string IndicatorBaseInfo::GetLastModifyAccountName() const
{
    return m_lastModifyAccountName;
}

void IndicatorBaseInfo::SetLastModifyAccountName(const string& _lastModifyAccountName)
{
    m_lastModifyAccountName = _lastModifyAccountName;
    m_lastModifyAccountNameHasBeenSet = true;
}

bool IndicatorBaseInfo::LastModifyAccountNameHasBeenSet() const
{
    return m_lastModifyAccountNameHasBeenSet;
}

vector<ChangeLog> IndicatorBaseInfo::GetChangeLogList() const
{
    return m_changeLogList;
}

void IndicatorBaseInfo::SetChangeLogList(const vector<ChangeLog>& _changeLogList)
{
    m_changeLogList = _changeLogList;
    m_changeLogListHasBeenSet = true;
}

bool IndicatorBaseInfo::ChangeLogListHasBeenSet() const
{
    return m_changeLogListHasBeenSet;
}

vector<AssetDimTableColumn> IndicatorBaseInfo::GetTableColumns() const
{
    return m_tableColumns;
}

void IndicatorBaseInfo::SetTableColumns(const vector<AssetDimTableColumn>& _tableColumns)
{
    m_tableColumns = _tableColumns;
    m_tableColumnsHasBeenSet = true;
}

bool IndicatorBaseInfo::TableColumnsHasBeenSet() const
{
    return m_tableColumnsHasBeenSet;
}

vector<IndicatorBaseInfo> IndicatorBaseInfo::GetAllSourceIndicatorIds() const
{
    return m_allSourceIndicatorIds;
}

void IndicatorBaseInfo::SetAllSourceIndicatorIds(const vector<IndicatorBaseInfo>& _allSourceIndicatorIds)
{
    m_allSourceIndicatorIds = _allSourceIndicatorIds;
    m_allSourceIndicatorIdsHasBeenSet = true;
}

bool IndicatorBaseInfo::AllSourceIndicatorIdsHasBeenSet() const
{
    return m_allSourceIndicatorIdsHasBeenSet;
}

string IndicatorBaseInfo::GetAssetId() const
{
    return m_assetId;
}

void IndicatorBaseInfo::SetAssetId(const string& _assetId)
{
    m_assetId = _assetId;
    m_assetIdHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetIdHasBeenSet() const
{
    return m_assetIdHasBeenSet;
}

string IndicatorBaseInfo::GetAssetType() const
{
    return m_assetType;
}

void IndicatorBaseInfo::SetAssetType(const string& _assetType)
{
    m_assetType = _assetType;
    m_assetTypeHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetTypeHasBeenSet() const
{
    return m_assetTypeHasBeenSet;
}

string IndicatorBaseInfo::GetAssetCode() const
{
    return m_assetCode;
}

void IndicatorBaseInfo::SetAssetCode(const string& _assetCode)
{
    m_assetCode = _assetCode;
    m_assetCodeHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetCodeHasBeenSet() const
{
    return m_assetCodeHasBeenSet;
}

vector<IndicatorBaseInfo> IndicatorBaseInfo::GetRelatedIndicatorIds() const
{
    return m_relatedIndicatorIds;
}

void IndicatorBaseInfo::SetRelatedIndicatorIds(const vector<IndicatorBaseInfo>& _relatedIndicatorIds)
{
    m_relatedIndicatorIds = _relatedIndicatorIds;
    m_relatedIndicatorIdsHasBeenSet = true;
}

bool IndicatorBaseInfo::RelatedIndicatorIdsHasBeenSet() const
{
    return m_relatedIndicatorIdsHasBeenSet;
}

vector<int64_t> IndicatorBaseInfo::GetBizCatalogIds() const
{
    return m_bizCatalogIds;
}

void IndicatorBaseInfo::SetBizCatalogIds(const vector<int64_t>& _bizCatalogIds)
{
    m_bizCatalogIds = _bizCatalogIds;
    m_bizCatalogIdsHasBeenSet = true;
}

bool IndicatorBaseInfo::BizCatalogIdsHasBeenSet() const
{
    return m_bizCatalogIdsHasBeenSet;
}

vector<string> IndicatorBaseInfo::GetBizCatalogNames() const
{
    return m_bizCatalogNames;
}

void IndicatorBaseInfo::SetBizCatalogNames(const vector<string>& _bizCatalogNames)
{
    m_bizCatalogNames = _bizCatalogNames;
    m_bizCatalogNamesHasBeenSet = true;
}

bool IndicatorBaseInfo::BizCatalogNamesHasBeenSet() const
{
    return m_bizCatalogNamesHasBeenSet;
}

int64_t IndicatorBaseInfo::GetAssetLevel() const
{
    return m_assetLevel;
}

void IndicatorBaseInfo::SetAssetLevel(const int64_t& _assetLevel)
{
    m_assetLevel = _assetLevel;
    m_assetLevelHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetLevelHasBeenSet() const
{
    return m_assetLevelHasBeenSet;
}

int64_t IndicatorBaseInfo::GetAssetStatus() const
{
    return m_assetStatus;
}

void IndicatorBaseInfo::SetAssetStatus(const int64_t& _assetStatus)
{
    m_assetStatus = _assetStatus;
    m_assetStatusHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetStatusHasBeenSet() const
{
    return m_assetStatusHasBeenSet;
}

string IndicatorBaseInfo::GetAssetPublishTime() const
{
    return m_assetPublishTime;
}

void IndicatorBaseInfo::SetAssetPublishTime(const string& _assetPublishTime)
{
    m_assetPublishTime = _assetPublishTime;
    m_assetPublishTimeHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetPublishTimeHasBeenSet() const
{
    return m_assetPublishTimeHasBeenSet;
}

string IndicatorBaseInfo::GetAssetPublishAccount() const
{
    return m_assetPublishAccount;
}

void IndicatorBaseInfo::SetAssetPublishAccount(const string& _assetPublishAccount)
{
    m_assetPublishAccount = _assetPublishAccount;
    m_assetPublishAccountHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetPublishAccountHasBeenSet() const
{
    return m_assetPublishAccountHasBeenSet;
}

string IndicatorBaseInfo::GetAssetPublishAccountName() const
{
    return m_assetPublishAccountName;
}

void IndicatorBaseInfo::SetAssetPublishAccountName(const string& _assetPublishAccountName)
{
    m_assetPublishAccountName = _assetPublishAccountName;
    m_assetPublishAccountNameHasBeenSet = true;
}

bool IndicatorBaseInfo::AssetPublishAccountNameHasBeenSet() const
{
    return m_assetPublishAccountNameHasBeenSet;
}

PermissionStatus IndicatorBaseInfo::GetIndicatorPermission() const
{
    return m_indicatorPermission;
}

void IndicatorBaseInfo::SetIndicatorPermission(const PermissionStatus& _indicatorPermission)
{
    m_indicatorPermission = _indicatorPermission;
    m_indicatorPermissionHasBeenSet = true;
}

bool IndicatorBaseInfo::IndicatorPermissionHasBeenSet() const
{
    return m_indicatorPermissionHasBeenSet;
}

DataAssetOption IndicatorBaseInfo::GetOperateOption() const
{
    return m_operateOption;
}

void IndicatorBaseInfo::SetOperateOption(const DataAssetOption& _operateOption)
{
    m_operateOption = _operateOption;
    m_operateOptionHasBeenSet = true;
}

bool IndicatorBaseInfo::OperateOptionHasBeenSet() const
{
    return m_operateOptionHasBeenSet;
}

string IndicatorBaseInfo::GetProjectId() const
{
    return m_projectId;
}

void IndicatorBaseInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool IndicatorBaseInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string IndicatorBaseInfo::GetProjectName() const
{
    return m_projectName;
}

void IndicatorBaseInfo::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool IndicatorBaseInfo::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

