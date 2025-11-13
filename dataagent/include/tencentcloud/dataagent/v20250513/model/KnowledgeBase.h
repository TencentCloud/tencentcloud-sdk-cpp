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

#ifndef TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGEBASE_H_
#define TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGEBASE_H_

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
                * 知识库信息
                */
                class KnowledgeBase : public AbstractModel
                {
                public:
                    KnowledgeBase();
                    ~KnowledgeBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识库id
                     * @return KnowledgeBaseId 知识库id
                     * 
                     */
                    std::string GetKnowledgeBaseId() const;

                    /**
                     * 设置知识库id
                     * @param _knowledgeBaseId 知识库id
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
                     * 获取知识库名称

                     * @return KnowledgeBaseName 知识库名称

                     * 
                     */
                    std::string GetKnowledgeBaseName() const;

                    /**
                     * 设置知识库名称

                     * @param _knowledgeBaseName 知识库名称

                     * 
                     */
                    void SetKnowledgeBaseName(const std::string& _knowledgeBaseName);

                    /**
                     * 判断参数 KnowledgeBaseName 是否已赋值
                     * @return KnowledgeBaseName 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseNameHasBeenSet() const;

                    /**
                     * 获取知识库描述
                     * @return KnowledgeBaseDesc 知识库描述
                     * 
                     */
                    std::string GetKnowledgeBaseDesc() const;

                    /**
                     * 设置知识库描述
                     * @param _knowledgeBaseDesc 知识库描述
                     * 
                     */
                    void SetKnowledgeBaseDesc(const std::string& _knowledgeBaseDesc);

                    /**
                     * 判断参数 KnowledgeBaseDesc 是否已赋值
                     * @return KnowledgeBaseDesc 是否已赋值
                     * 
                     */
                    bool KnowledgeBaseDescHasBeenSet() const;

                    /**
                     * 获取创建者subuin
                     * @return Creator 创建者subuin
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建者subuin
                     * @param _creator 创建者subuin
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取文件数量
                     * @return FileNum 文件数量
                     * 
                     */
                    int64_t GetFileNum() const;

                    /**
                     * 设置文件数量
                     * @param _fileNum 文件数量
                     * 
                     */
                    void SetFileNum(const int64_t& _fileNum);

                    /**
                     * 判断参数 FileNum 是否已赋值
                     * @return FileNum 是否已赋值
                     * 
                     */
                    bool FileNumHasBeenSet() const;

                    /**
                     * 获取知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展
                     * @return DatasourceIds 知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展
                     * 
                     */
                    std::vector<std::string> GetDatasourceIds() const;

                    /**
                     * 设置知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展
                     * @param _datasourceIds 知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展
                     * 
                     */
                    void SetDatasourceIds(const std::vector<std::string>& _datasourceIds);

                    /**
                     * 判断参数 DatasourceIds 是否已赋值
                     * @return DatasourceIds 是否已赋值
                     * 
                     */
                    bool DatasourceIdsHasBeenSet() const;

                private:

                    /**
                     * 知识库id
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * 知识库名称

                     */
                    std::string m_knowledgeBaseName;
                    bool m_knowledgeBaseNameHasBeenSet;

                    /**
                     * 知识库描述
                     */
                    std::string m_knowledgeBaseDesc;
                    bool m_knowledgeBaseDescHasBeenSet;

                    /**
                     * 创建者subuin
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 文件数量
                     */
                    int64_t m_fileNum;
                    bool m_fileNumHasBeenSet;

                    /**
                     * 知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展
                     */
                    std::vector<std::string> m_datasourceIds;
                    bool m_datasourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGEBASE_H_
