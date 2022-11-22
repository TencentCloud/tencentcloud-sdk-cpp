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

#include <tencentcloud/tiia/v20190529/model/AttributesForBody.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiia::V20190529::Model;
using namespace std;

AttributesForBody::AttributesForBody() :
    m_rectHasBeenSet(false),
    m_detectConfidenceHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

CoreInternalOutcome AttributesForBody::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Rect") && !value["Rect"].IsNull())
    {
        if (!value["Rect"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesForBody.Rect` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rect.Deserialize(value["Rect"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rectHasBeenSet = true;
    }

    if (value.HasMember("DetectConfidence") && !value["DetectConfidence"].IsNull())
    {
        if (!value["DetectConfidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AttributesForBody.DetectConfidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_detectConfidence = value["DetectConfidence"].GetDouble();
        m_detectConfidenceHasBeenSet = true;
    }

    if (value.HasMember("Attributes") && !value["Attributes"].IsNull())
    {
        if (!value["Attributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AttributesForBody.Attributes` is not array type"));

        const rapidjson::Value &tmpValue = value["Attributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BodyAttributes item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_attributes.push_back(item);
        }
        m_attributesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AttributesForBody::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rect.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_detectConfidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectConfidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectConfidence, allocator);
    }

    if (m_attributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Attributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_attributes.begin(); itr != m_attributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


ImageRect AttributesForBody::GetRect() const
{
    return m_rect;
}

void AttributesForBody::SetRect(const ImageRect& _rect)
{
    m_rect = _rect;
    m_rectHasBeenSet = true;
}

bool AttributesForBody::RectHasBeenSet() const
{
    return m_rectHasBeenSet;
}

double AttributesForBody::GetDetectConfidence() const
{
    return m_detectConfidence;
}

void AttributesForBody::SetDetectConfidence(const double& _detectConfidence)
{
    m_detectConfidence = _detectConfidence;
    m_detectConfidenceHasBeenSet = true;
}

bool AttributesForBody::DetectConfidenceHasBeenSet() const
{
    return m_detectConfidenceHasBeenSet;
}

vector<BodyAttributes> AttributesForBody::GetAttributes() const
{
    return m_attributes;
}

void AttributesForBody::SetAttributes(const vector<BodyAttributes>& _attributes)
{
    m_attributes = _attributes;
    m_attributesHasBeenSet = true;
}

bool AttributesForBody::AttributesHasBeenSet() const
{
    return m_attributesHasBeenSet;
}

