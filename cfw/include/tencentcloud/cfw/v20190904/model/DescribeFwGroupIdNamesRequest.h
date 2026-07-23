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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPIDNAMESREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPIDNAMESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeFwGroupIdNames请求参数结构体
                */
                class DescribeFwGroupIdNamesRequest : public AbstractModel
                {
                public:
                    DescribeFwGroupIdNamesRequest();
                    ~DescribeFwGroupIdNamesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Ip版本，0：IPv4，1：IPv6，默认为IPv4</p>
                     * @return IpVersion <p>Ip版本，0：IPv4，1：IPv6，默认为IPv4</p>
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置<p>Ip版本，0：IPv4，1：IPv6，默认为IPv4</p>
                     * @param _ipVersion <p>Ip版本，0：IPv4，1：IPv6，默认为IPv4</p>
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * <p>Ip版本，0：IPv4，1：IPv6，默认为IPv4</p>
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWGROUPIDNAMESREQUEST_H_
