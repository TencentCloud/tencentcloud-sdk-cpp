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

#include <tencentcloud/es/v20250101/model/DocumentParseConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20250101::Model;
using namespace std;

DocumentParseConfig::DocumentParseConfig() :
    m_imageResponseTypeHasBeenSet(false)
{
}

CoreInternalOutcome DocumentParseConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageResponseType") && !value["ImageResponseType"].IsNull())
    {
        if (!value["ImageResponseType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DocumentParseConfig.ImageResponseType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageResponseType = value["ImageResponseType"].GetUint64();
        m_imageResponseTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DocumentParseConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageResponseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageResponseType, allocator);
    }

}


uint64_t DocumentParseConfig::GetImageResponseType() const
{
    return m_imageResponseType;
}

void DocumentParseConfig::SetImageResponseType(const uint64_t& _imageResponseType)
{
    m_imageResponseType = _imageResponseType;
    m_imageResponseTypeHasBeenSet = true;
}

bool DocumentParseConfig::ImageResponseTypeHasBeenSet() const
{
    return m_imageResponseTypeHasBeenSet;
}

