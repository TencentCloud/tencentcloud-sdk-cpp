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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALUSAGE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * 多模态向量化消耗tokens和images数量
                */
                class MultiModalUsage : public AbstractModel
                {
                public:
                    MultiModalUsage();
                    ~MultiModalUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消耗tokens
                     * @return TotalTokens 消耗tokens
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置消耗tokens
                     * @param _totalTokens 消耗tokens
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取输入图片数量
                     * @return TotalImages 输入图片数量
                     * 
                     */
                    uint64_t GetTotalImages() const;

                    /**
                     * 设置输入图片数量
                     * @param _totalImages 输入图片数量
                     * 
                     */
                    void SetTotalImages(const uint64_t& _totalImages);

                    /**
                     * 判断参数 TotalImages 是否已赋值
                     * @return TotalImages 是否已赋值
                     * 
                     */
                    bool TotalImagesHasBeenSet() const;

                private:

                    /**
                     * 消耗tokens
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * 输入图片数量
                     */
                    uint64_t m_totalImages;
                    bool m_totalImagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_MULTIMODALUSAGE_H_
