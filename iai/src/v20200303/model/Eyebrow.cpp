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

#include <tencentcloud/iai/v20200303/model/Eyebrow.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

Eyebrow::Eyebrow() :
    m_eyebrowDensityHasBeenSet(false),
    m_eyebrowCurveHasBeenSet(false),
    m_eyebrowLengthHasBeenSet(false)
{
}

CoreInternalOutcome Eyebrow::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EyebrowDensity") && !value["EyebrowDensity"].IsNull())
    {
        if (!value["EyebrowDensity"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eyebrow.EyebrowDensity` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyebrowDensity.Deserialize(value["EyebrowDensity"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyebrowDensityHasBeenSet = true;
    }

    if (value.HasMember("EyebrowCurve") && !value["EyebrowCurve"].IsNull())
    {
        if (!value["EyebrowCurve"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eyebrow.EyebrowCurve` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyebrowCurve.Deserialize(value["EyebrowCurve"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyebrowCurveHasBeenSet = true;
    }

    if (value.HasMember("EyebrowLength") && !value["EyebrowLength"].IsNull())
    {
        if (!value["EyebrowLength"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Eyebrow.EyebrowLength` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_eyebrowLength.Deserialize(value["EyebrowLength"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_eyebrowLengthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Eyebrow::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_eyebrowDensityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyebrowDensity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyebrowDensity.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyebrowCurveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyebrowCurve";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyebrowCurve.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_eyebrowLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EyebrowLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_eyebrowLength.ToJsonObject(value[key.c_str()], allocator);
    }

}


AttributeItem Eyebrow::GetEyebrowDensity() const
{
    return m_eyebrowDensity;
}

void Eyebrow::SetEyebrowDensity(const AttributeItem& _eyebrowDensity)
{
    m_eyebrowDensity = _eyebrowDensity;
    m_eyebrowDensityHasBeenSet = true;
}

bool Eyebrow::EyebrowDensityHasBeenSet() const
{
    return m_eyebrowDensityHasBeenSet;
}

AttributeItem Eyebrow::GetEyebrowCurve() const
{
    return m_eyebrowCurve;
}

void Eyebrow::SetEyebrowCurve(const AttributeItem& _eyebrowCurve)
{
    m_eyebrowCurve = _eyebrowCurve;
    m_eyebrowCurveHasBeenSet = true;
}

bool Eyebrow::EyebrowCurveHasBeenSet() const
{
    return m_eyebrowCurveHasBeenSet;
}

AttributeItem Eyebrow::GetEyebrowLength() const
{
    return m_eyebrowLength;
}

void Eyebrow::SetEyebrowLength(const AttributeItem& _eyebrowLength)
{
    m_eyebrowLength = _eyebrowLength;
    m_eyebrowLengthHasBeenSet = true;
}

bool Eyebrow::EyebrowLengthHasBeenSet() const
{
    return m_eyebrowLengthHasBeenSet;
}

