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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/CcnRegionBandwidthLimit.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 用于描述云联网地域间限速带宽实例的信息。
                */
                class CcnBandwidthInfo : public AbstractModel
                {
                public:
                    CcnBandwidthInfo();
                    ~CcnBandwidthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取带宽所属的云联网ID。
                     * @return CcnId 带宽所属的云联网ID。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置带宽所属的云联网ID。
                     * @param _ccnId 带宽所属的云联网ID。
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取实例的创建时间。
                     * @return CreatedTime 实例的创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置实例的创建时间。
                     * @param _createdTime 实例的创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取实例的过期时间
                     * @return ExpiredTime 实例的过期时间
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置实例的过期时间
                     * @param _expiredTime 实例的过期时间
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取带宽实例的唯一ID。
                     * @return RegionFlowControlId 带宽实例的唯一ID。
                     * 
                     */
                    std::string GetRegionFlowControlId() const;

                    /**
                     * 设置带宽实例的唯一ID。
                     * @param _regionFlowControlId 带宽实例的唯一ID。
                     * 
                     */
                    void SetRegionFlowControlId(const std::string& _regionFlowControlId);

                    /**
                     * 判断参数 RegionFlowControlId 是否已赋值
                     * @return RegionFlowControlId 是否已赋值
                     * 
                     */
                    bool RegionFlowControlIdHasBeenSet() const;

                    /**
                     * 获取带宽是否自动续费的标记。
                     * @return RenewFlag 带宽是否自动续费的标记。
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置带宽是否自动续费的标记。
                     * @param _renewFlag 带宽是否自动续费的标记。
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取描述带宽的地域和限速上限信息。在地域间限速的情况下才会返回参数，出口限速模式不返回。
                     * @return CcnRegionBandwidthLimit 描述带宽的地域和限速上限信息。在地域间限速的情况下才会返回参数，出口限速模式不返回。
                     * 
                     */
                    CcnRegionBandwidthLimit GetCcnRegionBandwidthLimit() const;

                    /**
                     * 设置描述带宽的地域和限速上限信息。在地域间限速的情况下才会返回参数，出口限速模式不返回。
                     * @param _ccnRegionBandwidthLimit 描述带宽的地域和限速上限信息。在地域间限速的情况下才会返回参数，出口限速模式不返回。
                     * 
                     */
                    void SetCcnRegionBandwidthLimit(const CcnRegionBandwidthLimit& _ccnRegionBandwidthLimit);

                    /**
                     * 判断参数 CcnRegionBandwidthLimit 是否已赋值
                     * @return CcnRegionBandwidthLimit 是否已赋值
                     * 
                     */
                    bool CcnRegionBandwidthLimitHasBeenSet() const;

                    /**
                     * 获取云市场实例ID。
                     * @return MarketId 云市场实例ID。
                     * 
                     */
                    std::string GetMarketId() const;

                    /**
                     * 设置云市场实例ID。
                     * @param _marketId 云市场实例ID。
                     * 
                     */
                    void SetMarketId(const std::string& _marketId);

                    /**
                     * 判断参数 MarketId 是否已赋值
                     * @return MarketId 是否已赋值
                     * 
                     */
                    bool MarketIdHasBeenSet() const;

                    /**
                     * 获取资源绑定的标签列表
                     * @return TagSet 资源绑定的标签列表
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置资源绑定的标签列表
                     * @param _tagSet 资源绑定的标签列表
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取`true表示`Qos默认带宽；`false`表示非Qos默认带宽；
                     * @return DefaultQosBandwidthFlag `true表示`Qos默认带宽；`false`表示非Qos默认带宽；
                     * 
                     */
                    bool GetDefaultQosBandwidthFlag() const;

                    /**
                     * 设置`true表示`Qos默认带宽；`false`表示非Qos默认带宽；
                     * @param _defaultQosBandwidthFlag `true表示`Qos默认带宽；`false`表示非Qos默认带宽；
                     * 
                     */
                    void SetDefaultQosBandwidthFlag(const bool& _defaultQosBandwidthFlag);

                    /**
                     * 判断参数 DefaultQosBandwidthFlag 是否已赋值
                     * @return DefaultQosBandwidthFlag 是否已赋值
                     * 
                     */
                    bool DefaultQosBandwidthFlagHasBeenSet() const;

                    /**
                     * 获取服务等级信息。
                     * @return QosLevel 服务等级信息。
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置服务等级信息。
                     * @param _qosLevel 服务等级信息。
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                private:

                    /**
                     * 带宽所属的云联网ID。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * 实例的创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 实例的过期时间
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 带宽实例的唯一ID。
                     */
                    std::string m_regionFlowControlId;
                    bool m_regionFlowControlIdHasBeenSet;

                    /**
                     * 带宽是否自动续费的标记。
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 描述带宽的地域和限速上限信息。在地域间限速的情况下才会返回参数，出口限速模式不返回。
                     */
                    CcnRegionBandwidthLimit m_ccnRegionBandwidthLimit;
                    bool m_ccnRegionBandwidthLimitHasBeenSet;

                    /**
                     * 云市场实例ID。
                     */
                    std::string m_marketId;
                    bool m_marketIdHasBeenSet;

                    /**
                     * 资源绑定的标签列表
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * `true表示`Qos默认带宽；`false`表示非Qos默认带宽；
                     */
                    bool m_defaultQosBandwidthFlag;
                    bool m_defaultQosBandwidthFlagHasBeenSet;

                    /**
                     * 服务等级信息。
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNBANDWIDTHINFO_H_
