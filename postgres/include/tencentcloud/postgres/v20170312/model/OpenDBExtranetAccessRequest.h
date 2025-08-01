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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_

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
                * OpenDBExtranetAccess请求参数结构体
                */
                class OpenDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    OpenDBExtranetAccessRequest();
                    ~OpenDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-hez4fh0v。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取。
                     * @return DBInstanceId 实例ID，形如postgres-hez4fh0v。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-hez4fh0v。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取。
                     * @param _dBInstanceId 实例ID，形如postgres-hez4fh0v。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取。
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
                     * 获取是否开通Ipv6外网，1：是，0：否
默认值：0
                     * @return IsIpv6 是否开通Ipv6外网，1：是，0：否
默认值：0
                     * 
                     */
                    int64_t GetIsIpv6() const;

                    /**
                     * 设置是否开通Ipv6外网，1：是，0：否
默认值：0
                     * @param _isIpv6 是否开通Ipv6外网，1：是，0：否
默认值：0
                     * 
                     */
                    void SetIsIpv6(const int64_t& _isIpv6);

                    /**
                     * 判断参数 IsIpv6 是否已赋值
                     * @return IsIpv6 是否已赋值
                     * 
                     */
                    bool IsIpv6HasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如postgres-hez4fh0v。可通过[DescribeDBInstances](https://cloud.tencent.com/document/api/409/16773)接口获取。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 是否开通Ipv6外网，1：是，0：否
默认值：0
                     */
                    int64_t m_isIpv6;
                    bool m_isIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_OPENDBEXTRANETACCESSREQUEST_H_
