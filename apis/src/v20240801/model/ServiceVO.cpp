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

#include <tencentcloud/apis/v20240801/model/ServiceVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ServiceVO::ServiceVO() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_paasIDHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_labelIDsHasBeenSet(false),
    m_categoryIDsHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_signTypeHasBeenSet(false),
    m_loginTypesHasBeenSet(false),
    m_targetSelectHasBeenSet(false),
    m_pubPathHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_targetHostsHasBeenSet(false),
    m_httpProtocolTypeHasBeenSet(false),
    m_checkTargetCertsErrorHasBeenSet(false),
    m_httpProtocolVersionHasBeenSet(false),
    m_versionsHasBeenSet(false),
    m_targetPathHasBeenSet(false),
    m_requestParamsValidatorStatusHasBeenSet(false),
    m_requestParamsValidatorJsonInfoTHasBeenSet(false),
    m_responseParamsValidatorStatusHasBeenSet(false),
    m_responseParamsValidatorJsonInfoTHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_healthCheckStatusHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_sourceTypeStatusHasBeenSet(false),
    m_sourceTypeConfigHasBeenSet(false),
    m_tokenLimitStatusHasBeenSet(false),
    m_tokenLimitConfigHasBeenSet(false),
    m_tmsStatusHasBeenSet(false),
    m_tmsConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_appHasBeenSet(false),
    m_catalogsHasBeenSet(false),
    m_labelsHasBeenSet(false),
    m_loginsHasBeenSet(false),
    m_authAppNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_openMessageLogStatusHasBeenSet(false),
    m_currPaasIDSubscriptionIDHasBeenSet(false),
    m_targetServiceTypeHasBeenSet(false),
    m_sqlTemplateHasBeenSet(false),
    m_targetHostTypeHasBeenSet(false),
    m_targetServiceHostTypeHasBeenSet(false),
    m_targetServerGroupIDHasBeenSet(false),
    m_targetServerGroupHasBeenSet(false),
    m_customHttpHostHasBeenSet(false),
    m_httpHostTypeHasBeenSet(false),
    m_mockStatusCodeHasBeenSet(false),
    m_mockBodyHasBeenSet(false),
    m_mockHeadersHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_customMatchHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_mcpServerNumHasBeenSet(false)
{
}

