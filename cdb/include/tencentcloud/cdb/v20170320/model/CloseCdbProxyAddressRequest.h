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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYADDRESSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYADDRESSREQUEST_H_

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
                * CloseCdbProxyAddress请求参数结构体
                */
                class CloseCdbProxyAddressRequest : public AbstractModel
                {
                public:
                    CloseCdbProxyAddressRequest();
                    ~CloseCdbProxyAddressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理组 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @return ProxyGroupId 代理组 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @param _proxyGroupId 代理组 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     * 
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取代理组地址 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @return ProxyAddressId 代理组地址 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置代理组地址 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * @param _proxyAddressId 代理组地址 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                private:

                    /**
                     * 代理组 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理组地址 ID。可通过 [DescribeCdbProxyInfo](https://cloud.tencent.com/document/api/236/90585) 接口获取。
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLOSECDBPROXYADDRESSREQUEST_H_
