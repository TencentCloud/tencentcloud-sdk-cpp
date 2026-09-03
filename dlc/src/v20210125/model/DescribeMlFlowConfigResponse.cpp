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

#include <tencentcloud/dlc/v20210125/model/DescribeMlFlowConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DescribeMlFlowConfigResponse::DescribeMlFlowConfigResponse() :
    m_experimentIDHasBeenSet(false),
    m_runIDHasBeenSet(false),
    m_mlFlowModeHasBeenSet(false),
    m_mlFlowUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMlFlowConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExperimentID") && !rsp["ExperimentID"].IsNull())
    {
        if (!rsp["ExperimentID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExperimentID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_experimentID = string(rsp["ExperimentID"].GetString());
        m_experimentIDHasBeenSet = true;
    }

    if (rsp.HasMember("RunID") && !rsp["RunID"].IsNull())
    {
        if (!rsp["RunID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RunID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_runID = string(rsp["RunID"].GetString());
        m_runIDHasBeenSet = true;
    }

    if (rsp.HasMember("MlFlowMode") && !rsp["MlFlowMode"].IsNull())
    {
        if (!rsp["MlFlowMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowMode = string(rsp["MlFlowMode"].GetString());
        m_mlFlowModeHasBeenSet = true;
    }

    if (rsp.HasMember("MlFlowUrl") && !rsp["MlFlowUrl"].IsNull())
    {
        if (!rsp["MlFlowUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MlFlowUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mlFlowUrl = string(rsp["MlFlowUrl"].GetString());
        m_mlFlowUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMlFlowConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_experimentIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExperimentID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_experimentID.c_str(), allocator).Move(), allocator);
    }

    if (m_runIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_runID.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mlFlowUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MlFlowUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mlFlowUrl.c_str(), allocator).Move(), allocator);
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


string DescribeMlFlowConfigResponse::GetExperimentID() const
{
    return m_experimentID;
}

bool DescribeMlFlowConfigResponse::ExperimentIDHasBeenSet() const
{
    return m_experimentIDHasBeenSet;
}

string DescribeMlFlowConfigResponse::GetRunID() const
{
    return m_runID;
}

bool DescribeMlFlowConfigResponse::RunIDHasBeenSet() const
{
    return m_runIDHasBeenSet;
}

string DescribeMlFlowConfigResponse::GetMlFlowMode() const
{
    return m_mlFlowMode;
}

bool DescribeMlFlowConfigResponse::MlFlowModeHasBeenSet() const
{
    return m_mlFlowModeHasBeenSet;
}

string DescribeMlFlowConfigResponse::GetMlFlowUrl() const
{
    return m_mlFlowUrl;
}

bool DescribeMlFlowConfigResponse::MlFlowUrlHasBeenSet() const
{
    return m_mlFlowUrlHasBeenSet;
}


