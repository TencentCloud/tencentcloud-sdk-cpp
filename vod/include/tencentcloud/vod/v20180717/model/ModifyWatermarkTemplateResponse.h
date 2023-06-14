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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyWatermarkTemplate返回参数结构体
                */
                class ModifyWatermarkTemplateResponse : public AbstractModel
                {
                public:
                    ModifyWatermarkTemplateResponse();
                    ~ModifyWatermarkTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片水印地址，仅当 ImageTemplate.ImageContent 非空，该字段有值。
                     * @return ImageUrl 图片水印地址，仅当 ImageTemplate.ImageContent 非空，该字段有值。
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                private:

                    /**
                     * 图片水印地址，仅当 ImageTemplate.ImageContent 非空，该字段有值。
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYWATERMARKTEMPLATERESPONSE_H_
