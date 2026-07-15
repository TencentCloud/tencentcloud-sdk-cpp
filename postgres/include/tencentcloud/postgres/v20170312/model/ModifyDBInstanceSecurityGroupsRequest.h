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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_

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
                * ModifyDBInstanceSecurityGroups请求参数结构体
                */
                class ModifyDBInstanceSecurityGroupsRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSecurityGroupsRequest();
                    ~ModifyDBInstanceSecurityGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例或只读组要绑定的安全组列表。<br>安全组信息可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来查询。<br><strong>注意：</strong>该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。</p>
                     * @return SecurityGroupIdSet <p>实例或只读组要绑定的安全组列表。<br>安全组信息可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来查询。<br><strong>注意：</strong>该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIdSet() const;

                    /**
                     * 设置<p>实例或只读组要绑定的安全组列表。<br>安全组信息可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来查询。<br><strong>注意：</strong>该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。</p>
                     * @param _securityGroupIdSet <p>实例或只读组要绑定的安全组列表。<br>安全组信息可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来查询。<br><strong>注意：</strong>该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。</p>
                     * 
                     */
                    void SetSecurityGroupIdSet(const std::vector<std::string>& _securityGroupIdSet);

                    /**
                     * 判断参数 SecurityGroupIdSet 是否已赋值
                     * @return SecurityGroupIdSet 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdSetHasBeenSet() const;

                    /**
                     * 获取<p>实例ID，可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询实例关联的安全组，只传DBInstanceId字段。</p>
                     * @return DBInstanceId <p>实例ID，可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询实例关联的安全组，只传DBInstanceId字段。</p>
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置<p>实例ID，可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询实例关联的安全组，只传DBInstanceId字段。</p>
                     * @param _dBInstanceId <p>实例ID，可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询实例关联的安全组，只传DBInstanceId字段。</p>
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
                     * 获取<p>只读组ID，可通过<a href="https://cloud.tencent.com/document/api/409/52599">DescribeReadOnlyGroups</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId。</p>
                     * @return ReadOnlyGroupId <p>只读组ID，可通过<a href="https://cloud.tencent.com/document/api/409/52599">DescribeReadOnlyGroups</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId。</p>
                     * 
                     */
                    std::string GetReadOnlyGroupId() const;

                    /**
                     * 设置<p>只读组ID，可通过<a href="https://cloud.tencent.com/document/api/409/52599">DescribeReadOnlyGroups</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId。</p>
                     * @param _readOnlyGroupId <p>只读组ID，可通过<a href="https://cloud.tencent.com/document/api/409/52599">DescribeReadOnlyGroups</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId。</p>
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
                     * <p>实例或只读组要绑定的安全组列表。<br>安全组信息可以通过调用 <a href="https://cloud.tencent.com/document/api/215/15808">DescribeSecurityGroups</a> 的返回值中的sgId字段来查询。<br><strong>注意：</strong>该入参会全量替换存量已有集合，非增量更新。修改需传入预期的全量集合。</p>
                     */
                    std::vector<std::string> m_securityGroupIdSet;
                    bool m_securityGroupIdSetHasBeenSet;

                    /**
                     * <p>实例ID，可通过<a href="https://cloud.tencent.com/document/api/409/16773">DescribeDBInstances</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询实例关联的安全组，只传DBInstanceId字段。</p>
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * <p>只读组ID，可通过<a href="https://cloud.tencent.com/document/api/409/52599">DescribeReadOnlyGroups</a>接口获取。DBInstanceId、ReadOnlyGroupId、ProxyAddressId至少传一个；如果要查询只读组关联的安全组，只传ReadOnlyGroupId。</p>
                     */
                    std::string m_readOnlyGroupId;
                    bool m_readOnlyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESECURITYGROUPSREQUEST_H_
