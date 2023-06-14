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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * TextDetect返回参数结构体
                */
                class TextDetectResponse : public AbstractModel
                {
                public:
                    TextDetectResponse();
                    ~TextDetectResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图片中是否包含文字。
                     * @return HasText 图片中是否包含文字。
                     * 
                     */
                    bool GetHasText() const;

                    /**
                     * 判断参数 HasText 是否已赋值
                     * @return HasText 是否已赋值
                     * 
                     */
                    bool HasTextHasBeenSet() const;

                private:

                    /**
                     * 图片中是否包含文字。
                     */
                    bool m_hasText;
                    bool m_hasTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_TEXTDETECTRESPONSE_H_
