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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATETABLEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PermissionInfo.h>
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
                * CreateTable请求参数结构体
                */
                class CreateTableRequest : public AbstractModel
                {
                public:
                    CreateTableRequest();
                    ~CreateTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据表名；长度不超过96个字符，可以为英文字母、数字、下划线(_)和短横线(-)的组合，且不能以下划线开头
                     * @return TableName 数据表名；长度不超过96个字符，可以为英文字母、数字、下划线(_)和短横线(-)的组合，且不能以下划线开头
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置数据表名；长度不超过96个字符，可以为英文字母、数字、下划线(_)和短横线(-)的组合，且不能以下划线开头
                     * @param _tableName 数据表名；长度不超过96个字符，可以为英文字母、数字、下划线(_)和短横线(-)的组合，且不能以下划线开头
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
                     * 获取FlexDB实例ID，如：tnt-nl7hjzasw
                     * @return Tag FlexDB实例ID，如：tnt-nl7hjzasw
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置FlexDB实例ID，如：tnt-nl7hjzasw
                     * @param _tag FlexDB实例ID，如：tnt-nl7hjzasw
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
                     * 获取FlexDB数据库权限信息
                     * @return PermissionInfo FlexDB数据库权限信息
                     * 
                     */
                    PermissionInfo GetPermissionInfo() const;

                    /**
                     * 设置FlexDB数据库权限信息
                     * @param _permissionInfo FlexDB数据库权限信息
                     * 
                     */
                    void SetPermissionInfo(const PermissionInfo& _permissionInfo);

                    /**
                     * 判断参数 PermissionInfo 是否已赋值
                     * @return PermissionInfo 是否已赋值
                     * 
                     */
                    bool PermissionInfoHasBeenSet() const;

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
                     * 数据表名；长度不超过96个字符，可以为英文字母、数字、下划线(_)和短横线(-)的组合，且不能以下划线开头
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * FlexDB实例ID，如：tnt-nl7hjzasw
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * FlexDB数据库权限信息
                     */
                    PermissionInfo m_permissionInfo;
                    bool m_permissionInfoHasBeenSet;

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

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATETABLEREQUEST_H_
