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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHCDBPROXYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHCDBPROXYREQUEST_H_

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
                * SwitchCDBProxy请求参数结构体
                */
                class SwitchCDBProxyRequest : public AbstractModel
                {
                public:
                    SwitchCDBProxyRequest();
                    ~SwitchCDBProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
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
                     * 获取数据库代理 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @return ProxyGroupId 数据库代理 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置数据库代理 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @param _proxyGroupId 数据库代理 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据库代理 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_SWITCHCDBPROXYREQUEST_H_
