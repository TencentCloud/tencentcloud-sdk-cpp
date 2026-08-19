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

#include <tencentcloud/csip/v20221121/model/DescribeComplianceStandardTermTreeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeComplianceStandardTermTreeResponse::DescribeComplianceStandardTermTreeResponse() :
    m_standardIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_chaptersHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComplianceStandardTermTreeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("StandardID") && !rsp["StandardID"].IsNull())
    {
        if (!rsp["StandardID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_standardID = rsp["StandardID"].GetUint64();
        m_standardIDHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Chapters") && !rsp["Chapters"].IsNull())
    {
        if (!rsp["Chapters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Chapters` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Chapters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComplianceChapterItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chapters.push_back(item);
        }
        m_chaptersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeComplianceStandardTermTreeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_standardIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StandardID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_standardID, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_chaptersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chapters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chapters.begin(); itr != m_chapters.end(); ++itr, ++i)
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


uint64_t DescribeComplianceStandardTermTreeResponse::GetStandardID() const
{
    return m_standardID;
}

bool DescribeComplianceStandardTermTreeResponse::StandardIDHasBeenSet() const
{
    return m_standardIDHasBeenSet;
}

string DescribeComplianceStandardTermTreeResponse::GetName() const
{
    return m_name;
}

bool DescribeComplianceStandardTermTreeResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ComplianceChapterItem> DescribeComplianceStandardTermTreeResponse::GetChapters() const
{
    return m_chapters;
}

bool DescribeComplianceStandardTermTreeResponse::ChaptersHasBeenSet() const
{
    return m_chaptersHasBeenSet;
}


