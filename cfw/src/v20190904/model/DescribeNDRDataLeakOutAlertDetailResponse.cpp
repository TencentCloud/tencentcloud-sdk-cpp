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

#include <tencentcloud/cfw/v20190904/model/DescribeNDRDataLeakOutAlertDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeNDRDataLeakOutAlertDetailResponse::DescribeNDRDataLeakOutAlertDetailResponse() :
    m_riskIDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_dstIPPortHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_dstServiceTypeHasBeenSet(false),
    m_dstServiceNameHasBeenSet(false),
    m_apiPatternHasBeenSet(false),
    m_dstGeoLocationHasBeenSet(false),
    m_appProtoHasBeenSet(false),
    m_leakTypeSetHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_leakDataCountHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_firstIdentificationTimeHasBeenSet(false),
    m_latestIdentificationTimeHasBeenSet(false),
    m_analysisStatusHasBeenSet(false),
    m_analysisFailReasonHasBeenSet(false),
    m_lastAnalysisTimeHasBeenSet(false),
    m_apiBizTypeHasBeenSet(false),
    m_apiBizDescriptionHasBeenSet(false),
    m_riskScenarioHasBeenSet(false),
    m_riskScenarioDetailHasBeenSet(false),
    m_riskSummaryHasBeenSet(false),
    m_riskBasisHasBeenSet(false),
    m_impactScopeHasBeenSet(false),
    m_aiSuggestedLevelHasBeenSet(false),
    m_disposalSuggestionsHasBeenSet(false),
    m_httpRequestHeaderHasBeenSet(false),
    m_httpRequestBodyHasBeenSet(false),
    m_httpResponseHeaderHasBeenSet(false),
    m_httpResponseBodyHasBeenSet(false),
    m_leakDataEntriesHasBeenSet(false),
    m_maskStatusHasBeenSet(false),
    m_highestLevelHasBeenSet(false)
{
}

