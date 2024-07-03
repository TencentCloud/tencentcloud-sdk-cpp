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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDRESPONSE_H_

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
                * ReplaceBackground返回参数结构体
                */
                class ReplaceBackgroundResponse : public AbstractModel
                {
                public:
                    ReplaceBackgroundResponse();
                    ~ReplaceBackgroundResponse() = default;
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
                     * 获取如果 MaskUrl 未传，则返回使用内置商品分割算法得到的 Mask 结果。
                     * @return MaskImage 如果 MaskUrl 未传，则返回使用内置商品分割算法得到的 Mask 结果。
                     * 
                     */
                    std::string GetMaskImage() const;

                    /**
                     * 判断参数 MaskImage 是否已赋值
                     * @return MaskImage 是否已赋值
                     * 
                     */
                    bool MaskImageHasBeenSet() const;

                private:

                    /**
                     * 根据入参 RspImgType 填入不同，返回不同的内容。
如果传入 base64 则返回生成图 Base64 编码。
如果传入 url 则返回的生成图 URL , 有效期1小时，请及时保存。
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * 如果 MaskUrl 未传，则返回使用内置商品分割算法得到的 Mask 结果。
                     */
                    std::string m_maskImage;
                    bool m_maskImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_REPLACEBACKGROUNDRESPONSE_H_
