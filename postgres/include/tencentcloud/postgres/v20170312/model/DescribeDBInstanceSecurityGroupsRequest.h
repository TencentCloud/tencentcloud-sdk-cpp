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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceSecurityGroups请求参数结构体
                */
                class DescribeDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceSecurityGroupsRequest();
                    ~DescribeDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果都传，忽略ReadOnlyGroupId
                     * @return DBInstanceId 实例ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果都传，忽略ReadOnlyGroupId
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果都传，忽略ReadOnlyGroupId
                     * @param _dBInstanceId 实例ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果都传，忽略ReadOnlyGroupId
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取只读组ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId
                     * @return ReadOnlyGroupId 只读组ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置只读组ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId
                     * @param _readOnlyGroupId 只读组ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId
                     * 
                     */
                    void SetReadOnlyGroupId(const std::string& _readOnlyGroupId);

                    /**
                     * 判断参数 ReadOnlyGroupId 是否已赋值
                     * @return ReadOnlyGroupId 是否已赋值
                     * 
                     */
                    bool ReadOnlyGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果都传，忽略ReadOnlyGroupId
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 只读组ID，DBInstanceId和ReadOnlyGroupId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDBINSTANCESECURITYGROUPSREQUEST_H_
