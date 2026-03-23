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

#include <tencentcloud/apis/v20240801/model/DescribeMcpServerResponseVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeMcpServerResponseVO::DescribeMcpServerResponseVO() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_labelIDsHasBeenSet(false),
    m_categoryIDsHasBeenSet(false),
    m_targetSelectHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteConfigHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackConfigHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_appHasBeenSet(false),
    m_catalogsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_customHttpHostHasBeenSet(false),
    m_httpHostTypeHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_mcpVersionHasBeenSet(false),
    m_wrapServicesHasBeenSet(false),
    m_toolNumHasBeenSet(false),
    m_mcpSecurityRulesVOHasBeenSet(false),
    m_toolConfigsHasBeenSet(false),
    m_urlObjHasBeenSet(false),
    m_toolMessageHasBeenSet(false),
    m_toolsHasBeenSet(false),
    m_wrapPaasIDHasBeenSet(false),
    m_relateAgentAppNumHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMcpServerResponseVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LabelIDs") && !value["LabelIDs"].IsNull())
    {
        if (!value["LabelIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.LabelIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelIDs.push_back((*itr).GetString());
        }
        m_labelIDsHasBeenSet = true;
    }

    if (value.HasMember("CategoryIDs") && !value["CategoryIDs"].IsNull())
    {
        if (!value["CategoryIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.CategoryIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIDs.push_back((*itr).GetString());
        }
        m_categoryIDsHasBeenSet = true;
    }

    if (value.HasMember("TargetSelect") && !value["TargetSelect"].IsNull())
    {
        if (!value["TargetSelect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.TargetSelect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSelect = string(value["TargetSelect"].GetString());
        m_targetSelectHasBeenSet = true;
    }

    if (value.HasMember("TargetHosts") && !value["TargetHosts"].IsNull())
    {
        if (!value["TargetHosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.TargetHosts` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetHosts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetHostDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetHosts.push_back(item);
        }
        m_targetHostsHasBeenSet = true;
    }

    if (value.HasMember("HttpProtocolType") && !value["HttpProtocolType"].IsNull())
    {
        if (!value["HttpProtocolType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.HttpProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpProtocolType = string(value["HttpProtocolType"].GetString());
        m_httpProtocolTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckTargetCertsError") && !value["CheckTargetCertsError"].IsNull())
    {
        if (!value["CheckTargetCertsError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.CheckTargetCertsError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkTargetCertsError = value["CheckTargetCertsError"].GetBool();
        m_checkTargetCertsErrorHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteStatus") && !value["IpWhiteStatus"].IsNull())
    {
        if (!value["IpWhiteStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.IpWhiteStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipWhiteStatus = value["IpWhiteStatus"].GetBool();
        m_ipWhiteStatusHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteConfig") && !value["IpWhiteConfig"].IsNull())
    {
        if (!value["IpWhiteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.IpWhiteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipWhiteConfig.Deserialize(value["IpWhiteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipWhiteConfigHasBeenSet = true;
    }

    if (value.HasMember("IpBlackStatus") && !value["IpBlackStatus"].IsNull())
    {
        if (!value["IpBlackStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.IpBlackStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipBlackStatus = value["IpBlackStatus"].GetBool();
        m_ipBlackStatusHasBeenSet = true;
    }

    if (value.HasMember("IpBlackConfig") && !value["IpBlackConfig"].IsNull())
    {
        if (!value["IpBlackConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.IpBlackConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ipBlackConfig.Deserialize(value["IpBlackConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ipBlackConfigHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.App` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_app.Deserialize(value["App"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appHasBeenSet = true;
    }

    if (value.HasMember("Catalogs") && !value["Catalogs"].IsNull())
    {
        if (!value["Catalogs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Catalogs` is not array type"));

        const rapidjson::Value &tmpValue = value["Catalogs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IDNameVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_catalogs.push_back(item);
        }
        m_catalogsHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Labels` is not array type"));

        const rapidjson::Value &tmpValue = value["Labels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IDNameVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labels.push_back(item);
        }
        m_labelsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("CustomHttpHost") && !value["CustomHttpHost"].IsNull())
    {
        if (!value["CustomHttpHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.CustomHttpHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customHttpHost = string(value["CustomHttpHost"].GetString());
        m_customHttpHostHasBeenSet = true;
    }

    if (value.HasMember("HttpHostType") && !value["HttpHostType"].IsNull())
    {
        if (!value["HttpHostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.HttpHostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpHostType = string(value["HttpHostType"].GetString());
        m_httpHostTypeHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("McpVersion") && !value["McpVersion"].IsNull())
    {
        if (!value["McpVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.McpVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mcpVersion = string(value["McpVersion"].GetString());
        m_mcpVersionHasBeenSet = true;
    }

    if (value.HasMember("WrapServices") && !value["WrapServices"].IsNull())
    {
        if (!value["WrapServices"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.WrapServices` is not array type"));

        const rapidjson::Value &tmpValue = value["WrapServices"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_wrapServices.push_back((*itr).GetString());
        }
        m_wrapServicesHasBeenSet = true;
    }

    if (value.HasMember("ToolNum") && !value["ToolNum"].IsNull())
    {
        if (!value["ToolNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.ToolNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_toolNum = value["ToolNum"].GetInt64();
        m_toolNumHasBeenSet = true;
    }

    if (value.HasMember("McpSecurityRulesVO") && !value["McpSecurityRulesVO"].IsNull())
    {
        if (!value["McpSecurityRulesVO"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.McpSecurityRulesVO` is not array type"));

        const rapidjson::Value &tmpValue = value["McpSecurityRulesVO"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McpSecurityRulesVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mcpSecurityRulesVO.push_back(item);
        }
        m_mcpSecurityRulesVOHasBeenSet = true;
    }

    if (value.HasMember("ToolConfigs") && !value["ToolConfigs"].IsNull())
    {
        if (!value["ToolConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.ToolConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["ToolConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ToolConfigVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_toolConfigs.push_back(item);
        }
        m_toolConfigsHasBeenSet = true;
    }

    if (value.HasMember("UrlObj") && !value["UrlObj"].IsNull())
    {
        if (!value["UrlObj"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.UrlObj` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_urlObj.Deserialize(value["UrlObj"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_urlObjHasBeenSet = true;
    }

    if (value.HasMember("ToolMessage") && !value["ToolMessage"].IsNull())
    {
        if (!value["ToolMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.ToolMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_toolMessage = string(value["ToolMessage"].GetString());
        m_toolMessageHasBeenSet = true;
    }

    if (value.HasMember("Tools") && !value["Tools"].IsNull())
    {
        if (!value["Tools"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.Tools` is not array type"));

        const rapidjson::Value &tmpValue = value["Tools"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            McpTool item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tools.push_back(item);
        }
        m_toolsHasBeenSet = true;
    }

    if (value.HasMember("WrapPaasID") && !value["WrapPaasID"].IsNull())
    {
        if (!value["WrapPaasID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.WrapPaasID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_wrapPaasID = string(value["WrapPaasID"].GetString());
        m_wrapPaasIDHasBeenSet = true;
    }

    if (value.HasMember("RelateAgentAppNum") && !value["RelateAgentAppNum"].IsNull())
    {
        if (!value["RelateAgentAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.RelateAgentAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateAgentAppNum = value["RelateAgentAppNum"].GetInt64();
        m_relateAgentAppNumHasBeenSet = true;
    }

    if (value.HasMember("PluginConfigs") && !value["PluginConfigs"].IsNull())
    {
        if (!value["PluginConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeMcpServerResponseVO.PluginConfigs` is not array type"));

        const rapidjson::Value &tmpValue = value["PluginConfigs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PluginConfigDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pluginConfigs.push_back(item);
        }
        m_pluginConfigsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeMcpServerResponseVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_labelIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelIDs.begin(); itr != m_labelIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_categoryIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categoryIDs.begin(); itr != m_categoryIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSelect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSelect.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHosts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetHosts.begin(); itr != m_targetHosts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_httpProtocolTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpProtocolType.c_str(), allocator).Move(), allocator);
    }

    if (m_checkTargetCertsErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTargetCertsError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkTargetCertsError, allocator);
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipWhiteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipWhiteStatus, allocator);
    }

    if (m_ipWhiteConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipWhiteConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipBlackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipBlackStatus, allocator);
    }

    if (m_ipBlackConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ipBlackConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_app.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_catalogsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Catalogs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_catalogs.begin(); itr != m_catalogs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labels.begin(); itr != m_labels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_customHttpHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomHttpHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customHttpHost.c_str(), allocator).Move(), allocator);
    }

    if (m_httpHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpHostType.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_mcpVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mcpVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_wrapServicesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrapServices";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wrapServices.begin(); itr != m_wrapServices.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_toolNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_toolNum, allocator);
    }

    if (m_mcpSecurityRulesVOHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpSecurityRulesVO";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mcpSecurityRulesVO.begin(); itr != m_mcpSecurityRulesVO.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_toolConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_toolConfigs.begin(); itr != m_toolConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_urlObjHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlObj";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_urlObj.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_toolMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToolMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_toolMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_toolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tools";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tools.begin(); itr != m_tools.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_wrapPaasIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WrapPaasID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_wrapPaasID.c_str(), allocator).Move(), allocator);
    }

    if (m_relateAgentAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateAgentAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateAgentAppNum, allocator);
    }

    if (m_pluginConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginConfigs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginConfigs.begin(); itr != m_pluginConfigs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DescribeMcpServerResponseVO::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeMcpServerResponseVO::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeMcpServerResponseVO::GetName() const
{
    return m_name;
}

void DescribeMcpServerResponseVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeMcpServerResponseVO::GetDescription() const
{
    return m_description;
}

void DescribeMcpServerResponseVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> DescribeMcpServerResponseVO::GetLabelIDs() const
{
    return m_labelIDs;
}

void DescribeMcpServerResponseVO::SetLabelIDs(const vector<string>& _labelIDs)
{
    m_labelIDs = _labelIDs;
    m_labelIDsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::LabelIDsHasBeenSet() const
{
    return m_labelIDsHasBeenSet;
}

vector<string> DescribeMcpServerResponseVO::GetCategoryIDs() const
{
    return m_categoryIDs;
}

void DescribeMcpServerResponseVO::SetCategoryIDs(const vector<string>& _categoryIDs)
{
    m_categoryIDs = _categoryIDs;
    m_categoryIDsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::CategoryIDsHasBeenSet() const
{
    return m_categoryIDsHasBeenSet;
}

string DescribeMcpServerResponseVO::GetTargetSelect() const
{
    return m_targetSelect;
}

void DescribeMcpServerResponseVO::SetTargetSelect(const string& _targetSelect)
{
    m_targetSelect = _targetSelect;
    m_targetSelectHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::TargetSelectHasBeenSet() const
{
    return m_targetSelectHasBeenSet;
}

vector<TargetHostDTO> DescribeMcpServerResponseVO::GetTargetHosts() const
{
    return m_targetHosts;
}

void DescribeMcpServerResponseVO::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

string DescribeMcpServerResponseVO::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void DescribeMcpServerResponseVO::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

bool DescribeMcpServerResponseVO::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void DescribeMcpServerResponseVO::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string DescribeMcpServerResponseVO::GetTargetPath() const
{
    return m_targetPath;
}

void DescribeMcpServerResponseVO::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

bool DescribeMcpServerResponseVO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void DescribeMcpServerResponseVO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO DescribeMcpServerResponseVO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void DescribeMcpServerResponseVO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool DescribeMcpServerResponseVO::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void DescribeMcpServerResponseVO::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

IpConfig DescribeMcpServerResponseVO::GetIpWhiteConfig() const
{
    return m_ipWhiteConfig;
}

void DescribeMcpServerResponseVO::SetIpWhiteConfig(const IpConfig& _ipWhiteConfig)
{
    m_ipWhiteConfig = _ipWhiteConfig;
    m_ipWhiteConfigHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::IpWhiteConfigHasBeenSet() const
{
    return m_ipWhiteConfigHasBeenSet;
}

bool DescribeMcpServerResponseVO::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void DescribeMcpServerResponseVO::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

IpConfig DescribeMcpServerResponseVO::GetIpBlackConfig() const
{
    return m_ipBlackConfig;
}

void DescribeMcpServerResponseVO::SetIpBlackConfig(const IpConfig& _ipBlackConfig)
{
    m_ipBlackConfig = _ipBlackConfig;
    m_ipBlackConfigHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::IpBlackConfigHasBeenSet() const
{
    return m_ipBlackConfigHasBeenSet;
}

string DescribeMcpServerResponseVO::GetID() const
{
    return m_iD;
}

void DescribeMcpServerResponseVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeMcpServerResponseVO::GetStatus() const
{
    return m_status;
}

void DescribeMcpServerResponseVO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeMcpServerResponseVO::GetUrl() const
{
    return m_url;
}

void DescribeMcpServerResponseVO::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

IDNameVO DescribeMcpServerResponseVO::GetApp() const
{
    return m_app;
}

void DescribeMcpServerResponseVO::SetApp(const IDNameVO& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

vector<IDNameVO> DescribeMcpServerResponseVO::GetCatalogs() const
{
    return m_catalogs;
}

void DescribeMcpServerResponseVO::SetCatalogs(const vector<IDNameVO>& _catalogs)
{
    m_catalogs = _catalogs;
    m_catalogsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::CatalogsHasBeenSet() const
{
    return m_catalogsHasBeenSet;
}

vector<IDNameVO> DescribeMcpServerResponseVO::GetLabels() const
{
    return m_labels;
}

void DescribeMcpServerResponseVO::SetLabels(const vector<IDNameVO>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

string DescribeMcpServerResponseVO::GetCreateTime() const
{
    return m_createTime;
}

void DescribeMcpServerResponseVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeMcpServerResponseVO::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DescribeMcpServerResponseVO::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t DescribeMcpServerResponseVO::GetAppID() const
{
    return m_appID;
}

void DescribeMcpServerResponseVO::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeMcpServerResponseVO::GetUin() const
{
    return m_uin;
}

void DescribeMcpServerResponseVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeMcpServerResponseVO::GetCustomHttpHost() const
{
    return m_customHttpHost;
}

void DescribeMcpServerResponseVO::SetCustomHttpHost(const string& _customHttpHost)
{
    m_customHttpHost = _customHttpHost;
    m_customHttpHostHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::CustomHttpHostHasBeenSet() const
{
    return m_customHttpHostHasBeenSet;
}

string DescribeMcpServerResponseVO::GetHttpHostType() const
{
    return m_httpHostType;
}

void DescribeMcpServerResponseVO::SetHttpHostType(const string& _httpHostType)
{
    m_httpHostType = _httpHostType;
    m_httpHostTypeHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::HttpHostTypeHasBeenSet() const
{
    return m_httpHostTypeHasBeenSet;
}

uint64_t DescribeMcpServerResponseVO::GetTimeout() const
{
    return m_timeout;
}

void DescribeMcpServerResponseVO::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string DescribeMcpServerResponseVO::GetMode() const
{
    return m_mode;
}

void DescribeMcpServerResponseVO::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DescribeMcpServerResponseVO::GetMcpVersion() const
{
    return m_mcpVersion;
}

void DescribeMcpServerResponseVO::SetMcpVersion(const string& _mcpVersion)
{
    m_mcpVersion = _mcpVersion;
    m_mcpVersionHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::McpVersionHasBeenSet() const
{
    return m_mcpVersionHasBeenSet;
}

vector<string> DescribeMcpServerResponseVO::GetWrapServices() const
{
    return m_wrapServices;
}

void DescribeMcpServerResponseVO::SetWrapServices(const vector<string>& _wrapServices)
{
    m_wrapServices = _wrapServices;
    m_wrapServicesHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::WrapServicesHasBeenSet() const
{
    return m_wrapServicesHasBeenSet;
}

int64_t DescribeMcpServerResponseVO::GetToolNum() const
{
    return m_toolNum;
}

void DescribeMcpServerResponseVO::SetToolNum(const int64_t& _toolNum)
{
    m_toolNum = _toolNum;
    m_toolNumHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::ToolNumHasBeenSet() const
{
    return m_toolNumHasBeenSet;
}

vector<McpSecurityRulesVO> DescribeMcpServerResponseVO::GetMcpSecurityRulesVO() const
{
    return m_mcpSecurityRulesVO;
}

void DescribeMcpServerResponseVO::SetMcpSecurityRulesVO(const vector<McpSecurityRulesVO>& _mcpSecurityRulesVO)
{
    m_mcpSecurityRulesVO = _mcpSecurityRulesVO;
    m_mcpSecurityRulesVOHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::McpSecurityRulesVOHasBeenSet() const
{
    return m_mcpSecurityRulesVOHasBeenSet;
}

vector<ToolConfigVO> DescribeMcpServerResponseVO::GetToolConfigs() const
{
    return m_toolConfigs;
}

void DescribeMcpServerResponseVO::SetToolConfigs(const vector<ToolConfigVO>& _toolConfigs)
{
    m_toolConfigs = _toolConfigs;
    m_toolConfigsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::ToolConfigsHasBeenSet() const
{
    return m_toolConfigsHasBeenSet;
}

McpUrlObj DescribeMcpServerResponseVO::GetUrlObj() const
{
    return m_urlObj;
}

void DescribeMcpServerResponseVO::SetUrlObj(const McpUrlObj& _urlObj)
{
    m_urlObj = _urlObj;
    m_urlObjHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::UrlObjHasBeenSet() const
{
    return m_urlObjHasBeenSet;
}

string DescribeMcpServerResponseVO::GetToolMessage() const
{
    return m_toolMessage;
}

void DescribeMcpServerResponseVO::SetToolMessage(const string& _toolMessage)
{
    m_toolMessage = _toolMessage;
    m_toolMessageHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::ToolMessageHasBeenSet() const
{
    return m_toolMessageHasBeenSet;
}

vector<McpTool> DescribeMcpServerResponseVO::GetTools() const
{
    return m_tools;
}

void DescribeMcpServerResponseVO::SetTools(const vector<McpTool>& _tools)
{
    m_tools = _tools;
    m_toolsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::ToolsHasBeenSet() const
{
    return m_toolsHasBeenSet;
}

string DescribeMcpServerResponseVO::GetWrapPaasID() const
{
    return m_wrapPaasID;
}

void DescribeMcpServerResponseVO::SetWrapPaasID(const string& _wrapPaasID)
{
    m_wrapPaasID = _wrapPaasID;
    m_wrapPaasIDHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::WrapPaasIDHasBeenSet() const
{
    return m_wrapPaasIDHasBeenSet;
}

int64_t DescribeMcpServerResponseVO::GetRelateAgentAppNum() const
{
    return m_relateAgentAppNum;
}

void DescribeMcpServerResponseVO::SetRelateAgentAppNum(const int64_t& _relateAgentAppNum)
{
    m_relateAgentAppNum = _relateAgentAppNum;
    m_relateAgentAppNumHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::RelateAgentAppNumHasBeenSet() const
{
    return m_relateAgentAppNumHasBeenSet;
}

vector<PluginConfigDTO> DescribeMcpServerResponseVO::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void DescribeMcpServerResponseVO::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool DescribeMcpServerResponseVO::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

