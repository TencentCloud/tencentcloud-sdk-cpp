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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEVIPREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEVIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyInstanceVip请求参数结构体
                */
                class ModifyInstanceVipRequest : public AbstractModel
                {
                public:
                    ModifyInstanceVipRequest();
                    ~ModifyInstanceVipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取实例VIP
                     * @return Vip 实例VIP
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例VIP
                     * @param _vip 实例VIP
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
                     * 获取IPv6标志
                     * @return Ipv6Flag IPv6标志
                     * 
                     */
                    uint64_t GetIpv6Flag() const;

                    /**
                     * 设置IPv6标志
                     * @param _ipv6Flag IPv6标志
                     * 
                     */
                    void SetIpv6Flag(const uint64_t& _ipv6Flag);

                    /**
                     * 判断参数 Ipv6Flag 是否已赋值
                     * @return Ipv6Flag 是否已赋值
                     * 
                     */
                    bool Ipv6FlagHasBeenSet() const;

                    /**
                     * 获取VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * @return VipReleaseDelay VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * 
                     */
                    uint64_t GetVipReleaseDelay() const;

                    /**
                     * 设置VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * @param _vipReleaseDelay VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     * 
                     */
                    void SetVipReleaseDelay(const uint64_t& _vipReleaseDelay);

                    /**
                     * 判断参数 VipReleaseDelay 是否已赋值
                     * @return VipReleaseDelay 是否已赋值
                     * 
                     */
                    bool VipReleaseDelayHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例VIP
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * IPv6标志
                     */
                    uint64_t m_ipv6Flag;
                    bool m_ipv6FlagHasBeenSet;

                    /**
                     * VIP保留时长，单位小时，取值范围（0~168），0表示立即释放，有一分钟释放延迟。不传此参数，默认24小时释放VIP。
                     */
                    uint64_t m_vipReleaseDelay;
                    bool m_vipReleaseDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYINSTANCEVIPREQUEST_H_
