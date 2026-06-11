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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHUNK_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHUNK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dataagent
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * 文件分片
                */
                class Chunk : public AbstractModel
                {
                public:
                    Chunk();
                    ~Chunk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>切片ID</p>
                     * @return Id <p>切片ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>切片ID</p>
                     * @param _id <p>切片ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>切片内容</p>
                     * @return Content <p>切片内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>切片内容</p>
                     * @param _content <p>切片内容</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>切片的字数</p>
                     * @return Size <p>切片的字数</p>
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>切片的字数</p>
                     * @param _size <p>切片的字数</p>
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>切片概要</p>
                     * @return Summary <p>切片概要</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>切片概要</p>
                     * @param _summary <p>切片概要</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>分段类型</p><p>枚举值：</p><ul><li>0： 自动分段</li><li>1： 新建分段</li></ul>
                     * @return ChunkSource <p>分段类型</p><p>枚举值：</p><ul><li>0： 自动分段</li><li>1： 新建分段</li></ul>
                     * 
                     */
                    int64_t GetChunkSource() const;

                    /**
                     * 设置<p>分段类型</p><p>枚举值：</p><ul><li>0： 自动分段</li><li>1： 新建分段</li></ul>
                     * @param _chunkSource <p>分段类型</p><p>枚举值：</p><ul><li>0： 自动分段</li><li>1： 新建分段</li></ul>
                     * 
                     */
                    void SetChunkSource(const int64_t& _chunkSource);

                    /**
                     * 判断参数 ChunkSource 是否已赋值
                     * @return ChunkSource 是否已赋值
                     * 
                     */
                    bool ChunkSourceHasBeenSet() const;

                private:

                    /**
                     * <p>切片ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>切片内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>切片的字数</p>
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>切片概要</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>分段类型</p><p>枚举值：</p><ul><li>0： 自动分段</li><li>1： 新建分段</li></ul>
                     */
                    int64_t m_chunkSource;
                    bool m_chunkSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_CHUNK_H_
