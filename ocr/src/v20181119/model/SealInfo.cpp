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

#include <tencentcloud/ocr/v20181119/model/SealInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SealInfo::SealInfo() :
    m_sealBodyHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_otherTextsHasBeenSet(false),
    m_sealShapeHasBeenSet(false)
{
}

CoreInternalOutcome SealInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SealBody") && !value["SealBody"].IsNull())
    {
        if (!value["SealBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.SealBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealBody = string(value["SealBody"].GetString());
        m_sealBodyHasBeenSet = true;
    }

    if (value.HasMember("Location") && !value["Location"].IsNull())
    {
        if (!value["Location"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.Location` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_location.Deserialize(value["Location"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_locationHasBeenSet = true;
    }

    if (value.HasMember("OtherTexts") && !value["OtherTexts"].IsNull())
    {
        if (!value["OtherTexts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SealInfo.OtherTexts` is not array type"));

        const rapidjson::Value &tmpValue = value["OtherTexts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_otherTexts.push_back((*itr).GetString());
        }
        m_otherTextsHasBeenSet = true;
    }

    if (value.HasMember("SealShape") && !value["SealShape"].IsNull())
    {
        if (!value["SealShape"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SealInfo.SealShape` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sealShape = string(value["SealShape"].GetString());
        m_sealShapeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SealInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sealBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealBody.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_location.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_otherTexts.begin(); itr != m_otherTexts.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sealShapeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SealShape";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sealShape.c_str(), allocator).Move(), allocator);
    }

}


string SealInfo::GetSealBody() const
{
    return m_sealBody;
}

void SealInfo::SetSealBody(const string& _sealBody)
{
    m_sealBody = _sealBody;
    m_sealBodyHasBeenSet = true;
}

bool SealInfo::SealBodyHasBeenSet() const
{
    return m_sealBodyHasBeenSet;
}

Rect SealInfo::GetLocation() const
{
    return m_location;
}

void SealInfo::SetLocation(const Rect& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool SealInfo::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

vector<string> SealInfo::GetOtherTexts() const
{
    return m_otherTexts;
}

void SealInfo::SetOtherTexts(const vector<string>& _otherTexts)
{
    m_otherTexts = _otherTexts;
    m_otherTextsHasBeenSet = true;
}

bool SealInfo::OtherTextsHasBeenSet() const
{
    return m_otherTextsHasBeenSet;
}

string SealInfo::GetSealShape() const
{
    return m_sealShape;
}

void SealInfo::SetSealShape(const string& _sealShape)
{
    m_sealShape = _sealShape;
    m_sealShapeHasBeenSet = true;
}

bool SealInfo::SealShapeHasBeenSet() const
{
    return m_sealShapeHasBeenSet;
}

