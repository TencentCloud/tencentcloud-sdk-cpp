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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_HEALTHCHECKCONFIG_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_HEALTHCHECKCONFIG_H_

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
                * VPN通道健康检查配置
                */
                class HealthCheckConfig : public AbstractModel
                {
                public:
                    HealthCheckConfig();
                    ~HealthCheckConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探测模式，默认值NQA，不可修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProbeType 探测模式，默认值NQA，不可修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProbeType() const;

                    /**
                     * 设置探测模式，默认值NQA，不可修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _probeType 探测模式，默认值NQA，不可修改。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProbeType(const std::string& _probeType);

                    /**
                     * 判断参数 ProbeType 是否已赋值
                     * @return ProbeType 是否已赋值
                     * 
                     */
                    bool ProbeTypeHasBeenSet() const;

                    /**
                     * 获取探测间隔，腾讯云两次健康检查间隔时间，范围【1000-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProbeInterval 探测间隔，腾讯云两次健康检查间隔时间，范围【1000-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProbeInterval() const;

                    /**
                     * 设置探测间隔，腾讯云两次健康检查间隔时间，范围【1000-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _probeInterval 探测间隔，腾讯云两次健康检查间隔时间，范围【1000-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProbeInterval(const int64_t& _probeInterval);

                    /**
                     * 判断参数 ProbeInterval 是否已赋值
                     * @return ProbeInterval 是否已赋值
                     * 
                     */
                    bool ProbeIntervalHasBeenSet() const;

                    /**
                     * 获取探测次数，连续N次健康检查失败后执行路由切换，范围【3-8】，单位次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProbeThreshold 探测次数，连续N次健康检查失败后执行路由切换，范围【3-8】，单位次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProbeThreshold() const;

                    /**
                     * 设置探测次数，连续N次健康检查失败后执行路由切换，范围【3-8】，单位次。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _probeThreshold 探测次数，连续N次健康检查失败后执行路由切换，范围【3-8】，单位次。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProbeThreshold(const int64_t& _probeThreshold);

                    /**
                     * 判断参数 ProbeThreshold 是否已赋值
                     * @return ProbeThreshold 是否已赋值
                     * 
                     */
                    bool ProbeThresholdHasBeenSet() const;

                    /**
                     * 获取探测超时时间，范围【10-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProbeTimeout 探测超时时间，范围【10-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetProbeTimeout() const;

                    /**
                     * 设置探测超时时间，范围【10-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _probeTimeout 探测超时时间，范围【10-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProbeTimeout(const int64_t& _probeTimeout);

                    /**
                     * 判断参数 ProbeTimeout 是否已赋值
                     * @return ProbeTimeout 是否已赋值
                     * 
                     */
                    bool ProbeTimeoutHasBeenSet() const;

                private:

                    /**
                     * 探测模式，默认值NQA，不可修改。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_probeType;
                    bool m_probeTypeHasBeenSet;

                    /**
                     * 探测间隔，腾讯云两次健康检查间隔时间，范围【1000-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_probeInterval;
                    bool m_probeIntervalHasBeenSet;

                    /**
                     * 探测次数，连续N次健康检查失败后执行路由切换，范围【3-8】，单位次。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_probeThreshold;
                    bool m_probeThresholdHasBeenSet;

                    /**
                     * 探测超时时间，范围【10-5000】，单位ms。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_probeTimeout;
                    bool m_probeTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_HEALTHCHECKCONFIG_H_
