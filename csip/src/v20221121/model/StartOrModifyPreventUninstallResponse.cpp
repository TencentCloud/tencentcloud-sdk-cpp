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

#include <tencentcloud/csip/v20221121/model/StartOrModifyPreventUninstallResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

StartOrModifyPreventUninstallResponse::StartOrModifyPreventUninstallResponse() :
    m_failListHasBeenSet(false),
    m_failedHostCountHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

CoreInternalOutcome StartOrModifyPreventUninstallResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FailList") && !rsp["FailList"].IsNull())
    {
        if (!rsp["FailList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ModifyLoginTypeFailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_failList.push_back(item);
        }
        m_failListHasBeenSet = true;
    }

    if (rsp.HasMember("FailedHostCount") && !rsp["FailedHostCount"].IsNull())
    {
        if (!rsp["FailedHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FailedHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_failedHostCount = rsp["FailedHostCount"].GetInt64();
        m_failedHostCountHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = rsp["TaskId"].GetUint64();
        m_taskIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string StartOrModifyPreventUninstallResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_failListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_failList.begin(); itr != m_failList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_failedHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailedHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_failedHostCount, allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
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


vector<ModifyLoginTypeFailInfo> StartOrModifyPreventUninstallResponse::GetFailList() const
{
    return m_failList;
}

bool StartOrModifyPreventUninstallResponse::FailListHasBeenSet() const
{
    return m_failListHasBeenSet;
}

int64_t StartOrModifyPreventUninstallResponse::GetFailedHostCount() const
{
    return m_failedHostCount;
}

bool StartOrModifyPreventUninstallResponse::FailedHostCountHasBeenSet() const
{
    return m_failedHostCountHasBeenSet;
}

uint64_t StartOrModifyPreventUninstallResponse::GetTaskId() const
{
    return m_taskId;
}

bool StartOrModifyPreventUninstallResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


