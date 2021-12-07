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

#include <tencentcloud/tcss/v20201101/model/ImageRiskTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageRiskTendencyInfo::ImageRiskTendencyInfo() :
    m_imageRiskSetHasBeenSet(false),
    m_imageRiskTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImageRiskTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageRiskSet") && !value["ImageRiskSet"].IsNull())
    {
        if (!value["ImageRiskSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageRiskTendencyInfo.ImageRiskSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ImageRiskSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunTimeTendencyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_imageRiskSet.push_back(item);
        }
        m_imageRiskSetHasBeenSet = true;
    }

    if (value.HasMember("ImageRiskType") && !value["ImageRiskType"].IsNull())
    {
        if (!value["ImageRiskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageRiskTendencyInfo.ImageRiskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageRiskType = string(value["ImageRiskType"].GetString());
        m_imageRiskTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageRiskTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageRiskSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRiskSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_imageRiskSet.begin(); itr != m_imageRiskSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageRiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageRiskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageRiskType.c_str(), allocator).Move(), allocator);
    }

}


vector<RunTimeTendencyInfo> ImageRiskTendencyInfo::GetImageRiskSet() const
{
    return m_imageRiskSet;
}

void ImageRiskTendencyInfo::SetImageRiskSet(const vector<RunTimeTendencyInfo>& _imageRiskSet)
{
    m_imageRiskSet = _imageRiskSet;
    m_imageRiskSetHasBeenSet = true;
}

bool ImageRiskTendencyInfo::ImageRiskSetHasBeenSet() const
{
    return m_imageRiskSetHasBeenSet;
}

string ImageRiskTendencyInfo::GetImageRiskType() const
{
    return m_imageRiskType;
}

void ImageRiskTendencyInfo::SetImageRiskType(const string& _imageRiskType)
{
    m_imageRiskType = _imageRiskType;
    m_imageRiskTypeHasBeenSet = true;
}

bool ImageRiskTendencyInfo::ImageRiskTypeHasBeenSet() const
{
    return m_imageRiskTypeHasBeenSet;
}

