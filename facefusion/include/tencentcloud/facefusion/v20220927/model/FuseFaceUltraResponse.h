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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRARESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * FuseFaceUltra返回参数结构体
                */
                class FuseFaceUltraResponse : public AbstractModel
                {
                public:
                    FuseFaceUltraResponse();
                    ~FuseFaceUltraResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。url有效期为1天。
                     * @return FusedImage RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。url有效期为1天。
                     * 
                     */
                    std::string GetFusedImage() const;

                    /**
                     * 判断参数 FusedImage 是否已赋值
                     * @return FusedImage 是否已赋值
                     * 
                     */
                    bool FusedImageHasBeenSet() const;

                private:

                    /**
                     * RspImgType 为 url 时，返回结果的 url， RspImgType 为 base64 时返回 base64 数据。url有效期为1天。
                     */
                    std::string m_fusedImage;
                    bool m_fusedImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACEULTRARESPONSE_H_
