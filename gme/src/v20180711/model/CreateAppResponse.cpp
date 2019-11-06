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

#include <tencentcloud/gme/v20180711/model/CreateAppResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace rapidjson;
using namespace std;

CreateAppResponse::CreateAppResponse() :
    m_bizIdHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_realtimeSpeechConfHasBeenSet(false),
    m_voiceMessageConfHasBeenSet(false),
    m_voiceFilterConfHasBeenSet(false)
{
}

CoreInternalOutcome CreateAppResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BizId") && !rsp["BizId"].IsNull())
    {
        if (!rsp["BizId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `BizId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_bizId = rsp["BizId"].GetUint64();
        m_bizIdHasBeenSet = true;
    }

    if (rsp.HasMember("AppName") && !rsp["AppName"].IsNull())
    {
        if (!rsp["AppName"].IsString())
        {
            return CoreInternalOutcome(Error("response `AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(rsp["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (rsp.HasMember("ProjectId") && !rsp["ProjectId"].IsNull())
    {
        if (!rsp["ProjectId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ProjectId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = rsp["ProjectId"].GetUint64();
        m_projectIdHasBeenSet = true;
    }

    if (rsp.HasMember("SecretKey") && !rsp["SecretKey"].IsNull())
    {
        if (!rsp["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(rsp["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RealtimeSpeechConf") && !rsp["RealtimeSpeechConf"].IsNull())
    {
        if (!rsp["RealtimeSpeechConf"].IsObject())
        {
            return CoreInternalOutcome(Error("response `RealtimeSpeechConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_realtimeSpeechConf.Deserialize(rsp["RealtimeSpeechConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_realtimeSpeechConfHasBeenSet = true;
    }

    if (rsp.HasMember("VoiceMessageConf") && !rsp["VoiceMessageConf"].IsNull())
    {
        if (!rsp["VoiceMessageConf"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VoiceMessageConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceMessageConf.Deserialize(rsp["VoiceMessageConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceMessageConfHasBeenSet = true;
    }

    if (rsp.HasMember("VoiceFilterConf") && !rsp["VoiceFilterConf"].IsNull())
    {
        if (!rsp["VoiceFilterConf"].IsObject())
        {
            return CoreInternalOutcome(Error("response `VoiceFilterConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_voiceFilterConf.Deserialize(rsp["VoiceFilterConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_voiceFilterConfHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


uint64_t CreateAppResponse::GetBizId() const
{
    return m_bizId;
}

bool CreateAppResponse::BizIdHasBeenSet() const
{
    return m_bizIdHasBeenSet;
}

string CreateAppResponse::GetAppName() const
{
    return m_appName;
}

bool CreateAppResponse::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t CreateAppResponse::GetProjectId() const
{
    return m_projectId;
}

bool CreateAppResponse::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateAppResponse::GetSecretKey() const
{
    return m_secretKey;
}

bool CreateAppResponse::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

uint64_t CreateAppResponse::GetCreateTime() const
{
    return m_createTime;
}

bool CreateAppResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

RealtimeSpeechConf CreateAppResponse::GetRealtimeSpeechConf() const
{
    return m_realtimeSpeechConf;
}

bool CreateAppResponse::RealtimeSpeechConfHasBeenSet() const
{
    return m_realtimeSpeechConfHasBeenSet;
}

VoiceMessageConf CreateAppResponse::GetVoiceMessageConf() const
{
    return m_voiceMessageConf;
}

bool CreateAppResponse::VoiceMessageConfHasBeenSet() const
{
    return m_voiceMessageConfHasBeenSet;
}

VoiceFilterConf CreateAppResponse::GetVoiceFilterConf() const
{
    return m_voiceFilterConf;
}

bool CreateAppResponse::VoiceFilterConfHasBeenSet() const
{
    return m_voiceFilterConfHasBeenSet;
}


