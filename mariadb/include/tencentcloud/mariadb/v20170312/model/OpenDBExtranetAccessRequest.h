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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * OpenDBExtranetAccess请求参数结构体
                */
                class OpenDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    OpenDBExtranetAccessRequest();
                    ~OpenDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待开放外网访问的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @return InstanceId 待开放外网访问的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待开放外网访问的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     * @param _instanceId 待开放外网访问的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
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
                     * 获取是否为IPV6网络类型实例，0:否，1:是，不传默认为0表示实例为IPV4网络类型
                     * @return Ipv6Flag 是否为IPV6网络类型实例，0:否，1:是，不传默认为0表示实例为IPV4网络类型
                     * 
                     */
                    int64_t GetIpv6Flag() const;

                    /**
                     * 设置是否为IPV6网络类型实例，0:否，1:是，不传默认为0表示实例为IPV4网络类型
                     * @param _ipv6Flag 是否为IPV6网络类型实例，0:否，1:是，不传默认为0表示实例为IPV4网络类型
                     * 
                     */
                    void SetIpv6Flag(const int64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                private:

                    /**
                     * 待开放外网访问的实例ID。形如：tdsql-ow728lmc，可以通过 DescribeDBInstances 查询实例详情获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否为IPV6网络类型实例，0:否，1:是，不传默认为0表示实例为IPV4网络类型
                     */
                    int64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
