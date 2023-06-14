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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyDropOption.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPortLimit.h>
#include <tencentcloud/dayu/v20180709/model/IpBlackWhite.h>
#include <tencentcloud/dayu/v20180709/model/DDoSPolicyPacketFilter.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintPolicy.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateDDoSPolicy请求参数结构体
                */
                class CreateDDoSPolicyRequest : public AbstractModel
                {
                public:
                    CreateDDoSPolicyRequest();
                    ~CreateDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取协议禁用，必须填写且数组长度必须为1
                     * @return DropOptions 协议禁用，必须填写且数组长度必须为1
                     * 
                     */
                    std::vector<DDoSPolicyDropOption> GetDropOptions() const;

                    /**
                     * 设置协议禁用，必须填写且数组长度必须为1
                     * @param _dropOptions 协议禁用，必须填写且数组长度必须为1
                     * 
                     */
                    void SetDropOptions(const std::vector<DDoSPolicyDropOption>& _dropOptions);

                    /**
                     * 判断参数 DropOptions 是否已赋值
                     * @return DropOptions 是否已赋值
                     * 
                     */
                    bool DropOptionsHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取端口禁用，当没有禁用端口时填空数组
                     * @return PortLimits 端口禁用，当没有禁用端口时填空数组
                     * 
                     */
                    std::vector<DDoSPolicyPortLimit> GetPortLimits() const;

                    /**
                     * 设置端口禁用，当没有禁用端口时填空数组
                     * @param _portLimits 端口禁用，当没有禁用端口时填空数组
                     * 
                     */
                    void SetPortLimits(const std::vector<DDoSPolicyPortLimit>& _portLimits);

                    /**
                     * 判断参数 PortLimits 是否已赋值
                     * @return PortLimits 是否已赋值
                     * 
                     */
                    bool PortLimitsHasBeenSet() const;

                    /**
                     * 获取请求源IP黑白名单，当没有IP黑白名单时填空数组
                     * @return IpAllowDenys 请求源IP黑白名单，当没有IP黑白名单时填空数组
                     * 
                     */
                    std::vector<IpBlackWhite> GetIpAllowDenys() const;

                    /**
                     * 设置请求源IP黑白名单，当没有IP黑白名单时填空数组
                     * @param _ipAllowDenys 请求源IP黑白名单，当没有IP黑白名单时填空数组
                     * 
                     */
                    void SetIpAllowDenys(const std::vector<IpBlackWhite>& _ipAllowDenys);

                    /**
                     * 判断参数 IpAllowDenys 是否已赋值
                     * @return IpAllowDenys 是否已赋值
                     * 
                     */
                    bool IpAllowDenysHasBeenSet() const;

                    /**
                     * 获取报文过滤，当没有报文过滤时填空数组
                     * @return PacketFilters 报文过滤，当没有报文过滤时填空数组
                     * 
                     */
                    std::vector<DDoSPolicyPacketFilter> GetPacketFilters() const;

                    /**
                     * 设置报文过滤，当没有报文过滤时填空数组
                     * @param _packetFilters 报文过滤，当没有报文过滤时填空数组
                     * 
                     */
                    void SetPacketFilters(const std::vector<DDoSPolicyPacketFilter>& _packetFilters);

                    /**
                     * 判断参数 PacketFilters 是否已赋值
                     * @return PacketFilters 是否已赋值
                     * 
                     */
                    bool PacketFiltersHasBeenSet() const;

                    /**
                     * 获取水印策略参数，当没有启用水印功能时填空数组，最多只能传一条水印策略（即数组大小不超过1）
                     * @return WaterPrint 水印策略参数，当没有启用水印功能时填空数组，最多只能传一条水印策略（即数组大小不超过1）
                     * 
                     */
                    std::vector<WaterPrintPolicy> GetWaterPrint() const;

                    /**
                     * 设置水印策略参数，当没有启用水印功能时填空数组，最多只能传一条水印策略（即数组大小不超过1）
                     * @param _waterPrint 水印策略参数，当没有启用水印功能时填空数组，最多只能传一条水印策略（即数组大小不超过1）
                     * 
                     */
                    void SetWaterPrint(const std::vector<WaterPrintPolicy>& _waterPrint);

                    /**
                     * 判断参数 WaterPrint 是否已赋值
                     * @return WaterPrint 是否已赋值
                     * 
                     */
                    bool WaterPrintHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 协议禁用，必须填写且数组长度必须为1
                     */
                    std::vector<DDoSPolicyDropOption> m_dropOptions;
                    bool m_dropOptionsHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 端口禁用，当没有禁用端口时填空数组
                     */
                    std::vector<DDoSPolicyPortLimit> m_portLimits;
                    bool m_portLimitsHasBeenSet;

                    /**
                     * 请求源IP黑白名单，当没有IP黑白名单时填空数组
                     */
                    std::vector<IpBlackWhite> m_ipAllowDenys;
                    bool m_ipAllowDenysHasBeenSet;

                    /**
                     * 报文过滤，当没有报文过滤时填空数组
                     */
                    std::vector<DDoSPolicyPacketFilter> m_packetFilters;
                    bool m_packetFiltersHasBeenSet;

                    /**
                     * 水印策略参数，当没有启用水印功能时填空数组，最多只能传一条水印策略（即数组大小不超过1）
                     */
                    std::vector<WaterPrintPolicy> m_waterPrint;
                    bool m_waterPrintHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYREQUEST_H_
