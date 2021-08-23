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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBPerformanceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBPerformanceResponse::DescribeDBPerformanceResponse() :
    m_longQueryHasBeenSet(false),
    m_selectTotalHasBeenSet(false),
    m_updateTotalHasBeenSet(false),
    m_insertTotalHasBeenSet(false),
    m_deleteTotalHasBeenSet(false),
    m_memHitRateHasBeenSet(false),
    m_diskIopsHasBeenSet(false),
    m_connActiveHasBeenSet(false),
    m_isMasterSwitchedHasBeenSet(false),
    m_slaveDelayHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBPerformanceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LongQuery") && !rsp["LongQuery"].IsNull())
    {
        if (!rsp["LongQuery"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LongQuery` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_longQuery.Deserialize(rsp["LongQuery"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_longQueryHasBeenSet = true;
    }

    if (rsp.HasMember("SelectTotal") && !rsp["SelectTotal"].IsNull())
    {
        if (!rsp["SelectTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SelectTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectTotal.Deserialize(rsp["SelectTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectTotalHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateTotal") && !rsp["UpdateTotal"].IsNull())
    {
        if (!rsp["UpdateTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_updateTotal.Deserialize(rsp["UpdateTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_updateTotalHasBeenSet = true;
    }

    if (rsp.HasMember("InsertTotal") && !rsp["InsertTotal"].IsNull())
    {
        if (!rsp["InsertTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InsertTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_insertTotal.Deserialize(rsp["InsertTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_insertTotalHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTotal") && !rsp["DeleteTotal"].IsNull())
    {
        if (!rsp["DeleteTotal"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DeleteTotal` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_deleteTotal.Deserialize(rsp["DeleteTotal"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_deleteTotalHasBeenSet = true;
    }

    if (rsp.HasMember("MemHitRate") && !rsp["MemHitRate"].IsNull())
    {
        if (!rsp["MemHitRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MemHitRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memHitRate.Deserialize(rsp["MemHitRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memHitRateHasBeenSet = true;
    }

    if (rsp.HasMember("DiskIops") && !rsp["DiskIops"].IsNull())
    {
        if (!rsp["DiskIops"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DiskIops` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_diskIops.Deserialize(rsp["DiskIops"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_diskIopsHasBeenSet = true;
    }

    if (rsp.HasMember("ConnActive") && !rsp["ConnActive"].IsNull())
    {
        if (!rsp["ConnActive"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ConnActive` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_connActive.Deserialize(rsp["ConnActive"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_connActiveHasBeenSet = true;
    }

    if (rsp.HasMember("IsMasterSwitched") && !rsp["IsMasterSwitched"].IsNull())
    {
        if (!rsp["IsMasterSwitched"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `IsMasterSwitched` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_isMasterSwitched.Deserialize(rsp["IsMasterSwitched"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_isMasterSwitchedHasBeenSet = true;
    }

    if (rsp.HasMember("SlaveDelay") && !rsp["SlaveDelay"].IsNull())
    {
        if (!rsp["SlaveDelay"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SlaveDelay` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_slaveDelay.Deserialize(rsp["SlaveDelay"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_slaveDelayHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBPerformanceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_longQueryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LongQuery";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_longQuery.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_selectTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updateTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updateTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_insertTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_insertTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_deleteTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_deleteTotal.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memHitRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemHitRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memHitRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_diskIopsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskIops";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_diskIops.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_connActive.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_isMasterSwitchedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsMasterSwitched";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_isMasterSwitched.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_slaveDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SlaveDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_slaveDelay.ToJsonObject(value[key.c_str()], allocator);
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


MonitorData DescribeDBPerformanceResponse::GetLongQuery() const
{
    return m_longQuery;
}

bool DescribeDBPerformanceResponse::LongQueryHasBeenSet() const
{
    return m_longQueryHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetSelectTotal() const
{
    return m_selectTotal;
}

bool DescribeDBPerformanceResponse::SelectTotalHasBeenSet() const
{
    return m_selectTotalHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetUpdateTotal() const
{
    return m_updateTotal;
}

bool DescribeDBPerformanceResponse::UpdateTotalHasBeenSet() const
{
    return m_updateTotalHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetInsertTotal() const
{
    return m_insertTotal;
}

bool DescribeDBPerformanceResponse::InsertTotalHasBeenSet() const
{
    return m_insertTotalHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetDeleteTotal() const
{
    return m_deleteTotal;
}

bool DescribeDBPerformanceResponse::DeleteTotalHasBeenSet() const
{
    return m_deleteTotalHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetMemHitRate() const
{
    return m_memHitRate;
}

bool DescribeDBPerformanceResponse::MemHitRateHasBeenSet() const
{
    return m_memHitRateHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetDiskIops() const
{
    return m_diskIops;
}

bool DescribeDBPerformanceResponse::DiskIopsHasBeenSet() const
{
    return m_diskIopsHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetConnActive() const
{
    return m_connActive;
}

bool DescribeDBPerformanceResponse::ConnActiveHasBeenSet() const
{
    return m_connActiveHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetIsMasterSwitched() const
{
    return m_isMasterSwitched;
}

bool DescribeDBPerformanceResponse::IsMasterSwitchedHasBeenSet() const
{
    return m_isMasterSwitchedHasBeenSet;
}

MonitorData DescribeDBPerformanceResponse::GetSlaveDelay() const
{
    return m_slaveDelay;
}

bool DescribeDBPerformanceResponse::SlaveDelayHasBeenSet() const
{
    return m_slaveDelayHasBeenSet;
}


