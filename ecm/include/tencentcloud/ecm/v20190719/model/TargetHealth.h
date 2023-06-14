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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 后端的健康检查状态
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP Target的内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置Target的内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP Target的内网IP
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port Target绑定的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Target绑定的端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _port Target绑定的端口
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthStatus 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHealthStatus() const;

                    /**
                     * 设置当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthStatus 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取Target的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetId Target的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetId() const;

                    /**
                     * 设置Target的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetId Target的实例ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close为未配置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthStatusDetail 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close为未配置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHealthStatusDetail() const;

                    /**
                     * 设置当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close为未配置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthStatusDetail 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close为未配置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHealthStatusDetail(const std::string& _healthStatusDetail);

                    /**
                     * 判断参数 HealthStatusDetail 是否已赋值
                     * @return HealthStatusDetail 是否已赋值
                     * 
                     */
                    bool HealthStatusDetailHasBeenSet() const;

                private:

                    /**
                     * Target的内网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * Target绑定的端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 当前健康状态，true：健康，false：不健康（包括尚未开始探测、探测中、状态异常等几种状态）。只有处于健康状态（且权重大于0），负载均衡才会向其转发流量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * Target的实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetId;
                    bool m_targetIdHasBeenSet;

                    /**
                     * 当前健康状态的详细信息。如：Alive、Dead、Unknown、Close。Alive状态为健康，Dead状态为异常，Unknown状态包括尚未开始探测、探测中、状态未知，Close为未配置健康检查。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_healthStatusDetail;
                    bool m_healthStatusDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_TARGETHEALTH_H_
