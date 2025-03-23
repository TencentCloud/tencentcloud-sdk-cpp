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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RenewPriceDetail.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 节点续费询价明细
                */
                class NodeRenewPriceDetail : public AbstractModel
                {
                public:
                    NodeRenewPriceDetail();
                    ~NodeRenewPriceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费类型，包月为1、包销为3
                     * @return ChargeType 计费类型，包月为1、包销为3
                     * 
                     */
                    int64_t GetChargeType() const;

                    /**
                     * 设置计费类型，包月为1、包销为3
                     * @param _chargeType 计费类型，包月为1、包销为3
                     * 
                     */
                    void SetChargeType(const int64_t& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取emr资源id
                     * @return EmrResourceId emr资源id
                     * 
                     */
                    std::string GetEmrResourceId() const;

                    /**
                     * 设置emr资源id
                     * @param _emrResourceId emr资源id
                     * 
                     */
                    void SetEmrResourceId(const std::string& _emrResourceId);

                    /**
                     * 判断参数 EmrResourceId 是否已赋值
                     * @return EmrResourceId 是否已赋值
                     * 
                     */
                    bool EmrResourceIdHasBeenSet() const;

                    /**
                     * 获取节点类型
                     * @return NodeType 节点类型
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型
                     * @param _nodeType 节点类型
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取节点内网ip
                     * @return Ip 节点内网ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置节点内网ip
                     * @param _ip 节点内网ip
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取当前到期时间
                     * @return ExpireTime 当前到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置当前到期时间
                     * @param _expireTime 当前到期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取原价
                     * @return OriginalCost 原价
                     * 
                     */
                    double GetOriginalCost() const;

                    /**
                     * 设置原价
                     * @param _originalCost 原价
                     * 
                     */
                    void SetOriginalCost(const double& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取折扣价
                     * @return DiscountCost 折扣价
                     * 
                     */
                    double GetDiscountCost() const;

                    /**
                     * 设置折扣价
                     * @param _discountCost 折扣价
                     * 
                     */
                    void SetDiscountCost(const double& _discountCost);

                    /**
                     * 判断参数 DiscountCost 是否已赋值
                     * @return DiscountCost 是否已赋值
                     * 
                     */
                    bool DiscountCostHasBeenSet() const;

                    /**
                     * 获取节点子项续费询价明细列表
                     * @return RenewPriceDetails 节点子项续费询价明细列表
                     * 
                     */
                    std::vector<RenewPriceDetail> GetRenewPriceDetails() const;

                    /**
                     * 设置节点子项续费询价明细列表
                     * @param _renewPriceDetails 节点子项续费询价明细列表
                     * 
                     */
                    void SetRenewPriceDetails(const std::vector<RenewPriceDetail>& _renewPriceDetails);

                    /**
                     * 判断参数 RenewPriceDetails 是否已赋值
                     * @return RenewPriceDetails 是否已赋值
                     * 
                     */
                    bool RenewPriceDetailsHasBeenSet() const;

                private:

                    /**
                     * 计费类型，包月为1、包销为3
                     */
                    int64_t m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * emr资源id
                     */
                    std::string m_emrResourceId;
                    bool m_emrResourceIdHasBeenSet;

                    /**
                     * 节点类型
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 节点内网ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 当前到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 原价
                     */
                    double m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * 折扣价
                     */
                    double m_discountCost;
                    bool m_discountCostHasBeenSet;

                    /**
                     * 节点子项续费询价明细列表
                     */
                    std::vector<RenewPriceDetail> m_renewPriceDetails;
                    bool m_renewPriceDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NODERENEWPRICEDETAIL_H_
