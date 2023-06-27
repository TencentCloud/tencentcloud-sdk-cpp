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

#include <tencentcloud/nlp/v20190408/model/ComposeCoupletResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

ComposeCoupletResponse::ComposeCoupletResponse() :
    m_topScrollHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_randomCauseHasBeenSet(false)
{
}

CoreInternalOutcome ComposeCoupletResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TopScroll") && !rsp["TopScroll"].IsNull())
    {
        if (!rsp["TopScroll"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopScroll` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topScroll = string(rsp["TopScroll"].GetString());
        m_topScrollHasBeenSet = true;
    }

    if (rsp.HasMember("Content") && !rsp["Content"].IsNull())
    {
        if (!rsp["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Content` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_content.push_back((*itr).GetString());
        }
        m_contentHasBeenSet = true;
    }

    if (rsp.HasMember("RandomCause") && !rsp["RandomCause"].IsNull())
    {
        if (!rsp["RandomCause"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RandomCause` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_randomCause = string(rsp["RandomCause"].GetString());
        m_randomCauseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ComposeCoupletResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_topScrollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopScroll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topScroll.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_randomCauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RandomCause";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_randomCause.c_str(), allocator).Move(), allocator);
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


string ComposeCoupletResponse::GetTopScroll() const
{
    return m_topScroll;
}

bool ComposeCoupletResponse::TopScrollHasBeenSet() const
{
    return m_topScrollHasBeenSet;
}

vector<string> ComposeCoupletResponse::GetContent() const
{
    return m_content;
}

bool ComposeCoupletResponse::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string ComposeCoupletResponse::GetRandomCause() const
{
    return m_randomCause;
}

bool ComposeCoupletResponse::RandomCauseHasBeenSet() const
{
    return m_randomCauseHasBeenSet;
}


