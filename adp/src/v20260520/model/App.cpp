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

#include <tencentcloud/adp/v20260520/model/App.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

App::App() :
    m_auxiliaryInfoHasBeenSet(false),
    m_configHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_secretInfoHasBeenSet(false),
    m_shareUrlInfoHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sharedKbListHasBeenSet(false),
    m_corpShareConfigHasBeenSet(false)
{
}

CoreInternalOutcome App::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AuxiliaryInfo") && !value["AuxiliaryInfo"].IsNull())
    {
        if (!value["AuxiliaryInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.AuxiliaryInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_auxiliaryInfo.Deserialize(value["AuxiliaryInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auxiliaryInfoHasBeenSet = true;
    }

    if (value.HasMember("Config") && !value["Config"].IsNull())
    {
        if (!value["Config"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.Config` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_config.Deserialize(value["Config"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.Metadata` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_metadata.Deserialize(value["Metadata"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("SecretInfo") && !value["SecretInfo"].IsNull())
    {
        if (!value["SecretInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.SecretInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secretInfo.Deserialize(value["SecretInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secretInfoHasBeenSet = true;
    }

    if (value.HasMember("ShareUrlInfo") && !value["ShareUrlInfo"].IsNull())
    {
        if (!value["ShareUrlInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.ShareUrlInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shareUrlInfo.Deserialize(value["ShareUrlInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shareUrlInfoHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SharedKbList") && !value["SharedKbList"].IsNull())
    {
        if (!value["SharedKbList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `App.SharedKbList` is not array type"));

        const rapidjson::Value &tmpValue = value["SharedKbList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AppSharedKbInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sharedKbList.push_back(item);
        }
        m_sharedKbListHasBeenSet = true;
    }

    if (value.HasMember("CorpShareConfig") && !value["CorpShareConfig"].IsNull())
    {
        if (!value["CorpShareConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `App.CorpShareConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_corpShareConfig.Deserialize(value["CorpShareConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_corpShareConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void App::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_auxiliaryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuxiliaryInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_auxiliaryInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_configHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Config";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_config.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_metadata.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secretInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secretInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shareUrlInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShareUrlInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shareUrlInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_sharedKbListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SharedKbList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sharedKbList.begin(); itr != m_sharedKbList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_corpShareConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CorpShareConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_corpShareConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


AppAuxiliaryInfo App::GetAuxiliaryInfo() const
{
    return m_auxiliaryInfo;
}

void App::SetAuxiliaryInfo(const AppAuxiliaryInfo& _auxiliaryInfo)
{
    m_auxiliaryInfo = _auxiliaryInfo;
    m_auxiliaryInfoHasBeenSet = true;
}

bool App::AuxiliaryInfoHasBeenSet() const
{
    return m_auxiliaryInfoHasBeenSet;
}

AppConfig App::GetConfig() const
{
    return m_config;
}

void App::SetConfig(const AppConfig& _config)
{
    m_config = _config;
    m_configHasBeenSet = true;
}

bool App::ConfigHasBeenSet() const
{
    return m_configHasBeenSet;
}

AppMetadata App::GetMetadata() const
{
    return m_metadata;
}

void App::SetMetadata(const AppMetadata& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool App::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

AppSecretInfo App::GetSecretInfo() const
{
    return m_secretInfo;
}

void App::SetSecretInfo(const AppSecretInfo& _secretInfo)
{
    m_secretInfo = _secretInfo;
    m_secretInfoHasBeenSet = true;
}

bool App::SecretInfoHasBeenSet() const
{
    return m_secretInfoHasBeenSet;
}

AppShareURLInfo App::GetShareUrlInfo() const
{
    return m_shareUrlInfo;
}

void App::SetShareUrlInfo(const AppShareURLInfo& _shareUrlInfo)
{
    m_shareUrlInfo = _shareUrlInfo;
    m_shareUrlInfoHasBeenSet = true;
}

bool App::ShareUrlInfoHasBeenSet() const
{
    return m_shareUrlInfoHasBeenSet;
}

AppStatusInfo App::GetStatus() const
{
    return m_status;
}

void App::SetStatus(const AppStatusInfo& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool App::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AppSharedKbInfo> App::GetSharedKbList() const
{
    return m_sharedKbList;
}

void App::SetSharedKbList(const vector<AppSharedKbInfo>& _sharedKbList)
{
    m_sharedKbList = _sharedKbList;
    m_sharedKbListHasBeenSet = true;
}

bool App::SharedKbListHasBeenSet() const
{
    return m_sharedKbListHasBeenSet;
}

CorpShareConfig App::GetCorpShareConfig() const
{
    return m_corpShareConfig;
}

void App::SetCorpShareConfig(const CorpShareConfig& _corpShareConfig)
{
    m_corpShareConfig = _corpShareConfig;
    m_corpShareConfigHasBeenSet = true;
}

bool App::CorpShareConfigHasBeenSet() const
{
    return m_corpShareConfigHasBeenSet;
}

