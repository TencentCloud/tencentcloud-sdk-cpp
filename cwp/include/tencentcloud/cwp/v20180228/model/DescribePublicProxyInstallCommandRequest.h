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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPUBLICPROXYINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPUBLICPROXYINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePublicProxyInstallCommand请求参数结构体
                */
                class DescribePublicProxyInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribePublicProxyInstallCommandRequest();
                    ~DescribePublicProxyInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取nginx主机IP列表，逗号分隔
                     * @return Ip nginx主机IP列表，逗号分隔
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置nginx主机IP列表，逗号分隔
                     * @param _ip nginx主机IP列表，逗号分隔
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * nginx主机IP列表，逗号分隔
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPUBLICPROXYINSTALLCOMMANDREQUEST_H_
