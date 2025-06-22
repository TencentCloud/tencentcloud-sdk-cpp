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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_

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
                * 文档分片配置
                */
                class ChunkConfig : public AbstractModel
                {
                public:
                    ChunkConfig();
                    ~ChunkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大分片长度
                     * @return MaxChunkSize 最大分片长度
                     * 
                     */
                    uint64_t GetMaxChunkSize() const;

                    /**
                     * 设置最大分片长度
                     * @param _maxChunkSize 最大分片长度
                     * 
                     */
                    void SetMaxChunkSize(const uint64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                    /**
                     * 获取分隔符列表
                     * @return Delimiters 分隔符列表
                     * 
                     */
                    std::vector<std::string> GetDelimiters() const;

                    /**
                     * 设置分隔符列表
                     * @param _delimiters 分隔符列表
                     * 
                     */
                    void SetDelimiters(const std::vector<std::string>& _delimiters);

                    /**
                     * 判断参数 Delimiters 是否已赋值
                     * @return Delimiters 是否已赋值
                     * 
                     */
                    bool DelimitersHasBeenSet() const;

                    /**
                     * 获取相邻切片重合字符数，需要小于分片长度
                     * @return ChunkOverlap 相邻切片重合字符数，需要小于分片长度
                     * 
                     */
                    uint64_t GetChunkOverlap() const;

                    /**
                     * 设置相邻切片重合字符数，需要小于分片长度
                     * @param _chunkOverlap 相邻切片重合字符数，需要小于分片长度
                     * 
                     */
                    void SetChunkOverlap(const uint64_t& _chunkOverlap);

                    /**
                     * 判断参数 ChunkOverlap 是否已赋值
                     * @return ChunkOverlap 是否已赋值
                     * 
                     */
                    bool ChunkOverlapHasBeenSet() const;

                private:

                    /**
                     * 最大分片长度
                     */
                    uint64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                    /**
                     * 分隔符列表
                     */
                    std::vector<std::string> m_delimiters;
                    bool m_delimitersHasBeenSet;

                    /**
                     * 相邻切片重合字符数，需要小于分片长度
                     */
                    uint64_t m_chunkOverlap;
                    bool m_chunkOverlapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_
