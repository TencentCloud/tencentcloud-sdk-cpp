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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACERESPONSE_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACERESPONSE_H_

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
                * FuseFace返回参数结构体
                */
                class FuseFaceResponse : public AbstractModel
                {
                public:
                    FuseFaceResponse();
                    ~FuseFaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RspImgType 为 url 时，返回结果的 url（有效期7天）， RspImgType 为 base64 时返回 base64 数据。
                     * @return FusedImage RspImgType 为 url 时，返回结果的 url（有效期7天）， RspImgType 为 base64 时返回 base64 数据。
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
                     * RspImgType 为 url 时，返回结果的 url（有效期7天）， RspImgType 为 base64 时返回 base64 数据。
                     */
                    std::string m_fusedImage;
                    bool m_fusedImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSEFACERESPONSE_H_
