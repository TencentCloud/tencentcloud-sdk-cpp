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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/MultiModalEmbeddingData.h>
#include <tencentcloud/es/v20250101/model/MultiModalUsage.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetMultiModalEmbedding返回参数结构体
                */
                class GetMultiModalEmbeddingResponse : public AbstractModel
                {
                public:
                    GetMultiModalEmbeddingResponse();
                    ~GetMultiModalEmbeddingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取多模态特征向量输出
                     * @return Data 多模态特征向量输出
                     * 
                     */
                    MultiModalEmbeddingData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取消耗的tokens和输入图片数量
                     * @return Usage 消耗的tokens和输入图片数量
                     * 
                     */
                    MultiModalUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 多模态特征向量输出
                     */
                    MultiModalEmbeddingData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 消耗的tokens和输入图片数量
                     */
                    MultiModalUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETMULTIMODALEMBEDDINGRESPONSE_H_
