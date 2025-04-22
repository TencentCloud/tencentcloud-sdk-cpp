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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_

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
                * 描述一个Target的健康信息
                */
                class TargetHealth : public AbstractModel
                {
                public:
                    TargetHealth();
                    ~TargetHealth() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target的内网IP
                     * @return IP Target的内网IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Target的内网IP
                     * @param _iP Target的内网IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取Target绑定的端口
                     * @return Port Target绑定的端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Target绑定的端口
                     * @param _port Target绑定的端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
                     * @return HealthStatus 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
                     * @param _healthStatus 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
                     * 
                     */
                    void SetHealthStatus(const bool& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取Target的实例ID，如 ins-12345678
                     * @return TargetId Target的实例ID，如 ins-12345678
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Target的实例ID，如 ins-12345678
                     * @param _targetId Target的实例ID，如 ins-12345678
                     * 
                     */
                    void SetTargetId(const std::string& _targetId);

                    /**
                     * 判断参数 TargetId 是否已赋值
                     * @return TargetId 是否已赋值
                     * 
                     */
                    bool TargetIdHasBeenSet() const;

                    /**
                     * 获取当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close表示健康检查关闭或监听器状态停止。
                     * @return HealthStatusDetail 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close表示健康检查关闭或监听器状态停止。
                     * 
                     */
                    std::string GetHealthStatusDetail() const;

                    /**
                     * 设置当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close表示健康检查关闭或监听器状态停止。
                     * @param _healthStatusDetail 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close表示健康检查关闭或监听器状态停止。
                     * 
                     */
                    void SetHealthStatusDetail(const std::string& _healthStatusDetail);

                    /**
                     * 判断参数 HealthStatusDetail 是否已赋值
                     * @return HealthStatusDetail 是否已赋值
                     * 
                     */
                    bool HealthStatusDetailHasBeenSet() const;

                    /**
                     * 获取(**该参数对象即将下线，不推荐使用，请使用HealthStatusDetail获取健康详情**) 当前健康状态的详细信息。如：Alive、Dead、Unknown。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知。
                     * @return HealthStatusDetial (**该参数对象即将下线，不推荐使用，请使用HealthStatusDetail获取健康详情**) 当前健康状态的详细信息。如：Alive、Dead、Unknown。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知。
                     * @deprecated
                     */
                    std::string GetHealthStatusDetial() const;

                    /**
                     * 设置(**该参数对象即将下线，不推荐使用，请使用HealthStatusDetail获取健康详情**) 当前健康状态的详细信息。如：Alive、Dead、Unknown。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知。
                     * @param _healthStatusDetial (**该参数对象即将下线，不推荐使用，请使用HealthStatusDetail获取健康详情**) 当前健康状态的详细信息。如：Alive、Dead、Unknown。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知。
                     * @deprecated
                     */
                    void SetHealthStatusDetial(const std::string& _healthStatusDetial);

                    /**
                     * 判断参数 HealthStatusDetial 是否已赋值
                     * @return HealthStatusDetial 是否已赋值
                     * @deprecated
                     */
                    bool HealthStatusDetialHasBeenSet() const;

                    /**
                     * 获取目标组唯一ID。
                     * @return TargetGroupId 目标组唯一ID。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组唯一ID。
                     * @param _targetGroupId 目标组唯一ID。
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
                     * 获取Target的权重。
                     * @return Weight Target的权重。
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置Target的权重。
                     * @param _weight Target的权重。
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * Target的内网IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Target绑定的端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Target的实例ID，如 ins-12345678
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close表示健康检查关闭或监听器状态停止。
                     */
                    std::string m_healthStatusDetail;
                    bool m_healthStatusDetailHasBeenSet;

                    /**
                     * (**该参数对象即将下线，不推荐使用，请使用HealthStatusDetail获取健康详情**) 当前健康状态的详细信息。如：Alive、Dead、Unknown。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知。
                     */
                    std::string m_healthStatusDetial;
                    bool m_healthStatusDetialHasBeenSet;

                    /**
                     * 目标组唯一ID。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * Target的权重。
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETHEALTH_H_
