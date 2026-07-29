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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudAppVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudAppVersionResponse::DescribeCloudAppVersionResponse() :
    m_buildTypeHasBeenSet(false),
    m_buildIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_staticConfigHasBeenSet(false),
    m_buildTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudAppVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BuildType") && !rsp["BuildType"].IsNull())
    {
        if (!rsp["BuildType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildType = string(rsp["BuildType"].GetString());
        m_buildTypeHasBeenSet = true;
    }

    if (rsp.HasMember("BuildId") && !rsp["BuildId"].IsNull())
    {
        if (!rsp["BuildId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildId = string(rsp["BuildId"].GetString());
        m_buildIdHasBeenSet = true;
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

    if (rsp.HasMember("Framework") && !rsp["Framework"].IsNull())
    {
        if (!rsp["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(rsp["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (rsp.HasMember("StaticConfig") && !rsp["StaticConfig"].IsNull())
    {
        if (!rsp["StaticConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StaticConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_staticConfig.Deserialize(rsp["StaticConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_staticConfigHasBeenSet = true;
    }

    if (rsp.HasMember("BuildTime") && !rsp["BuildTime"].IsNull())
    {
        if (!rsp["BuildTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BuildTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_buildTime = string(rsp["BuildTime"].GetString());
        m_buildTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Steps") && !rsp["Steps"].IsNull())
    {
        if (!rsp["Steps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Steps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Steps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BuildStepStatus item;
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

string DescribeCloudAppVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_buildTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildType.c_str(), allocator).Move(), allocator);
    }

    if (m_buildIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_staticConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StaticConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_staticConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_buildTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BuildTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_buildTime.c_str(), allocator).Move(), allocator);
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


string DescribeCloudAppVersionResponse::GetBuildType() const
{
    return m_buildType;
}

bool DescribeCloudAppVersionResponse::BuildTypeHasBeenSet() const
{
    return m_buildTypeHasBeenSet;
}

string DescribeCloudAppVersionResponse::GetBuildId() const
{
    return m_buildId;
}

bool DescribeCloudAppVersionResponse::BuildIdHasBeenSet() const
{
    return m_buildIdHasBeenSet;
}

string DescribeCloudAppVersionResponse::GetStatus() const
{
    return m_status;
}

bool DescribeCloudAppVersionResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeCloudAppVersionResponse::GetFramework() const
{
    return m_framework;
}

bool DescribeCloudAppVersionResponse::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

StaticConfig DescribeCloudAppVersionResponse::GetStaticConfig() const
{
    return m_staticConfig;
}

bool DescribeCloudAppVersionResponse::StaticConfigHasBeenSet() const
{
    return m_staticConfigHasBeenSet;
}

string DescribeCloudAppVersionResponse::GetBuildTime() const
{
    return m_buildTime;
}

bool DescribeCloudAppVersionResponse::BuildTimeHasBeenSet() const
{
    return m_buildTimeHasBeenSet;
}

vector<BuildStepStatus> DescribeCloudAppVersionResponse::GetSteps() const
{
    return m_steps;
}

bool DescribeCloudAppVersionResponse::StepsHasBeenSet() const
{
    return m_stepsHasBeenSet;
}


