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

#include <tencentcloud/iss/v20230517/model/DescribeRecordBackupPlanResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

DescribeRecordBackupPlanResponse::DescribeRecordBackupPlanResponse() :
    m_planIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_lifeCycleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_channelCountHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome DescribeRecordBackupPlanResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PlanId") && !rsp["PlanId"].IsNull())
    {
        if (!rsp["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(rsp["PlanId"].GetString());
        m_planIdHasBeenSet = true;
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

    if (rsp.HasMember("Describe") && !rsp["Describe"].IsNull())
    {
        if (!rsp["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(rsp["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (rsp.HasMember("LifeCycle") && !rsp["LifeCycle"].IsNull())
    {
        if (!rsp["LifeCycle"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycle` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_lifeCycle.Deserialize(rsp["LifeCycle"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_lifeCycleHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("ChannelCount") && !rsp["ChannelCount"].IsNull())
    {
        if (!rsp["ChannelCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_channelCount = rsp["ChannelCount"].GetInt64();
        m_channelCountHasBeenSet = true;
    }

    if (rsp.HasMember("CreateAt") && !rsp["CreateAt"].IsNull())
    {
        if (!rsp["CreateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createAt = string(rsp["CreateAt"].GetString());
        m_createAtHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateAt") && !rsp["UpdateAt"].IsNull())
    {
        if (!rsp["UpdateAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateAt = string(rsp["UpdateAt"].GetString());
        m_updateAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeRecordBackupPlanResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_lifeCycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_lifeCycle.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_channelCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_channelCount, allocator);
    }

    if (m_createAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createAt.c_str(), allocator).Move(), allocator);
    }

    if (m_updateAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateAt.c_str(), allocator).Move(), allocator);
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


string DescribeRecordBackupPlanResponse::GetPlanId() const
{
    return m_planId;
}

bool DescribeRecordBackupPlanResponse::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

string DescribeRecordBackupPlanResponse::GetPlanName() const
{
    return m_planName;
}

bool DescribeRecordBackupPlanResponse::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

string DescribeRecordBackupPlanResponse::GetTemplateId() const
{
    return m_templateId;
}

bool DescribeRecordBackupPlanResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string DescribeRecordBackupPlanResponse::GetDescribe() const
{
    return m_describe;
}

bool DescribeRecordBackupPlanResponse::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

LifeCycleData DescribeRecordBackupPlanResponse::GetLifeCycle() const
{
    return m_lifeCycle;
}

bool DescribeRecordBackupPlanResponse::LifeCycleHasBeenSet() const
{
    return m_lifeCycleHasBeenSet;
}

int64_t DescribeRecordBackupPlanResponse::GetStatus() const
{
    return m_status;
}

bool DescribeRecordBackupPlanResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeRecordBackupPlanResponse::GetChannelCount() const
{
    return m_channelCount;
}

bool DescribeRecordBackupPlanResponse::ChannelCountHasBeenSet() const
{
    return m_channelCountHasBeenSet;
}

string DescribeRecordBackupPlanResponse::GetCreateAt() const
{
    return m_createAt;
}

bool DescribeRecordBackupPlanResponse::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string DescribeRecordBackupPlanResponse::GetUpdateAt() const
{
    return m_updateAt;
}

bool DescribeRecordBackupPlanResponse::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}


