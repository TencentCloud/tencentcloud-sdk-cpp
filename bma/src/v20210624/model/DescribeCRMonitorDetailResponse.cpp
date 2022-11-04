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

#include <tencentcloud/bma/v20210624/model/DescribeCRMonitorDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bma::V20210624::Model;
using namespace std;

DescribeCRMonitorDetailResponse::DescribeCRMonitorDetailResponse() :
    m_tortsHasBeenSet(false),
    m_totalCountHasBeenSet(false),
    m_monitorStatusHasBeenSet(false),
    m_exportURLHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCRMonitorDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Torts") && !rsp["Torts"].IsNull())
    {
        if (!rsp["Torts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Torts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Torts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MonitorTort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_torts.push_back(item);
        }
        m_tortsHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (rsp.HasMember("MonitorStatus") && !rsp["MonitorStatus"].IsNull())
    {
        if (!rsp["MonitorStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_monitorStatus = rsp["MonitorStatus"].GetInt64();
        m_monitorStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ExportURL") && !rsp["ExportURL"].IsNull())
    {
        if (!rsp["ExportURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExportURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_exportURL = string(rsp["ExportURL"].GetString());
        m_exportURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeCRMonitorDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_tortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Torts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_torts.begin(); itr != m_torts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_monitorStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_monitorStatus, allocator);
    }

    if (m_exportURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExportURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_exportURL.c_str(), allocator).Move(), allocator);
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


vector<MonitorTort> DescribeCRMonitorDetailResponse::GetTorts() const
{
    return m_torts;
}

bool DescribeCRMonitorDetailResponse::TortsHasBeenSet() const
{
    return m_tortsHasBeenSet;
}

int64_t DescribeCRMonitorDetailResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeCRMonitorDetailResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

int64_t DescribeCRMonitorDetailResponse::GetMonitorStatus() const
{
    return m_monitorStatus;
}

bool DescribeCRMonitorDetailResponse::MonitorStatusHasBeenSet() const
{
    return m_monitorStatusHasBeenSet;
}

string DescribeCRMonitorDetailResponse::GetExportURL() const
{
    return m_exportURL;
}

bool DescribeCRMonitorDetailResponse::ExportURLHasBeenSet() const
{
    return m_exportURLHasBeenSet;
}


