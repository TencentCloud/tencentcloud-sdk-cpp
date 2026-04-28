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
#include <tencentcloud/dataagent/v20250513/model/KnowledgeTaskConfig.h>


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

                    /**
                     * 获取<p>知识库名称</p>
                     * @return KnowledgeBaseName <p>知识库名称</p>
                     * 
                     */
                    std::string GetKnowledgeBaseName() const;

                    /**
                     * 设置<p>知识库名称</p>
                     * @param _knowledgeBaseName <p>知识库名称</p>
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
                     * 获取<p>知识库描述</p>
                     * @return KnowledgeBaseDesc <p>知识库描述</p>
                     * 
                     */
                    std::string GetKnowledgeBaseDesc() const;

                    /**
                     * 设置<p>知识库描述</p>
                     * @param _knowledgeBaseDesc <p>知识库描述</p>
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
                     * 获取<p>创建者subuin</p>
                     * @return Creator <p>创建者subuin</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建者subuin</p>
                     * @param _creator <p>创建者subuin</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>文件数量</p>
                     * @return FileNum <p>文件数量</p>
                     * 
                     */
                    int64_t GetFileNum() const;

                    /**
                     * 设置<p>文件数量</p>
                     * @param _fileNum <p>文件数量</p>
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
                     * 获取<p>知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展</p>
                     * @return DatasourceIds <p>知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展</p>
                     * 
                     */
                    std::vector<std::string> GetDatasourceIds() const;

                    /**
                     * 设置<p>知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展</p>
                     * @param _datasourceIds <p>知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展</p>
                     * 
                     */
                    void SetDatasourceIds(const std::vector<std::string>& _datasourceIds);

                    /**
                     * 判断参数 DatasourceIds 是否已赋值
                     * @return DatasourceIds 是否已赋值
                     * 
                     */
                    bool DatasourceIdsHasBeenSet() const;

                    /**
                     * 获取<p>知识库任务配置</p>
                     * @return Config <p>知识库任务配置</p>
                     * 
                     */
                    KnowledgeTaskConfig GetConfig() const;

                    /**
                     * 设置<p>知识库任务配置</p>
                     * @param _config <p>知识库任务配置</p>
                     * 
                     */
                    void SetConfig(const KnowledgeTaskConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                private:

                    /**
                     * <p>知识库id</p>
                     */
                    std::string m_knowledgeBaseId;
                    bool m_knowledgeBaseIdHasBeenSet;

                    /**
                     * <p>知识库名称</p>
                     */
                    std::string m_knowledgeBaseName;
                    bool m_knowledgeBaseNameHasBeenSet;

                    /**
                     * <p>知识库描述</p>
                     */
                    std::string m_knowledgeBaseDesc;
                    bool m_knowledgeBaseDescHasBeenSet;

                    /**
                     * <p>创建者subuin</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>文件数量</p>
                     */
                    int64_t m_fileNum;
                    bool m_fileNumHasBeenSet;

                    /**
                     * <p>知识库关联的数据库列表，目前是只绑定一个数据源，数组预留拓展</p>
                     */
                    std::vector<std::string> m_datasourceIds;
                    bool m_datasourceIdsHasBeenSet;

                    /**
                     * <p>知识库任务配置</p>
                     */
                    KnowledgeTaskConfig m_config;
                    bool m_configHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATAAGENT_V20250513_MODEL_KNOWLEDGEBASE_H_
