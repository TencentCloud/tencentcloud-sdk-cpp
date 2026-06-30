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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICQOSPOLICYSET_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICQOSPOLICYSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流量调度规则
                */
                class TrafficQosPolicySet : public AbstractModel
                {
                public:
                    TrafficQosPolicySet();
                    ~TrafficQosPolicySet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>CCN实例ID。形如：ccn-f49l6u0z。</p>
                     * @return CcnId <p>CCN实例ID。形如：ccn-f49l6u0z。</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>CCN实例ID。形如：ccn-f49l6u0z。</p>
                     * @param _ccnId <p>CCN实例ID。形如：ccn-f49l6u0z。</p>
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
                     * 获取<p>qos id。</p>
                     * @return QosId <p>qos id。</p>
                     * 
                     */
                    uint64_t GetQosId() const;

                    /**
                     * 设置<p>qos id。</p>
                     * @param _qosId <p>qos id。</p>
                     * 
                     */
                    void SetQosId(const uint64_t& _qosId);

                    /**
                     * 判断参数 QosId 是否已赋值
                     * @return QosId 是否已赋值
                     * 
                     */
                    bool QosIdHasBeenSet() const;

                    /**
                     * 获取<p>描述。</p>
                     * @return QosPolicyDescription <p>描述。</p>
                     * 
                     */
                    std::string GetQosPolicyDescription() const;

                    /**
                     * 设置<p>描述。</p>
                     * @param _qosPolicyDescription <p>描述。</p>
                     * 
                     */
                    void SetQosPolicyDescription(const std::string& _qosPolicyDescription);

                    /**
                     * 判断参数 QosPolicyDescription 是否已赋值
                     * @return QosPolicyDescription 是否已赋值
                     * 
                     */
                    bool QosPolicyDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>名称。</p>
                     * @return QosPolicyName <p>名称。</p>
                     * 
                     */
                    std::string GetQosPolicyName() const;

                    /**
                     * 设置<p>名称。</p>
                     * @param _qosPolicyName <p>名称。</p>
                     * 
                     */
                    void SetQosPolicyName(const std::string& _qosPolicyName);

                    /**
                     * 判断参数 QosPolicyName 是否已赋值
                     * @return QosPolicyName 是否已赋值
                     * 
                     */
                    bool QosPolicyNameHasBeenSet() const;

                    /**
                     * 获取<p>带宽。</p>
                     * @return Bandwidth <p>带宽。</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽。</p>
                     * @param _bandwidth <p>带宽。</p>
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
                     * 获取<p>流量调度策略ID。</p>
                     * @return QosPolicyId <p>流量调度策略ID。</p>
                     * 
                     */
                    std::string GetQosPolicyId() const;

                    /**
                     * 设置<p>流量调度策略ID。</p>
                     * @param _qosPolicyId <p>流量调度策略ID。</p>
                     * 
                     */
                    void SetQosPolicyId(const std::string& _qosPolicyId);

                    /**
                     * 判断参数 QosPolicyId 是否已赋值
                     * @return QosPolicyId 是否已赋值
                     * 
                     */
                    bool QosPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>服务等级信息</p>
                     * @return QosLevel <p>服务等级信息</p>
                     * 
                     */
                    std::string GetQosLevel() const;

                    /**
                     * 设置<p>服务等级信息</p>
                     * @param _qosLevel <p>服务等级信息</p>
                     * 
                     */
                    void SetQosLevel(const std::string& _qosLevel);

                    /**
                     * 判断参数 QosLevel 是否已赋值
                     * @return QosLevel 是否已赋值
                     * 
                     */
                    bool QosLevelHasBeenSet() const;

                    /**
                     * 获取<p>服务等级信息</p>
                     * @return ServiceLevel <p>服务等级信息</p>
                     * 
                     */
                    std::string GetServiceLevel() const;

                    /**
                     * 设置<p>服务等级信息</p>
                     * @param _serviceLevel <p>服务等级信息</p>
                     * 
                     */
                    void SetServiceLevel(const std::string& _serviceLevel);

                    /**
                     * 判断参数 ServiceLevel 是否已赋值
                     * @return ServiceLevel 是否已赋值
                     * 
                     */
                    bool ServiceLevelHasBeenSet() const;

                    /**
                     * 获取<p>带宽ID</p><p>参数格式：fcr-xxx</p>
                     * @return RegionFlowControlId <p>带宽ID</p><p>参数格式：fcr-xxx</p>
                     * 
                     */
                    std::string GetRegionFlowControlId() const;

                    /**
                     * 设置<p>带宽ID</p><p>参数格式：fcr-xxx</p>
                     * @param _regionFlowControlId <p>带宽ID</p><p>参数格式：fcr-xxx</p>
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
                     * 获取<p>源地域</p><p>参数格式：ap-xxx</p>
                     * @return LocalRegion <p>源地域</p><p>参数格式：ap-xxx</p>
                     * 
                     */
                    std::string GetLocalRegion() const;

                    /**
                     * 设置<p>源地域</p><p>参数格式：ap-xxx</p>
                     * @param _localRegion <p>源地域</p><p>参数格式：ap-xxx</p>
                     * 
                     */
                    void SetLocalRegion(const std::string& _localRegion);

                    /**
                     * 判断参数 LocalRegion 是否已赋值
                     * @return LocalRegion 是否已赋值
                     * 
                     */
                    bool LocalRegionHasBeenSet() const;

                    /**
                     * 获取<p>目的地域</p><p>参数格式：ap-xxx</p>
                     * @return RemoteRegion <p>目的地域</p><p>参数格式：ap-xxx</p>
                     * 
                     */
                    std::string GetRemoteRegion() const;

                    /**
                     * 设置<p>目的地域</p><p>参数格式：ap-xxx</p>
                     * @param _remoteRegion <p>目的地域</p><p>参数格式：ap-xxx</p>
                     * 
                     */
                    void SetRemoteRegion(const std::string& _remoteRegion);

                    /**
                     * 判断参数 RemoteRegion 是否已赋值
                     * @return RemoteRegion 是否已赋值
                     * 
                     */
                    bool RemoteRegionHasBeenSet() const;

                    /**
                     * 获取<p>流量匹配策略ID</p>
                     * @return TrafficMatchPolicyId <p>流量匹配策略ID</p>
                     * 
                     */
                    std::string GetTrafficMatchPolicyId() const;

                    /**
                     * 设置<p>流量匹配策略ID</p>
                     * @param _trafficMatchPolicyId <p>流量匹配策略ID</p>
                     * 
                     */
                    void SetTrafficMatchPolicyId(const std::string& _trafficMatchPolicyId);

                    /**
                     * 判断参数 TrafficMatchPolicyId 是否已赋值
                     * @return TrafficMatchPolicyId 是否已赋值
                     * 
                     */
                    bool TrafficMatchPolicyIdHasBeenSet() const;

                private:

                    /**
                     * <p>CCN实例ID。形如：ccn-f49l6u0z。</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>qos id。</p>
                     */
                    uint64_t m_qosId;
                    bool m_qosIdHasBeenSet;

                    /**
                     * <p>描述。</p>
                     */
                    std::string m_qosPolicyDescription;
                    bool m_qosPolicyDescriptionHasBeenSet;

                    /**
                     * <p>名称。</p>
                     */
                    std::string m_qosPolicyName;
                    bool m_qosPolicyNameHasBeenSet;

                    /**
                     * <p>带宽。</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>流量调度策略ID。</p>
                     */
                    std::string m_qosPolicyId;
                    bool m_qosPolicyIdHasBeenSet;

                    /**
                     * <p>服务等级信息</p>
                     */
                    std::string m_qosLevel;
                    bool m_qosLevelHasBeenSet;

                    /**
                     * <p>服务等级信息</p>
                     */
                    std::string m_serviceLevel;
                    bool m_serviceLevelHasBeenSet;

                    /**
                     * <p>带宽ID</p><p>参数格式：fcr-xxx</p>
                     */
                    std::string m_regionFlowControlId;
                    bool m_regionFlowControlIdHasBeenSet;

                    /**
                     * <p>源地域</p><p>参数格式：ap-xxx</p>
                     */
                    std::string m_localRegion;
                    bool m_localRegionHasBeenSet;

                    /**
                     * <p>目的地域</p><p>参数格式：ap-xxx</p>
                     */
                    std::string m_remoteRegion;
                    bool m_remoteRegionHasBeenSet;

                    /**
                     * <p>流量匹配策略ID</p>
                     */
                    std::string m_trafficMatchPolicyId;
                    bool m_trafficMatchPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICQOSPOLICYSET_H_
