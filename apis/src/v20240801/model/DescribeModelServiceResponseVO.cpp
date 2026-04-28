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

#include <tencentcloud/apis/v20240801/model/DescribeModelServiceResponseVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DescribeModelServiceResponseVO::DescribeModelServiceResponseVO() :
    m_appIDHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pubPathHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_targetModelsHasBeenSet(false),
    m_modelNamesHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_tokenLimitStatusHasBeenSet(false),
    m_tokenLimitConfigHasBeenSet(false),
    m_tmsStatusHasBeenSet(false),
    m_tmsConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_relateAgentAppNumHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_promptModerateStatusHasBeenSet(false),
    m_promptModerateConfigHasBeenSet(false),
    m_sensitiveDataCheckStatusHasBeenSet(false),
    m_sensitiveDataCheckConfigHasBeenSet(false),
    m_targetSelectHasBeenSet(false),
    m_findHostKeyMethodHasBeenSet(false),
    m_hostKeyHeaderNameHasBeenSet(false),
    m_fallbackStatusHasBeenSet(false),
    m_fallbackModelsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeModelServiceResponseVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("InstanceID") && !value["InstanceID"].IsNull())
    {
        if (!value["InstanceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.InstanceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceID = string(value["InstanceID"].GetString());
        m_instanceIDHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("PubPath") && !value["PubPath"].IsNull())
    {
        if (!value["PubPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.PubPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pubPath = string(value["PubPath"].GetString());
        m_pubPathHasBeenSet = true;
    }

    if (value.HasMember("PathMatchType") && !value["PathMatchType"].IsNull())
    {
        if (!value["PathMatchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.PathMatchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pathMatchType = string(value["PathMatchType"].GetString());
        m_pathMatchTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetModels") && !value["TargetModels"].IsNull())
    {
        if (!value["TargetModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TargetModels` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetModelDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_targetModels.push_back(item);
        }
        m_targetModelsHasBeenSet = true;
    }

    if (value.HasMember("ModelNames") && !value["ModelNames"].IsNull())
    {
        if (!value["ModelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.ModelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["ModelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_modelNames.push_back((*itr).GetString());
        }
        m_modelNamesHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfigStatus") && !value["InvokeLimitConfigStatus"].IsNull())
    {
        if (!value["InvokeLimitConfigStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.InvokeLimitConfigStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_invokeLimitConfigStatus = value["InvokeLimitConfigStatus"].GetBool();
        m_invokeLimitConfigStatusHasBeenSet = true;
    }

    if (value.HasMember("InvokeLimitConfig") && !value["InvokeLimitConfig"].IsNull())
    {
        if (!value["InvokeLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.InvokeLimitConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeLimitConfig.Deserialize(value["InvokeLimitConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeLimitConfigHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitStatus") && !value["TokenLimitStatus"].IsNull())
    {
        if (!value["TokenLimitStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TokenLimitStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tokenLimitStatus = value["TokenLimitStatus"].GetBool();
        m_tokenLimitStatusHasBeenSet = true;
    }

    if (value.HasMember("TokenLimitConfig") && !value["TokenLimitConfig"].IsNull())
    {
        if (!value["TokenLimitConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TokenLimitConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TmsStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_tmsStatus = value["TmsStatus"].GetBool();
        m_tmsStatusHasBeenSet = true;
    }

    if (value.HasMember("TmsConfig") && !value["TmsConfig"].IsNull())
    {
        if (!value["TmsConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TmsConfig` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.IpWhiteStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipWhiteStatus = value["IpWhiteStatus"].GetBool();
        m_ipWhiteStatusHasBeenSet = true;
    }

    if (value.HasMember("IpWhiteList") && !value["IpWhiteList"].IsNull())
    {
        if (!value["IpWhiteList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.IpWhiteList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.IpBlackStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ipBlackStatus = value["IpBlackStatus"].GetBool();
        m_ipBlackStatusHasBeenSet = true;
    }

    if (value.HasMember("IpBlackList") && !value["IpBlackList"].IsNull())
    {
        if (!value["IpBlackList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.IpBlackList` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.PluginConfigs` is not array type"));

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

    if (value.HasMember("Timeout") && !value["Timeout"].IsNull())
    {
        if (!value["Timeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Timeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeout = value["Timeout"].GetInt64();
        m_timeoutHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RelateAgentAppNum") && !value["RelateAgentAppNum"].IsNull())
    {
        if (!value["RelateAgentAppNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.RelateAgentAppNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relateAgentAppNum = value["RelateAgentAppNum"].GetInt64();
        m_relateAgentAppNumHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PromptModerateStatus") && !value["PromptModerateStatus"].IsNull())
    {
        if (!value["PromptModerateStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.PromptModerateStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_promptModerateStatus = value["PromptModerateStatus"].GetBool();
        m_promptModerateStatusHasBeenSet = true;
    }

    if (value.HasMember("PromptModerateConfig") && !value["PromptModerateConfig"].IsNull())
    {
        if (!value["PromptModerateConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.PromptModerateConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_promptModerateConfig.Deserialize(value["PromptModerateConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_promptModerateConfigHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataCheckStatus") && !value["SensitiveDataCheckStatus"].IsNull())
    {
        if (!value["SensitiveDataCheckStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.SensitiveDataCheckStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveDataCheckStatus = value["SensitiveDataCheckStatus"].GetBool();
        m_sensitiveDataCheckStatusHasBeenSet = true;
    }

    if (value.HasMember("SensitiveDataCheckConfig") && !value["SensitiveDataCheckConfig"].IsNull())
    {
        if (!value["SensitiveDataCheckConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.SensitiveDataCheckConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sensitiveDataCheckConfig.Deserialize(value["SensitiveDataCheckConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sensitiveDataCheckConfigHasBeenSet = true;
    }

    if (value.HasMember("TargetSelect") && !value["TargetSelect"].IsNull())
    {
        if (!value["TargetSelect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.TargetSelect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetSelect = string(value["TargetSelect"].GetString());
        m_targetSelectHasBeenSet = true;
    }

    if (value.HasMember("FindHostKeyMethod") && !value["FindHostKeyMethod"].IsNull())
    {
        if (!value["FindHostKeyMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.FindHostKeyMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_findHostKeyMethod = string(value["FindHostKeyMethod"].GetString());
        m_findHostKeyMethodHasBeenSet = true;
    }

    if (value.HasMember("HostKeyHeaderName") && !value["HostKeyHeaderName"].IsNull())
    {
        if (!value["HostKeyHeaderName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.HostKeyHeaderName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostKeyHeaderName = string(value["HostKeyHeaderName"].GetString());
        m_hostKeyHeaderNameHasBeenSet = true;
    }

    if (value.HasMember("FallbackStatus") && !value["FallbackStatus"].IsNull())
    {
        if (!value["FallbackStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.FallbackStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_fallbackStatus = value["FallbackStatus"].GetBool();
        m_fallbackStatusHasBeenSet = true;
    }

    if (value.HasMember("FallbackModels") && !value["FallbackModels"].IsNull())
    {
        if (!value["FallbackModels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeModelServiceResponseVO.FallbackModels` is not array type"));

        const rapidjson::Value &tmpValue = value["FallbackModels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TargetModelDTO item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_fallbackModels.push_back(item);
        }
        m_fallbackModelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeModelServiceResponseVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
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

    if (m_pubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_pathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetModels.begin(); itr != m_targetModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_modelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_modelNames.begin(); itr != m_modelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeout, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_relateAgentAppNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateAgentAppNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateAgentAppNum, allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_promptModerateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptModerateStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptModerateStatus, allocator);
    }

    if (m_promptModerateConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptModerateConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptModerateConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sensitiveDataCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveDataCheckStatus, allocator);
    }

    if (m_sensitiveDataCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sensitiveDataCheckConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetSelectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSelect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetSelect.c_str(), allocator).Move(), allocator);
    }

    if (m_findHostKeyMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FindHostKeyMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_findHostKeyMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_hostKeyHeaderNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostKeyHeaderName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostKeyHeaderName.c_str(), allocator).Move(), allocator);
    }

    if (m_fallbackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fallbackStatus, allocator);
    }

    if (m_fallbackModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FallbackModels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fallbackModels.begin(); itr != m_fallbackModels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DescribeModelServiceResponseVO::GetAppID() const
{
    return m_appID;
}

void DescribeModelServiceResponseVO::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string DescribeModelServiceResponseVO::GetUin() const
{
    return m_uin;
}

void DescribeModelServiceResponseVO::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string DescribeModelServiceResponseVO::GetInstanceID() const
{
    return m_instanceID;
}

void DescribeModelServiceResponseVO::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DescribeModelServiceResponseVO::GetID() const
{
    return m_iD;
}

void DescribeModelServiceResponseVO::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeModelServiceResponseVO::GetName() const
{
    return m_name;
}

void DescribeModelServiceResponseVO::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeModelServiceResponseVO::GetDescription() const
{
    return m_description;
}

void DescribeModelServiceResponseVO::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeModelServiceResponseVO::GetPubPath() const
{
    return m_pubPath;
}

void DescribeModelServiceResponseVO::SetPubPath(const string& _pubPath)
{
    m_pubPath = _pubPath;
    m_pubPathHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::PubPathHasBeenSet() const
{
    return m_pubPathHasBeenSet;
}

string DescribeModelServiceResponseVO::GetPathMatchType() const
{
    return m_pathMatchType;
}

void DescribeModelServiceResponseVO::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

vector<TargetModelDTO> DescribeModelServiceResponseVO::GetTargetModels() const
{
    return m_targetModels;
}

void DescribeModelServiceResponseVO::SetTargetModels(const vector<TargetModelDTO>& _targetModels)
{
    m_targetModels = _targetModels;
    m_targetModelsHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TargetModelsHasBeenSet() const
{
    return m_targetModelsHasBeenSet;
}

vector<string> DescribeModelServiceResponseVO::GetModelNames() const
{
    return m_modelNames;
}

void DescribeModelServiceResponseVO::SetModelNames(const vector<string>& _modelNames)
{
    m_modelNames = _modelNames;
    m_modelNamesHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::ModelNamesHasBeenSet() const
{
    return m_modelNamesHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void DescribeModelServiceResponseVO::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO DescribeModelServiceResponseVO::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void DescribeModelServiceResponseVO::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

string DescribeModelServiceResponseVO::GetCreateTime() const
{
    return m_createTime;
}

void DescribeModelServiceResponseVO::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeModelServiceResponseVO::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void DescribeModelServiceResponseVO::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetTokenLimitStatus() const
{
    return m_tokenLimitStatus;
}

void DescribeModelServiceResponseVO::SetTokenLimitStatus(const bool& _tokenLimitStatus)
{
    m_tokenLimitStatus = _tokenLimitStatus;
    m_tokenLimitStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TokenLimitStatusHasBeenSet() const
{
    return m_tokenLimitStatusHasBeenSet;
}

TokenLimitConfigDTO DescribeModelServiceResponseVO::GetTokenLimitConfig() const
{
    return m_tokenLimitConfig;
}

void DescribeModelServiceResponseVO::SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig)
{
    m_tokenLimitConfig = _tokenLimitConfig;
    m_tokenLimitConfigHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TokenLimitConfigHasBeenSet() const
{
    return m_tokenLimitConfigHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetTmsStatus() const
{
    return m_tmsStatus;
}

void DescribeModelServiceResponseVO::SetTmsStatus(const bool& _tmsStatus)
{
    m_tmsStatus = _tmsStatus;
    m_tmsStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TmsStatusHasBeenSet() const
{
    return m_tmsStatusHasBeenSet;
}

TmsConfigDTO DescribeModelServiceResponseVO::GetTmsConfig() const
{
    return m_tmsConfig;
}

void DescribeModelServiceResponseVO::SetTmsConfig(const TmsConfigDTO& _tmsConfig)
{
    m_tmsConfig = _tmsConfig;
    m_tmsConfigHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TmsConfigHasBeenSet() const
{
    return m_tmsConfigHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void DescribeModelServiceResponseVO::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

vector<string> DescribeModelServiceResponseVO::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void DescribeModelServiceResponseVO::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void DescribeModelServiceResponseVO::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

vector<string> DescribeModelServiceResponseVO::GetIpBlackList() const
{
    return m_ipBlackList;
}

void DescribeModelServiceResponseVO::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<PluginConfigDTO> DescribeModelServiceResponseVO::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void DescribeModelServiceResponseVO::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

int64_t DescribeModelServiceResponseVO::GetTimeout() const
{
    return m_timeout;
}

void DescribeModelServiceResponseVO::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string DescribeModelServiceResponseVO::GetStatus() const
{
    return m_status;
}

void DescribeModelServiceResponseVO::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeModelServiceResponseVO::GetRelateAgentAppNum() const
{
    return m_relateAgentAppNum;
}

void DescribeModelServiceResponseVO::SetRelateAgentAppNum(const int64_t& _relateAgentAppNum)
{
    m_relateAgentAppNum = _relateAgentAppNum;
    m_relateAgentAppNumHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::RelateAgentAppNumHasBeenSet() const
{
    return m_relateAgentAppNumHasBeenSet;
}

string DescribeModelServiceResponseVO::GetUrl() const
{
    return m_url;
}

void DescribeModelServiceResponseVO::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetPromptModerateStatus() const
{
    return m_promptModerateStatus;
}

void DescribeModelServiceResponseVO::SetPromptModerateStatus(const bool& _promptModerateStatus)
{
    m_promptModerateStatus = _promptModerateStatus;
    m_promptModerateStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::PromptModerateStatusHasBeenSet() const
{
    return m_promptModerateStatusHasBeenSet;
}

PromptModerateConfigDTO DescribeModelServiceResponseVO::GetPromptModerateConfig() const
{
    return m_promptModerateConfig;
}

void DescribeModelServiceResponseVO::SetPromptModerateConfig(const PromptModerateConfigDTO& _promptModerateConfig)
{
    m_promptModerateConfig = _promptModerateConfig;
    m_promptModerateConfigHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::PromptModerateConfigHasBeenSet() const
{
    return m_promptModerateConfigHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetSensitiveDataCheckStatus() const
{
    return m_sensitiveDataCheckStatus;
}

void DescribeModelServiceResponseVO::SetSensitiveDataCheckStatus(const bool& _sensitiveDataCheckStatus)
{
    m_sensitiveDataCheckStatus = _sensitiveDataCheckStatus;
    m_sensitiveDataCheckStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::SensitiveDataCheckStatusHasBeenSet() const
{
    return m_sensitiveDataCheckStatusHasBeenSet;
}

SensitiveDataCheckConfigDTO DescribeModelServiceResponseVO::GetSensitiveDataCheckConfig() const
{
    return m_sensitiveDataCheckConfig;
}

void DescribeModelServiceResponseVO::SetSensitiveDataCheckConfig(const SensitiveDataCheckConfigDTO& _sensitiveDataCheckConfig)
{
    m_sensitiveDataCheckConfig = _sensitiveDataCheckConfig;
    m_sensitiveDataCheckConfigHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::SensitiveDataCheckConfigHasBeenSet() const
{
    return m_sensitiveDataCheckConfigHasBeenSet;
}

string DescribeModelServiceResponseVO::GetTargetSelect() const
{
    return m_targetSelect;
}

void DescribeModelServiceResponseVO::SetTargetSelect(const string& _targetSelect)
{
    m_targetSelect = _targetSelect;
    m_targetSelectHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::TargetSelectHasBeenSet() const
{
    return m_targetSelectHasBeenSet;
}

string DescribeModelServiceResponseVO::GetFindHostKeyMethod() const
{
    return m_findHostKeyMethod;
}

void DescribeModelServiceResponseVO::SetFindHostKeyMethod(const string& _findHostKeyMethod)
{
    m_findHostKeyMethod = _findHostKeyMethod;
    m_findHostKeyMethodHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::FindHostKeyMethodHasBeenSet() const
{
    return m_findHostKeyMethodHasBeenSet;
}

string DescribeModelServiceResponseVO::GetHostKeyHeaderName() const
{
    return m_hostKeyHeaderName;
}

void DescribeModelServiceResponseVO::SetHostKeyHeaderName(const string& _hostKeyHeaderName)
{
    m_hostKeyHeaderName = _hostKeyHeaderName;
    m_hostKeyHeaderNameHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::HostKeyHeaderNameHasBeenSet() const
{
    return m_hostKeyHeaderNameHasBeenSet;
}

bool DescribeModelServiceResponseVO::GetFallbackStatus() const
{
    return m_fallbackStatus;
}

void DescribeModelServiceResponseVO::SetFallbackStatus(const bool& _fallbackStatus)
{
    m_fallbackStatus = _fallbackStatus;
    m_fallbackStatusHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::FallbackStatusHasBeenSet() const
{
    return m_fallbackStatusHasBeenSet;
}

vector<TargetModelDTO> DescribeModelServiceResponseVO::GetFallbackModels() const
{
    return m_fallbackModels;
}

void DescribeModelServiceResponseVO::SetFallbackModels(const vector<TargetModelDTO>& _fallbackModels)
{
    m_fallbackModels = _fallbackModels;
    m_fallbackModelsHasBeenSet = true;
}

bool DescribeModelServiceResponseVO::FallbackModelsHasBeenSet() const
{
    return m_fallbackModelsHasBeenSet;
}

