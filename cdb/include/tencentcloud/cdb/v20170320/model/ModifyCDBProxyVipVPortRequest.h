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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYVIPVPORTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYVIPVPORTREQUEST_H_

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
                * ModifyCDBProxyVipVPort请求参数结构体
                */
                class ModifyCDBProxyVipVPortRequest : public AbstractModel
                {
                public:
                    ModifyCDBProxyVipVPortRequest();
                    ~ModifyCDBProxyVipVPortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代理组ID
                     * @return ProxyGroupId 代理组ID
                     */
                    std::string GetProxyGroupId() const;

                    /**
                     * 设置代理组ID
                     * @param ProxyGroupId 代理组ID
                     */
                    void SetProxyGroupId(const std::string& _proxyGroupId);

                    /**
                     * 判断参数 ProxyGroupId 是否已赋值
                     * @return ProxyGroupId 是否已赋值
                     */
                    bool ProxyGroupIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID
                     * @return UniqVpcId 私有网络ID
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID
                     * @param UniqVpcId 私有网络ID
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID
                     * @return UniqSubnetId 私有网络子网ID
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络子网ID
                     * @param UniqSubnetId 私有网络子网ID
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取目标IP
                     * @return DstIp 目标IP
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目标IP
                     * @param DstIp 目标IP
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目标端口
                     * @return DstPort 目标端口
                     */
                    uint64_t GetDstPort() const;

                    /**
                     * 设置目标端口
                     * @param DstPort 目标端口
                     */
                    void SetDstPort(const uint64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取旧IP回收时间 单位小时
                     * @return ReleaseDuration 旧IP回收时间 单位小时
                     */
                    uint64_t GetReleaseDuration() const;

                    /**
                     * 设置旧IP回收时间 单位小时
                     * @param ReleaseDuration 旧IP回收时间 单位小时
                     */
                    void SetReleaseDuration(const uint64_t& _releaseDuration);

                    /**
                     * 判断参数 ReleaseDuration 是否已赋值
                     * @return ReleaseDuration 是否已赋值
                     */
                    bool ReleaseDurationHasBeenSet() const;

                private:

                    /**
                     * 代理组ID
                     */
                    std::string m_proxyGroupId;
                    bool m_proxyGroupIdHasBeenSet;

                    /**
                     * 私有网络ID
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 目标IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目标端口
                     */
                    uint64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 旧IP回收时间 单位小时
                     */
                    uint64_t m_releaseDuration;
                    bool m_releaseDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYCDBPROXYVIPVPORTREQUEST_H_
