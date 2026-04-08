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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICMIRRORFILTERRULESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICMIRRORFILTERRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DeleteTrafficMirrorFilterRules请求参数结构体
                */
                class DeleteTrafficMirrorFilterRulesRequest : public AbstractModel
                {
                public:
                    DeleteTrafficMirrorFilterRulesRequest();
                    ~DeleteTrafficMirrorFilterRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例唯一ID。
                     * @return TrafficMirrorId 流量镜像实例唯一ID。
                     * 
                     */
                    std::string GetTrafficMirrorId() const;

                    /**
                     * 设置流量镜像实例唯一ID。
                     * @param _trafficMirrorId 流量镜像实例唯一ID。
                     * 
                     */
                    void SetTrafficMirrorId(const std::string& _trafficMirrorId);

                    /**
                     * 判断参数 TrafficMirrorId 是否已赋值
                     * @return TrafficMirrorId 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdHasBeenSet() const;

                    /**
                     * 获取流量镜像入站过滤唯一ID列表。
                     * @return IngressFilterRuleIds 流量镜像入站过滤唯一ID列表。
                     * 
                     */
                    std::vector<std::string> GetIngressFilterRuleIds() const;

                    /**
                     * 设置流量镜像入站过滤唯一ID列表。
                     * @param _ingressFilterRuleIds 流量镜像入站过滤唯一ID列表。
                     * 
                     */
                    void SetIngressFilterRuleIds(const std::vector<std::string>& _ingressFilterRuleIds);

                    /**
                     * 判断参数 IngressFilterRuleIds 是否已赋值
                     * @return IngressFilterRuleIds 是否已赋值
                     * 
                     */
                    bool IngressFilterRuleIdsHasBeenSet() const;

                    /**
                     * 获取流量镜像出站过滤唯一ID列表。
                     * @return EgressFilterRuleIds 流量镜像出站过滤唯一ID列表。
                     * 
                     */
                    std::vector<std::string> GetEgressFilterRuleIds() const;

                    /**
                     * 设置流量镜像出站过滤唯一ID列表。
                     * @param _egressFilterRuleIds 流量镜像出站过滤唯一ID列表。
                     * 
                     */
                    void SetEgressFilterRuleIds(const std::vector<std::string>& _egressFilterRuleIds);

                    /**
                     * 判断参数 EgressFilterRuleIds 是否已赋值
                     * @return EgressFilterRuleIds 是否已赋值
                     * 
                     */
                    bool EgressFilterRuleIdsHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例唯一ID。
                     */
                    std::string m_trafficMirrorId;
                    bool m_trafficMirrorIdHasBeenSet;

                    /**
                     * 流量镜像入站过滤唯一ID列表。
                     */
                    std::vector<std::string> m_ingressFilterRuleIds;
                    bool m_ingressFilterRuleIdsHasBeenSet;

                    /**
                     * 流量镜像出站过滤唯一ID列表。
                     */
                    std::vector<std::string> m_egressFilterRuleIds;
                    bool m_egressFilterRuleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETETRAFFICMIRRORFILTERRULESREQUEST_H_
