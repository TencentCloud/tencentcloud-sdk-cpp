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

#include <tencentcloud/essbasic/v20201222/model/FaceIdResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

FaceIdResult::FaceIdResult() :
    m_resultHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_orderNumberHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_liveRateHasBeenSet(false),
    m_similarityHasBeenSet(false),
    m_occurredTimeHasBeenSet(false),
    m_photoHasBeenSet(false),
    m_videoHasBeenSet(false)
{
}

CoreInternalOutcome FaceIdResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Result` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetInt64();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OrderNumber") && !value["OrderNumber"].IsNull())
    {
        if (!value["OrderNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.OrderNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_orderNumber = string(value["OrderNumber"].GetString());
        m_orderNumberHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("IdCardType") && !value["IdCardType"].IsNull())
    {
        if (!value["IdCardType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.IdCardType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardType = string(value["IdCardType"].GetString());
        m_idCardTypeHasBeenSet = true;
    }

    if (value.HasMember("IdCardNumber") && !value["IdCardNumber"].IsNull())
    {
        if (!value["IdCardNumber"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.IdCardNumber` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_idCardNumber = string(value["IdCardNumber"].GetString());
        m_idCardNumberHasBeenSet = true;
    }

    if (value.HasMember("LiveRate") && !value["LiveRate"].IsNull())
    {
        if (!value["LiveRate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.LiveRate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_liveRate = value["LiveRate"].GetInt64();
        m_liveRateHasBeenSet = true;
    }

    if (value.HasMember("Similarity") && !value["Similarity"].IsNull())
    {
        if (!value["Similarity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Similarity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_similarity = value["Similarity"].GetDouble();
        m_similarityHasBeenSet = true;
    }

    if (value.HasMember("OccurredTime") && !value["OccurredTime"].IsNull())
    {
        if (!value["OccurredTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.OccurredTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_occurredTime = value["OccurredTime"].GetInt64();
        m_occurredTimeHasBeenSet = true;
    }

    if (value.HasMember("Photo") && !value["Photo"].IsNull())
    {
        if (!value["Photo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Photo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_photo = string(value["Photo"].GetString());
        m_photoHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FaceIdResult.Video` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_video = string(value["Video"].GetString());
        m_videoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FaceIdResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_orderNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_liveRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_liveRate, allocator);
    }

    if (m_similarityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Similarity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_similarity, allocator);
    }

    if (m_occurredTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_occurredTime, allocator);
    }

    if (m_photoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Photo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_photo.c_str(), allocator).Move(), allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_video.c_str(), allocator).Move(), allocator);
    }

}


int64_t FaceIdResult::GetResult() const
{
    return m_result;
}

void FaceIdResult::SetResult(const int64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool FaceIdResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string FaceIdResult::GetDescription() const
{
    return m_description;
}

void FaceIdResult::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool FaceIdResult::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string FaceIdResult::GetOrderNumber() const
{
    return m_orderNumber;
}

void FaceIdResult::SetOrderNumber(const string& _orderNumber)
{
    m_orderNumber = _orderNumber;
    m_orderNumberHasBeenSet = true;
}

bool FaceIdResult::OrderNumberHasBeenSet() const
{
    return m_orderNumberHasBeenSet;
}

string FaceIdResult::GetName() const
{
    return m_name;
}

void FaceIdResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool FaceIdResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string FaceIdResult::GetIdCardType() const
{
    return m_idCardType;
}

void FaceIdResult::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool FaceIdResult::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string FaceIdResult::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void FaceIdResult::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool FaceIdResult::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

int64_t FaceIdResult::GetLiveRate() const
{
    return m_liveRate;
}

void FaceIdResult::SetLiveRate(const int64_t& _liveRate)
{
    m_liveRate = _liveRate;
    m_liveRateHasBeenSet = true;
}

bool FaceIdResult::LiveRateHasBeenSet() const
{
    return m_liveRateHasBeenSet;
}

double FaceIdResult::GetSimilarity() const
{
    return m_similarity;
}

void FaceIdResult::SetSimilarity(const double& _similarity)
{
    m_similarity = _similarity;
    m_similarityHasBeenSet = true;
}

bool FaceIdResult::SimilarityHasBeenSet() const
{
    return m_similarityHasBeenSet;
}

int64_t FaceIdResult::GetOccurredTime() const
{
    return m_occurredTime;
}

void FaceIdResult::SetOccurredTime(const int64_t& _occurredTime)
{
    m_occurredTime = _occurredTime;
    m_occurredTimeHasBeenSet = true;
}

bool FaceIdResult::OccurredTimeHasBeenSet() const
{
    return m_occurredTimeHasBeenSet;
}

string FaceIdResult::GetPhoto() const
{
    return m_photo;
}

void FaceIdResult::SetPhoto(const string& _photo)
{
    m_photo = _photo;
    m_photoHasBeenSet = true;
}

bool FaceIdResult::PhotoHasBeenSet() const
{
    return m_photoHasBeenSet;
}

string FaceIdResult::GetVideo() const
{
    return m_video;
}

void FaceIdResult::SetVideo(const string& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool FaceIdResult::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

