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

#include <tencentcloud/iai/v20200303/model/DenseFaceShape.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

DenseFaceShape::DenseFaceShape() :
    m_xHasBeenSet(false),
    m_yHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_leftEyeHasBeenSet(false),
    m_rightEyeHasBeenSet(false),
    m_leftEyeBrowHasBeenSet(false),
    m_rightEyeBrowHasBeenSet(false),
    m_mouthOutsideHasBeenSet(false),
    m_mouthInsideHasBeenSet(false),
    m_noseHasBeenSet(false),
    m_leftPupilHasBeenSet(false),
    m_rightPupilHasBeenSet(false),
    m_centralAxisHasBeenSet(false),
    m_chinHasBeenSet(false),
    m_leftEyeBagsHasBeenSet(false),
    m_rightEyeBagsHasBeenSet(false),
    m_foreheadHasBeenSet(false)
{
}

CoreInternalOutcome DenseFaceShape::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("X") && !value["X"].IsNull())
    {
        if (!value["X"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.X` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_x = value["X"].GetInt64();
        m_xHasBeenSet = true;
    }

    if (value.HasMember("Y") && !value["Y"].IsNull())
    {
        if (!value["Y"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Y` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_y = value["Y"].GetInt64();
        m_yHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("LeftEye") && !value["LeftEye"].IsNull())
    {
        if (!value["LeftEye"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.LeftEye` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftEye"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftEye.push_back(item);
        }
        m_leftEyeHasBeenSet = true;
    }

    if (value.HasMember("RightEye") && !value["RightEye"].IsNull())
    {
        if (!value["RightEye"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.RightEye` is not array type"));

        const rapidjson::Value &tmpValue = value["RightEye"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightEye.push_back(item);
        }
        m_rightEyeHasBeenSet = true;
    }

    if (value.HasMember("LeftEyeBrow") && !value["LeftEyeBrow"].IsNull())
    {
        if (!value["LeftEyeBrow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.LeftEyeBrow` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftEyeBrow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftEyeBrow.push_back(item);
        }
        m_leftEyeBrowHasBeenSet = true;
    }

    if (value.HasMember("RightEyeBrow") && !value["RightEyeBrow"].IsNull())
    {
        if (!value["RightEyeBrow"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.RightEyeBrow` is not array type"));

        const rapidjson::Value &tmpValue = value["RightEyeBrow"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightEyeBrow.push_back(item);
        }
        m_rightEyeBrowHasBeenSet = true;
    }

    if (value.HasMember("MouthOutside") && !value["MouthOutside"].IsNull())
    {
        if (!value["MouthOutside"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.MouthOutside` is not array type"));

        const rapidjson::Value &tmpValue = value["MouthOutside"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mouthOutside.push_back(item);
        }
        m_mouthOutsideHasBeenSet = true;
    }

    if (value.HasMember("MouthInside") && !value["MouthInside"].IsNull())
    {
        if (!value["MouthInside"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.MouthInside` is not array type"));

        const rapidjson::Value &tmpValue = value["MouthInside"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_mouthInside.push_back(item);
        }
        m_mouthInsideHasBeenSet = true;
    }

    if (value.HasMember("Nose") && !value["Nose"].IsNull())
    {
        if (!value["Nose"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Nose` is not array type"));

        const rapidjson::Value &tmpValue = value["Nose"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_nose.push_back(item);
        }
        m_noseHasBeenSet = true;
    }

    if (value.HasMember("LeftPupil") && !value["LeftPupil"].IsNull())
    {
        if (!value["LeftPupil"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.LeftPupil` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftPupil"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftPupil.push_back(item);
        }
        m_leftPupilHasBeenSet = true;
    }

    if (value.HasMember("RightPupil") && !value["RightPupil"].IsNull())
    {
        if (!value["RightPupil"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.RightPupil` is not array type"));

        const rapidjson::Value &tmpValue = value["RightPupil"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightPupil.push_back(item);
        }
        m_rightPupilHasBeenSet = true;
    }

    if (value.HasMember("CentralAxis") && !value["CentralAxis"].IsNull())
    {
        if (!value["CentralAxis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.CentralAxis` is not array type"));

        const rapidjson::Value &tmpValue = value["CentralAxis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_centralAxis.push_back(item);
        }
        m_centralAxisHasBeenSet = true;
    }

    if (value.HasMember("Chin") && !value["Chin"].IsNull())
    {
        if (!value["Chin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Chin` is not array type"));

        const rapidjson::Value &tmpValue = value["Chin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_chin.push_back(item);
        }
        m_chinHasBeenSet = true;
    }

    if (value.HasMember("LeftEyeBags") && !value["LeftEyeBags"].IsNull())
    {
        if (!value["LeftEyeBags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.LeftEyeBags` is not array type"));

        const rapidjson::Value &tmpValue = value["LeftEyeBags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_leftEyeBags.push_back(item);
        }
        m_leftEyeBagsHasBeenSet = true;
    }

    if (value.HasMember("RightEyeBags") && !value["RightEyeBags"].IsNull())
    {
        if (!value["RightEyeBags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.RightEyeBags` is not array type"));

        const rapidjson::Value &tmpValue = value["RightEyeBags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rightEyeBags.push_back(item);
        }
        m_rightEyeBagsHasBeenSet = true;
    }

    if (value.HasMember("Forehead") && !value["Forehead"].IsNull())
    {
        if (!value["Forehead"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DenseFaceShape.Forehead` is not array type"));

        const rapidjson::Value &tmpValue = value["Forehead"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Point item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_forehead.push_back(item);
        }
        m_foreheadHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DenseFaceShape::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_xHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "X";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_x, allocator);
    }

    if (m_yHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Y";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_y, allocator);
    }

    if (m_widthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Width";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_width, allocator);
    }

    if (m_heightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Height";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_height, allocator);
    }

    if (m_leftEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftEye.begin(); itr != m_leftEye.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightEyeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEye";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightEye.begin(); itr != m_rightEye.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftEyeBrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEyeBrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftEyeBrow.begin(); itr != m_leftEyeBrow.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightEyeBrowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEyeBrow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightEyeBrow.begin(); itr != m_rightEyeBrow.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mouthOutsideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MouthOutside";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mouthOutside.begin(); itr != m_mouthOutside.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_mouthInsideHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MouthInside";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_mouthInside.begin(); itr != m_mouthInside.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_noseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nose";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_nose.begin(); itr != m_nose.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftPupilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftPupil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftPupil.begin(); itr != m_leftPupil.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightPupilHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightPupil";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightPupil.begin(); itr != m_rightPupil.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_centralAxisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CentralAxis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_centralAxis.begin(); itr != m_centralAxis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_chinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Chin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_chin.begin(); itr != m_chin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_leftEyeBagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftEyeBags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_leftEyeBags.begin(); itr != m_leftEyeBags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_rightEyeBagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RightEyeBags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rightEyeBags.begin(); itr != m_rightEyeBags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_foreheadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Forehead";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_forehead.begin(); itr != m_forehead.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t DenseFaceShape::GetX() const
{
    return m_x;
}

void DenseFaceShape::SetX(const int64_t& _x)
{
    m_x = _x;
    m_xHasBeenSet = true;
}

bool DenseFaceShape::XHasBeenSet() const
{
    return m_xHasBeenSet;
}

int64_t DenseFaceShape::GetY() const
{
    return m_y;
}

void DenseFaceShape::SetY(const int64_t& _y)
{
    m_y = _y;
    m_yHasBeenSet = true;
}

bool DenseFaceShape::YHasBeenSet() const
{
    return m_yHasBeenSet;
}

int64_t DenseFaceShape::GetWidth() const
{
    return m_width;
}

void DenseFaceShape::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool DenseFaceShape::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

int64_t DenseFaceShape::GetHeight() const
{
    return m_height;
}

void DenseFaceShape::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool DenseFaceShape::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

vector<Point> DenseFaceShape::GetLeftEye() const
{
    return m_leftEye;
}

void DenseFaceShape::SetLeftEye(const vector<Point>& _leftEye)
{
    m_leftEye = _leftEye;
    m_leftEyeHasBeenSet = true;
}

bool DenseFaceShape::LeftEyeHasBeenSet() const
{
    return m_leftEyeHasBeenSet;
}

vector<Point> DenseFaceShape::GetRightEye() const
{
    return m_rightEye;
}

void DenseFaceShape::SetRightEye(const vector<Point>& _rightEye)
{
    m_rightEye = _rightEye;
    m_rightEyeHasBeenSet = true;
}

bool DenseFaceShape::RightEyeHasBeenSet() const
{
    return m_rightEyeHasBeenSet;
}

vector<Point> DenseFaceShape::GetLeftEyeBrow() const
{
    return m_leftEyeBrow;
}

void DenseFaceShape::SetLeftEyeBrow(const vector<Point>& _leftEyeBrow)
{
    m_leftEyeBrow = _leftEyeBrow;
    m_leftEyeBrowHasBeenSet = true;
}

bool DenseFaceShape::LeftEyeBrowHasBeenSet() const
{
    return m_leftEyeBrowHasBeenSet;
}

vector<Point> DenseFaceShape::GetRightEyeBrow() const
{
    return m_rightEyeBrow;
}

void DenseFaceShape::SetRightEyeBrow(const vector<Point>& _rightEyeBrow)
{
    m_rightEyeBrow = _rightEyeBrow;
    m_rightEyeBrowHasBeenSet = true;
}

bool DenseFaceShape::RightEyeBrowHasBeenSet() const
{
    return m_rightEyeBrowHasBeenSet;
}

vector<Point> DenseFaceShape::GetMouthOutside() const
{
    return m_mouthOutside;
}

void DenseFaceShape::SetMouthOutside(const vector<Point>& _mouthOutside)
{
    m_mouthOutside = _mouthOutside;
    m_mouthOutsideHasBeenSet = true;
}

bool DenseFaceShape::MouthOutsideHasBeenSet() const
{
    return m_mouthOutsideHasBeenSet;
}

vector<Point> DenseFaceShape::GetMouthInside() const
{
    return m_mouthInside;
}

void DenseFaceShape::SetMouthInside(const vector<Point>& _mouthInside)
{
    m_mouthInside = _mouthInside;
    m_mouthInsideHasBeenSet = true;
}

bool DenseFaceShape::MouthInsideHasBeenSet() const
{
    return m_mouthInsideHasBeenSet;
}

vector<Point> DenseFaceShape::GetNose() const
{
    return m_nose;
}

void DenseFaceShape::SetNose(const vector<Point>& _nose)
{
    m_nose = _nose;
    m_noseHasBeenSet = true;
}

bool DenseFaceShape::NoseHasBeenSet() const
{
    return m_noseHasBeenSet;
}

vector<Point> DenseFaceShape::GetLeftPupil() const
{
    return m_leftPupil;
}

void DenseFaceShape::SetLeftPupil(const vector<Point>& _leftPupil)
{
    m_leftPupil = _leftPupil;
    m_leftPupilHasBeenSet = true;
}

bool DenseFaceShape::LeftPupilHasBeenSet() const
{
    return m_leftPupilHasBeenSet;
}

vector<Point> DenseFaceShape::GetRightPupil() const
{
    return m_rightPupil;
}

void DenseFaceShape::SetRightPupil(const vector<Point>& _rightPupil)
{
    m_rightPupil = _rightPupil;
    m_rightPupilHasBeenSet = true;
}

bool DenseFaceShape::RightPupilHasBeenSet() const
{
    return m_rightPupilHasBeenSet;
}

vector<Point> DenseFaceShape::GetCentralAxis() const
{
    return m_centralAxis;
}

void DenseFaceShape::SetCentralAxis(const vector<Point>& _centralAxis)
{
    m_centralAxis = _centralAxis;
    m_centralAxisHasBeenSet = true;
}

bool DenseFaceShape::CentralAxisHasBeenSet() const
{
    return m_centralAxisHasBeenSet;
}

vector<Point> DenseFaceShape::GetChin() const
{
    return m_chin;
}

void DenseFaceShape::SetChin(const vector<Point>& _chin)
{
    m_chin = _chin;
    m_chinHasBeenSet = true;
}

bool DenseFaceShape::ChinHasBeenSet() const
{
    return m_chinHasBeenSet;
}

vector<Point> DenseFaceShape::GetLeftEyeBags() const
{
    return m_leftEyeBags;
}

void DenseFaceShape::SetLeftEyeBags(const vector<Point>& _leftEyeBags)
{
    m_leftEyeBags = _leftEyeBags;
    m_leftEyeBagsHasBeenSet = true;
}

bool DenseFaceShape::LeftEyeBagsHasBeenSet() const
{
    return m_leftEyeBagsHasBeenSet;
}

vector<Point> DenseFaceShape::GetRightEyeBags() const
{
    return m_rightEyeBags;
}

void DenseFaceShape::SetRightEyeBags(const vector<Point>& _rightEyeBags)
{
    m_rightEyeBags = _rightEyeBags;
    m_rightEyeBagsHasBeenSet = true;
}

bool DenseFaceShape::RightEyeBagsHasBeenSet() const
{
    return m_rightEyeBagsHasBeenSet;
}

vector<Point> DenseFaceShape::GetForehead() const
{
    return m_forehead;
}

void DenseFaceShape::SetForehead(const vector<Point>& _forehead)
{
    m_forehead = _forehead;
    m_foreheadHasBeenSet = true;
}

bool DenseFaceShape::ForeheadHasBeenSet() const
{
    return m_foreheadHasBeenSet;
}

