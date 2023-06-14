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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_ENHANCEIMAGERESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_ENHANCEIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * EnhanceImage返回参数结构体
                */
                class EnhanceImageResponse : public AbstractModel
                {
                public:
                    EnhanceImageResponse();
                    ~EnhanceImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取增强后图片的base64编码。
                     * @return EnhancedImage 增强后图片的base64编码。
                     * 
                     */
                    std::string GetEnhancedImage() const;

                    /**
                     * 判断参数 EnhancedImage 是否已赋值
                     * @return EnhancedImage 是否已赋值
                     * 
                     */
                    bool EnhancedImageHasBeenSet() const;

                private:

                    /**
                     * 增强后图片的base64编码。
                     */
                    std::string m_enhancedImage;
                    bool m_enhancedImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_ENHANCEIMAGERESPONSE_H_
