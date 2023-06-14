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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_

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
                * ModifyCdbProxyAddressVipAndVPort请求参数结构体
                */
                class ModifyCdbProxyAddressVipAndVPortRequest : public AbstractModel
                {
                public:
                    ModifyCdbProxyAddressVipAndVPortRequest();
                    ~ModifyCdbProxyAddressVipAndVPortRequest() = default;
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
                     * 获取私有网络ID
                     * @return UniqVpcId 私有网络ID
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param _uniqVpcId 私有网络ID
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有子网ID
                     * @return UniqSubnetId 私有子网ID
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有子网ID
                     * @param _uniqSubnetId 私有子网ID
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Vip IP地址
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置IP地址
                     * @param _vip IP地址
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return VPort 端口
                     * 
                     */
                    uint64_t GetVPort() const;

                    /**
                     * 设置端口
                     * @param _vPort 端口
                     * 
                     */
                    void SetVPort(const uint64_t& _vPort);

                    /**
                     * 判断参数 VPort 是否已赋值
                     * @return VPort 是否已赋值
                     * 
                     */
                    bool VPortHasBeenSet() const;

                    /**
                     * 获取旧IP地址回收时间
                     * @return ReleaseDuration 旧IP地址回收时间
                     * 
                     */
                    uint64_t GetReleaseDuration() const;

                    /**
                     * 设置旧IP地址回收时间
                     * @param _releaseDuration 旧IP地址回收时间
                     * 
                     */
                    void SetReleaseDuration(const uint64_t& _releaseDuration);

                    /**
                     * 判断参数 ReleaseDuration 是否已赋值
                     * @return ReleaseDuration 是否已赋值
                     * 
                     */
                    bool ReleaseDurationHasBeenSet() const;

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
                     * 私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_vPort;
                    bool m_vPortHasBeenSet;

                    /**
                     * 旧IP地址回收时间
                     */
                    uint64_t m_releaseDuration;
                    bool m_releaseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYADDRESSVIPANDVPORTREQUEST_H_
