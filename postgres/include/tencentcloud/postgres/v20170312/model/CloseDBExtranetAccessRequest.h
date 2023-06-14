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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBEXTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBEXTRANETACCESSREQUEST_H_

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
                * CloseDBExtranetAccess请求参数结构体
                */
                class CloseDBExtranetAccessRequest : public AbstractModel
                {
                public:
                    CloseDBExtranetAccessRequest();
                    ~CloseDBExtranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如postgres-6r233v55
                     * @return DBInstanceId 实例ID，形如postgres-6r233v55
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID，形如postgres-6r233v55
                     * @param _dBInstanceId 实例ID，形如postgres-6r233v55
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
                     * 获取是否关闭Ipv6外网，1：是，0：否
                     * @return IsIpv6 是否关闭Ipv6外网，1：是，0：否
                     * 
                     */
                    int64_t GetIsIpv6() const;

                    /**
                     * 设置是否关闭Ipv6外网，1：是，0：否
                     * @param _isIpv6 是否关闭Ipv6外网，1：是，0：否
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
                     * 实例ID，形如postgres-6r233v55
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 是否关闭Ipv6外网，1：是，0：否
                     */
                    int64_t m_isIpv6;
                    bool m_isIpv6HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLOSEDBEXTRANETACCESSREQUEST_H_
