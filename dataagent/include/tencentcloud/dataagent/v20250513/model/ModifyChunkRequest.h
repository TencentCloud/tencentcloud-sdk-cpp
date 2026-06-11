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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYCHUNKREQUEST_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYCHUNKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyChunk请求参数结构体
                */
                class ModifyChunkRequest : public AbstractModel
                {
                public:
                    ModifyChunkRequest();
                    ~ModifyChunkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>文件ID</p>
                     * @return FileId <p>文件ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件ID</p>
                     * @param _fileId <p>文件ID</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>切片ID</p>
                     * @return ChunkId <p>切片ID</p>
                     * 
                     */
                    std::string GetChunkId() const;

                    /**
                     * 设置<p>切片ID</p>
                     * @param _chunkId <p>切片ID</p>
                     * 
                     */
                    void SetChunkId(const std::string& _chunkId);

                    /**
                     * 判断参数 ChunkId 是否已赋值
                     * @return ChunkId 是否已赋值
                     * 
                     */
                    bool ChunkIdHasBeenSet() const;

                    /**
                     * 获取<p>编辑后的文本</p>
                     * @return Content <p>编辑后的文本</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>编辑后的文本</p>
                     * @param _content <p>编辑后的文本</p>
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
                     * 获取<p>分段概要</p>
                     * @return Summary <p>分段概要</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>分段概要</p>
                     * @param _summary <p>分段概要</p>
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
                     * 获取<p>知识库id</p>
                     * @return KnowledgeBaseId <p>知识库id</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>知识库id</p>
                     * @param _knowledgeBaseId <p>知识库id</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>文件ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>切片ID</p>
                     */
                    std::string m_chunkId;
                    bool m_chunkIdHasBeenSet;

                    /**
                     * <p>编辑后的文本</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>分段概要</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>知识库id</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_MODIFYCHUNKREQUEST_H_
