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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTRESPONSE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dataagent/v20250513/model/Chunk.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryChunkList返回参数结构体
                */
                class QueryChunkListResponse : public AbstractModel
                {
                public:
                    QueryChunkListResponse();
                    ~QueryChunkListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总数</p>
                     * @return Total <p>总数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取<p>文档的自动分段数</p>
                     * @return AutoTotal <p>文档的自动分段数</p>
                     * 
                     */
                    int64_t GetAutoTotal() const;

                    /**
                     * 判断参数 AutoTotal 是否已赋值
                     * @return AutoTotal 是否已赋值
                     * 
                     */
                    bool AutoTotalHasBeenSet() const;

                    /**
                     * 获取<p>文档的手动新建分段数</p>
                     * @return ManualTotal <p>文档的手动新建分段数</p>
                     * 
                     */
                    int64_t GetManualTotal() const;

                    /**
                     * 判断参数 ManualTotal 是否已赋值
                     * @return ManualTotal 是否已赋值
                     * 
                     */
                    bool ManualTotalHasBeenSet() const;

                    /**
                     * 获取<p>分片信息</p>
                     * @return Chunks <p>分片信息</p>
                     * 
                     */
                    std::vector<Chunk> GetChunks() const;

                    /**
                     * 判断参数 Chunks 是否已赋值
                     * @return Chunks 是否已赋值
                     * 
                     */
                    bool ChunksHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>文档的自动分段数</p>
                     */
                    int64_t m_autoTotal;
                    bool m_autoTotalHasBeenSet;

                    /**
                     * <p>文档的手动新建分段数</p>
                     */
                    int64_t m_manualTotal;
                    bool m_manualTotalHasBeenSet;

                    /**
                     * <p>分片信息</p>
                     */
                    std::vector<Chunk> m_chunks;
                    bool m_chunksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_QUERYCHUNKLISTRESPONSE_H_
