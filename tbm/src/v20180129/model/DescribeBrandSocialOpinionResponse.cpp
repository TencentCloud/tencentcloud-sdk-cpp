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

#include <tencentcloud/tbm/v20180129/model/DescribeBrandSocialOpinionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tbm::V20180129::Model;
using namespace std;

DescribeBrandSocialOpinionResponse::DescribeBrandSocialOpinionResponse() :
    m_articleCountHasBeenSet(false),
    m_fromCountHasBeenSet(false),
    m_adverseCountHasBeenSet(false),
    m_articleSetHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBrandSocialOpinionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ArticleCount") && !rsp["ArticleCount"].IsNull())
    {
        if (!rsp["ArticleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ArticleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_articleCount = rsp["ArticleCount"].GetUint64();
        m_articleCountHasBeenSet = true;
    }

    if (rsp.HasMember("FromCount") && !rsp["FromCount"].IsNull())
    {
        if (!rsp["FromCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FromCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fromCount = rsp["FromCount"].GetUint64();
        m_fromCountHasBeenSet = true;
    }

    if (rsp.HasMember("AdverseCount") && !rsp["AdverseCount"].IsNull())
    {
        if (!rsp["AdverseCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdverseCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_adverseCount = rsp["AdverseCount"].GetUint64();
        m_adverseCountHasBeenSet = true;
    }

    if (rsp.HasMember("ArticleSet") && !rsp["ArticleSet"].IsNull())
    {
        if (!rsp["ArticleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ArticleSet` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ArticleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BrandReportArticle item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_articleSet.push_back(item);
        }
        m_articleSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBrandSocialOpinionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_articleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArticleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_articleCount, allocator);
    }

    if (m_fromCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FromCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fromCount, allocator);
    }

    if (m_adverseCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdverseCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_adverseCount, allocator);
    }

    if (m_articleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArticleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_articleSet.begin(); itr != m_articleSet.end(); ++itr, ++i)
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


uint64_t DescribeBrandSocialOpinionResponse::GetArticleCount() const
{
    return m_articleCount;
}

bool DescribeBrandSocialOpinionResponse::ArticleCountHasBeenSet() const
{
    return m_articleCountHasBeenSet;
}

uint64_t DescribeBrandSocialOpinionResponse::GetFromCount() const
{
    return m_fromCount;
}

bool DescribeBrandSocialOpinionResponse::FromCountHasBeenSet() const
{
    return m_fromCountHasBeenSet;
}

uint64_t DescribeBrandSocialOpinionResponse::GetAdverseCount() const
{
    return m_adverseCount;
}

bool DescribeBrandSocialOpinionResponse::AdverseCountHasBeenSet() const
{
    return m_adverseCountHasBeenSet;
}

vector<BrandReportArticle> DescribeBrandSocialOpinionResponse::GetArticleSet() const
{
    return m_articleSet;
}

bool DescribeBrandSocialOpinionResponse::ArticleSetHasBeenSet() const
{
    return m_articleSetHasBeenSet;
}


