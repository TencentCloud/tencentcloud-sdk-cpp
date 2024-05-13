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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPASSOCIATION_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPASSOCIATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 规则与目标组的关联关系
                */
                class TargetGroupAssociation : public AbstractModel
                {
                public:
                    TargetGroupAssociation();
                    ~TargetGroupAssociation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取负载均衡ID
                     * @return LoadBalancerId 负载均衡ID
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置负载均衡ID
                     * @param _loadBalancerId 负载均衡ID
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取目标组ID
                     * @return TargetGroupId 目标组ID
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组ID
                     * @param _targetGroupId 目标组ID
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取监听器ID。访问AssociateTargetGroups和DisassociateTargetGroups接口时必传此参数。
                     * @return ListenerId 监听器ID。访问AssociateTargetGroups和DisassociateTargetGroups接口时必传此参数。
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置监听器ID。访问AssociateTargetGroups和DisassociateTargetGroups接口时必传此参数。
                     * @param _listenerId 监听器ID。访问AssociateTargetGroups和DisassociateTargetGroups接口时必传此参数。
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取转发规则ID
                     * @return LocationId 转发规则ID
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置转发规则ID
                     * @param _locationId 转发规则ID
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取目标组权重，范围[0, 100]。仅绑定v2目标组时生效，如果不存在，则默认为10。
                     * @return Weight 目标组权重，范围[0, 100]。仅绑定v2目标组时生效，如果不存在，则默认为10。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置目标组权重，范围[0, 100]。仅绑定v2目标组时生效，如果不存在，则默认为10。
                     * @param _weight 目标组权重，范围[0, 100]。仅绑定v2目标组时生效，如果不存在，则默认为10。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 负载均衡ID
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 目标组ID
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 监听器ID。访问AssociateTargetGroups和DisassociateTargetGroups接口时必传此参数。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 转发规则ID
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * 目标组权重，范围[0, 100]。仅绑定v2目标组时生效，如果不存在，则默认为10。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPASSOCIATION_H_
