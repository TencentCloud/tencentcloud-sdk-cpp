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

#include <tencentcloud/waf/v20180125/model/DescribeApiDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeApiDetailResponse::DescribeApiDetailResponse() :
    m_logHasBeenSet(false),
    m_parameterListHasBeenSet(false),
    m_sceneHasBeenSet(false),
    m_sensitiveFieldsHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_ipCountHasBeenSet(false),
    m_regionCountHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_sensitiveCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_rspLogHasBeenSet(false),
    m_maxQPSHasBeenSet(false),
    m_apiDetailSampleHistoryHasBeenSet(false)
{
}

CoreInternalOutcome DescribeApiDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Log") && !rsp["Log"].IsNull())
    {
        if (!rsp["Log"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Log` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_log = string(rsp["Log"].GetString());
        m_logHasBeenSet = true;
    }

    if (rsp.HasMember("ParameterList") && !rsp["ParameterList"].IsNull())
    {
        if (!rsp["ParameterList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ParameterList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ParameterList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiParameterType item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_parameterList.push_back(item);
        }
        m_parameterListHasBeenSet = true;
    }

    if (rsp.HasMember("Scene") && !rsp["Scene"].IsNull())
    {
        if (!rsp["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(rsp["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveFields") && !rsp["SensitiveFields"].IsNull())
    {
        if (!rsp["SensitiveFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SensitiveFields` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SensitiveFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sensitiveFields.push_back((*itr).GetString());
        }
        m_sensitiveFieldsHasBeenSet = true;
    }

    if (rsp.HasMember("IsActive") && !rsp["IsActive"].IsNull())
    {
        if (!rsp["IsActive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsActive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isActive = rsp["IsActive"].GetBool();
        m_isActiveHasBeenSet = true;
    }

    if (rsp.HasMember("IpCount") && !rsp["IpCount"].IsNull())
    {
        if (!rsp["IpCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IpCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ipCount = rsp["IpCount"].GetInt64();
        m_ipCountHasBeenSet = true;
    }

    if (rsp.HasMember("RegionCount") && !rsp["RegionCount"].IsNull())
    {
        if (!rsp["RegionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RegionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionCount = rsp["RegionCount"].GetInt64();
        m_regionCountHasBeenSet = true;
    }

    if (rsp.HasMember("EventCount") && !rsp["EventCount"].IsNull())
    {
        if (!rsp["EventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = rsp["EventCount"].GetInt64();
        m_eventCountHasBeenSet = true;
    }

    if (rsp.HasMember("SensitiveCount") && !rsp["SensitiveCount"].IsNull())
    {
        if (!rsp["SensitiveCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sensitiveCount = rsp["SensitiveCount"].GetUint64();
        m_sensitiveCountHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (rsp.HasMember("RspLog") && !rsp["RspLog"].IsNull())
    {
        if (!rsp["RspLog"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RspLog` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rspLog = string(rsp["RspLog"].GetString());
        m_rspLogHasBeenSet = true;
    }

    if (rsp.HasMember("MaxQPS") && !rsp["MaxQPS"].IsNull())
    {
        if (!rsp["MaxQPS"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxQPS` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQPS = rsp["MaxQPS"].GetUint64();
        m_maxQPSHasBeenSet = true;
    }

    if (rsp.HasMember("ApiDetailSampleHistory") && !rsp["ApiDetailSampleHistory"].IsNull())
    {
        if (!rsp["ApiDetailSampleHistory"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiDetailSampleHistory` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ApiDetailSampleHistory"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApiDetailSampleHistory item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apiDetailSampleHistory.push_back(item);
        }
        m_apiDetailSampleHistoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeApiDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_logHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Log";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_log.c_str(), allocator).Move(), allocator);
    }

    if (m_parameterListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParameterList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameterList.begin(); itr != m_parameterList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
    }

    if (m_sensitiveFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sensitiveFields.begin(); itr != m_sensitiveFields.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isActive, allocator);
    }

    if (m_ipCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ipCount, allocator);
    }

    if (m_regionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionCount, allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_sensitiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sensitiveCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_rspLogHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RspLog";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rspLog.c_str(), allocator).Move(), allocator);
    }

    if (m_maxQPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQPS, allocator);
    }

    if (m_apiDetailSampleHistoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDetailSampleHistory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apiDetailSampleHistory.begin(); itr != m_apiDetailSampleHistory.end(); ++itr, ++i)
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


string DescribeApiDetailResponse::GetLog() const
{
    return m_log;
}

bool DescribeApiDetailResponse::LogHasBeenSet() const
{
    return m_logHasBeenSet;
}

vector<ApiParameterType> DescribeApiDetailResponse::GetParameterList() const
{
    return m_parameterList;
}

bool DescribeApiDetailResponse::ParameterListHasBeenSet() const
{
    return m_parameterListHasBeenSet;
}

string DescribeApiDetailResponse::GetScene() const
{
    return m_scene;
}

bool DescribeApiDetailResponse::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

vector<string> DescribeApiDetailResponse::GetSensitiveFields() const
{
    return m_sensitiveFields;
}

bool DescribeApiDetailResponse::SensitiveFieldsHasBeenSet() const
{
    return m_sensitiveFieldsHasBeenSet;
}

bool DescribeApiDetailResponse::GetIsActive() const
{
    return m_isActive;
}

bool DescribeApiDetailResponse::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

int64_t DescribeApiDetailResponse::GetIpCount() const
{
    return m_ipCount;
}

bool DescribeApiDetailResponse::IpCountHasBeenSet() const
{
    return m_ipCountHasBeenSet;
}

int64_t DescribeApiDetailResponse::GetRegionCount() const
{
    return m_regionCount;
}

bool DescribeApiDetailResponse::RegionCountHasBeenSet() const
{
    return m_regionCountHasBeenSet;
}

int64_t DescribeApiDetailResponse::GetEventCount() const
{
    return m_eventCount;
}

bool DescribeApiDetailResponse::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

uint64_t DescribeApiDetailResponse::GetSensitiveCount() const
{
    return m_sensitiveCount;
}

bool DescribeApiDetailResponse::SensitiveCountHasBeenSet() const
{
    return m_sensitiveCountHasBeenSet;
}

uint64_t DescribeApiDetailResponse::GetLevel() const
{
    return m_level;
}

bool DescribeApiDetailResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string DescribeApiDetailResponse::GetRspLog() const
{
    return m_rspLog;
}

bool DescribeApiDetailResponse::RspLogHasBeenSet() const
{
    return m_rspLogHasBeenSet;
}

uint64_t DescribeApiDetailResponse::GetMaxQPS() const
{
    return m_maxQPS;
}

bool DescribeApiDetailResponse::MaxQPSHasBeenSet() const
{
    return m_maxQPSHasBeenSet;
}

vector<ApiDetailSampleHistory> DescribeApiDetailResponse::GetApiDetailSampleHistory() const
{
    return m_apiDetailSampleHistory;
}

bool DescribeApiDetailResponse::ApiDetailSampleHistoryHasBeenSet() const
{
    return m_apiDetailSampleHistoryHasBeenSet;
}


