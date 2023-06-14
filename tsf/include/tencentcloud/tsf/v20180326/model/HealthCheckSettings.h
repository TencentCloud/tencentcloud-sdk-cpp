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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTINGS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSetting.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 健康检查参数
                */
                class HealthCheckSettings : public AbstractModel
                {
                public:
                    HealthCheckSettings();
                    ~HealthCheckSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存活健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessProbe 存活健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSetting GetLivenessProbe() const;

                    /**
                     * 设置存活健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livenessProbe 存活健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivenessProbe(const HealthCheckSetting& _livenessProbe);

                    /**
                     * 判断参数 LivenessProbe 是否已赋值
                     * @return LivenessProbe 是否已赋值
                     * 
                     */
                    bool LivenessProbeHasBeenSet() const;

                    /**
                     * 获取就绪健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadinessProbe 就绪健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSetting GetReadinessProbe() const;

                    /**
                     * 设置就绪健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readinessProbe 就绪健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadinessProbe(const HealthCheckSetting& _readinessProbe);

                    /**
                     * 判断参数 ReadinessProbe 是否已赋值
                     * @return ReadinessProbe 是否已赋值
                     * 
                     */
                    bool ReadinessProbeHasBeenSet() const;

                private:

                    /**
                     * 存活健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSetting m_livenessProbe;
                    bool m_livenessProbeHasBeenSet;

                    /**
                     * 就绪健康检查
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSetting m_readinessProbe;
                    bool m_readinessProbeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_HEALTHCHECKSETTINGS_H_
