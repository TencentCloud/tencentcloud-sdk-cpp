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

#include <tencentcloud/facefusion/v20220927/model/ImageCodecParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20220927::Model;
using namespace std;

ImageCodecParam::ImageCodecParam() :
    m_metaDataHasBeenSet(false)
{
}

CoreInternalOutcome ImageCodecParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetaData") && !value["MetaData"].IsNull())
    {
        if (!value["MetaData"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ImageCodecParam.MetaData` is not array type"));

        const rapidjson::Value &tmpValue = value["MetaData"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetaData item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metaData.push_back(item);
        }
        m_metaDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageCodecParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metaDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetaData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metaData.begin(); itr != m_metaData.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<MetaData> ImageCodecParam::GetMetaData() const
{
    return m_metaData;
}

void ImageCodecParam::SetMetaData(const vector<MetaData>& _metaData)
{
    m_metaData = _metaData;
    m_metaDataHasBeenSet = true;
}

bool ImageCodecParam::MetaDataHasBeenSet() const
{
    return m_metaDataHasBeenSet;
}

