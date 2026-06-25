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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSERESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSERESPONSE_H_

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
                * MultimodalDocParse返回参数结构体
                */
                class MultimodalDocParseResponse : public AbstractModel
                {
                public:
                    MultimodalDocParseResponse();
                    ~MultimodalDocParseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟。压缩包内包含*.md、*.json以及images文件夹。</p>
                     * @return ResultUrl <p>结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟。压缩包内包含*.md、*.json以及images文件夹。</p>
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                private:

                    /**
                     * <p>结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟。压缩包内包含*.md、*.json以及images文件夹。</p>
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MULTIMODALDOCPARSERESPONSE_H_
