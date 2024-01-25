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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/L4Proxy.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeL4Proxy返回参数结构体
                */
                class DescribeL4ProxyResponse : public AbstractModel
                {
                public:
                    DescribeL4ProxyResponse();
                    ~DescribeL4ProxyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取四层代理实例的数量。
                     * @return TotalCount 四层代理实例的数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取四层代理实例列表。
                     * @return L4Proxies 四层代理实例列表。
                     * 
                     */
                    std::vector<L4Proxy> GetL4Proxies() const;

                    /**
                     * 判断参数 L4Proxies 是否已赋值
                     * @return L4Proxies 是否已赋值
                     * 
                     */
                    bool L4ProxiesHasBeenSet() const;

                private:

                    /**
                     * 四层代理实例的数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 四层代理实例列表。
                     */
                    std::vector<L4Proxy> m_l4Proxies;
                    bool m_l4ProxiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEL4PROXYRESPONSE_H_
