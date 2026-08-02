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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 媒资当导入的知识库列表，以及使用的解析模板等详细信息
                */
                class KnowledgeBaseDetail : public AbstractModel
                {
                public:
                    KnowledgeBaseDetail();
                    ~KnowledgeBaseDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>知识库ID</p>
                     * @return KnowledgeBaseId <p>知识库ID</p>
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置<p>知识库ID</p>
                     * @param _knowledgeBaseId <p>知识库ID</p>
                     * 
                     */
                    void SetKnowledgeBaseId(const std::string& _knowledgeBaseId);

                    /**
                     * 判断参数 KnowledgeBaseId 是否已赋值
                     * @return KnowledgeBaseId 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>关联的大模型解析模板</p>
                     * @return Definition <p>关联的大模型解析模板</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>关联的大模型解析模板</p>
                     * @param _definition <p>关联的大模型解析模板</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>入库时间</p>
                     * @return ImportTime <p>入库时间</p>
                     * 
                     */
                    std::string GetImportTime() const;

                    /**
                     * 设置<p>入库时间</p>
                     * @param _importTime <p>入库时间</p>
                     * 
                     */
                    void SetImportTime(const std::string& _importTime);

                    /**
                     * 判断参数 ImportTime 是否已赋值
                     * @return ImportTime 是否已赋值
                     * 
                     */
                    bool ImportTimeHasBeenSet() const;

                private:

                    /**
                     * <p>知识库ID</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>关联的大模型解析模板</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>入库时间</p>
                     */
                    std::string m_importTime;
                    bool m_importTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_KNOWLEDGEBASEDETAIL_H_
