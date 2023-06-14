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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSDESCREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSDESCREQUEST_H_

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
                * ModifyCdbProxyAddressDesc请求参数结构体
                */
                class ModifyCdbProxyAddressDescRequest : public AbstractModel
                {
                public:
                    ModifyCdbProxyAddressDescRequest();
                    ~ModifyCdbProxyAddressDescRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理组ID
                     * @return ProxyGroupId 代理组ID
                     * 
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
                     * @param _proxyGroupId 代理组ID
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
                     * 获取代理组地址ID
                     * @return ProxyAddressId 代理组地址ID
                     * 
                     */
                    std::string GetProxyAddressId() const;

                    /**
                     * 设置代理组地址ID
                     * @param _proxyAddressId 代理组地址ID
                     * 
                     */
                    void SetProxyAddressId(const std::string& _proxyAddressId);

                    /**
                     * 判断参数 ProxyAddressId 是否已赋值
                     * @return ProxyAddressId 是否已赋值
                     * 
                     */
                    bool ProxyAddressIdHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                private:

                    /**
                     * 代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 代理组地址ID
                     */
                    std::string m_proxyAddressId;
                    bool m_proxyAddressIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSDESCREQUEST_H_
