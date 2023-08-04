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

#include <tencentcloud/iss/v20230517/model/AddRecordBackupTemplateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iss::V20230517::Model;
using namespace std;

AddRecordBackupTemplateResponse::AddRecordBackupTemplateResponse() :
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_timeSectionsHasBeenSet(false),
    m_devTimeSectionsHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_createAtHasBeenSet(false),
    m_updateAtHasBeenSet(false)
{
}

CoreInternalOutcome AddRecordBackupTemplateResponse::Deserialize(const string &payload)
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

    if (rsp.HasMember("TimeSections") && !rsp["TimeSections"].IsNull())
    {
        if (!rsp["TimeSections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TimeSections` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TimeSections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordTemplateTimeSections item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeSections.push_back(item);
        }
        m_timeSectionsHasBeenSet = true;
    }

    if (rsp.HasMember("DevTimeSections") && !rsp["DevTimeSections"].IsNull())
    {
        if (!rsp["DevTimeSections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevTimeSections` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DevTimeSections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordTemplateTimeSections item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_devTimeSections.push_back(item);
        }
        m_devTimeSectionsHasBeenSet = true;
    }

    if (rsp.HasMember("Scale") && !rsp["Scale"].IsNull())
    {
        if (!rsp["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = rsp["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
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

string AddRecordBackupTemplateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_timeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeSections.begin(); itr != m_timeSections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_devTimeSectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevTimeSections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_devTimeSections.begin(); itr != m_devTimeSections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
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


string AddRecordBackupTemplateResponse::GetTemplateId() const
{
    return m_templateId;
}

bool AddRecordBackupTemplateResponse::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string AddRecordBackupTemplateResponse::GetTemplateName() const
{
    return m_templateName;
}

bool AddRecordBackupTemplateResponse::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<RecordTemplateTimeSections> AddRecordBackupTemplateResponse::GetTimeSections() const
{
    return m_timeSections;
}

bool AddRecordBackupTemplateResponse::TimeSectionsHasBeenSet() const
{
    return m_timeSectionsHasBeenSet;
}

vector<RecordTemplateTimeSections> AddRecordBackupTemplateResponse::GetDevTimeSections() const
{
    return m_devTimeSections;
}

bool AddRecordBackupTemplateResponse::DevTimeSectionsHasBeenSet() const
{
    return m_devTimeSectionsHasBeenSet;
}

int64_t AddRecordBackupTemplateResponse::GetScale() const
{
    return m_scale;
}

bool AddRecordBackupTemplateResponse::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

string AddRecordBackupTemplateResponse::GetCreateAt() const
{
    return m_createAt;
}

bool AddRecordBackupTemplateResponse::CreateAtHasBeenSet() const
{
    return m_createAtHasBeenSet;
}

string AddRecordBackupTemplateResponse::GetUpdateAt() const
{
    return m_updateAt;
}

bool AddRecordBackupTemplateResponse::UpdateAtHasBeenSet() const
{
    return m_updateAtHasBeenSet;
}


