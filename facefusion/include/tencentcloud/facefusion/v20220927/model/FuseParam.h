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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEPARAM_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/facefusion/v20220927/model/ImageCodecParam.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * 融合参数
                */
                class FuseParam : public AbstractModel
                {
                public:
                    FuseParam();
                    ~FuseParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片编码参数
                     * @return ImageCodecParam 图片编码参数
                     * 
                     */
                    ImageCodecParam GetImageCodecParam() const;

                    /**
                     * 设置图片编码参数
                     * @param _imageCodecParam 图片编码参数
                     * 
                     */
                    void SetImageCodecParam(const ImageCodecParam& _imageCodecParam);

                    /**
                     * 判断参数 ImageCodecParam 是否已赋值
                     * @return ImageCodecParam 是否已赋值
                     * 
                     */
                    bool ImageCodecParamHasBeenSet() const;

                private:

                    /**
                     * 图片编码参数
                     */
                    ImageCodecParam m_imageCodecParam;
                    bool m_imageCodecParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEPARAM_H_
