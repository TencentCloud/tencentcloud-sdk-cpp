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

#include <tencentcloud/tcss/v20201101/model/VulTendencyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

VulTendencyInfo::VulTendencyInfo() :
    m_vulSetHasBeenSet(false),
    m_imageTypeHasBeenSet(false)
{
}

CoreInternalOutcome VulTendencyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VulSet") && !value["VulSet"].IsNull())
    {
        if (!value["VulSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VulTendencyInfo.VulSet` is not array type"));

        const rapidjson::Value &tmpValue = value["VulSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RunTimeTendencyInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vulSet.push_back(item);
        }
        m_vulSetHasBeenSet = true;
    }

    if (value.HasMember("ImageType") && !value["ImageType"].IsNull())
    {
        if (!value["ImageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VulTendencyInfo.ImageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageType = string(value["ImageType"].GetString());
        m_imageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VulTendencyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vulSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vulSet.begin(); itr != m_vulSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_imageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageType.c_str(), allocator).Move(), allocator);
    }

}


vector<RunTimeTendencyInfo> VulTendencyInfo::GetVulSet() const
{
    return m_vulSet;
}

void VulTendencyInfo::SetVulSet(const vector<RunTimeTendencyInfo>& _vulSet)
{
    m_vulSet = _vulSet;
    m_vulSetHasBeenSet = true;
}

bool VulTendencyInfo::VulSetHasBeenSet() const
{
    return m_vulSetHasBeenSet;
}

string VulTendencyInfo::GetImageType() const
{
    return m_imageType;
}

void VulTendencyInfo::SetImageType(const string& _imageType)
{
    m_imageType = _imageType;
    m_imageTypeHasBeenSet = true;
}

bool VulTendencyInfo::ImageTypeHasBeenSet() const
{
    return m_imageTypeHasBeenSet;
}

