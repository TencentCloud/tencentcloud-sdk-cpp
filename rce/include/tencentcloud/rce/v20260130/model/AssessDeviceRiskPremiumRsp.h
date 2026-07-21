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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/Decision.h>
#include <tencentcloud/rce/v20260130/model/DataScore.h>
#include <tencentcloud/rce/v20260130/model/Device.h>
#include <tencentcloud/rce/v20260130/model/Environment.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 设备风险评估高级版返回结果
                */
                class AssessDeviceRiskPremiumRsp : public AbstractModel
                {
                public:
                    AssessDeviceRiskPremiumRsp();
                    ~AssessDeviceRiskPremiumRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>决策信息</p>
                     * @return Decision <p>决策信息</p>
                     * 
                     */
                    Decision GetDecision() const;

                    /**
                     * 设置<p>决策信息</p>
                     * @param _decision <p>决策信息</p>
                     * 
                     */
                    void SetDecision(const Decision& _decision);

                    /**
                     * 判断参数 Decision 是否已赋值
                     * @return Decision 是否已赋值
                     * 
                     */
                    bool DecisionHasBeenSet() const;

                    /**
                     * 获取<p>设备风险分信息</p>
                     * @return Score <p>设备风险分信息</p>
                     * 
                     */
                    DataScore GetScore() const;

                    /**
                     * 设置<p>设备风险分信息</p>
                     * @param _score <p>设备风险分信息</p>
                     * 
                     */
                    void SetScore(const DataScore& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取<p>设备基础信息</p>
                     * @return Device <p>设备基础信息</p>
                     * 
                     */
                    Device GetDevice() const;

                    /**
                     * 设置<p>设备基础信息</p>
                     * @param _device <p>设备基础信息</p>
                     * 
                     */
                    void SetDevice(const Device& _device);

                    /**
                     * 判断参数 Device 是否已赋值
                     * @return Device 是否已赋值
                     * 
                     */
                    bool DeviceHasBeenSet() const;

                    /**
                     * 获取<p>IP环境基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Environment <p>IP环境基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Environment GetEnvironment() const;

                    /**
                     * 设置<p>IP环境基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environment <p>IP环境基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironment(const Environment& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * <p>决策信息</p>
                     */
                    Decision m_decision;
                    bool m_decisionHasBeenSet;

                    /**
                     * <p>设备风险分信息</p>
                     */
                    DataScore m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * <p>设备基础信息</p>
                     */
                    Device m_device;
                    bool m_deviceHasBeenSet;

                    /**
                     * <p>IP环境基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Environment m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_ASSESSDEVICERISKPREMIUMRSP_H_