CoreInternalOutcome ServiceVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("PaasID") && !value["PaasID"].IsNull())
    {
        if (!value["PaasID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.PaasID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_paasID = string(value["PaasID"].GetString());
        m_paasIDHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LabelIDs") && !value["LabelIDs"].IsNull())
    {
        if (!value["LabelIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.LabelIDs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CategoryIDs` is not array type"));

        const rapidjson::Value &tmpValue = value["CategoryIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categoryIDs.push_back((*itr).GetString());
        }
        m_categoryIDsHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("SignType") && !value["SignType"].IsNull())
    {
        if (!value["SignType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.SignType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_signType = string(value["SignType"].GetString());
        m_signTypeHasBeenSet = true;
    }

    if (value.HasMember("LoginTypes") && !value["LoginTypes"].IsNull())
    {
        if (!value["LoginTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.LoginTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["LoginTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_loginTypes.push_back((*itr).GetString());
        }
        m_loginTypesHasBeenSet = true;
    }

    if (value.HasMember("TargetSelect") && !value["TargetSelect"].IsNull())
    {
        if (!value["TargetSelect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetSelect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSelect = string(value["TargetSelect"].GetString());
        m_targetSelectHasBeenSet = true;
    }

    if (value.HasMember("PubPath") && !value["PubPath"].IsNull())
    {
        if (!value["PubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.PubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pubPath = string(value["PubPath"].GetString());
        m_pubPathHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.RequestMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = string(value["RequestMethod"].GetString());
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("TargetHosts") && !value["TargetHosts"].IsNull())
    {
        if (!value["TargetHosts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetHosts` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ServiceVO.HttpProtocolType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpProtocolType = string(value["HttpProtocolType"].GetString());
        m_httpProtocolTypeHasBeenSet = true;
    }

    if (value.HasMember("CheckTargetCertsError") && !value["CheckTargetCertsError"].IsNull())
    {
        if (!value["CheckTargetCertsError"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CheckTargetCertsError` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_checkTargetCertsError = value["CheckTargetCertsError"].GetBool();
        m_checkTargetCertsErrorHasBeenSet = true;
    }

    if (value.HasMember("HttpProtocolVersion") && !value["HttpProtocolVersion"].IsNull())
    {
        if (!value["HttpProtocolVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.HttpProtocolVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpProtocolVersion = string(value["HttpProtocolVersion"].GetString());
        m_httpProtocolVersionHasBeenSet = true;
    }

    if (value.HasMember("Versions") && !value["Versions"].IsNull())
    {
        if (!value["Versions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Versions` is not array type"));

        const rapidjson::Value &tmpValue = value["Versions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VersionDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_versions.push_back(item);
        }
        m_versionsHasBeenSet = true;
    }

    if (value.HasMember("TargetPath") && !value["TargetPath"].IsNull())
    {
        if (!value["TargetPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetPath = string(value["TargetPath"].GetString());
        m_targetPathHasBeenSet = true;
    }

    if (value.HasMember("RequestParamsValidatorStatus") && !value["RequestParamsValidatorStatus"].IsNull())
    {
        if (!value["RequestParamsValidatorStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.RequestParamsValidatorStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_requestParamsValidatorStatus = value["RequestParamsValidatorStatus"].GetBool();
        m_requestParamsValidatorStatusHasBeenSet = true;
    }

    if (value.HasMember("RequestParamsValidatorJsonInfoT") && !value["RequestParamsValidatorJsonInfoT"].IsNull())
    {
        if (!value["RequestParamsValidatorJsonInfoT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.RequestParamsValidatorJsonInfoT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestParamsValidatorJsonInfoT = string(value["RequestParamsValidatorJsonInfoT"].GetString());
        m_requestParamsValidatorJsonInfoTHasBeenSet = true;
    }

    if (value.HasMember("ResponseParamsValidatorStatus") && !value["ResponseParamsValidatorStatus"].IsNull())
    {
        if (!value["ResponseParamsValidatorStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.ResponseParamsValidatorStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_responseParamsValidatorStatus = value["ResponseParamsValidatorStatus"].GetBool();
        m_responseParamsValidatorStatusHasBeenSet = true;
    }

    if (value.HasMember("ResponseParamsValidatorJsonInfoT") && !value["ResponseParamsValidatorJsonInfoT"].IsNull())
    {
        if (!value["ResponseParamsValidatorJsonInfoT"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.ResponseParamsValidatorJsonInfoT` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseParamsValidatorJsonInfoT = string(value["ResponseParamsValidatorJsonInfoT"].GetString());
        m_responseParamsValidatorJsonInfoTHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckStatus") && !value["HealthCheckStatus"].IsNull())
    {
        if (!value["HealthCheckStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.HealthCheckStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckStatus = value["HealthCheckStatus"].GetBool();
        m_healthCheckStatusHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckConfig") && !value["HealthCheckConfig"].IsNull())
    {
        if (!value["HealthCheckConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.HealthCheckConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_healthCheckConfig.Deserialize(value["HealthCheckConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_healthCheckConfigHasBeenSet = true;
    }

    if (value.HasMember("SourceTypeStatus") && !value["SourceTypeStatus"].IsNull())
    {
        if (!value["SourceTypeStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.SourceTypeStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sourceTypeStatus = value["SourceTypeStatus"].GetBool();
        m_sourceTypeStatusHasBeenSet = true;
    }

    if (value.HasMember("SourceTypeConfig") && !value["SourceTypeConfig"].IsNull())
    {
        if (!value["SourceTypeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.SourceTypeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceTypeConfig.Deserialize(value["SourceTypeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceTypeConfigHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitStatus") && !value["TokenLimitStatus"].IsNull())
    {
        if (!value["TokenLimitStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TokenLimitStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tokenLimitStatus = value["TokenLimitStatus"].GetBool();
        m_tokenLimitStatusHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitConfig") && !value["TokenLimitConfig"].IsNull())
    {
        if (!value["TokenLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TokenLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tokenLimitConfig.Deserialize(value["TokenLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tokenLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("TmsStatus") && !value["TmsStatus"].IsNull())
    {
        if (!value["TmsStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TmsStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tmsStatus = value["TmsStatus"].GetBool();
        m_tmsStatusHasBeenSet = true;
    }

    if (value.HasMember("TmsConfig") && !value["TmsConfig"].IsNull())
    {
        if (!value["TmsConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TmsConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tmsConfig.Deserialize(value["TmsConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tmsConfigHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteStatus") && !value["IpWhiteStatus"].IsNull())
    {
        if (!value["IpWhiteStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.IpWhiteStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipWhiteStatus = value["IpWhiteStatus"].GetBool();
        m_ipWhiteStatusHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteList") && !value["IpWhiteList"].IsNull())
    {
        if (!value["IpWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.IpWhiteList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpWhiteList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipWhiteList.push_back((*itr).GetString());
        }
        m_ipWhiteListHasBeenSet = true;
    }

    if (value.HasMember("IpBlackStatus") && !value["IpBlackStatus"].IsNull())
    {
        if (!value["IpBlackStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.IpBlackStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipBlackStatus = value["IpBlackStatus"].GetBool();
        m_ipBlackStatusHasBeenSet = true;
    }

    if (value.HasMember("IpBlackList") && !value["IpBlackList"].IsNull())
    {
        if (!value["IpBlackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.IpBlackList` is not array type"));

        const rapidjson::Value &tmpValue = value["IpBlackList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipBlackList.push_back((*itr).GetString());
        }
        m_ipBlackListHasBeenSet = true;
    }

    if (value.HasMember("PluginConfigs") && !value["PluginConfigs"].IsNull())
    {
        if (!value["PluginConfigs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.PluginConfigs` is not array type"));

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

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("App") && !value["App"].IsNull())
    {
        if (!value["App"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.App` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Catalogs` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Labels` is not array type"));

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

    if (value.HasMember("Logins") && !value["Logins"].IsNull())
    {
        if (!value["Logins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Logins` is not array type"));

        const rapidjson::Value &tmpValue = value["Logins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IDNameVO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_logins.push_back(item);
        }
        m_loginsHasBeenSet = true;
    }

    if (value.HasMember("AuthAppNum") && !value["AuthAppNum"].IsNull())
    {
        if (!value["AuthAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.AuthAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authAppNum = value["AuthAppNum"].GetInt64();
        m_authAppNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("OpenMessageLogStatus") && !value["OpenMessageLogStatus"].IsNull())
    {
        if (!value["OpenMessageLogStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.OpenMessageLogStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openMessageLogStatus = value["OpenMessageLogStatus"].GetBool();
        m_openMessageLogStatusHasBeenSet = true;
    }

    if (value.HasMember("CurrPaasIDSubscriptionID") && !value["CurrPaasIDSubscriptionID"].IsNull())
    {
        if (!value["CurrPaasIDSubscriptionID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CurrPaasIDSubscriptionID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currPaasIDSubscriptionID = string(value["CurrPaasIDSubscriptionID"].GetString());
        m_currPaasIDSubscriptionIDHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceType") && !value["TargetServiceType"].IsNull())
    {
        if (!value["TargetServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceType = string(value["TargetServiceType"].GetString());
        m_targetServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("SqlTemplate") && !value["SqlTemplate"].IsNull())
    {
        if (!value["SqlTemplate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.SqlTemplate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sqlTemplate.Deserialize(value["SqlTemplate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sqlTemplateHasBeenSet = true;
    }

    if (value.HasMember("TargetHostType") && !value["TargetHostType"].IsNull())
    {
        if (!value["TargetHostType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetHostType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetHostType = value["TargetHostType"].GetInt64();
        m_targetHostTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServiceHostType") && !value["TargetServiceHostType"].IsNull())
    {
        if (!value["TargetServiceHostType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetServiceHostType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_targetServiceHostType = value["TargetServiceHostType"].GetUint64();
        m_targetServiceHostTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetServerGroupID") && !value["TargetServerGroupID"].IsNull())
    {
        if (!value["TargetServerGroupID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetServerGroupID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetServerGroupID = string(value["TargetServerGroupID"].GetString());
        m_targetServerGroupIDHasBeenSet = true;
    }

    if (value.HasMember("TargetServerGroup") && !value["TargetServerGroup"].IsNull())
    {
        if (!value["TargetServerGroup"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.TargetServerGroup` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetServerGroup.Deserialize(value["TargetServerGroup"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetServerGroupHasBeenSet = true;
    }

    if (value.HasMember("CustomHttpHost") && !value["CustomHttpHost"].IsNull())
    {
        if (!value["CustomHttpHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CustomHttpHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customHttpHost = string(value["CustomHttpHost"].GetString());
        m_customHttpHostHasBeenSet = true;
    }

    if (value.HasMember("HttpHostType") && !value["HttpHostType"].IsNull())
    {
        if (!value["HttpHostType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.HttpHostType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpHostType = string(value["HttpHostType"].GetString());
        m_httpHostTypeHasBeenSet = true;
    }

    if (value.HasMember("MockStatusCode") && !value["MockStatusCode"].IsNull())
    {
        if (!value["MockStatusCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.MockStatusCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mockStatusCode = value["MockStatusCode"].GetInt64();
        m_mockStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("MockBody") && !value["MockBody"].IsNull())
    {
        if (!value["MockBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.MockBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mockBody = string(value["MockBody"].GetString());
        m_mockBodyHasBeenSet = true;
    }

    if (value.HasMember("MockHeaders") && !value["MockHeaders"].IsNull())
    {
        if (!value["MockHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceVO.MockHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["MockHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FieldValueDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mockHeaders.push_back(item);
        }
        m_mockHeadersHasBeenSet = true;
    }

    if (value.HasMember("PathMatchType") && !value["PathMatchType"].IsNull())
    {
        if (!value["PathMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.PathMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatchType = string(value["PathMatchType"].GetString());
        m_pathMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("CustomMatch") && !value["CustomMatch"].IsNull())
    {
        if (!value["CustomMatch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.CustomMatch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customMatch.Deserialize(value["CustomMatch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customMatchHasBeenSet = true;
    }

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.Timeout` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetUint64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("McpServerNum") && !value["McpServerNum"].IsNull())
    {
        if (!value["McpServerNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceVO.McpServerNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mcpServerNum = value["McpServerNum"].GetInt64();
        m_mcpServerNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_paasIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaasID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_paasID.c_str(), allocator).Move(), allocator);
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

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_signTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SignType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_signType.c_str(), allocator).Move(), allocator);
    }

    if (m_loginTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_loginTypes.begin(); itr != m_loginTypes.end(); ++itr)
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

    if (m_pubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestMethod.c_str(), allocator).Move(), allocator);
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

    if (m_httpProtocolVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpProtocolVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpProtocolVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_versionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Versions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versions.begin(); itr != m_versions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_targetPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetPath.c_str(), allocator).Move(), allocator);
    }

    if (m_requestParamsValidatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParamsValidatorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestParamsValidatorStatus, allocator);
    }

    if (m_requestParamsValidatorJsonInfoTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParamsValidatorJsonInfoT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestParamsValidatorJsonInfoT.c_str(), allocator).Move(), allocator);
    }

    if (m_responseParamsValidatorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParamsValidatorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseParamsValidatorStatus, allocator);
    }

    if (m_responseParamsValidatorJsonInfoTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseParamsValidatorJsonInfoT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseParamsValidatorJsonInfoT.c_str(), allocator).Move(), allocator);
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

    if (m_healthCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckStatus, allocator);
    }

    if (m_healthCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_healthCheckConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sourceTypeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceTypeStatus, allocator);
    }

    if (m_sourceTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceTypeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tokenLimitStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenLimitStatus, allocator);
    }

    if (m_tokenLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenLimitConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tmsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmsStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tmsStatus, allocator);
    }

    if (m_tmsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmsConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tmsConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_ipWhiteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipWhiteStatus, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipBlackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipBlackStatus, allocator);
    }

    if (m_ipBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipBlackList.begin(); itr != m_ipBlackList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_loginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logins.begin(); itr != m_logins.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_authAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authAppNum, allocator);
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

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_openMessageLogStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenMessageLogStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openMessageLogStatus, allocator);
    }

    if (m_currPaasIDSubscriptionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrPaasIDSubscriptionID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currPaasIDSubscriptionID.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_sqlTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SqlTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sqlTemplate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetHostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetHostType, allocator);
    }

    if (m_targetServiceHostTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServiceHostType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetServiceHostType, allocator);
    }

    if (m_targetServerGroupIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServerGroupID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetServerGroupID.c_str(), allocator).Move(), allocator);
    }

    if (m_targetServerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetServerGroup";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetServerGroup.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_mockStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MockStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mockStatusCode, allocator);
    }

    if (m_mockBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MockBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mockBody.c_str(), allocator).Move(), allocator);
    }

    if (m_mockHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MockHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mockHeaders.begin(); itr != m_mockHeaders.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_customMatchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomMatch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customMatch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_mcpServerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "McpServerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mcpServerNum, allocator);
    }

}


string ServiceVO::GetInstanceID() const
{
    return m_instanceID;
}

void ServiceVO::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ServiceVO::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ServiceVO::GetName() const
{
    return m_name;
}

void ServiceVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ServiceVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ServiceVO::GetPaasID() const
{
    return m_paasID;
}

void ServiceVO::SetPaasID(const string& _paasID)
{
    m_paasID = _paasID;
    m_paasIDHasBeenSet = true;
}

bool ServiceVO::PaasIDHasBeenSet() const
{
    return m_paasIDHasBeenSet;
}

string ServiceVO::GetDescription() const
{
    return m_description;
}

void ServiceVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ServiceVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> ServiceVO::GetLabelIDs() const
{
    return m_labelIDs;
}

void ServiceVO::SetLabelIDs(const vector<string>& _labelIDs)
{
    m_labelIDs = _labelIDs;
    m_labelIDsHasBeenSet = true;
}

bool ServiceVO::LabelIDsHasBeenSet() const
{
    return m_labelIDsHasBeenSet;
}

vector<string> ServiceVO::GetCategoryIDs() const
{
    return m_categoryIDs;
}

void ServiceVO::SetCategoryIDs(const vector<string>& _categoryIDs)
{
    m_categoryIDs = _categoryIDs;
    m_categoryIDsHasBeenSet = true;
}

bool ServiceVO::CategoryIDsHasBeenSet() const
{
    return m_categoryIDsHasBeenSet;
}

string ServiceVO::GetAuthType() const
{
    return m_authType;
}

void ServiceVO::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ServiceVO::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ServiceVO::GetSignType() const
{
    return m_signType;
}

void ServiceVO::SetSignType(const string& _signType)
{
    m_signType = _signType;
    m_signTypeHasBeenSet = true;
}

bool ServiceVO::SignTypeHasBeenSet() const
{
    return m_signTypeHasBeenSet;
}

vector<string> ServiceVO::GetLoginTypes() const
{
    return m_loginTypes;
}

void ServiceVO::SetLoginTypes(const vector<string>& _loginTypes)
{
    m_loginTypes = _loginTypes;
    m_loginTypesHasBeenSet = true;
}

bool ServiceVO::LoginTypesHasBeenSet() const
{
    return m_loginTypesHasBeenSet;
}

string ServiceVO::GetTargetSelect() const
{
    return m_targetSelect;
}

void ServiceVO::SetTargetSelect(const string& _targetSelect)
{
    m_targetSelect = _targetSelect;
    m_targetSelectHasBeenSet = true;
}

bool ServiceVO::TargetSelectHasBeenSet() const
{
    return m_targetSelectHasBeenSet;
}

string ServiceVO::GetPubPath() const
{
    return m_pubPath;
}

void ServiceVO::SetPubPath(const string& _pubPath)
{
    m_pubPath = _pubPath;
    m_pubPathHasBeenSet = true;
}

bool ServiceVO::PubPathHasBeenSet() const
{
    return m_pubPathHasBeenSet;
}

string ServiceVO::GetRequestMethod() const
{
    return m_requestMethod;
}

void ServiceVO::SetRequestMethod(const string& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool ServiceVO::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

vector<TargetHostDTO> ServiceVO::GetTargetHosts() const
{
    return m_targetHosts;
}

void ServiceVO::SetTargetHosts(const vector<TargetHostDTO>& _targetHosts)
{
    m_targetHosts = _targetHosts;
    m_targetHostsHasBeenSet = true;
}

bool ServiceVO::TargetHostsHasBeenSet() const
{
    return m_targetHostsHasBeenSet;
}

string ServiceVO::GetHttpProtocolType() const
{
    return m_httpProtocolType;
}

void ServiceVO::SetHttpProtocolType(const string& _httpProtocolType)
{
    m_httpProtocolType = _httpProtocolType;
    m_httpProtocolTypeHasBeenSet = true;
}

bool ServiceVO::HttpProtocolTypeHasBeenSet() const
{
    return m_httpProtocolTypeHasBeenSet;
}

bool ServiceVO::GetCheckTargetCertsError() const
{
    return m_checkTargetCertsError;
}

void ServiceVO::SetCheckTargetCertsError(const bool& _checkTargetCertsError)
{
    m_checkTargetCertsError = _checkTargetCertsError;
    m_checkTargetCertsErrorHasBeenSet = true;
}

bool ServiceVO::CheckTargetCertsErrorHasBeenSet() const
{
    return m_checkTargetCertsErrorHasBeenSet;
}

string ServiceVO::GetHttpProtocolVersion() const
{
    return m_httpProtocolVersion;
}

void ServiceVO::SetHttpProtocolVersion(const string& _httpProtocolVersion)
{
    m_httpProtocolVersion = _httpProtocolVersion;
    m_httpProtocolVersionHasBeenSet = true;
}

bool ServiceVO::HttpProtocolVersionHasBeenSet() const
{
    return m_httpProtocolVersionHasBeenSet;
}

vector<VersionDTO> ServiceVO::GetVersions() const
{
    return m_versions;
}

void ServiceVO::SetVersions(const vector<VersionDTO>& _versions)
{
    m_versions = _versions;
    m_versionsHasBeenSet = true;
}

bool ServiceVO::VersionsHasBeenSet() const
{
    return m_versionsHasBeenSet;
}

string ServiceVO::GetTargetPath() const
{
    return m_targetPath;
}

void ServiceVO::SetTargetPath(const string& _targetPath)
{
    m_targetPath = _targetPath;
    m_targetPathHasBeenSet = true;
}

bool ServiceVO::TargetPathHasBeenSet() const
{
    return m_targetPathHasBeenSet;
}

bool ServiceVO::GetRequestParamsValidatorStatus() const
{
    return m_requestParamsValidatorStatus;
}

void ServiceVO::SetRequestParamsValidatorStatus(const bool& _requestParamsValidatorStatus)
{
    m_requestParamsValidatorStatus = _requestParamsValidatorStatus;
    m_requestParamsValidatorStatusHasBeenSet = true;
}

bool ServiceVO::RequestParamsValidatorStatusHasBeenSet() const
{
    return m_requestParamsValidatorStatusHasBeenSet;
}

string ServiceVO::GetRequestParamsValidatorJsonInfoT() const
{
    return m_requestParamsValidatorJsonInfoT;
}

void ServiceVO::SetRequestParamsValidatorJsonInfoT(const string& _requestParamsValidatorJsonInfoT)
{
    m_requestParamsValidatorJsonInfoT = _requestParamsValidatorJsonInfoT;
    m_requestParamsValidatorJsonInfoTHasBeenSet = true;
}

bool ServiceVO::RequestParamsValidatorJsonInfoTHasBeenSet() const
{
    return m_requestParamsValidatorJsonInfoTHasBeenSet;
}

bool ServiceVO::GetResponseParamsValidatorStatus() const
{
    return m_responseParamsValidatorStatus;
}

void ServiceVO::SetResponseParamsValidatorStatus(const bool& _responseParamsValidatorStatus)
{
    m_responseParamsValidatorStatus = _responseParamsValidatorStatus;
    m_responseParamsValidatorStatusHasBeenSet = true;
}

bool ServiceVO::ResponseParamsValidatorStatusHasBeenSet() const
{
    return m_responseParamsValidatorStatusHasBeenSet;
}

string ServiceVO::GetResponseParamsValidatorJsonInfoT() const
{
    return m_responseParamsValidatorJsonInfoT;
}

void ServiceVO::SetResponseParamsValidatorJsonInfoT(const string& _responseParamsValidatorJsonInfoT)
{
    m_responseParamsValidatorJsonInfoT = _responseParamsValidatorJsonInfoT;
    m_responseParamsValidatorJsonInfoTHasBeenSet = true;
}

bool ServiceVO::ResponseParamsValidatorJsonInfoTHasBeenSet() const
{
    return m_responseParamsValidatorJsonInfoTHasBeenSet;
}

bool ServiceVO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void ServiceVO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool ServiceVO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO ServiceVO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void ServiceVO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool ServiceVO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool ServiceVO::GetHealthCheckStatus() const
{
    return m_healthCheckStatus;
}

void ServiceVO::SetHealthCheckStatus(const bool& _healthCheckStatus)
{
    m_healthCheckStatus = _healthCheckStatus;
    m_healthCheckStatusHasBeenSet = true;
}

bool ServiceVO::HealthCheckStatusHasBeenSet() const
{
    return m_healthCheckStatusHasBeenSet;
}

HealthCheckConfigDTO ServiceVO::GetHealthCheckConfig() const
{
    return m_healthCheckConfig;
}

void ServiceVO::SetHealthCheckConfig(const HealthCheckConfigDTO& _healthCheckConfig)
{
    m_healthCheckConfig = _healthCheckConfig;
    m_healthCheckConfigHasBeenSet = true;
}

bool ServiceVO::HealthCheckConfigHasBeenSet() const
{
    return m_healthCheckConfigHasBeenSet;
}

bool ServiceVO::GetSourceTypeStatus() const
{
    return m_sourceTypeStatus;
}

void ServiceVO::SetSourceTypeStatus(const bool& _sourceTypeStatus)
{
    m_sourceTypeStatus = _sourceTypeStatus;
    m_sourceTypeStatusHasBeenSet = true;
}

bool ServiceVO::SourceTypeStatusHasBeenSet() const
{
    return m_sourceTypeStatusHasBeenSet;
}

SourceTypeConfigDTO ServiceVO::GetSourceTypeConfig() const
{
    return m_sourceTypeConfig;
}

void ServiceVO::SetSourceTypeConfig(const SourceTypeConfigDTO& _sourceTypeConfig)
{
    m_sourceTypeConfig = _sourceTypeConfig;
    m_sourceTypeConfigHasBeenSet = true;
}

bool ServiceVO::SourceTypeConfigHasBeenSet() const
{
    return m_sourceTypeConfigHasBeenSet;
}

bool ServiceVO::GetTokenLimitStatus() const
{
    return m_tokenLimitStatus;
}

void ServiceVO::SetTokenLimitStatus(const bool& _tokenLimitStatus)
{
    m_tokenLimitStatus = _tokenLimitStatus;
    m_tokenLimitStatusHasBeenSet = true;
}

bool ServiceVO::TokenLimitStatusHasBeenSet() const
{
    return m_tokenLimitStatusHasBeenSet;
}

TokenLimitConfigDTO ServiceVO::GetTokenLimitConfig() const
{
    return m_tokenLimitConfig;
}

void ServiceVO::SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig)
{
    m_tokenLimitConfig = _tokenLimitConfig;
    m_tokenLimitConfigHasBeenSet = true;
}

bool ServiceVO::TokenLimitConfigHasBeenSet() const
{
    return m_tokenLimitConfigHasBeenSet;
}

bool ServiceVO::GetTmsStatus() const
{
    return m_tmsStatus;
}

void ServiceVO::SetTmsStatus(const bool& _tmsStatus)
{
    m_tmsStatus = _tmsStatus;
    m_tmsStatusHasBeenSet = true;
}

bool ServiceVO::TmsStatusHasBeenSet() const
{
    return m_tmsStatusHasBeenSet;
}

TmsConfigDTO ServiceVO::GetTmsConfig() const
{
    return m_tmsConfig;
}

void ServiceVO::SetTmsConfig(const TmsConfigDTO& _tmsConfig)
{
    m_tmsConfig = _tmsConfig;
    m_tmsConfigHasBeenSet = true;
}

bool ServiceVO::TmsConfigHasBeenSet() const
{
    return m_tmsConfigHasBeenSet;
}

bool ServiceVO::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void ServiceVO::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool ServiceVO::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

vector<string> ServiceVO::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void ServiceVO::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool ServiceVO::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

bool ServiceVO::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void ServiceVO::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool ServiceVO::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

vector<string> ServiceVO::GetIpBlackList() const
{
    return m_ipBlackList;
}

void ServiceVO::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool ServiceVO::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<PluginConfigDTO> ServiceVO::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void ServiceVO::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool ServiceVO::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

string ServiceVO::GetID() const
{
    return m_iD;
}

void ServiceVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ServiceVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ServiceVO::GetStatus() const
{
    return m_status;
}

void ServiceVO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServiceVO::GetUrl() const
{
    return m_url;
}

void ServiceVO::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ServiceVO::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

IDNameVO ServiceVO::GetApp() const
{
    return m_app;
}

void ServiceVO::SetApp(const IDNameVO& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool ServiceVO::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

vector<IDNameVO> ServiceVO::GetCatalogs() const
{
    return m_catalogs;
}

void ServiceVO::SetCatalogs(const vector<IDNameVO>& _catalogs)
{
    m_catalogs = _catalogs;
    m_catalogsHasBeenSet = true;
}

bool ServiceVO::CatalogsHasBeenSet() const
{
    return m_catalogsHasBeenSet;
}

vector<IDNameVO> ServiceVO::GetLabels() const
{
    return m_labels;
}

void ServiceVO::SetLabels(const vector<IDNameVO>& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool ServiceVO::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

vector<IDNameVO> ServiceVO::GetLogins() const
{
    return m_logins;
}

void ServiceVO::SetLogins(const vector<IDNameVO>& _logins)
{
    m_logins = _logins;
    m_loginsHasBeenSet = true;
}

bool ServiceVO::LoginsHasBeenSet() const
{
    return m_loginsHasBeenSet;
}

int64_t ServiceVO::GetAuthAppNum() const
{
    return m_authAppNum;
}

void ServiceVO::SetAuthAppNum(const int64_t& _authAppNum)
{
    m_authAppNum = _authAppNum;
    m_authAppNumHasBeenSet = true;
}

bool ServiceVO::AuthAppNumHasBeenSet() const
{
    return m_authAppNumHasBeenSet;
}

string ServiceVO::GetCreateTime() const
{
    return m_createTime;
}

void ServiceVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ServiceVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ServiceVO::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void ServiceVO::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool ServiceVO::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

int64_t ServiceVO::GetAppID() const
{
    return m_appID;
}

void ServiceVO::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ServiceVO::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ServiceVO::GetUin() const
{
    return m_uin;
}

void ServiceVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool ServiceVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string ServiceVO::GetDomain() const
{
    return m_domain;
}

void ServiceVO::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ServiceVO::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

bool ServiceVO::GetOpenMessageLogStatus() const
{
    return m_openMessageLogStatus;
}

void ServiceVO::SetOpenMessageLogStatus(const bool& _openMessageLogStatus)
{
    m_openMessageLogStatus = _openMessageLogStatus;
    m_openMessageLogStatusHasBeenSet = true;
}

bool ServiceVO::OpenMessageLogStatusHasBeenSet() const
{
    return m_openMessageLogStatusHasBeenSet;
}

string ServiceVO::GetCurrPaasIDSubscriptionID() const
{
    return m_currPaasIDSubscriptionID;
}

void ServiceVO::SetCurrPaasIDSubscriptionID(const string& _currPaasIDSubscriptionID)
{
    m_currPaasIDSubscriptionID = _currPaasIDSubscriptionID;
    m_currPaasIDSubscriptionIDHasBeenSet = true;
}

bool ServiceVO::CurrPaasIDSubscriptionIDHasBeenSet() const
{
    return m_currPaasIDSubscriptionIDHasBeenSet;
}

string ServiceVO::GetTargetServiceType() const
{
    return m_targetServiceType;
}

void ServiceVO::SetTargetServiceType(const string& _targetServiceType)
{
    m_targetServiceType = _targetServiceType;
    m_targetServiceTypeHasBeenSet = true;
}

bool ServiceVO::TargetServiceTypeHasBeenSet() const
{
    return m_targetServiceTypeHasBeenSet;
}

SqlTemplate ServiceVO::GetSqlTemplate() const
{
    return m_sqlTemplate;
}

void ServiceVO::SetSqlTemplate(const SqlTemplate& _sqlTemplate)
{
    m_sqlTemplate = _sqlTemplate;
    m_sqlTemplateHasBeenSet = true;
}

bool ServiceVO::SqlTemplateHasBeenSet() const
{
    return m_sqlTemplateHasBeenSet;
}

int64_t ServiceVO::GetTargetHostType() const
{
    return m_targetHostType;
}

void ServiceVO::SetTargetHostType(const int64_t& _targetHostType)
{
    m_targetHostType = _targetHostType;
    m_targetHostTypeHasBeenSet = true;
}

bool ServiceVO::TargetHostTypeHasBeenSet() const
{
    return m_targetHostTypeHasBeenSet;
}

uint64_t ServiceVO::GetTargetServiceHostType() const
{
    return m_targetServiceHostType;
}

void ServiceVO::SetTargetServiceHostType(const uint64_t& _targetServiceHostType)
{
    m_targetServiceHostType = _targetServiceHostType;
    m_targetServiceHostTypeHasBeenSet = true;
}

bool ServiceVO::TargetServiceHostTypeHasBeenSet() const
{
    return m_targetServiceHostTypeHasBeenSet;
}

string ServiceVO::GetTargetServerGroupID() const
{
    return m_targetServerGroupID;
}

void ServiceVO::SetTargetServerGroupID(const string& _targetServerGroupID)
{
    m_targetServerGroupID = _targetServerGroupID;
    m_targetServerGroupIDHasBeenSet = true;
}

bool ServiceVO::TargetServerGroupIDHasBeenSet() const
{
    return m_targetServerGroupIDHasBeenSet;
}

TargetServerGroupDTO ServiceVO::GetTargetServerGroup() const
{
    return m_targetServerGroup;
}

void ServiceVO::SetTargetServerGroup(const TargetServerGroupDTO& _targetServerGroup)
{
    m_targetServerGroup = _targetServerGroup;
    m_targetServerGroupHasBeenSet = true;
}

bool ServiceVO::TargetServerGroupHasBeenSet() const
{
    return m_targetServerGroupHasBeenSet;
}

string ServiceVO::GetCustomHttpHost() const
{
    return m_customHttpHost;
}

void ServiceVO::SetCustomHttpHost(const string& _customHttpHost)
{
    m_customHttpHost = _customHttpHost;
    m_customHttpHostHasBeenSet = true;
}

bool ServiceVO::CustomHttpHostHasBeenSet() const
{
    return m_customHttpHostHasBeenSet;
}

string ServiceVO::GetHttpHostType() const
{
    return m_httpHostType;
}

void ServiceVO::SetHttpHostType(const string& _httpHostType)
{
    m_httpHostType = _httpHostType;
    m_httpHostTypeHasBeenSet = true;
}

bool ServiceVO::HttpHostTypeHasBeenSet() const
{
    return m_httpHostTypeHasBeenSet;
}

int64_t ServiceVO::GetMockStatusCode() const
{
    return m_mockStatusCode;
}

void ServiceVO::SetMockStatusCode(const int64_t& _mockStatusCode)
{
    m_mockStatusCode = _mockStatusCode;
    m_mockStatusCodeHasBeenSet = true;
}

bool ServiceVO::MockStatusCodeHasBeenSet() const
{
    return m_mockStatusCodeHasBeenSet;
}

string ServiceVO::GetMockBody() const
{
    return m_mockBody;
}

void ServiceVO::SetMockBody(const string& _mockBody)
{
    m_mockBody = _mockBody;
    m_mockBodyHasBeenSet = true;
}

bool ServiceVO::MockBodyHasBeenSet() const
{
    return m_mockBodyHasBeenSet;
}

vector<FieldValueDTO> ServiceVO::GetMockHeaders() const
{
    return m_mockHeaders;
}

void ServiceVO::SetMockHeaders(const vector<FieldValueDTO>& _mockHeaders)
{
    m_mockHeaders = _mockHeaders;
    m_mockHeadersHasBeenSet = true;
}

bool ServiceVO::MockHeadersHasBeenSet() const
{
    return m_mockHeadersHasBeenSet;
}

string ServiceVO::GetPathMatchType() const
{
    return m_pathMatchType;
}

void ServiceVO::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool ServiceVO::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

CustomMatch ServiceVO::GetCustomMatch() const
{
    return m_customMatch;
}

void ServiceVO::SetCustomMatch(const CustomMatch& _customMatch)
{
    m_customMatch = _customMatch;
    m_customMatchHasBeenSet = true;
}

bool ServiceVO::CustomMatchHasBeenSet() const
{
    return m_customMatchHasBeenSet;
}

uint64_t ServiceVO::GetTimeout() const
{
    return m_timeout;
}

void ServiceVO::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ServiceVO::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

int64_t ServiceVO::GetMcpServerNum() const
{
    return m_mcpServerNum;
}

void ServiceVO::SetMcpServerNum(const int64_t& _mcpServerNum)
{
    m_mcpServerNum = _mcpServerNum;
    m_mcpServerNumHasBeenSet = true;
}

bool ServiceVO::McpServerNumHasBeenSet() const
{
    return m_mcpServerNumHasBeenSet;
}