CoreInternalOutcome DescribeNDRDataLeakOutAlertDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RiskID") && !rsp["RiskID"].IsNull())
    {
        if (!rsp["RiskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = string(rsp["RiskID"].GetString());
        m_riskIDHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceType") && !rsp["InstanceType"].IsNull())
    {
        if (!rsp["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(rsp["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("SrcIP") && !rsp["SrcIP"].IsNull())
    {
        if (!rsp["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(rsp["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (rsp.HasMember("DstIPPort") && !rsp["DstIPPort"].IsNull())
    {
        if (!rsp["DstIPPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstIPPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIPPort = string(rsp["DstIPPort"].GetString());
        m_dstIPPortHasBeenSet = true;
    }

    if (rsp.HasMember("Hostname") && !rsp["Hostname"].IsNull())
    {
        if (!rsp["Hostname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Hostname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostname = string(rsp["Hostname"].GetString());
        m_hostnameHasBeenSet = true;
    }

    if (rsp.HasMember("DstServiceType") && !rsp["DstServiceType"].IsNull())
    {
        if (!rsp["DstServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstServiceType = string(rsp["DstServiceType"].GetString());
        m_dstServiceTypeHasBeenSet = true;
    }

    if (rsp.HasMember("DstServiceName") && !rsp["DstServiceName"].IsNull())
    {
        if (!rsp["DstServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstServiceName = string(rsp["DstServiceName"].GetString());
        m_dstServiceNameHasBeenSet = true;
    }

    if (rsp.HasMember("ApiPattern") && !rsp["ApiPattern"].IsNull())
    {
        if (!rsp["ApiPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiPattern = string(rsp["ApiPattern"].GetString());
        m_apiPatternHasBeenSet = true;
    }

    if (rsp.HasMember("DstGeoLocation") && !rsp["DstGeoLocation"].IsNull())
    {
        if (!rsp["DstGeoLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstGeoLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstGeoLocation = string(rsp["DstGeoLocation"].GetString());
        m_dstGeoLocationHasBeenSet = true;
    }

    if (rsp.HasMember("AppProto") && !rsp["AppProto"].IsNull())
    {
        if (!rsp["AppProto"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppProto` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appProto = string(rsp["AppProto"].GetString());
        m_appProtoHasBeenSet = true;
    }

    if (rsp.HasMember("LeakTypeSet") && !rsp["LeakTypeSet"].IsNull())
    {
        if (!rsp["LeakTypeSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LeakTypeSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakTypeSet = string(rsp["LeakTypeSet"].GetString());
        m_leakTypeSetHasBeenSet = true;
    }

    if (rsp.HasMember("EventCount") && !rsp["EventCount"].IsNull())
    {
        if (!rsp["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = rsp["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (rsp.HasMember("LeakDataCount") && !rsp["LeakDataCount"].IsNull())
    {
        if (!rsp["LeakDataCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeakDataCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leakDataCount = rsp["LeakDataCount"].GetUint64();
        m_leakDataCountHasBeenSet = true;
    }

    if (rsp.HasMember("Level") && !rsp["Level"].IsNull())
    {
        if (!rsp["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = rsp["Level"].GetInt64();
        m_levelHasBeenSet = true;
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

    if (rsp.HasMember("Comment") && !rsp["Comment"].IsNull())
    {
        if (!rsp["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(rsp["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (rsp.HasMember("FirstIdentificationTime") && !rsp["FirstIdentificationTime"].IsNull())
    {
        if (!rsp["FirstIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirstIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIdentificationTime = string(rsp["FirstIdentificationTime"].GetString());
        m_firstIdentificationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestIdentificationTime") && !rsp["LatestIdentificationTime"].IsNull())
    {
        if (!rsp["LatestIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestIdentificationTime = string(rsp["LatestIdentificationTime"].GetString());
        m_latestIdentificationTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisStatus") && !rsp["AnalysisStatus"].IsNull())
    {
        if (!rsp["AnalysisStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_analysisStatus = rsp["AnalysisStatus"].GetInt64();
        m_analysisStatusHasBeenSet = true;
    }

    if (rsp.HasMember("AnalysisFailReason") && !rsp["AnalysisFailReason"].IsNull())
    {
        if (!rsp["AnalysisFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AnalysisFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisFailReason = string(rsp["AnalysisFailReason"].GetString());
        m_analysisFailReasonHasBeenSet = true;
    }

    if (rsp.HasMember("LastAnalysisTime") && !rsp["LastAnalysisTime"].IsNull())
    {
        if (!rsp["LastAnalysisTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LastAnalysisTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastAnalysisTime = string(rsp["LastAnalysisTime"].GetString());
        m_lastAnalysisTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ApiBizType") && !rsp["ApiBizType"].IsNull())
    {
        if (!rsp["ApiBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBizType = string(rsp["ApiBizType"].GetString());
        m_apiBizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ApiBizDescription") && !rsp["ApiBizDescription"].IsNull())
    {
        if (!rsp["ApiBizDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiBizDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBizDescription = string(rsp["ApiBizDescription"].GetString());
        m_apiBizDescriptionHasBeenSet = true;
    }

    if (rsp.HasMember("RiskScenario") && !rsp["RiskScenario"].IsNull())
    {
        if (!rsp["RiskScenario"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskScenario` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScenario = string(rsp["RiskScenario"].GetString());
        m_riskScenarioHasBeenSet = true;
    }

    if (rsp.HasMember("RiskScenarioDetail") && !rsp["RiskScenarioDetail"].IsNull())
    {
        if (!rsp["RiskScenarioDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskScenarioDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScenarioDetail = string(rsp["RiskScenarioDetail"].GetString());
        m_riskScenarioDetailHasBeenSet = true;
    }

    if (rsp.HasMember("RiskSummary") && !rsp["RiskSummary"].IsNull())
    {
        if (!rsp["RiskSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskSummary = string(rsp["RiskSummary"].GetString());
        m_riskSummaryHasBeenSet = true;
    }

    if (rsp.HasMember("RiskBasis") && !rsp["RiskBasis"].IsNull())
    {
        if (!rsp["RiskBasis"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskBasis` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskBasis = string(rsp["RiskBasis"].GetString());
        m_riskBasisHasBeenSet = true;
    }

    if (rsp.HasMember("ImpactScope") && !rsp["ImpactScope"].IsNull())
    {
        if (!rsp["ImpactScope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImpactScope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_impactScope = string(rsp["ImpactScope"].GetString());
        m_impactScopeHasBeenSet = true;
    }

    if (rsp.HasMember("AiSuggestedLevel") && !rsp["AiSuggestedLevel"].IsNull())
    {
        if (!rsp["AiSuggestedLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AiSuggestedLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aiSuggestedLevel = rsp["AiSuggestedLevel"].GetInt64();
        m_aiSuggestedLevelHasBeenSet = true;
    }

    if (rsp.HasMember("DisposalSuggestions") && !rsp["DisposalSuggestions"].IsNull())
    {
        if (!rsp["DisposalSuggestions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DisposalSuggestions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DisposalSuggestions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DisposalSuggestionItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_disposalSuggestions.push_back(item);
        }
        m_disposalSuggestionsHasBeenSet = true;
    }

    if (rsp.HasMember("HttpRequestHeader") && !rsp["HttpRequestHeader"].IsNull())
    {
        if (!rsp["HttpRequestHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpRequestHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpRequestHeader = string(rsp["HttpRequestHeader"].GetString());
        m_httpRequestHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("HttpRequestBody") && !rsp["HttpRequestBody"].IsNull())
    {
        if (!rsp["HttpRequestBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpRequestBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpRequestBody = string(rsp["HttpRequestBody"].GetString());
        m_httpRequestBodyHasBeenSet = true;
    }

    if (rsp.HasMember("HttpResponseHeader") && !rsp["HttpResponseHeader"].IsNull())
    {
        if (!rsp["HttpResponseHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpResponseHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpResponseHeader = string(rsp["HttpResponseHeader"].GetString());
        m_httpResponseHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("HttpResponseBody") && !rsp["HttpResponseBody"].IsNull())
    {
        if (!rsp["HttpResponseBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpResponseBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpResponseBody = string(rsp["HttpResponseBody"].GetString());
        m_httpResponseBodyHasBeenSet = true;
    }

    if (rsp.HasMember("LeakDataEntries") && !rsp["LeakDataEntries"].IsNull())
    {
        if (!rsp["LeakDataEntries"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LeakDataEntries` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakDataEntries = string(rsp["LeakDataEntries"].GetString());
        m_leakDataEntriesHasBeenSet = true;
    }

    if (rsp.HasMember("MaskStatus") && !rsp["MaskStatus"].IsNull())
    {
        if (!rsp["MaskStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MaskStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_maskStatus = string(rsp["MaskStatus"].GetString());
        m_maskStatusHasBeenSet = true;
    }

    if (rsp.HasMember("HighestLevel") && !rsp["HighestLevel"].IsNull())
    {
        if (!rsp["HighestLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HighestLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highestLevel = string(rsp["HighestLevel"].GetString());
        m_highestLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeNDRDataLeakOutAlertDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIPPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIPPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIPPort.c_str(), allocator).Move(), allocator);
    }

    if (m_hostnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostname.c_str(), allocator).Move(), allocator);
    }

    if (m_dstServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_apiPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_dstGeoLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstGeoLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstGeoLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_appProtoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppProto";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appProto.c_str(), allocator).Move(), allocator);
    }

    if (m_leakTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakTypeSet.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_leakDataCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakDataCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leakDataCount, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_firstIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysisStatus, allocator);
    }

    if (m_analysisFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_lastAnalysisTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastAnalysisTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastAnalysisTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBizDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBizDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBizDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskScenario.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScenarioDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScenarioDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskScenarioDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_riskSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_riskBasisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskBasis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskBasis.c_str(), allocator).Move(), allocator);
    }

    if (m_impactScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImpactScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_impactScope.c_str(), allocator).Move(), allocator);
    }

    if (m_aiSuggestedLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiSuggestedLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiSuggestedLevel, allocator);
    }

    if (m_disposalSuggestionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisposalSuggestions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_disposalSuggestions.begin(); itr != m_disposalSuggestions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_httpRequestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpRequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpRequestHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_httpRequestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpRequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpRequestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_httpResponseHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpResponseHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpResponseHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_httpResponseBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpResponseBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpResponseBody.c_str(), allocator).Move(), allocator);
    }

    if (m_leakDataEntriesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakDataEntries";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakDataEntries.c_str(), allocator).Move(), allocator);
    }

    if (m_maskStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaskStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_maskStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_highestLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighestLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highestLevel.c_str(), allocator).Move(), allocator);
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


string DescribeNDRDataLeakOutAlertDetailResponse::GetRiskID() const
{
    return m_riskID;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetInstanceType() const
{
    return m_instanceType;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetSrcIP() const
{
    return m_srcIP;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetDstIPPort() const
{
    return m_dstIPPort;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::DstIPPortHasBeenSet() const
{
    return m_dstIPPortHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHostname() const
{
    return m_hostname;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HostnameHasBeenSet() const
{
    return m_hostnameHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetDstServiceType() const
{
    return m_dstServiceType;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::DstServiceTypeHasBeenSet() const
{
    return m_dstServiceTypeHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetDstServiceName() const
{
    return m_dstServiceName;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::DstServiceNameHasBeenSet() const
{
    return m_dstServiceNameHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetApiPattern() const
{
    return m_apiPattern;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::ApiPatternHasBeenSet() const
{
    return m_apiPatternHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetDstGeoLocation() const
{
    return m_dstGeoLocation;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::DstGeoLocationHasBeenSet() const
{
    return m_dstGeoLocationHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetAppProto() const
{
    return m_appProto;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::AppProtoHasBeenSet() const
{
    return m_appProtoHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetLeakTypeSet() const
{
    return m_leakTypeSet;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LeakTypeSetHasBeenSet() const
{
    return m_leakTypeSetHasBeenSet;
}

uint64_t DescribeNDRDataLeakOutAlertDetailResponse::GetEventCount() const
{
    return m_eventCount;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

uint64_t DescribeNDRDataLeakOutAlertDetailResponse::GetLeakDataCount() const
{
    return m_leakDataCount;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LeakDataCountHasBeenSet() const
{
    return m_leakDataCountHasBeenSet;
}

int64_t DescribeNDRDataLeakOutAlertDetailResponse::GetLevel() const
{
    return m_level;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t DescribeNDRDataLeakOutAlertDetailResponse::GetStatus() const
{
    return m_status;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetComment() const
{
    return m_comment;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetFirstIdentificationTime() const
{
    return m_firstIdentificationTime;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::FirstIdentificationTimeHasBeenSet() const
{
    return m_firstIdentificationTimeHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetLatestIdentificationTime() const
{
    return m_latestIdentificationTime;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LatestIdentificationTimeHasBeenSet() const
{
    return m_latestIdentificationTimeHasBeenSet;
}

int64_t DescribeNDRDataLeakOutAlertDetailResponse::GetAnalysisStatus() const
{
    return m_analysisStatus;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::AnalysisStatusHasBeenSet() const
{
    return m_analysisStatusHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetAnalysisFailReason() const
{
    return m_analysisFailReason;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::AnalysisFailReasonHasBeenSet() const
{
    return m_analysisFailReasonHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetLastAnalysisTime() const
{
    return m_lastAnalysisTime;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LastAnalysisTimeHasBeenSet() const
{
    return m_lastAnalysisTimeHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetApiBizType() const
{
    return m_apiBizType;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::ApiBizTypeHasBeenSet() const
{
    return m_apiBizTypeHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetApiBizDescription() const
{
    return m_apiBizDescription;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::ApiBizDescriptionHasBeenSet() const
{
    return m_apiBizDescriptionHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetRiskScenario() const
{
    return m_riskScenario;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RiskScenarioHasBeenSet() const
{
    return m_riskScenarioHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetRiskScenarioDetail() const
{
    return m_riskScenarioDetail;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RiskScenarioDetailHasBeenSet() const
{
    return m_riskScenarioDetailHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetRiskSummary() const
{
    return m_riskSummary;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RiskSummaryHasBeenSet() const
{
    return m_riskSummaryHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetRiskBasis() const
{
    return m_riskBasis;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::RiskBasisHasBeenSet() const
{
    return m_riskBasisHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetImpactScope() const
{
    return m_impactScope;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::ImpactScopeHasBeenSet() const
{
    return m_impactScopeHasBeenSet;
}

int64_t DescribeNDRDataLeakOutAlertDetailResponse::GetAiSuggestedLevel() const
{
    return m_aiSuggestedLevel;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::AiSuggestedLevelHasBeenSet() const
{
    return m_aiSuggestedLevelHasBeenSet;
}

vector<DisposalSuggestionItem> DescribeNDRDataLeakOutAlertDetailResponse::GetDisposalSuggestions() const
{
    return m_disposalSuggestions;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::DisposalSuggestionsHasBeenSet() const
{
    return m_disposalSuggestionsHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHttpRequestHeader() const
{
    return m_httpRequestHeader;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HttpRequestHeaderHasBeenSet() const
{
    return m_httpRequestHeaderHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHttpRequestBody() const
{
    return m_httpRequestBody;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HttpRequestBodyHasBeenSet() const
{
    return m_httpRequestBodyHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHttpResponseHeader() const
{
    return m_httpResponseHeader;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HttpResponseHeaderHasBeenSet() const
{
    return m_httpResponseHeaderHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHttpResponseBody() const
{
    return m_httpResponseBody;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HttpResponseBodyHasBeenSet() const
{
    return m_httpResponseBodyHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetLeakDataEntries() const
{
    return m_leakDataEntries;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::LeakDataEntriesHasBeenSet() const
{
    return m_leakDataEntriesHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetMaskStatus() const
{
    return m_maskStatus;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::MaskStatusHasBeenSet() const
{
    return m_maskStatusHasBeenSet;
}

string DescribeNDRDataLeakOutAlertDetailResponse::GetHighestLevel() const
{
    return m_highestLevel;
}

bool DescribeNDRDataLeakOutAlertDetailResponse::HighestLevelHasBeenSet() const
{
    return m_highestLevelHasBeenSet;
}


