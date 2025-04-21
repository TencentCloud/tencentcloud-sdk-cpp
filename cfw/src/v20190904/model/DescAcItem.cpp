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

#include <tencentcloud/cfw/v20190904/model/DescAcItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescAcItem::DescAcItem() :
    m_sourceContentHasBeenSet(false),
    m_targetContentHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_portHasBeenSet(false),
    m_ruleActionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_countHasBeenSet(false),
    m_orderIndexHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_invalidHasBeenSet(false),
    m_isRegionHasBeenSet(false),
    m_countryCodeHasBeenSet(false),
    m_cityCodeHasBeenSet(false),
    m_countryNameHasBeenSet(false),
    m_cityNameHasBeenSet(false),
    m_cloudCodeHasBeenSet(false),
    m_isCloudHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_internalUuidHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_betaListHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_scopeDescHasBeenSet(false),
    m_internetBorderUuidHasBeenSet(false),
    m_paramTemplateNameHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_sourceNameHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_lastHitTimeHasBeenSet(false),
    m_countryKeyHasBeenSet(false),
    m_cityKeyHasBeenSet(false)
{
}

CoreInternalOutcome DescAcItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceContent") && !value["SourceContent"].IsNull())
    {
        if (!value["SourceContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.SourceContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceContent = string(value["SourceContent"].GetString());
        m_sourceContentHasBeenSet = true;
    }

    if (value.HasMember("TargetContent") && !value["TargetContent"].IsNull())
    {
        if (!value["TargetContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.TargetContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetContent = string(value["TargetContent"].GetString());
        m_targetContentHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("Port") && !value["Port"].IsNull())
    {
        if (!value["Port"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Port` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_port = string(value["Port"].GetString());
        m_portHasBeenSet = true;
    }

    if (value.HasMember("RuleAction") && !value["RuleAction"].IsNull())
    {
        if (!value["RuleAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.RuleAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleAction = string(value["RuleAction"].GetString());
        m_ruleActionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("OrderIndex") && !value["OrderIndex"].IsNull())
    {
        if (!value["OrderIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.OrderIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderIndex = value["OrderIndex"].GetUint64();
        m_orderIndexHasBeenSet = true;
    }

    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Uuid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = value["Uuid"].GetUint64();
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("Invalid") && !value["Invalid"].IsNull())
    {
        if (!value["Invalid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Invalid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_invalid = value["Invalid"].GetUint64();
        m_invalidHasBeenSet = true;
    }

    if (value.HasMember("IsRegion") && !value["IsRegion"].IsNull())
    {
        if (!value["IsRegion"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.IsRegion` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isRegion = value["IsRegion"].GetUint64();
        m_isRegionHasBeenSet = true;
    }

    if (value.HasMember("CountryCode") && !value["CountryCode"].IsNull())
    {
        if (!value["CountryCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CountryCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_countryCode = value["CountryCode"].GetUint64();
        m_countryCodeHasBeenSet = true;
    }

    if (value.HasMember("CityCode") && !value["CityCode"].IsNull())
    {
        if (!value["CityCode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CityCode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cityCode = value["CityCode"].GetUint64();
        m_cityCodeHasBeenSet = true;
    }

    if (value.HasMember("CountryName") && !value["CountryName"].IsNull())
    {
        if (!value["CountryName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CountryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryName = string(value["CountryName"].GetString());
        m_countryNameHasBeenSet = true;
    }

    if (value.HasMember("CityName") && !value["CityName"].IsNull())
    {
        if (!value["CityName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CityName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityName = string(value["CityName"].GetString());
        m_cityNameHasBeenSet = true;
    }

    if (value.HasMember("CloudCode") && !value["CloudCode"].IsNull())
    {
        if (!value["CloudCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CloudCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudCode = string(value["CloudCode"].GetString());
        m_cloudCodeHasBeenSet = true;
    }

    if (value.HasMember("IsCloud") && !value["IsCloud"].IsNull())
    {
        if (!value["IsCloud"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.IsCloud` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCloud = value["IsCloud"].GetUint64();
        m_isCloudHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Enable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_enable = string(value["Enable"].GetString());
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Direction` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetUint64();
        m_directionHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InternalUuid") && !value["InternalUuid"].IsNull())
    {
        if (!value["InternalUuid"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.InternalUuid` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_internalUuid = value["InternalUuid"].GetInt64();
        m_internalUuidHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BetaList") && !value["BetaList"].IsNull())
    {
        if (!value["BetaList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescAcItem.BetaList` is not array type"));

        const rapidjson::Value &tmpValue = value["BetaList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BetaInfoByACL item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_betaList.push_back(item);
        }
        m_betaListHasBeenSet = true;
    }

    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ScopeDesc") && !value["ScopeDesc"].IsNull())
    {
        if (!value["ScopeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.ScopeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeDesc = string(value["ScopeDesc"].GetString());
        m_scopeDescHasBeenSet = true;
    }

    if (value.HasMember("InternetBorderUuid") && !value["InternetBorderUuid"].IsNull())
    {
        if (!value["InternetBorderUuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.InternetBorderUuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_internetBorderUuid = string(value["InternetBorderUuid"].GetString());
        m_internetBorderUuidHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateName") && !value["ParamTemplateName"].IsNull())
    {
        if (!value["ParamTemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.ParamTemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateName = string(value["ParamTemplateName"].GetString());
        m_paramTemplateNameHasBeenSet = true;
    }

    if (value.HasMember("ParamTemplateId") && !value["ParamTemplateId"].IsNull())
    {
        if (!value["ParamTemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.ParamTemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paramTemplateId = string(value["ParamTemplateId"].GetString());
        m_paramTemplateIdHasBeenSet = true;
    }

    if (value.HasMember("SourceName") && !value["SourceName"].IsNull())
    {
        if (!value["SourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.SourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceName = string(value["SourceName"].GetString());
        m_sourceNameHasBeenSet = true;
    }

    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("LastHitTime") && !value["LastHitTime"].IsNull())
    {
        if (!value["LastHitTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.LastHitTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastHitTime = string(value["LastHitTime"].GetString());
        m_lastHitTimeHasBeenSet = true;
    }

    if (value.HasMember("CountryKey") && !value["CountryKey"].IsNull())
    {
        if (!value["CountryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CountryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_countryKey = string(value["CountryKey"].GetString());
        m_countryKeyHasBeenSet = true;
    }

    if (value.HasMember("CityKey") && !value["CityKey"].IsNull())
    {
        if (!value["CityKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescAcItem.CityKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cityKey = string(value["CityKey"].GetString());
        m_cityKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescAcItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceContent.c_str(), allocator).Move(), allocator);
    }

    if (m_targetContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetContent.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_port.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleAction.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_orderIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderIndex, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uuid, allocator);
    }

    if (m_invalidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Invalid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invalid, allocator);
    }

    if (m_isRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isRegion, allocator);
    }

    if (m_countryCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_countryCode, allocator);
    }

    if (m_cityCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cityCode, allocator);
    }

    if (m_countryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryName.c_str(), allocator).Move(), allocator);
    }

    if (m_cityNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityName.c_str(), allocator).Move(), allocator);
    }

    if (m_cloudCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudCode.c_str(), allocator).Move(), allocator);
    }

    if (m_isCloudHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCloud";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCloud, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_enable.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_internalUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternalUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_internalUuid, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_betaListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BetaList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_betaList.begin(); itr != m_betaList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_internetBorderUuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetBorderUuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_internetBorderUuid.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateName.c_str(), allocator).Move(), allocator);
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paramTemplateId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_lastHitTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastHitTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastHitTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CountryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_countryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_cityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CityKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cityKey.c_str(), allocator).Move(), allocator);
    }

}


string DescAcItem::GetSourceContent() const
{
    return m_sourceContent;
}

void DescAcItem::SetSourceContent(const string& _sourceContent)
{
    m_sourceContent = _sourceContent;
    m_sourceContentHasBeenSet = true;
}

bool DescAcItem::SourceContentHasBeenSet() const
{
    return m_sourceContentHasBeenSet;
}

string DescAcItem::GetTargetContent() const
{
    return m_targetContent;
}

void DescAcItem::SetTargetContent(const string& _targetContent)
{
    m_targetContent = _targetContent;
    m_targetContentHasBeenSet = true;
}

bool DescAcItem::TargetContentHasBeenSet() const
{
    return m_targetContentHasBeenSet;
}

string DescAcItem::GetProtocol() const
{
    return m_protocol;
}

void DescAcItem::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescAcItem::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescAcItem::GetPort() const
{
    return m_port;
}

void DescAcItem::SetPort(const string& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool DescAcItem::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string DescAcItem::GetRuleAction() const
{
    return m_ruleAction;
}

void DescAcItem::SetRuleAction(const string& _ruleAction)
{
    m_ruleAction = _ruleAction;
    m_ruleActionHasBeenSet = true;
}

bool DescAcItem::RuleActionHasBeenSet() const
{
    return m_ruleActionHasBeenSet;
}

string DescAcItem::GetDescription() const
{
    return m_description;
}

void DescAcItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescAcItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

uint64_t DescAcItem::GetCount() const
{
    return m_count;
}

void DescAcItem::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool DescAcItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

uint64_t DescAcItem::GetOrderIndex() const
{
    return m_orderIndex;
}

void DescAcItem::SetOrderIndex(const uint64_t& _orderIndex)
{
    m_orderIndex = _orderIndex;
    m_orderIndexHasBeenSet = true;
}

bool DescAcItem::OrderIndexHasBeenSet() const
{
    return m_orderIndexHasBeenSet;
}

string DescAcItem::GetSourceType() const
{
    return m_sourceType;
}

void DescAcItem::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DescAcItem::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string DescAcItem::GetTargetType() const
{
    return m_targetType;
}

void DescAcItem::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool DescAcItem::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

uint64_t DescAcItem::GetUuid() const
{
    return m_uuid;
}

void DescAcItem::SetUuid(const uint64_t& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool DescAcItem::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

uint64_t DescAcItem::GetInvalid() const
{
    return m_invalid;
}

void DescAcItem::SetInvalid(const uint64_t& _invalid)
{
    m_invalid = _invalid;
    m_invalidHasBeenSet = true;
}

bool DescAcItem::InvalidHasBeenSet() const
{
    return m_invalidHasBeenSet;
}

uint64_t DescAcItem::GetIsRegion() const
{
    return m_isRegion;
}

void DescAcItem::SetIsRegion(const uint64_t& _isRegion)
{
    m_isRegion = _isRegion;
    m_isRegionHasBeenSet = true;
}

bool DescAcItem::IsRegionHasBeenSet() const
{
    return m_isRegionHasBeenSet;
}

uint64_t DescAcItem::GetCountryCode() const
{
    return m_countryCode;
}

void DescAcItem::SetCountryCode(const uint64_t& _countryCode)
{
    m_countryCode = _countryCode;
    m_countryCodeHasBeenSet = true;
}

bool DescAcItem::CountryCodeHasBeenSet() const
{
    return m_countryCodeHasBeenSet;
}

uint64_t DescAcItem::GetCityCode() const
{
    return m_cityCode;
}

void DescAcItem::SetCityCode(const uint64_t& _cityCode)
{
    m_cityCode = _cityCode;
    m_cityCodeHasBeenSet = true;
}

bool DescAcItem::CityCodeHasBeenSet() const
{
    return m_cityCodeHasBeenSet;
}

string DescAcItem::GetCountryName() const
{
    return m_countryName;
}

void DescAcItem::SetCountryName(const string& _countryName)
{
    m_countryName = _countryName;
    m_countryNameHasBeenSet = true;
}

bool DescAcItem::CountryNameHasBeenSet() const
{
    return m_countryNameHasBeenSet;
}

string DescAcItem::GetCityName() const
{
    return m_cityName;
}

void DescAcItem::SetCityName(const string& _cityName)
{
    m_cityName = _cityName;
    m_cityNameHasBeenSet = true;
}

bool DescAcItem::CityNameHasBeenSet() const
{
    return m_cityNameHasBeenSet;
}

string DescAcItem::GetCloudCode() const
{
    return m_cloudCode;
}

void DescAcItem::SetCloudCode(const string& _cloudCode)
{
    m_cloudCode = _cloudCode;
    m_cloudCodeHasBeenSet = true;
}

bool DescAcItem::CloudCodeHasBeenSet() const
{
    return m_cloudCodeHasBeenSet;
}

uint64_t DescAcItem::GetIsCloud() const
{
    return m_isCloud;
}

void DescAcItem::SetIsCloud(const uint64_t& _isCloud)
{
    m_isCloud = _isCloud;
    m_isCloudHasBeenSet = true;
}

bool DescAcItem::IsCloudHasBeenSet() const
{
    return m_isCloudHasBeenSet;
}

string DescAcItem::GetEnable() const
{
    return m_enable;
}

void DescAcItem::SetEnable(const string& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DescAcItem::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

uint64_t DescAcItem::GetDirection() const
{
    return m_direction;
}

void DescAcItem::SetDirection(const uint64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescAcItem::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescAcItem::GetInstanceName() const
{
    return m_instanceName;
}

void DescAcItem::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DescAcItem::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

int64_t DescAcItem::GetInternalUuid() const
{
    return m_internalUuid;
}

void DescAcItem::SetInternalUuid(const int64_t& _internalUuid)
{
    m_internalUuid = _internalUuid;
    m_internalUuidHasBeenSet = true;
}

bool DescAcItem::InternalUuidHasBeenSet() const
{
    return m_internalUuidHasBeenSet;
}

uint64_t DescAcItem::GetStatus() const
{
    return m_status;
}

void DescAcItem::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescAcItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<BetaInfoByACL> DescAcItem::GetBetaList() const
{
    return m_betaList;
}

void DescAcItem::SetBetaList(const vector<BetaInfoByACL>& _betaList)
{
    m_betaList = _betaList;
    m_betaListHasBeenSet = true;
}

bool DescAcItem::BetaListHasBeenSet() const
{
    return m_betaListHasBeenSet;
}

string DescAcItem::GetScope() const
{
    return m_scope;
}

void DescAcItem::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool DescAcItem::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string DescAcItem::GetScopeDesc() const
{
    return m_scopeDesc;
}

void DescAcItem::SetScopeDesc(const string& _scopeDesc)
{
    m_scopeDesc = _scopeDesc;
    m_scopeDescHasBeenSet = true;
}

bool DescAcItem::ScopeDescHasBeenSet() const
{
    return m_scopeDescHasBeenSet;
}

string DescAcItem::GetInternetBorderUuid() const
{
    return m_internetBorderUuid;
}

void DescAcItem::SetInternetBorderUuid(const string& _internetBorderUuid)
{
    m_internetBorderUuid = _internetBorderUuid;
    m_internetBorderUuidHasBeenSet = true;
}

bool DescAcItem::InternetBorderUuidHasBeenSet() const
{
    return m_internetBorderUuidHasBeenSet;
}

string DescAcItem::GetParamTemplateName() const
{
    return m_paramTemplateName;
}

void DescAcItem::SetParamTemplateName(const string& _paramTemplateName)
{
    m_paramTemplateName = _paramTemplateName;
    m_paramTemplateNameHasBeenSet = true;
}

bool DescAcItem::ParamTemplateNameHasBeenSet() const
{
    return m_paramTemplateNameHasBeenSet;
}

string DescAcItem::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void DescAcItem::SetParamTemplateId(const string& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool DescAcItem::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

string DescAcItem::GetSourceName() const
{
    return m_sourceName;
}

void DescAcItem::SetSourceName(const string& _sourceName)
{
    m_sourceName = _sourceName;
    m_sourceNameHasBeenSet = true;
}

bool DescAcItem::SourceNameHasBeenSet() const
{
    return m_sourceNameHasBeenSet;
}

string DescAcItem::GetTargetName() const
{
    return m_targetName;
}

void DescAcItem::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool DescAcItem::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string DescAcItem::GetLastHitTime() const
{
    return m_lastHitTime;
}

void DescAcItem::SetLastHitTime(const string& _lastHitTime)
{
    m_lastHitTime = _lastHitTime;
    m_lastHitTimeHasBeenSet = true;
}

bool DescAcItem::LastHitTimeHasBeenSet() const
{
    return m_lastHitTimeHasBeenSet;
}

string DescAcItem::GetCountryKey() const
{
    return m_countryKey;
}

void DescAcItem::SetCountryKey(const string& _countryKey)
{
    m_countryKey = _countryKey;
    m_countryKeyHasBeenSet = true;
}

bool DescAcItem::CountryKeyHasBeenSet() const
{
    return m_countryKeyHasBeenSet;
}

string DescAcItem::GetCityKey() const
{
    return m_cityKey;
}

void DescAcItem::SetCityKey(const string& _cityKey)
{
    m_cityKey = _cityKey;
    m_cityKeyHasBeenSet = true;
}

bool DescAcItem::CityKeyHasBeenSet() const
{
    return m_cityKeyHasBeenSet;
}

