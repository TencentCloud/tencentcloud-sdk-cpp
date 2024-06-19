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

#include <tencentcloud/lke/v20231130/model/DocumentRecognizeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DocumentRecognizeInfo::DocumentRecognizeInfo() :
    m_pageNumberHasBeenSet(false),
    m_angleHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_originHeightHasBeenSet(false),
    m_originWidthHasBeenSet(false),
    m_elementsHasBeenSet(false),
    m_rotatedAngleHasBeenSet(false)
{
}

CoreInternalOutcome DocumentRecognizeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PageNumber") && !value["PageNumber"].IsNull())
    {
        if (!value["PageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.PageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pageNumber = value["PageNumber"].GetInt64();
        m_pageNumberHasBeenSet = true;
    }

    if (value.HasMember("Angle") && !value["Angle"].IsNull())
    {
        if (!value["Angle"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.Angle` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_angle = value["Angle"].GetInt64();
        m_angleHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("OriginHeight") && !value["OriginHeight"].IsNull())
    {
        if (!value["OriginHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.OriginHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originHeight = value["OriginHeight"].GetInt64();
        m_originHeightHasBeenSet = true;
    }

    if (value.HasMember("OriginWidth") && !value["OriginWidth"].IsNull())
    {
        if (!value["OriginWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.OriginWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originWidth = value["OriginWidth"].GetInt64();
        m_originWidthHasBeenSet = true;
    }

    if (value.HasMember("Elements") && !value["Elements"].IsNull())
    {
        if (!value["Elements"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.Elements` is not array type"));

        const rapidjson::Value &tmpValue = value["Elements"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DocumentElement item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_elements.push_back(item);
        }
        m_elementsHasBeenSet = true;
    }

    if (value.HasMember("RotatedAngle") && !value["RotatedAngle"].IsNull())
    {
        if (!value["RotatedAngle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentRecognizeInfo.RotatedAngle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rotatedAngle = value["RotatedAngle"].GetDouble();
        m_rotatedAngleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentRecognizeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_angleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Angle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_angle, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_originHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originHeight, allocator);
    }

    if (m_originWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originWidth, allocator);
    }

    if (m_elementsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Elements";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_elements.begin(); itr != m_elements.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rotatedAngleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotatedAngle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotatedAngle, allocator);
    }

}


int64_t DocumentRecognizeInfo::GetPageNumber() const
{
    return m_pageNumber;
}

void DocumentRecognizeInfo::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DocumentRecognizeInfo::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DocumentRecognizeInfo::GetAngle() const
{
    return m_angle;
}

void DocumentRecognizeInfo::SetAngle(const int64_t& _angle)
{
    m_angle = _angle;
    m_angleHasBeenSet = true;
}

bool DocumentRecognizeInfo::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

int64_t DocumentRecognizeInfo::GetHeight() const
{
    return m_height;
}

void DocumentRecognizeInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool DocumentRecognizeInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t DocumentRecognizeInfo::GetWidth() const
{
    return m_width;
}

void DocumentRecognizeInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool DocumentRecognizeInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t DocumentRecognizeInfo::GetOriginHeight() const
{
    return m_originHeight;
}

void DocumentRecognizeInfo::SetOriginHeight(const int64_t& _originHeight)
{
    m_originHeight = _originHeight;
    m_originHeightHasBeenSet = true;
}

bool DocumentRecognizeInfo::OriginHeightHasBeenSet() const
{
    return m_originHeightHasBeenSet;
}

int64_t DocumentRecognizeInfo::GetOriginWidth() const
{
    return m_originWidth;
}

void DocumentRecognizeInfo::SetOriginWidth(const int64_t& _originWidth)
{
    m_originWidth = _originWidth;
    m_originWidthHasBeenSet = true;
}

bool DocumentRecognizeInfo::OriginWidthHasBeenSet() const
{
    return m_originWidthHasBeenSet;
}

vector<DocumentElement> DocumentRecognizeInfo::GetElements() const
{
    return m_elements;
}

void DocumentRecognizeInfo::SetElements(const vector<DocumentElement>& _elements)
{
    m_elements = _elements;
    m_elementsHasBeenSet = true;
}

bool DocumentRecognizeInfo::ElementsHasBeenSet() const
{
    return m_elementsHasBeenSet;
}

double DocumentRecognizeInfo::GetRotatedAngle() const
{
    return m_rotatedAngle;
}

void DocumentRecognizeInfo::SetRotatedAngle(const double& _rotatedAngle)
{
    m_rotatedAngle = _rotatedAngle;
    m_rotatedAngleHasBeenSet = true;
}

bool DocumentRecognizeInfo::RotatedAngleHasBeenSet() const
{
    return m_rotatedAngleHasBeenSet;
}

