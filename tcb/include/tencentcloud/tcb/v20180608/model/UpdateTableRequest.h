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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_UPDATETABLEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_UPDATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/DropIndex.h>
#include <tencentcloud/tcb/v20180608/model/CreateIndex.h>
#include <tencentcloud/tcb/v20180608/model/MongoConnector.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * UpdateTable请求参数结构体
                */
                class UpdateTableRequest : public AbstractModel
                {
                public:
                    UpdateTableRequest();
                    ~UpdateTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>表名</p>
                     * @return TableName <p>表名</p>
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置<p>表名</p>
                     * @param _tableName <p>表名</p>
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取<p>FlexDB实例ID</p>
                     * @return Tag <p>FlexDB实例ID</p>
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置<p>FlexDB实例ID</p>
                     * @param _tag <p>FlexDB实例ID</p>
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>待删除索引信息</p>
                     * @return DropIndexes <p>待删除索引信息</p>
                     * 
                     */
                    std::vector<DropIndex> GetDropIndexes() const;

                    /**
                     * 设置<p>待删除索引信息</p>
                     * @param _dropIndexes <p>待删除索引信息</p>
                     * 
                     */
                    void SetDropIndexes(const std::vector<DropIndex>& _dropIndexes);

                    /**
                     * 判断参数 DropIndexes 是否已赋值
                     * @return DropIndexes 是否已赋值
                     * 
                     */
                    bool DropIndexesHasBeenSet() const;

                    /**
                     * 获取<p>待创建索引信息</p>
                     * @return CreateIndexes <p>待创建索引信息</p>
                     * 
                     */
                    std::vector<CreateIndex> GetCreateIndexes() const;

                    /**
                     * 设置<p>待创建索引信息</p>
                     * @param _createIndexes <p>待创建索引信息</p>
                     * 
                     */
                    void SetCreateIndexes(const std::vector<CreateIndex>& _createIndexes);

                    /**
                     * 判断参数 CreateIndexes 是否已赋值
                     * @return CreateIndexes 是否已赋值
                     * 
                     */
                    bool CreateIndexesHasBeenSet() const;

                    /**
                     * 获取<p>云开发环境ID</p>
                     * @return EnvId <p>云开发环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>云开发环境ID</p>
                     * @param _envId <p>云开发环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>MongoDB连接器配置</p>
                     * @return MongoConnector <p>MongoDB连接器配置</p>
                     * 
                     */
                    MongoConnector GetMongoConnector() const;

                    /**
                     * 设置<p>MongoDB连接器配置</p>
                     * @param _mongoConnector <p>MongoDB连接器配置</p>
                     * 
                     */
                    void SetMongoConnector(const MongoConnector& _mongoConnector);

                    /**
                     * 判断参数 MongoConnector 是否已赋值
                     * @return MongoConnector 是否已赋值
                     * 
                     */
                    bool MongoConnectorHasBeenSet() const;

                private:

                    /**
                     * <p>表名</p>
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * <p>FlexDB实例ID</p>
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>待删除索引信息</p>
                     */
                    std::vector<DropIndex> m_dropIndexes;
                    bool m_dropIndexesHasBeenSet;

                    /**
                     * <p>待创建索引信息</p>
                     */
                    std::vector<CreateIndex> m_createIndexes;
                    bool m_createIndexesHasBeenSet;

                    /**
                     * <p>云开发环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>MongoDB连接器配置</p>
                     */
                    MongoConnector m_mongoConnector;
                    bool m_mongoConnectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPDATETABLEREQUEST_H_
