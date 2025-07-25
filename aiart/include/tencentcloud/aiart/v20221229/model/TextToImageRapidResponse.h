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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * TextToImageRapid返回参数结构体
                */
                class TextToImageRapidResponse : public AbstractModel
                {
                public:
                    TextToImageRapidResponse();
                    ~TextToImageRapidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取根据入参 RspImgType 填入不同，返回不同的内容。
如果传入 base64 则返回生成图 Base64 编码。
如果传入 url 则返回的生成图 URL , 有效期1小时，请及时保存。
                     * @return ResultImage 根据入参 RspImgType 填入不同，返回不同的内容。
如果传入 base64 则返回生成图 Base64 编码。
如果传入 url 则返回的生成图 URL , 有效期1小时，请及时保存。
                     * 
                     */
                    std::string GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     * 
                     */
                    bool ResultImageHasBeenSet() const;

                    /**
                     * 获取Seed
                     * @return Seed Seed
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                private:

                    /**
                     * 根据入参 RspImgType 填入不同，返回不同的内容。
如果传入 base64 则返回生成图 Base64 编码。
如果传入 url 则返回的生成图 URL , 有效期1小时，请及时保存。
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * Seed
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_TEXTTOIMAGERAPIDRESPONSE_H_
