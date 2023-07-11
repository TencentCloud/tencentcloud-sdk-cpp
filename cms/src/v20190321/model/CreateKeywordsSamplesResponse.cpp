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

#include <tencentcloud/cms/v20190321/model/CreateKeywordsSamplesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CreateKeywordsSamplesResponse::CreateKeywordsSamplesResponse() :
    m_sampleIDsHasBeenSet(false),
    m_successInfosHasBeenSet(false),
    m_dupInfosHasBeenSet(false),
    m_invalidSamplesHasBeenSet(false)
{
}

CoreInternalOutcome CreateKeywordsSamplesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SampleIDs") && !rsp["SampleIDs"].IsNull())
    {
        if (!rsp["SampleIDs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SampleIDs` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SampleIDs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sampleIDs.push_back((*itr).GetString());
        }
        m_sampleIDsHasBeenSet = true;
    }

    if (rsp.HasMember("SuccessInfos") && !rsp["SuccessInfos"].IsNull())
    {
        if (!rsp["SuccessInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SuccessInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SuccessInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserKeywordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_successInfos.push_back(item);
        }
        m_successInfosHasBeenSet = true;
    }

    if (rsp.HasMember("DupInfos") && !rsp["DupInfos"].IsNull())
    {
        if (!rsp["DupInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DupInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DupInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UserKeywordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dupInfos.push_back(item);
        }
        m_dupInfosHasBeenSet = true;
    }

    if (rsp.HasMember("InvalidSamples") && !rsp["InvalidSamples"].IsNull())
    {
        if (!rsp["InvalidSamples"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InvalidSamples` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InvalidSamples"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            InvalidSample item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_invalidSamples.push_back(item);
        }
        m_invalidSamplesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateKeywordsSamplesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sampleIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleIDs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleIDs.begin(); itr != m_sampleIDs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_successInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SuccessInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_successInfos.begin(); itr != m_successInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_dupInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DupInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dupInfos.begin(); itr != m_dupInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_invalidSamplesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvalidSamples";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_invalidSamples.begin(); itr != m_invalidSamples.end(); ++itr, ++i)
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


vector<string> CreateKeywordsSamplesResponse::GetSampleIDs() const
{
    return m_sampleIDs;
}

bool CreateKeywordsSamplesResponse::SampleIDsHasBeenSet() const
{
    return m_sampleIDsHasBeenSet;
}

vector<UserKeywordInfo> CreateKeywordsSamplesResponse::GetSuccessInfos() const
{
    return m_successInfos;
}

bool CreateKeywordsSamplesResponse::SuccessInfosHasBeenSet() const
{
    return m_successInfosHasBeenSet;
}

vector<UserKeywordInfo> CreateKeywordsSamplesResponse::GetDupInfos() const
{
    return m_dupInfos;
}

bool CreateKeywordsSamplesResponse::DupInfosHasBeenSet() const
{
    return m_dupInfosHasBeenSet;
}

vector<InvalidSample> CreateKeywordsSamplesResponse::GetInvalidSamples() const
{
    return m_invalidSamples;
}

bool CreateKeywordsSamplesResponse::InvalidSamplesHasBeenSet() const
{
    return m_invalidSamplesHasBeenSet;
}


