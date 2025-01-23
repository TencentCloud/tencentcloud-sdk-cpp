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

#include <tencentcloud/ocr/v20181119/model/QuestionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

QuestionInfo::QuestionInfo() :
    m_angleHasBeenSet(false),
    m_heightHasBeenSet(false),
    m_widthHasBeenSet(false),
    m_resultListHasBeenSet(false),
    m_orgHeightHasBeenSet(false),
    m_orgWidthHasBeenSet(false),
    m_imageBase64HasBeenSet(false)
{
}

CoreInternalOutcome QuestionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Angle") && !value["Angle"].IsNull())
    {
        if (!value["Angle"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.Angle` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_angle = value["Angle"].GetDouble();
        m_angleHasBeenSet = true;
    }

    if (value.HasMember("Height") && !value["Height"].IsNull())
    {
        if (!value["Height"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.Height` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_height = value["Height"].GetInt64();
        m_heightHasBeenSet = true;
    }

    if (value.HasMember("Width") && !value["Width"].IsNull())
    {
        if (!value["Width"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.Width` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_width = value["Width"].GetInt64();
        m_widthHasBeenSet = true;
    }

    if (value.HasMember("ResultList") && !value["ResultList"].IsNull())
    {
        if (!value["ResultList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.ResultList` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResultList item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultList.push_back(item);
        }
        m_resultListHasBeenSet = true;
    }

    if (value.HasMember("OrgHeight") && !value["OrgHeight"].IsNull())
    {
        if (!value["OrgHeight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.OrgHeight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgHeight = value["OrgHeight"].GetInt64();
        m_orgHeightHasBeenSet = true;
    }

    if (value.HasMember("OrgWidth") && !value["OrgWidth"].IsNull())
    {
        if (!value["OrgWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.OrgWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_orgWidth = value["OrgWidth"].GetInt64();
        m_orgWidthHasBeenSet = true;
    }

    if (value.HasMember("ImageBase64") && !value["ImageBase64"].IsNull())
    {
        if (!value["ImageBase64"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QuestionInfo.ImageBase64` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageBase64 = string(value["ImageBase64"].GetString());
        m_imageBase64HasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QuestionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_resultListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultList.begin(); itr != m_resultList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_orgHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgHeight, allocator);
    }

    if (m_orgWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrgWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orgWidth, allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }

}


double QuestionInfo::GetAngle() const
{
    return m_angle;
}

void QuestionInfo::SetAngle(const double& _angle)
{
    m_angle = _angle;
    m_angleHasBeenSet = true;
}

bool QuestionInfo::AngleHasBeenSet() const
{
    return m_angleHasBeenSet;
}

int64_t QuestionInfo::GetHeight() const
{
    return m_height;
}

void QuestionInfo::SetHeight(const int64_t& _height)
{
    m_height = _height;
    m_heightHasBeenSet = true;
}

bool QuestionInfo::HeightHasBeenSet() const
{
    return m_heightHasBeenSet;
}

int64_t QuestionInfo::GetWidth() const
{
    return m_width;
}

void QuestionInfo::SetWidth(const int64_t& _width)
{
    m_width = _width;
    m_widthHasBeenSet = true;
}

bool QuestionInfo::WidthHasBeenSet() const
{
    return m_widthHasBeenSet;
}

vector<ResultList> QuestionInfo::GetResultList() const
{
    return m_resultList;
}

void QuestionInfo::SetResultList(const vector<ResultList>& _resultList)
{
    m_resultList = _resultList;
    m_resultListHasBeenSet = true;
}

bool QuestionInfo::ResultListHasBeenSet() const
{
    return m_resultListHasBeenSet;
}

int64_t QuestionInfo::GetOrgHeight() const
{
    return m_orgHeight;
}

void QuestionInfo::SetOrgHeight(const int64_t& _orgHeight)
{
    m_orgHeight = _orgHeight;
    m_orgHeightHasBeenSet = true;
}

bool QuestionInfo::OrgHeightHasBeenSet() const
{
    return m_orgHeightHasBeenSet;
}

int64_t QuestionInfo::GetOrgWidth() const
{
    return m_orgWidth;
}

void QuestionInfo::SetOrgWidth(const int64_t& _orgWidth)
{
    m_orgWidth = _orgWidth;
    m_orgWidthHasBeenSet = true;
}

bool QuestionInfo::OrgWidthHasBeenSet() const
{
    return m_orgWidthHasBeenSet;
}

string QuestionInfo::GetImageBase64() const
{
    return m_imageBase64;
}

void QuestionInfo::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool QuestionInfo::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}

