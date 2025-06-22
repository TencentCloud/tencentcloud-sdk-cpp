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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/Chunk.h>
#include <tencentcloud/es/v20250101/model/Usage.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * ChunkDocument返回参数结构体
                */
                class ChunkDocumentResponse : public AbstractModel
                {
                public:
                    ChunkDocumentResponse();
                    ~ChunkDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Chunks 无
                     * 
                     */
                    std::vector<Chunk> GetChunks() const;

                    /**
                     * 判断参数 Chunks 是否已赋值
                     * @return Chunks 是否已赋值
                     * 
                     */
                    bool ChunksHasBeenSet() const;

                    /**
                     * 获取token消耗量
                     * @return Usage token消耗量
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::vector<Chunk> m_chunks;
                    bool m_chunksHasBeenSet;

                    /**
                     * token消耗量
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKDOCUMENTRESPONSE_H_
