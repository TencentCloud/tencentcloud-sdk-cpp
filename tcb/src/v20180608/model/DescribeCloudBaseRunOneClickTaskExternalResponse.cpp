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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudBaseRunOneClickTaskExternalResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudBaseRunOneClickTaskExternalResponse::DescribeCloudBaseRunOneClickTaskExternalResponse() :
    m_externalIdHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_userUinHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_failReasonHasBeenSet(false),
    m_userEnvIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudBaseRunOneClickTaskExternalResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExternalId") && !rsp["ExternalId"].IsNull())
    {
        if (!rsp["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(rsp["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }

    if (rsp.HasMember("EnvId") && !rsp["EnvId"].IsNull())
    {
        if (!rsp["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(rsp["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (rsp.HasMember("UserUin") && !rsp["UserUin"].IsNull())
    {
        if (!rsp["UserUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userUin = string(rsp["UserUin"].GetString());
        m_userUinHasBeenSet = true;
    }

    if (rsp.HasMember("ServerName") && !rsp["ServerName"].IsNull())
    {
        if (!rsp["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(rsp["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (rsp.HasMember("VersionName") && !rsp["VersionName"].IsNull())
    {
        if (!rsp["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(rsp["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(rsp["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Stage") && !rsp["Stage"].IsNull())
    {
        if (!rsp["Stage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Stage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stage = string(rsp["Stage"].GetString());
        m_stageHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("FailReason") && !rsp["FailReason"].IsNull())
    {
        if (!rsp["FailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failReason = string(rsp["FailReason"].GetString());
        m_failReasonHasBeenSet = true;
    }

    if (rsp.HasMember("UserEnvId") && !rsp["UserEnvId"].IsNull())
    {
        if (!rsp["UserEnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserEnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userEnvId = string(rsp["UserEnvId"].GetString());
        m_userEnvIdHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Steps") && !rsp["Steps"].IsNull())
    {
        if (!rsp["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Steps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OneClickTaskStepInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_steps.push_back(item);
        }
        m_stepsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_userUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userUin.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stage.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_failReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failReason.c_str(), allocator).Move(), allocator);
    }

    if (m_userEnvIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserEnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userEnvId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_stepsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Steps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_steps.begin(); itr != m_steps.end(); ++itr, ++i)
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


string DescribeCloudBaseRunOneClickTaskExternalResponse::GetExternalId() const
{
    return m_externalId;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetEnvId() const
{
    return m_envId;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetUserUin() const
{
    return m_userUin;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::UserUinHasBeenSet() const
{
    return m_userUinHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetServerName() const
{
    return m_serverName;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetVersionName() const
{
    return m_versionName;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetStage() const
{
    return m_stage;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::StageHasBeenSet() const
{
    return m_stageHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetFailReason() const
{
    return m_failReason;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::FailReasonHasBeenSet() const
{
    return m_failReasonHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetUserEnvId() const
{
    return m_userEnvId;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::UserEnvIdHasBeenSet() const
{
    return m_userEnvIdHasBeenSet;
}

string DescribeCloudBaseRunOneClickTaskExternalResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

vector<OneClickTaskStepInfo> DescribeCloudBaseRunOneClickTaskExternalResponse::GetSteps() const
{
    return m_steps;
}

bool DescribeCloudBaseRunOneClickTaskExternalResponse::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}


