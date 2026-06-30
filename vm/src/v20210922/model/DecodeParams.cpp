/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/vm/v20210922/model/DecodeParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

DecodeParams::DecodeParams() :
    m_imageFrequencyHasBeenSet(false)
{
}

CoreInternalOutcome DecodeParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageFrequency") && !value["ImageFrequency"].IsNull())
    {
        if (!value["ImageFrequency"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DecodeParams.ImageFrequency` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageFrequency = value["ImageFrequency"].GetUint64();
        m_imageFrequencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DecodeParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageFrequency, allocator);
    }

}


uint64_t DecodeParams::GetImageFrequency() const
{
    return m_imageFrequency;
}

void DecodeParams::SetImageFrequency(const uint64_t& _imageFrequency)
{
    m_imageFrequency = _imageFrequency;
    m_imageFrequencyHasBeenSet = true;
}

bool DecodeParams::ImageFrequencyHasBeenSet() const
{
    return m_imageFrequencyHasBeenSet;
}

