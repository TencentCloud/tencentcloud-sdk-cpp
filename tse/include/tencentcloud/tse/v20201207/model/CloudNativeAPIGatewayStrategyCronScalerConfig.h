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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyCronScalerConfigParam.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 定时伸缩策略配置
                */
                class CloudNativeAPIGatewayStrategyCronScalerConfig : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyCronScalerConfig();
                    ~CloudNativeAPIGatewayStrategyCronScalerConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启定时伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启定时伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启定时伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enabled 是否开启定时伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * @deprecated
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取定时伸缩配置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 定时伸缩配置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam> GetParams() const;

                    /**
                     * 设置定时伸缩配置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 定时伸缩配置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * @deprecated
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * @deprecated
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetStrategyId() const;

                    /**
                     * 设置弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyId 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetStrategyId(const std::string& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * @deprecated
                     */
                    bool StrategyIdHasBeenSet() const;

                private:

                    /**
                     * 是否开启定时伸缩
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 定时伸缩配置参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CloudNativeAPIGatewayStrategyCronScalerConfigParam> m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 弹性策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyId;
                    bool m_strategyIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYCRONSCALERCONFIG_H_
