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

#include <tencentcloud/cdb/v20170320/model/DescribeRemoteBackupConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeRemoteBackupConfigResponse::DescribeRemoteBackupConfigResponse() :
    m_expireDaysHasBeenSet(false),
    m_remoteBackupSaveHasBeenSet(false),
    m_remoteBinlogSaveHasBeenSet(false),
    m_remoteRegionHasBeenSet(false),
    m_regionListHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRemoteBackupConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ExpireDays") && !rsp["ExpireDays"].IsNull())
    {
        if (!rsp["ExpireDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireDays = rsp["ExpireDays"].GetInt64();
        m_expireDaysHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBackupSave") && !rsp["RemoteBackupSave"].IsNull())
    {
        if (!rsp["RemoteBackupSave"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBackupSave` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBackupSave = string(rsp["RemoteBackupSave"].GetString());
        m_remoteBackupSaveHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteBinlogSave") && !rsp["RemoteBinlogSave"].IsNull())
    {
        if (!rsp["RemoteBinlogSave"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemoteBinlogSave` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remoteBinlogSave = string(rsp["RemoteBinlogSave"].GetString());
        m_remoteBinlogSaveHasBeenSet = true;
    }

    if (rsp.HasMember("RemoteRegion") && !rsp["RemoteRegion"].IsNull())
    {
        if (!rsp["RemoteRegion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RemoteRegion` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RemoteRegion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_remoteRegion.push_back((*itr).GetString());
        }
        m_remoteRegionHasBeenSet = true;
    }

    if (rsp.HasMember("RegionList") && !rsp["RegionList"].IsNull())
    {
        if (!rsp["RegionList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegionList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RegionList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regionList.push_back((*itr).GetString());
        }
        m_regionListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRemoteBackupConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_expireDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireDays, allocator);
    }

    if (m_remoteBackupSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBackupSave";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteBackupSave.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteBinlogSaveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteBinlogSave";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remoteBinlogSave.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_remoteRegion.begin(); itr != m_remoteRegion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_regionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regionList.begin(); itr != m_regionList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


int64_t DescribeRemoteBackupConfigResponse::GetExpireDays() const
{
    return m_expireDays;
}

bool DescribeRemoteBackupConfigResponse::ExpireDaysHasBeenSet() const
{
    return m_expireDaysHasBeenSet;
}

string DescribeRemoteBackupConfigResponse::GetRemoteBackupSave() const
{
    return m_remoteBackupSave;
}

bool DescribeRemoteBackupConfigResponse::RemoteBackupSaveHasBeenSet() const
{
    return m_remoteBackupSaveHasBeenSet;
}

string DescribeRemoteBackupConfigResponse::GetRemoteBinlogSave() const
{
    return m_remoteBinlogSave;
}

bool DescribeRemoteBackupConfigResponse::RemoteBinlogSaveHasBeenSet() const
{
    return m_remoteBinlogSaveHasBeenSet;
}

vector<string> DescribeRemoteBackupConfigResponse::GetRemoteRegion() const
{
    return m_remoteRegion;
}

bool DescribeRemoteBackupConfigResponse::RemoteRegionHasBeenSet() const
{
    return m_remoteRegionHasBeenSet;
}

vector<string> DescribeRemoteBackupConfigResponse::GetRegionList() const
{
    return m_regionList;
}

bool DescribeRemoteBackupConfigResponse::RegionListHasBeenSet() const
{
    return m_regionListHasBeenSet;
}


