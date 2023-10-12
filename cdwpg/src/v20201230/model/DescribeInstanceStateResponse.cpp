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

#include <tencentcloud/cdwpg/v20201230/model/DescribeInstanceStateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdwpg::V20201230::Model;
using namespace std;

DescribeInstanceStateResponse::DescribeInstanceStateResponse() :
    m_instanceStateHasBeenSet(false),
    m_flowCreateTimeHasBeenSet(false),
    m_flowNameHasBeenSet(false),
    m_flowProgressHasBeenSet(false),
    m_instanceStateDescHasBeenSet(false),
    m_flowMsgHasBeenSet(false),
    m_processNameHasBeenSet(false),
    m_backupStatusHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceStateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceState") && !rsp["InstanceState"].IsNull())
    {
        if (!rsp["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(rsp["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (rsp.HasMember("FlowCreateTime") && !rsp["FlowCreateTime"].IsNull())
    {
        if (!rsp["FlowCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowCreateTime = string(rsp["FlowCreateTime"].GetString());
        m_flowCreateTimeHasBeenSet = true;
    }

    if (rsp.HasMember("FlowName") && !rsp["FlowName"].IsNull())
    {
        if (!rsp["FlowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowName = string(rsp["FlowName"].GetString());
        m_flowNameHasBeenSet = true;
    }

    if (rsp.HasMember("FlowProgress") && !rsp["FlowProgress"].IsNull())
    {
        if (!rsp["FlowProgress"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FlowProgress` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_flowProgress = rsp["FlowProgress"].GetDouble();
        m_flowProgressHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStateDesc") && !rsp["InstanceStateDesc"].IsNull())
    {
        if (!rsp["InstanceStateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStateDesc = string(rsp["InstanceStateDesc"].GetString());
        m_instanceStateDescHasBeenSet = true;
    }

    if (rsp.HasMember("FlowMsg") && !rsp["FlowMsg"].IsNull())
    {
        if (!rsp["FlowMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowMsg = string(rsp["FlowMsg"].GetString());
        m_flowMsgHasBeenSet = true;
    }

    if (rsp.HasMember("ProcessName") && !rsp["ProcessName"].IsNull())
    {
        if (!rsp["ProcessName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProcessName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_processName = string(rsp["ProcessName"].GetString());
        m_processNameHasBeenSet = true;
    }

    if (rsp.HasMember("BackupStatus") && !rsp["BackupStatus"].IsNull())
    {
        if (!rsp["BackupStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BackupStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_backupStatus = rsp["BackupStatus"].GetInt64();
        m_backupStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceStateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_flowCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_flowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowName.c_str(), allocator).Move(), allocator);
    }

    if (m_flowProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_flowProgress, allocator);
    }

    if (m_instanceStateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceStateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_flowMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_processNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_processName.c_str(), allocator).Move(), allocator);
    }

    if (m_backupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_backupStatus, allocator);
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


string DescribeInstanceStateResponse::GetInstanceState() const
{
    return m_instanceState;
}

bool DescribeInstanceStateResponse::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string DescribeInstanceStateResponse::GetFlowCreateTime() const
{
    return m_flowCreateTime;
}

bool DescribeInstanceStateResponse::FlowCreateTimeHasBeenSet() const
{
    return m_flowCreateTimeHasBeenSet;
}

string DescribeInstanceStateResponse::GetFlowName() const
{
    return m_flowName;
}

bool DescribeInstanceStateResponse::FlowNameHasBeenSet() const
{
    return m_flowNameHasBeenSet;
}

double DescribeInstanceStateResponse::GetFlowProgress() const
{
    return m_flowProgress;
}

bool DescribeInstanceStateResponse::FlowProgressHasBeenSet() const
{
    return m_flowProgressHasBeenSet;
}

string DescribeInstanceStateResponse::GetInstanceStateDesc() const
{
    return m_instanceStateDesc;
}

bool DescribeInstanceStateResponse::InstanceStateDescHasBeenSet() const
{
    return m_instanceStateDescHasBeenSet;
}

string DescribeInstanceStateResponse::GetFlowMsg() const
{
    return m_flowMsg;
}

bool DescribeInstanceStateResponse::FlowMsgHasBeenSet() const
{
    return m_flowMsgHasBeenSet;
}

string DescribeInstanceStateResponse::GetProcessName() const
{
    return m_processName;
}

bool DescribeInstanceStateResponse::ProcessNameHasBeenSet() const
{
    return m_processNameHasBeenSet;
}

int64_t DescribeInstanceStateResponse::GetBackupStatus() const
{
    return m_backupStatus;
}

bool DescribeInstanceStateResponse::BackupStatusHasBeenSet() const
{
    return m_backupStatusHasBeenSet;
}


