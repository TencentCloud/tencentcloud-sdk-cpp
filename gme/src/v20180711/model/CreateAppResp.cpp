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

#include <tencentcloud/gme/v20180711/model/CreateAppResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

CreateAppResp::CreateAppResp() :
    m_bizIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_realtimeSpeechConfHasBeenSet(false),
    m_voiceMessageConfHasBeenSet(false),
    m_voiceFilterConfHasBeenSet(false),
    m_asrConfHasBeenSet(false)
{
}

CoreInternalOutcome CreateAppResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BizId") && !value["BizId"].IsNull())
    {
        if (!value["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = value["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("RealtimeSpeechConf") && !value["RealtimeSpeechConf"].IsNull())
    {
        if (!value["RealtimeSpeechConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.RealtimeSpeechConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realtimeSpeechConf.Deserialize(value["RealtimeSpeechConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realtimeSpeechConfHasBeenSet = true;
    }

    if (value.HasMember("VoiceMessageConf") && !value["VoiceMessageConf"].IsNull())
    {
        if (!value["VoiceMessageConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.VoiceMessageConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceMessageConf.Deserialize(value["VoiceMessageConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceMessageConfHasBeenSet = true;
    }

    if (value.HasMember("VoiceFilterConf") && !value["VoiceFilterConf"].IsNull())
    {
        if (!value["VoiceFilterConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.VoiceFilterConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceFilterConf.Deserialize(value["VoiceFilterConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceFilterConfHasBeenSet = true;
    }

    if (value.HasMember("AsrConf") && !value["AsrConf"].IsNull())
    {
        if (!value["AsrConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAppResp.AsrConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrConf.Deserialize(value["AsrConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateAppResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bizId, allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_realtimeSpeechConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealtimeSpeechConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_realtimeSpeechConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceMessageConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceMessageConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceMessageConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_voiceFilterConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoiceFilterConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_voiceFilterConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_asrConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrConf.ToJsonObject(value[key.c_str()], allocator);
    }

}


uint64_t CreateAppResp::GetBizId() const
{
    return m_bizId;
}

void CreateAppResp::SetBizId(const uint64_t& _bizId)
{
    m_bizId = _bizId;
    m_bizIdHasBeenSet = true;
}

bool CreateAppResp::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string CreateAppResp::GetAppName() const
{
    return m_appName;
}

void CreateAppResp::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CreateAppResp::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t CreateAppResp::GetProjectId() const
{
    return m_projectId;
}

void CreateAppResp::SetProjectId(const uint64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateAppResp::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateAppResp::GetSecretKey() const
{
    return m_secretKey;
}

void CreateAppResp::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool CreateAppResp::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

uint64_t CreateAppResp::GetCreateTime() const
{
    return m_createTime;
}

void CreateAppResp::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CreateAppResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

RealtimeSpeechConf CreateAppResp::GetRealtimeSpeechConf() const
{
    return m_realtimeSpeechConf;
}

void CreateAppResp::SetRealtimeSpeechConf(const RealtimeSpeechConf& _realtimeSpeechConf)
{
    m_realtimeSpeechConf = _realtimeSpeechConf;
    m_realtimeSpeechConfHasBeenSet = true;
}

bool CreateAppResp::RealtimeSpeechConfHasBeenSet() const
{
    return m_realtimeSpeechConfHasBeenSet;
}

VoiceMessageConf CreateAppResp::GetVoiceMessageConf() const
{
    return m_voiceMessageConf;
}

void CreateAppResp::SetVoiceMessageConf(const VoiceMessageConf& _voiceMessageConf)
{
    m_voiceMessageConf = _voiceMessageConf;
    m_voiceMessageConfHasBeenSet = true;
}

bool CreateAppResp::VoiceMessageConfHasBeenSet() const
{
    return m_voiceMessageConfHasBeenSet;
}

VoiceFilterConf CreateAppResp::GetVoiceFilterConf() const
{
    return m_voiceFilterConf;
}

void CreateAppResp::SetVoiceFilterConf(const VoiceFilterConf& _voiceFilterConf)
{
    m_voiceFilterConf = _voiceFilterConf;
    m_voiceFilterConfHasBeenSet = true;
}

bool CreateAppResp::VoiceFilterConfHasBeenSet() const
{
    return m_voiceFilterConfHasBeenSet;
}

AsrConf CreateAppResp::GetAsrConf() const
{
    return m_asrConf;
}

void CreateAppResp::SetAsrConf(const AsrConf& _asrConf)
{
    m_asrConf = _asrConf;
    m_asrConfHasBeenSet = true;
}

bool CreateAppResp::AsrConfHasBeenSet() const
{
    return m_asrConfHasBeenSet;
}

