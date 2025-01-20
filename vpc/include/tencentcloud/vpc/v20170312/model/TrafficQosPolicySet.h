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
                     * 获取CCN实例ID。形如：ccn-f49l6u0z。
                     * @return CcnId CCN实例ID。形如：ccn-f49l6u0z。
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置CCN实例ID。形如：ccn-f49l6u0z。
                     * @param _ccnId CCN实例ID。形如：ccn-f49l6u0z。
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
                     * 获取qos id。
                     * @return QosId qos id。
                     * 
                     */
                    uint64_t GetQosId() const;

                    /**
                     * 设置qos id。
                     * @param _qosId qos id。
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
                     * 获取描述。
                     * @return QosPolicyDescription 描述。
                     * 
                     */
                    std::string GetQosPolicyDescription() const;

                    /**
                     * 设置描述。
                     * @param _qosPolicyDescription 描述。
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
                     * 获取名称。
                     * @return QosPolicyName 名称。
                     * 
                     */
                    std::string GetQosPolicyName() const;

                    /**
                     * 设置名称。
                     * @param _qosPolicyName 名称。
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
                     * 获取带宽。
                     * @return Bandwidth 带宽。
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置带宽。
                     * @param _bandwidth 带宽。
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
                     * 获取流量调度策略ID。
                     * @return QosPolicyId 流量调度策略ID。
                     * 
                     */
                    std::string GetQosPolicyId() const;

                    /**
                     * 设置流量调度策略ID。
                     * @param _qosPolicyId 流量调度策略ID。
                     * 
                     */
                    void SetQosPolicyId(const std::string& _qosPolicyId);

                    /**
                     * 判断参数 QosPolicyId 是否已赋值
                     * @return QosPolicyId 是否已赋值
                     * 
                     */
                    bool QosPolicyIdHasBeenSet() const;

                private:

                    /**
                     * CCN实例ID。形如：ccn-f49l6u0z。
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * qos id。
                     */
                    uint64_t m_qosId;
                    bool m_qosIdHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_qosPolicyDescription;
                    bool m_qosPolicyDescriptionHasBeenSet;

                    /**
                     * 名称。
                     */
                    std::string m_qosPolicyName;
                    bool m_qosPolicyNameHasBeenSet;

                    /**
                     * 带宽。
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 流量调度策略ID。
                     */
                    std::string m_qosPolicyId;
                    bool m_qosPolicyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICQOSPOLICYSET_H_
