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

#include <tencentcloud/mps/v20190612/model/ImageAreaBoxInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ImageAreaBoxInfo::ImageAreaBoxInfo() :
    m_typeHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false),
    m_boundingBoxHasBeenSet(false)
{
}

CoreInternalOutcome ImageAreaBoxInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAreaBoxInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageAreaBoxInfo.AreaCoordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }

    if (value.HasMember("BoundingBox") && !value["BoundingBox"].IsNull())
    {
        if (!value["BoundingBox"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageAreaBoxInfo.BoundingBox` is not array type"));

        const rapidjson::Value &tmpValue = value["BoundingBox"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_boundingBox.push_back((*itr).GetDouble());
        }
        m_boundingBoxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAreaBoxInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCoordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCoordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordSet.begin(); itr != m_areaCoordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_boundingBoxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BoundingBox";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_boundingBox.begin(); itr != m_boundingBox.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

}


string ImageAreaBoxInfo::GetType() const
{
    return m_type;
}

void ImageAreaBoxInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageAreaBoxInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<int64_t> ImageAreaBoxInfo::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void ImageAreaBoxInfo::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool ImageAreaBoxInfo::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

vector<double> ImageAreaBoxInfo::GetBoundingBox() const
{
    return m_boundingBox;
}

void ImageAreaBoxInfo::SetBoundingBox(const vector<double>& _boundingBox)
{
    m_boundingBox = _boundingBox;
    m_boundingBoxHasBeenSet = true;
}

bool ImageAreaBoxInfo::BoundingBoxHasBeenSet() const
{
    return m_boundingBoxHasBeenSet;
}

