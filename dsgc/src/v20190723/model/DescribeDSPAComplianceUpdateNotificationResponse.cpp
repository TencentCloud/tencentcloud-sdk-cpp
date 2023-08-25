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

#include <tencentcloud/dsgc/v20190723/model/DescribeDSPAComplianceUpdateNotificationResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DescribeDSPAComplianceUpdateNotificationResponse::DescribeDSPAComplianceUpdateNotificationResponse() :
    m_isUpdatedHasBeenSet(false),
    m_taskNameSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDSPAComplianceUpdateNotificationResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsUpdated") && !rsp["IsUpdated"].IsNull())
    {
        if (!rsp["IsUpdated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsUpdated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUpdated = rsp["IsUpdated"].GetBool();
        m_isUpdatedHasBeenSet = true;
    }

    if (rsp.HasMember("TaskNameSet") && !rsp["TaskNameSet"].IsNull())
    {
        if (!rsp["TaskNameSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaskNameSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaskNameSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskNameSet.push_back((*itr).GetString());
        }
        m_taskNameSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDSPAComplianceUpdateNotificationResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isUpdatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUpdated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUpdated, allocator);
    }

    if (m_taskNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskNameSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskNameSet.begin(); itr != m_taskNameSet.end(); ++itr)
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


bool DescribeDSPAComplianceUpdateNotificationResponse::GetIsUpdated() const
{
    return m_isUpdated;
}

bool DescribeDSPAComplianceUpdateNotificationResponse::IsUpdatedHasBeenSet() const
{
    return m_isUpdatedHasBeenSet;
}

vector<string> DescribeDSPAComplianceUpdateNotificationResponse::GetTaskNameSet() const
{
    return m_taskNameSet;
}

bool DescribeDSPAComplianceUpdateNotificationResponse::TaskNameSetHasBeenSet() const
{
    return m_taskNameSetHasBeenSet;
}


