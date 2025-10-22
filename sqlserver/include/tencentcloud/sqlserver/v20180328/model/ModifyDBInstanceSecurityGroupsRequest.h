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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSecurityGroups请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：mssql-c1nl9rpv 或者 mssqlro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：mssql-c1nl9rpv 或者 mssqlro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：mssql-c1nl9rpv 或者 mssqlro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：mssql-c1nl9rpv 或者 mssqlro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 DescribeDBSecurityGroups 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @return SecurityGroupIdSet 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 DescribeDBSecurityGroups 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdSet() const;

                    /**
                     * 设置要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 DescribeDBSecurityGroups 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * @param _securityGroupIdSet 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 DescribeDBSecurityGroups 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     * 
                     */
                    void SetSecurityGroupIdSet(const std::vector<std::string>& _securityGroupIdSet);

                    /**
                     * 判断参数 SecurityGroupIdSet 是否已赋值
                     * @return SecurityGroupIdSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdSetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：mssql-c1nl9rpv 或者 mssqlro-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要修改的安全组 ID 列表，一个或者多个安全组 ID 组成的数组。可通过 DescribeDBSecurityGroups 接口获取。输入的安全组 ID 数组无长度限制。
注意：该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。
                     */
                    std::vector<std::string> m_securityGroupIdSet;
                    bool m_securityGroupIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
