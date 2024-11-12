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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/EmbeddingData.h>
#include <tencentcloud/hunyuan/v20230901/model/EmbeddingUsage.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetEmbedding返回参数结构体
                */
                class GetEmbeddingResponse : public AbstractModel
                {
                public:
                    GetEmbeddingResponse();
                    ~GetEmbeddingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的 Embedding 信息。
                     * @return Data 返回的 Embedding 信息。
                     * 
                     */
                    std::vector<EmbeddingData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Token 使用计数，按照总 Token 数量收费。
                     * @return Usage Token 使用计数，按照总 Token 数量收费。
                     * 
                     */
                    EmbeddingUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 返回的 Embedding 信息。
                     */
                    std::vector<EmbeddingData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Token 使用计数，按照总 Token 数量收费。
                     */
                    EmbeddingUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGRESPONSE_H_
