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

#include <tencentcloud/ssl/v20191205/model/UploadUpdateCertificateInstanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UploadUpdateCertificateInstanceResponse::UploadUpdateCertificateInstanceResponse() :
    m_deployRecordIdHasBeenSet(false),
    m_deployStatusHasBeenSet(false),
    m_updateSyncProgressHasBeenSet(false)
{
}

CoreInternalOutcome UploadUpdateCertificateInstanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DeployRecordId") && !rsp["DeployRecordId"].IsNull())
    {
        if (!rsp["DeployRecordId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployRecordId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deployRecordId = rsp["DeployRecordId"].GetUint64();
        m_deployRecordIdHasBeenSet = true;
    }

    if (rsp.HasMember("DeployStatus") && !rsp["DeployStatus"].IsNull())
    {
        if (!rsp["DeployStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeployStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deployStatus = rsp["DeployStatus"].GetInt64();
        m_deployStatusHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateSyncProgress") && !rsp["UpdateSyncProgress"].IsNull())
    {
        if (!rsp["UpdateSyncProgress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UpdateSyncProgress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UpdateSyncProgress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UpdateSyncProgress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_updateSyncProgress.push_back(item);
        }
        m_updateSyncProgressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string UploadUpdateCertificateInstanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_deployRecordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployRecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployRecordId, allocator);
    }

    if (m_deployStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deployStatus, allocator);
    }

    if (m_updateSyncProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateSyncProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_updateSyncProgress.begin(); itr != m_updateSyncProgress.end(); ++itr, ++i)
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


uint64_t UploadUpdateCertificateInstanceResponse::GetDeployRecordId() const
{
    return m_deployRecordId;
}

bool UploadUpdateCertificateInstanceResponse::DeployRecordIdHasBeenSet() const
{
    return m_deployRecordIdHasBeenSet;
}

int64_t UploadUpdateCertificateInstanceResponse::GetDeployStatus() const
{
    return m_deployStatus;
}

bool UploadUpdateCertificateInstanceResponse::DeployStatusHasBeenSet() const
{
    return m_deployStatusHasBeenSet;
}

vector<UpdateSyncProgress> UploadUpdateCertificateInstanceResponse::GetUpdateSyncProgress() const
{
    return m_updateSyncProgress;
}

bool UploadUpdateCertificateInstanceResponse::UpdateSyncProgressHasBeenSet() const
{
    return m_updateSyncProgressHasBeenSet;
}


