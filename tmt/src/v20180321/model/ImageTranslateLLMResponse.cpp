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

#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tmt::V20180321::Model;
using namespace std;

ImageTranslateLLMResponse::ImageTranslateLLMResponse() :
    m_dataHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_sourceTextHasBeenSet(false),
    m_targetTextHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_transDetailsHasBeenSet(false)
{
}

CoreInternalOutcome ImageTranslateLLMResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Data") && !rsp["Data"].IsNull())
    {
        if (!rsp["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(rsp["Data"].GetString());
        m_dataHasBeenSet = true;
    }

    if (rsp.HasMember("Source") && !rsp["Source"].IsNull())
    {
        if (!rsp["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(rsp["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (rsp.HasMember("Target") && !rsp["Target"].IsNull())
    {
        if (!rsp["Target"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Target` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_target = string(rsp["Target"].GetString());
        m_targetHasBeenSet = true;
    }

    if (rsp.HasMember("SourceText") && !rsp["SourceText"].IsNull())
    {
        if (!rsp["SourceText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceText = string(rsp["SourceText"].GetString());
        m_sourceTextHasBeenSet = true;
    }

    if (rsp.HasMember("TargetText") && !rsp["TargetText"].IsNull())
    {
        if (!rsp["TargetText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetText = string(rsp["TargetText"].GetString());
        m_targetTextHasBeenSet = true;
    }

    if (rsp.HasMember("Angle") && !rsp["Angle"].IsNull())
    {
        if (!rsp["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = rsp["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (rsp.HasMember("TransDetails") && !rsp["TransDetails"].IsNull())
    {
        if (!rsp["TransDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TransDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TransDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TransDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transDetails.push_back(item);
        }
        m_transDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ImageTranslateLLMResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceText.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetText.c_str(), allocator).Move(), allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_transDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transDetails.begin(); itr != m_transDetails.end(); ++itr, ++i)
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


string ImageTranslateLLMResponse::GetData() const
{
    return m_data;
}

bool ImageTranslateLLMResponse::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string ImageTranslateLLMResponse::GetSource() const
{
    return m_source;
}

bool ImageTranslateLLMResponse::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ImageTranslateLLMResponse::GetTarget() const
{
    return m_target;
}

bool ImageTranslateLLMResponse::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

string ImageTranslateLLMResponse::GetSourceText() const
{
    return m_sourceText;
}

bool ImageTranslateLLMResponse::SourceTextHasBeenSet() const
{
    return m_sourceTextHasBeenSet;
}

string ImageTranslateLLMResponse::GetTargetText() const
{
    return m_targetText;
}

bool ImageTranslateLLMResponse::TargetTextHasBeenSet() const
{
    return m_targetTextHasBeenSet;
}

double ImageTranslateLLMResponse::GetAngle() const
{
    return m_angle;
}

bool ImageTranslateLLMResponse::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

vector<TransDetail> ImageTranslateLLMResponse::GetTransDetails() const
{
    return m_transDetails;
}

bool ImageTranslateLLMResponse::TransDetailsHasBeenSet() const
{
    return m_transDetailsHasBeenSet;
}


