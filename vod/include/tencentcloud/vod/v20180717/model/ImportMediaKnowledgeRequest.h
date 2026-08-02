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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ImportMediaKnowledge请求参数结构体
                */
                class ImportMediaKnowledgeRequest : public AbstractModel
                {
                public:
                    ImportMediaKnowledgeRequest();
                    ~ImportMediaKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * @return FileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     * @param _fileId <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
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
                     * 获取<p>大模型理解模板的唯一标识</p>
                     * @return Definition <p>大模型理解模板的唯一标识</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>大模型理解模板的唯一标识</p>
                     * @param _definition <p>大模型理解模板的唯一标识</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>知识库ID列表，留空时将使用默认知识库</p>
                     * @return KnowledgeBaseIds <p>知识库ID列表，留空时将使用默认知识库</p>
                     * 
                     */
                    std::vector<std::string> GetKnowledgeBaseIds() const;

                    /**
                     * 设置<p>知识库ID列表，留空时将使用默认知识库</p>
                     * @param _knowledgeBaseIds <p>知识库ID列表，留空时将使用默认知识库</p>
                     * 
                     */
                    void SetKnowledgeBaseIds(const std::vector<std::string>& _knowledgeBaseIds);

                    /**
                     * 判断参数 KnowledgeBaseIds 是否已赋值
                     * @return KnowledgeBaseIds 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdsHasBeenSet() const;

                    /**
                     * 获取<p>需要导入知识库任务类型，可选值有：</p><ul><li>AiAnalysis.DescriptionTask</li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @return ImportTasks <p>需要导入知识库任务类型，可选值有：</p><ul><li>AiAnalysis.DescriptionTask</li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @deprecated
                     */
                    std::vector<std::string> GetImportTasks() const;

                    /**
                     * 设置<p>需要导入知识库任务类型，可选值有：</p><ul><li>AiAnalysis.DescriptionTask</li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @param _importTasks <p>需要导入知识库任务类型，可选值有：</p><ul><li>AiAnalysis.DescriptionTask</li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @deprecated
                     */
                    void SetImportTasks(const std::vector<std::string>& _importTasks);

                    /**
                     * 判断参数 ImportTasks 是否已赋值
                     * @return ImportTasks 是否已赋值
                     * @deprecated
                     */
                    bool ImportTasksHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 <a href="/document/product/266/7830">视频上传完成事件通知</a> 或 <a href="https://console.cloud.tencent.com/vod/media">云点播控制台</a> 获取该字段。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>大模型理解模板的唯一标识</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>知识库ID列表，留空时将使用默认知识库</p>
                     */
                    std::vector<std::string> m_knowledgeBaseIds;
                    bool m_knowledgeBaseIdsHasBeenSet;

                    /**
                     * <p>需要导入知识库任务类型，可选值有：</p><ul><li>AiAnalysis.DescriptionTask</li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     */
                    std::vector<std::string> m_importTasks;
                    bool m_importTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_
