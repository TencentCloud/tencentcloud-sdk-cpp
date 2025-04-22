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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLOADBALANCERINFO_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLOADBALANCERINFO_H_

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
                * 负载均衡信息
                */
                class ClassicalLoadBalancerInfo : public AbstractModel
                {
                public:
                    ClassicalLoadBalancerInfo();
                    ~ClassicalLoadBalancerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端实例ID
                     * @return InstanceId 后端实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置后端实例ID
                     * @param _instanceId 后端实例ID
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
                     * 获取负载均衡实例ID列表
                     * @return LoadBalancerIds 负载均衡实例ID列表
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 设置负载均衡实例ID列表
                     * @param _loadBalancerIds 负载均衡实例ID列表
                     * 
                     */
                    void SetLoadBalancerIds(const std::vector<std::string>& _loadBalancerIds);

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                private:

                    /**
                     * 后端实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 负载均衡实例ID列表
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CLASSICALLOADBALANCERINFO_H_
