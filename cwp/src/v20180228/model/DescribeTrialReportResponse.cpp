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

#include <tencentcloud/cwp/v20180228/model/DescribeTrialReportResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeTrialReportResponse::DescribeTrialReportResponse() :
    m_isShowHasBeenSet(false),
    m_addMachineCntHasBeenSet(false),
    m_baselineRiskCntHasBeenSet(false),
    m_vulCntHasBeenSet(false),
    m_malwareAlarmCntHasBeenSet(false),
    m_bruteAlarmCntHasBeenSet(false),
    m_autoIsolateMalwareCntHasBeenSet(false),
    m_autoBlockBruteCntHasBeenSet(false),
    m_autoDefenceCntHasBeenSet(false),
    m_autoVulFixCntHasBeenSet(false),
    m_javaShellCntHasBeenSet(false),
    m_fileTamperCntHasBeenSet(false),
    m_eventCntHasBeenSet(false),
    m_dnsCntHasBeenSet(false),
    m_bashCntHasBeenSet(false),
    m_cloudFromHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTrialReportResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("IsShow") && !rsp["IsShow"].IsNull())
    {
        if (!rsp["IsShow"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsShow` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isShow = rsp["IsShow"].GetBool();
        m_isShowHasBeenSet = true;
    }

    if (rsp.HasMember("AddMachineCnt") && !rsp["AddMachineCnt"].IsNull())
    {
        if (!rsp["AddMachineCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AddMachineCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_addMachineCnt = rsp["AddMachineCnt"].GetInt64();
        m_addMachineCntHasBeenSet = true;
    }

    if (rsp.HasMember("BaselineRiskCnt") && !rsp["BaselineRiskCnt"].IsNull())
    {
        if (!rsp["BaselineRiskCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRiskCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineRiskCnt = rsp["BaselineRiskCnt"].GetInt64();
        m_baselineRiskCntHasBeenSet = true;
    }

    if (rsp.HasMember("VulCnt") && !rsp["VulCnt"].IsNull())
    {
        if (!rsp["VulCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VulCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vulCnt = rsp["VulCnt"].GetInt64();
        m_vulCntHasBeenSet = true;
    }

    if (rsp.HasMember("MalwareAlarmCnt") && !rsp["MalwareAlarmCnt"].IsNull())
    {
        if (!rsp["MalwareAlarmCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MalwareAlarmCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_malwareAlarmCnt = rsp["MalwareAlarmCnt"].GetInt64();
        m_malwareAlarmCntHasBeenSet = true;
    }

    if (rsp.HasMember("BruteAlarmCnt") && !rsp["BruteAlarmCnt"].IsNull())
    {
        if (!rsp["BruteAlarmCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BruteAlarmCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bruteAlarmCnt = rsp["BruteAlarmCnt"].GetInt64();
        m_bruteAlarmCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoIsolateMalwareCnt") && !rsp["AutoIsolateMalwareCnt"].IsNull())
    {
        if (!rsp["AutoIsolateMalwareCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoIsolateMalwareCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoIsolateMalwareCnt = rsp["AutoIsolateMalwareCnt"].GetInt64();
        m_autoIsolateMalwareCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBlockBruteCnt") && !rsp["AutoBlockBruteCnt"].IsNull())
    {
        if (!rsp["AutoBlockBruteCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBlockBruteCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBlockBruteCnt = rsp["AutoBlockBruteCnt"].GetInt64();
        m_autoBlockBruteCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoDefenceCnt") && !rsp["AutoDefenceCnt"].IsNull())
    {
        if (!rsp["AutoDefenceCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDefenceCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoDefenceCnt = rsp["AutoDefenceCnt"].GetInt64();
        m_autoDefenceCntHasBeenSet = true;
    }

    if (rsp.HasMember("AutoVulFixCnt") && !rsp["AutoVulFixCnt"].IsNull())
    {
        if (!rsp["AutoVulFixCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoVulFixCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoVulFixCnt = rsp["AutoVulFixCnt"].GetInt64();
        m_autoVulFixCntHasBeenSet = true;
    }

    if (rsp.HasMember("JavaShellCnt") && !rsp["JavaShellCnt"].IsNull())
    {
        if (!rsp["JavaShellCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `JavaShellCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_javaShellCnt = rsp["JavaShellCnt"].GetInt64();
        m_javaShellCntHasBeenSet = true;
    }

    if (rsp.HasMember("FileTamperCnt") && !rsp["FileTamperCnt"].IsNull())
    {
        if (!rsp["FileTamperCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FileTamperCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fileTamperCnt = rsp["FileTamperCnt"].GetInt64();
        m_fileTamperCntHasBeenSet = true;
    }

    if (rsp.HasMember("EventCnt") && !rsp["EventCnt"].IsNull())
    {
        if (!rsp["EventCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCnt = rsp["EventCnt"].GetInt64();
        m_eventCntHasBeenSet = true;
    }

    if (rsp.HasMember("DnsCnt") && !rsp["DnsCnt"].IsNull())
    {
        if (!rsp["DnsCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DnsCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dnsCnt = rsp["DnsCnt"].GetInt64();
        m_dnsCntHasBeenSet = true;
    }

    if (rsp.HasMember("BashCnt") && !rsp["BashCnt"].IsNull())
    {
        if (!rsp["BashCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BashCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bashCnt = rsp["BashCnt"].GetInt64();
        m_bashCntHasBeenSet = true;
    }

    if (rsp.HasMember("CloudFrom") && !rsp["CloudFrom"].IsNull())
    {
        if (!rsp["CloudFrom"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudFrom` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CloudFrom"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudFromCnt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cloudFrom.push_back(item);
        }
        m_cloudFromHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTrialReportResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_isShowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsShow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isShow, allocator);
    }

    if (m_addMachineCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddMachineCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_addMachineCnt, allocator);
    }

    if (m_baselineRiskCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineRiskCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineRiskCnt, allocator);
    }

    if (m_vulCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vulCnt, allocator);
    }

    if (m_malwareAlarmCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MalwareAlarmCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_malwareAlarmCnt, allocator);
    }

    if (m_bruteAlarmCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BruteAlarmCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bruteAlarmCnt, allocator);
    }

    if (m_autoIsolateMalwareCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoIsolateMalwareCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoIsolateMalwareCnt, allocator);
    }

    if (m_autoBlockBruteCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBlockBruteCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBlockBruteCnt, allocator);
    }

    if (m_autoDefenceCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDefenceCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoDefenceCnt, allocator);
    }

    if (m_autoVulFixCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVulFixCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoVulFixCnt, allocator);
    }

    if (m_javaShellCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JavaShellCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_javaShellCnt, allocator);
    }

    if (m_fileTamperCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTamperCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileTamperCnt, allocator);
    }

    if (m_eventCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCnt, allocator);
    }

    if (m_dnsCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dnsCnt, allocator);
    }

    if (m_bashCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BashCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bashCnt, allocator);
    }

    if (m_cloudFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudFrom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cloudFrom.begin(); itr != m_cloudFrom.end(); ++itr, ++i)
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


bool DescribeTrialReportResponse::GetIsShow() const
{
    return m_isShow;
}

bool DescribeTrialReportResponse::IsShowHasBeenSet() const
{
    return m_isShowHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetAddMachineCnt() const
{
    return m_addMachineCnt;
}

bool DescribeTrialReportResponse::AddMachineCntHasBeenSet() const
{
    return m_addMachineCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetBaselineRiskCnt() const
{
    return m_baselineRiskCnt;
}

bool DescribeTrialReportResponse::BaselineRiskCntHasBeenSet() const
{
    return m_baselineRiskCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetVulCnt() const
{
    return m_vulCnt;
}

bool DescribeTrialReportResponse::VulCntHasBeenSet() const
{
    return m_vulCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetMalwareAlarmCnt() const
{
    return m_malwareAlarmCnt;
}

bool DescribeTrialReportResponse::MalwareAlarmCntHasBeenSet() const
{
    return m_malwareAlarmCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetBruteAlarmCnt() const
{
    return m_bruteAlarmCnt;
}

bool DescribeTrialReportResponse::BruteAlarmCntHasBeenSet() const
{
    return m_bruteAlarmCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetAutoIsolateMalwareCnt() const
{
    return m_autoIsolateMalwareCnt;
}

bool DescribeTrialReportResponse::AutoIsolateMalwareCntHasBeenSet() const
{
    return m_autoIsolateMalwareCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetAutoBlockBruteCnt() const
{
    return m_autoBlockBruteCnt;
}

bool DescribeTrialReportResponse::AutoBlockBruteCntHasBeenSet() const
{
    return m_autoBlockBruteCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetAutoDefenceCnt() const
{
    return m_autoDefenceCnt;
}

bool DescribeTrialReportResponse::AutoDefenceCntHasBeenSet() const
{
    return m_autoDefenceCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetAutoVulFixCnt() const
{
    return m_autoVulFixCnt;
}

bool DescribeTrialReportResponse::AutoVulFixCntHasBeenSet() const
{
    return m_autoVulFixCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetJavaShellCnt() const
{
    return m_javaShellCnt;
}

bool DescribeTrialReportResponse::JavaShellCntHasBeenSet() const
{
    return m_javaShellCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetFileTamperCnt() const
{
    return m_fileTamperCnt;
}

bool DescribeTrialReportResponse::FileTamperCntHasBeenSet() const
{
    return m_fileTamperCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetEventCnt() const
{
    return m_eventCnt;
}

bool DescribeTrialReportResponse::EventCntHasBeenSet() const
{
    return m_eventCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetDnsCnt() const
{
    return m_dnsCnt;
}

bool DescribeTrialReportResponse::DnsCntHasBeenSet() const
{
    return m_dnsCntHasBeenSet;
}

int64_t DescribeTrialReportResponse::GetBashCnt() const
{
    return m_bashCnt;
}

bool DescribeTrialReportResponse::BashCntHasBeenSet() const
{
    return m_bashCntHasBeenSet;
}

vector<CloudFromCnt> DescribeTrialReportResponse::GetCloudFrom() const
{
    return m_cloudFrom;
}

bool DescribeTrialReportResponse::CloudFromHasBeenSet() const
{
    return m_cloudFromHasBeenSet;
}


