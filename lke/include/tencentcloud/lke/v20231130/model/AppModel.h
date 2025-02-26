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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用模型配置
                */
                class AppModel : public AbstractModel
                {
                public:
                    AppModel();
                    ~AppModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContextLimit 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetContextLimit() const;

                    /**
                     * 设置上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contextLimit 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContextLimit(const uint64_t& _contextLimit);

                    /**
                     * 判断参数 ContextLimit 是否已赋值
                     * @return ContextLimit 是否已赋值
                     * 
                     */
                    bool ContextLimitHasBeenSet() const;

                    /**
                     * 获取模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取token余量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenBalance token余量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTokenBalance() const;

                    /**
                     * 设置token余量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tokenBalance token余量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTokenBalance(const double& _tokenBalance);

                    /**
                     * 判断参数 TokenBalance 是否已赋值
                     * @return TokenBalance 是否已赋值
                     * 
                     */
                    bool TokenBalanceHasBeenSet() const;

                    /**
                     * 获取是否使用上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUseContext 是否使用上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsUseContext() const;

                    /**
                     * 设置是否使用上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isUseContext 是否使用上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsUseContext(const bool& _isUseContext);

                    /**
                     * 判断参数 IsUseContext 是否已赋值
                     * @return IsUseContext 是否已赋值
                     * 
                     */
                    bool IsUseContextHasBeenSet() const;

                    /**
                     * 获取上下文记忆轮数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HistoryLimit 上下文记忆轮数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置上下文记忆轮数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _historyLimit 上下文记忆轮数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取使用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageType 使用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUsageType() const;

                    /**
                     * 设置使用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageType 使用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageType(const std::string& _usageType);

                    /**
                     * 判断参数 UsageType 是否已赋值
                     * @return UsageType 是否已赋值
                     * 
                     */
                    bool UsageTypeHasBeenSet() const;

                    /**
                     * 获取模型温度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Temperature 模型温度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemperature() const;

                    /**
                     * 设置模型温度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _temperature 模型温度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemperature(const std::string& _temperature);

                    /**
                     * 判断参数 Temperature 是否已赋值
                     * @return Temperature 是否已赋值
                     * 
                     */
                    bool TemperatureHasBeenSet() const;

                    /**
                     * 获取模型TopP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopP 模型TopP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTopP() const;

                    /**
                     * 设置模型TopP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _topP 模型TopP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTopP(const std::string& _topP);

                    /**
                     * 判断参数 TopP 是否已赋值
                     * @return TopP 是否已赋值
                     * 
                     */
                    bool TopPHasBeenSet() const;

                    /**
                     * 获取模型资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus 模型资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置模型资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus 模型资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_contextLimit;
                    bool m_contextLimitHasBeenSet;

                    /**
                     * 模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * token余量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tokenBalance;
                    bool m_tokenBalanceHasBeenSet;

                    /**
                     * 是否使用上下文指代轮次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUseContext;
                    bool m_isUseContextHasBeenSet;

                    /**
                     * 上下文记忆轮数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * 使用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_usageType;
                    bool m_usageTypeHasBeenSet;

                    /**
                     * 模型温度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_temperature;
                    bool m_temperatureHasBeenSet;

                    /**
                     * 模型TopP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topP;
                    bool m_topPHasBeenSet;

                    /**
                     * 模型资源状态 1：资源可用；2：资源已用尽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPMODEL_H_
