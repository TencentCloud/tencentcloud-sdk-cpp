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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAccountPrivileges请求参数结构体
                */
                class DescribeAccountPrivilegesRequest : public AbstractModel
                {
                public:
                    DescribeAccountPrivilegesRequest();
                    ~DescribeAccountPrivilegesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取数据库的账号名称。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * @return User 数据库的账号名称。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置数据库的账号名称。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * @param _user 数据库的账号名称。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取数据库的账号域名。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * @return Host 数据库的账号域名。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置数据库的账号域名。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * @param _host 数据库的账号域名。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cdb-c1nl9rpv，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库的账号名称。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 数据库的账号域名。可通过 [DescribeAccounts](https://cloud.tencent.com/document/api/236/17499) 接口获取。
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTPRIVILEGESREQUEST_H_
