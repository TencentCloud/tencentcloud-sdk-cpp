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

#include <tencentcloud/facefusion/v20181201/model/FuseParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Facefusion::V20181201::Model;
using namespace std;

FuseParam::FuseParam() :
    m_imageCodecParamHasBeenSet(false)
{
}

CoreInternalOutcome FuseParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ImageCodecParam") && !value["ImageCodecParam"].IsNull())
    {
        if (!value["ImageCodecParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FuseParam.ImageCodecParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageCodecParam.Deserialize(value["ImageCodecParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageCodecParamHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FuseParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_imageCodecParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageCodecParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageCodecParam.ToJsonObject(value[key.c_str()], allocator);
    }

}


ImageCodecParam FuseParam::GetImageCodecParam() const
{
    return m_imageCodecParam;
}

void FuseParam::SetImageCodecParam(const ImageCodecParam& _imageCodecParam)
{
    m_imageCodecParam = _imageCodecParam;
    m_imageCodecParamHasBeenSet = true;
}

bool FuseParam::ImageCodecParamHasBeenSet() const
{
    return m_imageCodecParamHasBeenSet;
}

