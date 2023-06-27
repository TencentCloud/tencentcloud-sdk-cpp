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

#include <tencentcloud/nlp/v20190408/model/ClassifyContentResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

ClassifyContentResponse::ClassifyContentResponse() :
    m_firstClassificationHasBeenSet(false),
    m_secondClassificationHasBeenSet(false),
    m_thirdClassificationHasBeenSet(false)
{
}

CoreInternalOutcome ClassifyContentResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FirstClassification") && !rsp["FirstClassification"].IsNull())
    {
        if (!rsp["FirstClassification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FirstClassification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_firstClassification.Deserialize(rsp["FirstClassification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_firstClassificationHasBeenSet = true;
    }

    if (rsp.HasMember("SecondClassification") && !rsp["SecondClassification"].IsNull())
    {
        if (!rsp["SecondClassification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SecondClassification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_secondClassification.Deserialize(rsp["SecondClassification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_secondClassificationHasBeenSet = true;
    }

    if (rsp.HasMember("ThirdClassification") && !rsp["ThirdClassification"].IsNull())
    {
        if (!rsp["ThirdClassification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ThirdClassification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thirdClassification.Deserialize(rsp["ThirdClassification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thirdClassificationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ClassifyContentResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_firstClassificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstClassification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_firstClassification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_secondClassificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecondClassification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_secondClassification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_thirdClassificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThirdClassification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thirdClassification.ToJsonObject(value[key.c_str()], allocator);
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


Category ClassifyContentResponse::GetFirstClassification() const
{
    return m_firstClassification;
}

bool ClassifyContentResponse::FirstClassificationHasBeenSet() const
{
    return m_firstClassificationHasBeenSet;
}

Category ClassifyContentResponse::GetSecondClassification() const
{
    return m_secondClassification;
}

bool ClassifyContentResponse::SecondClassificationHasBeenSet() const
{
    return m_secondClassificationHasBeenSet;
}

Category ClassifyContentResponse::GetThirdClassification() const
{
    return m_thirdClassification;
}

bool ClassifyContentResponse::ThirdClassificationHasBeenSet() const
{
    return m_thirdClassificationHasBeenSet;
}


