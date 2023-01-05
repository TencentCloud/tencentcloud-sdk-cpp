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

#include <tencentcloud/vpc/v20170312/model/DescribeSgSnapshotFileContentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeSgSnapshotFileContentResponse::DescribeSgSnapshotFileContentResponse() :
    m_instanceIdHasBeenSet(false),
    m_snapshotPolicyIdHasBeenSet(false),
    m_snapshotFileIdHasBeenSet(false),
    m_backupTimeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_originalDataHasBeenSet(false),
    m_backupDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSgSnapshotFileContentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotPolicyId") && !rsp["SnapshotPolicyId"].IsNull())
    {
        if (!rsp["SnapshotPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotPolicyId = string(rsp["SnapshotPolicyId"].GetString());
        m_snapshotPolicyIdHasBeenSet = true;
    }

    if (rsp.HasMember("SnapshotFileId") && !rsp["SnapshotFileId"].IsNull())
    {
        if (!rsp["SnapshotFileId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SnapshotFileId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_snapshotFileId = string(rsp["SnapshotFileId"].GetString());
        m_snapshotFileIdHasBeenSet = true;
    }

    if (rsp.HasMember("BackupTime") && !rsp["BackupTime"].IsNull())
    {
        if (!rsp["BackupTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BackupTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupTime = string(rsp["BackupTime"].GetString());
        m_backupTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Operator") && !rsp["Operator"].IsNull())
    {
        if (!rsp["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(rsp["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (rsp.HasMember("OriginalData") && !rsp["OriginalData"].IsNull())
    {
        if (!rsp["OriginalData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginalData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OriginalData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originalData.push_back(item);
        }
        m_originalDataHasBeenSet = true;
    }

    if (rsp.HasMember("BackupData") && !rsp["BackupData"].IsNull())
    {
        if (!rsp["BackupData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BackupData` is not array type"));

        const rapidjson::Value &tmpValue = rsp["BackupData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SecurityGroupPolicy item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_backupData.push_back(item);
        }
        m_backupDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSgSnapshotFileContentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_snapshotFileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SnapshotFileId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_snapshotFileId.c_str(), allocator).Move(), allocator);
    }

    if (m_backupTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_originalDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originalData.begin(); itr != m_originalData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_backupDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_backupData.begin(); itr != m_backupData.end(); ++itr, ++i)
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


string DescribeSgSnapshotFileContentResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeSgSnapshotFileContentResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeSgSnapshotFileContentResponse::GetSnapshotPolicyId() const
{
    return m_snapshotPolicyId;
}

bool DescribeSgSnapshotFileContentResponse::SnapshotPolicyIdHasBeenSet() const
{
    return m_snapshotPolicyIdHasBeenSet;
}

string DescribeSgSnapshotFileContentResponse::GetSnapshotFileId() const
{
    return m_snapshotFileId;
}

bool DescribeSgSnapshotFileContentResponse::SnapshotFileIdHasBeenSet() const
{
    return m_snapshotFileIdHasBeenSet;
}

string DescribeSgSnapshotFileContentResponse::GetBackupTime() const
{
    return m_backupTime;
}

bool DescribeSgSnapshotFileContentResponse::BackupTimeHasBeenSet() const
{
    return m_backupTimeHasBeenSet;
}

string DescribeSgSnapshotFileContentResponse::GetOperator() const
{
    return m_operator;
}

bool DescribeSgSnapshotFileContentResponse::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

vector<SecurityGroupPolicy> DescribeSgSnapshotFileContentResponse::GetOriginalData() const
{
    return m_originalData;
}

bool DescribeSgSnapshotFileContentResponse::OriginalDataHasBeenSet() const
{
    return m_originalDataHasBeenSet;
}

vector<SecurityGroupPolicy> DescribeSgSnapshotFileContentResponse::GetBackupData() const
{
    return m_backupData;
}

bool DescribeSgSnapshotFileContentResponse::BackupDataHasBeenSet() const
{
    return m_backupDataHasBeenSet;
}


