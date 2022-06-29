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

#include <tencentcloud/vod/v20180717/model/ContentReviewResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ContentReviewResult::ContentReviewResult() :
    m_typeHasBeenSet(false),
    m_pornImageResultHasBeenSet(false),
    m_terrorismImageResultHasBeenSet(false),
    m_politicalImageResultHasBeenSet(false),
    m_pornOcrResultHasBeenSet(false),
    m_terrorismOcrResultHasBeenSet(false),
    m_politicalOcrResultHasBeenSet(false)
{
}

CoreInternalOutcome ContentReviewResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("PornImageResult") && !value["PornImageResult"].IsNull())
    {
        if (!value["PornImageResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.PornImageResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornImageResult.Deserialize(value["PornImageResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornImageResultHasBeenSet = true;
    }

    if (value.HasMember("TerrorismImageResult") && !value["TerrorismImageResult"].IsNull())
    {
        if (!value["TerrorismImageResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.TerrorismImageResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismImageResult.Deserialize(value["TerrorismImageResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismImageResultHasBeenSet = true;
    }

    if (value.HasMember("PoliticalImageResult") && !value["PoliticalImageResult"].IsNull())
    {
        if (!value["PoliticalImageResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.PoliticalImageResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalImageResult.Deserialize(value["PoliticalImageResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalImageResultHasBeenSet = true;
    }

    if (value.HasMember("PornOcrResult") && !value["PornOcrResult"].IsNull())
    {
        if (!value["PornOcrResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.PornOcrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_pornOcrResult.Deserialize(value["PornOcrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_pornOcrResultHasBeenSet = true;
    }

    if (value.HasMember("TerrorismOcrResult") && !value["TerrorismOcrResult"].IsNull())
    {
        if (!value["TerrorismOcrResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.TerrorismOcrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_terrorismOcrResult.Deserialize(value["TerrorismOcrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_terrorismOcrResultHasBeenSet = true;
    }

    if (value.HasMember("PoliticalOcrResult") && !value["PoliticalOcrResult"].IsNull())
    {
        if (!value["PoliticalOcrResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ContentReviewResult.PoliticalOcrResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_politicalOcrResult.Deserialize(value["PoliticalOcrResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_politicalOcrResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentReviewResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_pornImageResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornImageResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornImageResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismImageResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismImageResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismImageResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalImageResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalImageResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalImageResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pornOcrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PornOcrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_pornOcrResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_terrorismOcrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TerrorismOcrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_terrorismOcrResult.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_politicalOcrResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PoliticalOcrResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_politicalOcrResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ContentReviewResult::GetType() const
{
    return m_type;
}

void ContentReviewResult::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ContentReviewResult::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

PornImageResult ContentReviewResult::GetPornImageResult() const
{
    return m_pornImageResult;
}

void ContentReviewResult::SetPornImageResult(const PornImageResult& _pornImageResult)
{
    m_pornImageResult = _pornImageResult;
    m_pornImageResultHasBeenSet = true;
}

bool ContentReviewResult::PornImageResultHasBeenSet() const
{
    return m_pornImageResultHasBeenSet;
}

TerrorismImageResult ContentReviewResult::GetTerrorismImageResult() const
{
    return m_terrorismImageResult;
}

void ContentReviewResult::SetTerrorismImageResult(const TerrorismImageResult& _terrorismImageResult)
{
    m_terrorismImageResult = _terrorismImageResult;
    m_terrorismImageResultHasBeenSet = true;
}

bool ContentReviewResult::TerrorismImageResultHasBeenSet() const
{
    return m_terrorismImageResultHasBeenSet;
}

PoliticalImageResult ContentReviewResult::GetPoliticalImageResult() const
{
    return m_politicalImageResult;
}

void ContentReviewResult::SetPoliticalImageResult(const PoliticalImageResult& _politicalImageResult)
{
    m_politicalImageResult = _politicalImageResult;
    m_politicalImageResultHasBeenSet = true;
}

bool ContentReviewResult::PoliticalImageResultHasBeenSet() const
{
    return m_politicalImageResultHasBeenSet;
}

ContentReviewOcrResult ContentReviewResult::GetPornOcrResult() const
{
    return m_pornOcrResult;
}

void ContentReviewResult::SetPornOcrResult(const ContentReviewOcrResult& _pornOcrResult)
{
    m_pornOcrResult = _pornOcrResult;
    m_pornOcrResultHasBeenSet = true;
}

bool ContentReviewResult::PornOcrResultHasBeenSet() const
{
    return m_pornOcrResultHasBeenSet;
}

ContentReviewOcrResult ContentReviewResult::GetTerrorismOcrResult() const
{
    return m_terrorismOcrResult;
}

void ContentReviewResult::SetTerrorismOcrResult(const ContentReviewOcrResult& _terrorismOcrResult)
{
    m_terrorismOcrResult = _terrorismOcrResult;
    m_terrorismOcrResultHasBeenSet = true;
}

bool ContentReviewResult::TerrorismOcrResultHasBeenSet() const
{
    return m_terrorismOcrResultHasBeenSet;
}

ContentReviewOcrResult ContentReviewResult::GetPoliticalOcrResult() const
{
    return m_politicalOcrResult;
}

void ContentReviewResult::SetPoliticalOcrResult(const ContentReviewOcrResult& _politicalOcrResult)
{
    m_politicalOcrResult = _politicalOcrResult;
    m_politicalOcrResultHasBeenSet = true;
}

bool ContentReviewResult::PoliticalOcrResultHasBeenSet() const
{
    return m_politicalOcrResultHasBeenSet;
}

