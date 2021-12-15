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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeLiveRecordPlanByIdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeLiveRecordPlanByIdResponse::DescribeLiveRecordPlanByIdResponse() :
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_recordStorageTimeHasBeenSet(false),
    m_planTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLiveRecordPlanByIdResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PlanName") && !rsp["PlanName"].IsNull())
    {
        if (!rsp["PlanName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planName = string(rsp["PlanName"].GetString());
        m_planNameHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateId") && !rsp["TemplateId"].IsNull())
    {
        if (!rsp["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(rsp["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (rsp.HasMember("TemplateName") && !rsp["TemplateName"].IsNull())
    {
        if (!rsp["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(rsp["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStorageTime") && !rsp["RecordStorageTime"].IsNull())
    {
        if (!rsp["RecordStorageTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStorageTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStorageTime = rsp["RecordStorageTime"].GetInt64();
        m_recordStorageTimeHasBeenSet = true;
    }

    if (rsp.HasMember("PlanType") && !rsp["PlanType"].IsNull())
    {
        if (!rsp["PlanType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PlanType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_planType = rsp["PlanType"].GetInt64();
        m_planTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLiveRecordPlanByIdResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_planNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStorageTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStorageTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStorageTime, allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_planType, allocator);
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


string DescribeLiveRecordPlanByIdResponse::GetPlanName() const
{
    return m_planName;
}

bool DescribeLiveRecordPlanByIdResponse::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string DescribeLiveRecordPlanByIdResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeLiveRecordPlanByIdResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeLiveRecordPlanByIdResponse::GetTemplateName() const
{
    return m_templateName;
}

bool DescribeLiveRecordPlanByIdResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

int64_t DescribeLiveRecordPlanByIdResponse::GetRecordStorageTime() const
{
    return m_recordStorageTime;
}

bool DescribeLiveRecordPlanByIdResponse::RecordStorageTimeHasBeenSet() const
{
    return m_recordStorageTimeHasBeenSet;
}

int64_t DescribeLiveRecordPlanByIdResponse::GetPlanType() const
{
    return m_planType;
}

bool DescribeLiveRecordPlanByIdResponse::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}


