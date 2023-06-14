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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * CreateEip请求参数结构体
                */
                class CreateEipRequest : public AbstractModel
                {
                public:
                    CreateEipRequest();
                    ~CreateEipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请数量，默认为1, 最大 20
                     * @return GoodsNum 申请数量，默认为1, 最大 20
                     * 
                     */
                    uint64_t GetGoodsNum() const;

                    /**
                     * 设置申请数量，默认为1, 最大 20
                     * @param _goodsNum 申请数量，默认为1, 最大 20
                     * 
                     */
                    void SetGoodsNum(const uint64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * @return PayMode EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * @param _payMode EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取带宽设定值（只在带宽计费时生效）
                     * @return Bandwidth 带宽设定值（只在带宽计费时生效）
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置带宽设定值（只在带宽计费时生效）
                     * @param _bandwidth 带宽设定值（只在带宽计费时生效）
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取EIP模式，目前支持tunnel和fullnat
                     * @return SetType EIP模式，目前支持tunnel和fullnat
                     * 
                     */
                    std::string GetSetType() const;

                    /**
                     * 设置EIP模式，目前支持tunnel和fullnat
                     * @param _setType EIP模式，目前支持tunnel和fullnat
                     * 
                     */
                    void SetSetType(const std::string& _setType);

                    /**
                     * 判断参数 SetType 是否已赋值
                     * @return SetType 是否已赋值
                     * 
                     */
                    bool SetTypeHasBeenSet() const;

                    /**
                     * 获取是否使用独占集群，0：不使用，1：使用。默认为0
                     * @return Exclusive 是否使用独占集群，0：不使用，1：使用。默认为0
                     * 
                     */
                    uint64_t GetExclusive() const;

                    /**
                     * 设置是否使用独占集群，0：不使用，1：使用。默认为0
                     * @param _exclusive 是否使用独占集群，0：不使用，1：使用。默认为0
                     * 
                     */
                    void SetExclusive(const uint64_t& _exclusive);

                    /**
                     * 判断参数 Exclusive 是否已赋值
                     * @return Exclusive 是否已赋值
                     * 
                     */
                    bool ExclusiveHasBeenSet() const;

                    /**
                     * 获取EIP归属私有网络ID，例如vpc-k7j1t2x1
                     * @return VpcId EIP归属私有网络ID，例如vpc-k7j1t2x1
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置EIP归属私有网络ID，例如vpc-k7j1t2x1
                     * @param _vpcId EIP归属私有网络ID，例如vpc-k7j1t2x1
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取指定申请的IP列表
                     * @return IpList 指定申请的IP列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置指定申请的IP列表
                     * @param _ipList 指定申请的IP列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 申请数量，默认为1, 最大 20
                     */
                    uint64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * EIP计费方式，flow-流量计费；bandwidth-带宽计费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 带宽设定值（只在带宽计费时生效）
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * EIP模式，目前支持tunnel和fullnat
                     */
                    std::string m_setType;
                    bool m_setTypeHasBeenSet;

                    /**
                     * 是否使用独占集群，0：不使用，1：使用。默认为0
                     */
                    uint64_t m_exclusive;
                    bool m_exclusiveHasBeenSet;

                    /**
                     * EIP归属私有网络ID，例如vpc-k7j1t2x1
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 指定申请的IP列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_CREATEEIPREQUEST_H_
