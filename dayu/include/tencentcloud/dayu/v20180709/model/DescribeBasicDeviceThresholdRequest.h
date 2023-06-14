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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICDEVICETHRESHOLDREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICDEVICETHRESHOLDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBasicDeviceThreshold请求参数结构体
                */
                class DescribeBasicDeviceThresholdRequest : public AbstractModel
                {
                public:
                    DescribeBasicDeviceThresholdRequest();
                    ~DescribeBasicDeviceThresholdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的IP地址，取值如：1.1.1.1
                     * @return BasicIp 查询的IP地址，取值如：1.1.1.1
                     * 
                     */
                    std::string GetBasicIp() const;

                    /**
                     * 设置查询的IP地址，取值如：1.1.1.1
                     * @param _basicIp 查询的IP地址，取值如：1.1.1.1
                     * 
                     */
                    void SetBasicIp(const std::string& _basicIp);

                    /**
                     * 判断参数 BasicIp 是否已赋值
                     * @return BasicIp 是否已赋值
                     * 
                     */
                    bool BasicIpHasBeenSet() const;

                    /**
                     * 获取查询IP所属地域，取值如：gz、bj、sh、hk等地域缩写
                     * @return BasicRegion 查询IP所属地域，取值如：gz、bj、sh、hk等地域缩写
                     * 
                     */
                    std::string GetBasicRegion() const;

                    /**
                     * 设置查询IP所属地域，取值如：gz、bj、sh、hk等地域缩写
                     * @param _basicRegion 查询IP所属地域，取值如：gz、bj、sh、hk等地域缩写
                     * 
                     */
                    void SetBasicRegion(const std::string& _basicRegion);

                    /**
                     * 判断参数 BasicRegion 是否已赋值
                     * @return BasicRegion 是否已赋值
                     * 
                     */
                    bool BasicRegionHasBeenSet() const;

                    /**
                     * 获取专区类型，取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * @return BasicBizType 专区类型，取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * 
                     */
                    std::string GetBasicBizType() const;

                    /**
                     * 设置专区类型，取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * @param _basicBizType 专区类型，取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     * 
                     */
                    void SetBasicBizType(const std::string& _basicBizType);

                    /**
                     * 判断参数 BasicBizType 是否已赋值
                     * @return BasicBizType 是否已赋值
                     * 
                     */
                    bool BasicBizTypeHasBeenSet() const;

                    /**
                     * 获取设备类型，取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * @return BasicDeviceType 设备类型，取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * 
                     */
                    std::string GetBasicDeviceType() const;

                    /**
                     * 设置设备类型，取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * @param _basicDeviceType 设备类型，取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     * 
                     */
                    void SetBasicDeviceType(const std::string& _basicDeviceType);

                    /**
                     * 判断参数 BasicDeviceType 是否已赋值
                     * @return BasicDeviceType 是否已赋值
                     * 
                     */
                    bool BasicDeviceTypeHasBeenSet() const;

                    /**
                     * 获取有效性检查，取值为1
                     * @return BasicCheckFlag 有效性检查，取值为1
                     * 
                     */
                    uint64_t GetBasicCheckFlag() const;

                    /**
                     * 设置有效性检查，取值为1
                     * @param _basicCheckFlag 有效性检查，取值为1
                     * 
                     */
                    void SetBasicCheckFlag(const uint64_t& _basicCheckFlag);

                    /**
                     * 判断参数 BasicCheckFlag 是否已赋值
                     * @return BasicCheckFlag 是否已赋值
                     * 
                     */
                    bool BasicCheckFlagHasBeenSet() const;

                    /**
                     * 获取可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * @return BasicIpInstance 可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * 
                     */
                    std::string GetBasicIpInstance() const;

                    /**
                     * 设置可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * @param _basicIpInstance 可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     * 
                     */
                    void SetBasicIpInstance(const std::string& _basicIpInstance);

                    /**
                     * 判断参数 BasicIpInstance 是否已赋值
                     * @return BasicIpInstance 是否已赋值
                     * 
                     */
                    bool BasicIpInstanceHasBeenSet() const;

                    /**
                     * 获取可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * @return BasicIspCode 可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * 
                     */
                    uint64_t GetBasicIspCode() const;

                    /**
                     * 设置可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * @param _basicIspCode 可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     * 
                     */
                    void SetBasicIspCode(const uint64_t& _basicIspCode);

                    /**
                     * 判断参数 BasicIspCode 是否已赋值
                     * @return BasicIspCode 是否已赋值
                     * 
                     */
                    bool BasicIspCodeHasBeenSet() const;

                private:

                    /**
                     * 查询的IP地址，取值如：1.1.1.1
                     */
                    std::string m_basicIp;
                    bool m_basicIpHasBeenSet;

                    /**
                     * 查询IP所属地域，取值如：gz、bj、sh、hk等地域缩写
                     */
                    std::string m_basicRegion;
                    bool m_basicRegionHasBeenSet;

                    /**
                     * 专区类型，取值如：公有云专区：public，黑石专区：bm, NAT服务器专区：nat，互联网通道：channel。
                     */
                    std::string m_basicBizType;
                    bool m_basicBizTypeHasBeenSet;

                    /**
                     * 设备类型，取值如：服务器：cvm，公有云负载均衡：clb，黑石负载均衡：lb，NAT服务器：nat，互联网通道：channel.
                     */
                    std::string m_basicDeviceType;
                    bool m_basicDeviceTypeHasBeenSet;

                    /**
                     * 有效性检查，取值为1
                     */
                    uint64_t m_basicCheckFlag;
                    bool m_basicCheckFlagHasBeenSet;

                    /**
                     * 可选，IPInstance Nat 网关（如果查询的设备类型是NAT服务器，需要传此参数，通过nat资源查询接口获取）
                     */
                    std::string m_basicIpInstance;
                    bool m_basicIpInstanceHasBeenSet;

                    /**
                     * 可选，运营商线路（如果查询的设备类型是NAT服务器，需要传此参数为5）
                     */
                    uint64_t m_basicIspCode;
                    bool m_basicIspCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBASICDEVICETHRESHOLDREQUEST_H_
