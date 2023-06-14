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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/UserHostPrivilege.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusterDatabase请求参数结构体
                */
                class CreateClusterDatabaseRequest : public AbstractModel
                {
                public:
                    CreateClusterDatabaseRequest();
                    ~CreateClusterDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取数据库名
                     * @return DbName 数据库名
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名
                     * @param _dbName 数据库名
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取字符集类型
                     * @return CharacterSet 字符集类型
                     * 
                     */
                    std::string GetCharacterSet() const;

                    /**
                     * 设置字符集类型
                     * @param _characterSet 字符集类型
                     * 
                     */
                    void SetCharacterSet(const std::string& _characterSet);

                    /**
                     * 判断参数 CharacterSet 是否已赋值
                     * @return CharacterSet 是否已赋值
                     * 
                     */
                    bool CharacterSetHasBeenSet() const;

                    /**
                     * 获取排序规则
                     * @return CollateRule 排序规则
                     * 
                     */
                    std::string GetCollateRule() const;

                    /**
                     * 设置排序规则
                     * @param _collateRule 排序规则
                     * 
                     */
                    void SetCollateRule(const std::string& _collateRule);

                    /**
                     * 判断参数 CollateRule 是否已赋值
                     * @return CollateRule 是否已赋值
                     * 
                     */
                    bool CollateRuleHasBeenSet() const;

                    /**
                     * 获取授权用户主机权限
                     * @return UserHostPrivileges 授权用户主机权限
                     * 
                     */
                    std::vector<UserHostPrivilege> GetUserHostPrivileges() const;

                    /**
                     * 设置授权用户主机权限
                     * @param _userHostPrivileges 授权用户主机权限
                     * 
                     */
                    void SetUserHostPrivileges(const std::vector<UserHostPrivilege>& _userHostPrivileges);

                    /**
                     * 判断参数 UserHostPrivileges 是否已赋值
                     * @return UserHostPrivileges 是否已赋值
                     * 
                     */
                    bool UserHostPrivilegesHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 数据库名
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 字符集类型
                     */
                    std::string m_characterSet;
                    bool m_characterSetHasBeenSet;

                    /**
                     * 排序规则
                     */
                    std::string m_collateRule;
                    bool m_collateRuleHasBeenSet;

                    /**
                     * 授权用户主机权限
                     */
                    std::vector<UserHostPrivilege> m_userHostPrivileges;
                    bool m_userHostPrivilegesHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_
