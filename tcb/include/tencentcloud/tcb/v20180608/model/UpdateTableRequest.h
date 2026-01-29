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
                     * 获取表名
                     * @return TableName 表名
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名
                     * @param _tableName 表名
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
                     * 获取FlexDB实例ID
                     * @return Tag FlexDB实例ID
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置FlexDB实例ID
                     * @param _tag FlexDB实例ID
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
                     * 获取待删除索引信息
                     * @return DropIndexes 待删除索引信息
                     * 
                     */
                    std::vector<DropIndex> GetDropIndexes() const;

                    /**
                     * 设置待删除索引信息
                     * @param _dropIndexes 待删除索引信息
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
                     * 获取待创建索引信息
                     * @return CreateIndexes 待创建索引信息
                     * 
                     */
                    std::vector<CreateIndex> GetCreateIndexes() const;

                    /**
                     * 设置待创建索引信息
                     * @param _createIndexes 待创建索引信息
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
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
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
                     * 获取MongoDB连接器配置
                     * @return MongoConnector MongoDB连接器配置
                     * 
                     */
                    MongoConnector GetMongoConnector() const;

                    /**
                     * 设置MongoDB连接器配置
                     * @param _mongoConnector MongoDB连接器配置
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
                     * 表名
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * FlexDB实例ID
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 待删除索引信息
                     */
                    std::vector<DropIndex> m_dropIndexes;
                    bool m_dropIndexesHasBeenSet;

                    /**
                     * 待创建索引信息
                     */
                    std::vector<CreateIndex> m_createIndexes;
                    bool m_createIndexesHasBeenSet;

                    /**
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * MongoDB连接器配置
                     */
                    MongoConnector m_mongoConnector;
                    bool m_mongoConnectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_UPDATETABLEREQUEST_H_
