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

#include <tencentcloud/tcss/v20201101/model/DescribeVirusAutoIsolateSampleDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeVirusAutoIsolateSampleDetailResponse::DescribeVirusAutoIsolateSampleDetailResponse() :
    m_mD5HasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_killEngineHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_harmDescribeHasBeenSet(false),
    m_suggestSchemeHasBeenSet(false),
    m_referenceLinkHasBeenSet(false)
{
}

CoreInternalOutcome DescribeVirusAutoIsolateSampleDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MD5") && !rsp["MD5"].IsNull())
    {
        if (!rsp["MD5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MD5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mD5 = string(rsp["MD5"].GetString());
        m_mD5HasBeenSet = true;
    }

    if (rsp.HasMember("Size") && !rsp["Size"].IsNull())
    {
        if (!rsp["Size"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Size` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_size = rsp["Size"].GetUint64();
        m_sizeHasBeenSet = true;
    }

    if (rsp.HasMember("VirusName") && !rsp["VirusName"].IsNull())
    {
        if (!rsp["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(rsp["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (rsp.HasMember("RiskLevel") && !rsp["RiskLevel"].IsNull())
    {
        if (!rsp["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(rsp["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (rsp.HasMember("KillEngine") && !rsp["KillEngine"].IsNull())
    {
        if (!rsp["KillEngine"].IsArray())
            return CoreInternalOutcome(Core::Error("response `KillEngine` is not array type"));

        const rapidjson::Value &tmpValue = rsp["KillEngine"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_killEngine.push_back((*itr).GetString());
        }
        m_killEngineHasBeenSet = true;
    }

    if (rsp.HasMember("Tags") && !rsp["Tags"].IsNull())
    {
        if (!rsp["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Tags` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tags.push_back((*itr).GetString());
        }
        m_tagsHasBeenSet = true;
    }

    if (rsp.HasMember("HarmDescribe") && !rsp["HarmDescribe"].IsNull())
    {
        if (!rsp["HarmDescribe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HarmDescribe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_harmDescribe = string(rsp["HarmDescribe"].GetString());
        m_harmDescribeHasBeenSet = true;
    }

    if (rsp.HasMember("SuggestScheme") && !rsp["SuggestScheme"].IsNull())
    {
        if (!rsp["SuggestScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SuggestScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestScheme = string(rsp["SuggestScheme"].GetString());
        m_suggestSchemeHasBeenSet = true;
    }

    if (rsp.HasMember("ReferenceLink") && !rsp["ReferenceLink"].IsNull())
    {
        if (!rsp["ReferenceLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReferenceLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceLink = string(rsp["ReferenceLink"].GetString());
        m_referenceLinkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeVirusAutoIsolateSampleDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_mD5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MD5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mD5.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_killEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KillEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_killEngine.begin(); itr != m_killEngine.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_harmDescribeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HarmDescribe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_harmDescribe.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuggestScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceLink.c_str(), allocator).Move(), allocator);
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


string DescribeVirusAutoIsolateSampleDetailResponse::GetMD5() const
{
    return m_mD5;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::MD5HasBeenSet() const
{
    return m_mD5HasBeenSet;
}

uint64_t DescribeVirusAutoIsolateSampleDetailResponse::GetSize() const
{
    return m_size;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

string DescribeVirusAutoIsolateSampleDetailResponse::GetVirusName() const
{
    return m_virusName;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string DescribeVirusAutoIsolateSampleDetailResponse::GetRiskLevel() const
{
    return m_riskLevel;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

vector<string> DescribeVirusAutoIsolateSampleDetailResponse::GetKillEngine() const
{
    return m_killEngine;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::KillEngineHasBeenSet() const
{
    return m_killEngineHasBeenSet;
}

vector<string> DescribeVirusAutoIsolateSampleDetailResponse::GetTags() const
{
    return m_tags;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DescribeVirusAutoIsolateSampleDetailResponse::GetHarmDescribe() const
{
    return m_harmDescribe;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::HarmDescribeHasBeenSet() const
{
    return m_harmDescribeHasBeenSet;
}

string DescribeVirusAutoIsolateSampleDetailResponse::GetSuggestScheme() const
{
    return m_suggestScheme;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::SuggestSchemeHasBeenSet() const
{
    return m_suggestSchemeHasBeenSet;
}

string DescribeVirusAutoIsolateSampleDetailResponse::GetReferenceLink() const
{
    return m_referenceLink;
}

bool DescribeVirusAutoIsolateSampleDetailResponse::ReferenceLinkHasBeenSet() const
{
    return m_referenceLinkHasBeenSet;
}


