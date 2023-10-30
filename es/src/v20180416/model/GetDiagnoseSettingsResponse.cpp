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

#include <tencentcloud/es/v20180416/model/GetDiagnoseSettingsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

GetDiagnoseSettingsResponse::GetDiagnoseSettingsResponse() :
    m_diagnoseJobMetasHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_cronTimeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_maxCountHasBeenSet(false)
{
}

CoreInternalOutcome GetDiagnoseSettingsResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DiagnoseJobMetas") && !rsp["DiagnoseJobMetas"].IsNull())
    {
        if (!rsp["DiagnoseJobMetas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DiagnoseJobMetas` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DiagnoseJobMetas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DiagnoseJobMeta item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_diagnoseJobMetas.push_back(item);
        }
        m_diagnoseJobMetasHasBeenSet = true;
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

    if (rsp.HasMember("CronTime") && !rsp["CronTime"].IsNull())
    {
        if (!rsp["CronTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CronTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cronTime = string(rsp["CronTime"].GetString());
        m_cronTimeHasBeenSet = true;
    }

    if (rsp.HasMember("Count") && !rsp["Count"].IsNull())
    {
        if (!rsp["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = rsp["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (rsp.HasMember("MaxCount") && !rsp["MaxCount"].IsNull())
    {
        if (!rsp["MaxCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxCount = rsp["MaxCount"].GetInt64();
        m_maxCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetDiagnoseSettingsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_diagnoseJobMetasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiagnoseJobMetas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_diagnoseJobMetas.begin(); itr != m_diagnoseJobMetas.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cronTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cronTime.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_maxCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxCount, allocator);
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


vector<DiagnoseJobMeta> GetDiagnoseSettingsResponse::GetDiagnoseJobMetas() const
{
    return m_diagnoseJobMetas;
}

bool GetDiagnoseSettingsResponse::DiagnoseJobMetasHasBeenSet() const
{
    return m_diagnoseJobMetasHasBeenSet;
}

int64_t GetDiagnoseSettingsResponse::GetStatus() const
{
    return m_status;
}

bool GetDiagnoseSettingsResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string GetDiagnoseSettingsResponse::GetCronTime() const
{
    return m_cronTime;
}

bool GetDiagnoseSettingsResponse::CronTimeHasBeenSet() const
{
    return m_cronTimeHasBeenSet;
}

int64_t GetDiagnoseSettingsResponse::GetCount() const
{
    return m_count;
}

bool GetDiagnoseSettingsResponse::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t GetDiagnoseSettingsResponse::GetMaxCount() const
{
    return m_maxCount;
}

bool GetDiagnoseSettingsResponse::MaxCountHasBeenSet() const
{
    return m_maxCountHasBeenSet;
}


