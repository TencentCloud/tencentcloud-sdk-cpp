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

#include <tencentcloud/faceid/v20180301/model/CardVerifyResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

CardVerifyResult::CardVerifyResult() :
    m_isPassHasBeenSet(false),
    m_cardVideoHasBeenSet(false),
    m_cardImageHasBeenSet(false),
    m_cardInfoOcrJsonHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

CoreInternalOutcome CardVerifyResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsPass") && !value["IsPass"].IsNull())
    {
        if (!value["IsPass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.IsPass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPass = value["IsPass"].GetBool();
        m_isPassHasBeenSet = true;
    }

    if (value.HasMember("CardVideo") && !value["CardVideo"].IsNull())
    {
        if (!value["CardVideo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardVideo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardVideo.Deserialize(value["CardVideo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardVideoHasBeenSet = true;
    }

    if (value.HasMember("CardImage") && !value["CardImage"].IsNull())
    {
        if (!value["CardImage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardImage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardImage.Deserialize(value["CardImage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardImageHasBeenSet = true;
    }

    if (value.HasMember("CardInfoOcrJson") && !value["CardInfoOcrJson"].IsNull())
    {
        if (!value["CardInfoOcrJson"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.CardInfoOcrJson` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cardInfoOcrJson.Deserialize(value["CardInfoOcrJson"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cardInfoOcrJsonHasBeenSet = true;
    }

    if (value.HasMember("RequestId") && !value["RequestId"].IsNull())
    {
        if (!value["RequestId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CardVerifyResult.RequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestId = string(value["RequestId"].GetString());
        m_requestIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CardVerifyResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isPassHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPass, allocator);
    }

    if (m_cardVideoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardVideo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardVideo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cardImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardImage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cardInfoOcrJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CardInfoOcrJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cardInfoOcrJson.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_requestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestId.c_str(), allocator).Move(), allocator);
    }

}


bool CardVerifyResult::GetIsPass() const
{
    return m_isPass;
}

void CardVerifyResult::SetIsPass(const bool& _isPass)
{
    m_isPass = _isPass;
    m_isPassHasBeenSet = true;
}

bool CardVerifyResult::IsPassHasBeenSet() const
{
    return m_isPassHasBeenSet;
}

FileInfo CardVerifyResult::GetCardVideo() const
{
    return m_cardVideo;
}

void CardVerifyResult::SetCardVideo(const FileInfo& _cardVideo)
{
    m_cardVideo = _cardVideo;
    m_cardVideoHasBeenSet = true;
}

bool CardVerifyResult::CardVideoHasBeenSet() const
{
    return m_cardVideoHasBeenSet;
}

FileInfo CardVerifyResult::GetCardImage() const
{
    return m_cardImage;
}

void CardVerifyResult::SetCardImage(const FileInfo& _cardImage)
{
    m_cardImage = _cardImage;
    m_cardImageHasBeenSet = true;
}

bool CardVerifyResult::CardImageHasBeenSet() const
{
    return m_cardImageHasBeenSet;
}

FileInfo CardVerifyResult::GetCardInfoOcrJson() const
{
    return m_cardInfoOcrJson;
}

void CardVerifyResult::SetCardInfoOcrJson(const FileInfo& _cardInfoOcrJson)
{
    m_cardInfoOcrJson = _cardInfoOcrJson;
    m_cardInfoOcrJsonHasBeenSet = true;
}

bool CardVerifyResult::CardInfoOcrJsonHasBeenSet() const
{
    return m_cardInfoOcrJsonHasBeenSet;
}

string CardVerifyResult::GetRequestId() const
{
    return m_requestId;
}

void CardVerifyResult::SetRequestId(const string& _requestId)
{
    m_requestId = _requestId;
    m_requestIdHasBeenSet = true;
}

bool CardVerifyResult::RequestIdHasBeenSet() const
{
    return m_requestIdHasBeenSet;
}

