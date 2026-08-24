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

#include <tencentcloud/bdrc/v20260330/model/DescribeBackupOverviewGeneralResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeBackupOverviewGeneralResponse::DescribeBackupOverviewGeneralResponse() :
    m_instanceBackupOverviewHasBeenSet(false),
    m_fileBackupOverviewHasBeenSet(false),
    m_backupPolicyOverviewHasBeenSet(false),
    m_backupVaultOverviewHasBeenSet(false),
    m_protectedResourceOverviewHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupOverviewGeneralResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceBackupOverview") && !rsp["InstanceBackupOverview"].IsNull())
    {
        if (!rsp["InstanceBackupOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceBackupOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceBackupOverview.Deserialize(rsp["InstanceBackupOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceBackupOverviewHasBeenSet = true;
    }

    if (rsp.HasMember("FileBackupOverview") && !rsp["FileBackupOverview"].IsNull())
    {
        if (!rsp["FileBackupOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FileBackupOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileBackupOverview.Deserialize(rsp["FileBackupOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileBackupOverviewHasBeenSet = true;
    }

    if (rsp.HasMember("BackupPolicyOverview") && !rsp["BackupPolicyOverview"].IsNull())
    {
        if (!rsp["BackupPolicyOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupPolicyOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupPolicyOverview.Deserialize(rsp["BackupPolicyOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupPolicyOverviewHasBeenSet = true;
    }

    if (rsp.HasMember("BackupVaultOverview") && !rsp["BackupVaultOverview"].IsNull())
    {
        if (!rsp["BackupVaultOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BackupVaultOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupVaultOverview.Deserialize(rsp["BackupVaultOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupVaultOverviewHasBeenSet = true;
    }

    if (rsp.HasMember("ProtectedResourceOverview") && !rsp["ProtectedResourceOverview"].IsNull())
    {
        if (!rsp["ProtectedResourceOverview"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectedResourceOverview` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_protectedResourceOverview.Deserialize(rsp["ProtectedResourceOverview"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_protectedResourceOverviewHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupOverviewGeneralResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceBackupOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceBackupOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceBackupOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fileBackupOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileBackupOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileBackupOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupPolicyOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupPolicyOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupPolicyOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupVaultOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupVaultOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupVaultOverview.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_protectedResourceOverviewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectedResourceOverview";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_protectedResourceOverview.ToJsonObject(value[key.c_str()], allocator);
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


InstanceBackupOverview DescribeBackupOverviewGeneralResponse::GetInstanceBackupOverview() const
{
    return m_instanceBackupOverview;
}

bool DescribeBackupOverviewGeneralResponse::InstanceBackupOverviewHasBeenSet() const
{
    return m_instanceBackupOverviewHasBeenSet;
}

FileBackupOverview DescribeBackupOverviewGeneralResponse::GetFileBackupOverview() const
{
    return m_fileBackupOverview;
}

bool DescribeBackupOverviewGeneralResponse::FileBackupOverviewHasBeenSet() const
{
    return m_fileBackupOverviewHasBeenSet;
}

BackupPolicyOverview DescribeBackupOverviewGeneralResponse::GetBackupPolicyOverview() const
{
    return m_backupPolicyOverview;
}

bool DescribeBackupOverviewGeneralResponse::BackupPolicyOverviewHasBeenSet() const
{
    return m_backupPolicyOverviewHasBeenSet;
}

BackupVaultOverview DescribeBackupOverviewGeneralResponse::GetBackupVaultOverview() const
{
    return m_backupVaultOverview;
}

bool DescribeBackupOverviewGeneralResponse::BackupVaultOverviewHasBeenSet() const
{
    return m_backupVaultOverviewHasBeenSet;
}

ProtectedResourceOverview DescribeBackupOverviewGeneralResponse::GetProtectedResourceOverview() const
{
    return m_protectedResourceOverview;
}

bool DescribeBackupOverviewGeneralResponse::ProtectedResourceOverviewHasBeenSet() const
{
    return m_protectedResourceOverviewHasBeenSet;
}


