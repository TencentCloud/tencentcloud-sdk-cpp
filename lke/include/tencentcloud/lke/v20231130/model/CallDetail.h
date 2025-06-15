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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_

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
                * 调用类型
                */
                class CallDetail : public AbstractModel
                {
                public:
                    CallDetail();
                    ~CallDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallTime 调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallTime() const;

                    /**
                     * 设置调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callTime 调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallTime(const std::string& _callTime);

                    /**
                     * 判断参数 CallTime 是否已赋值
                     * @return CallTime 是否已赋值
                     * 
                     */
                    bool CallTimeHasBeenSet() const;

                    /**
                     * 获取总token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalTokenUsage 总token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTotalTokenUsage() const;

                    /**
                     * 设置总token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalTokenUsage 总token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalTokenUsage(const double& _totalTokenUsage);

                    /**
                     * 判断参数 TotalTokenUsage 是否已赋值
                     * @return TotalTokenUsage 是否已赋值
                     * 
                     */
                    bool TotalTokenUsageHasBeenSet() const;

                    /**
                     * 获取输入token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTokenUsage 输入token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetInputTokenUsage() const;

                    /**
                     * 设置输入token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputTokenUsage 输入token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputTokenUsage(const double& _inputTokenUsage);

                    /**
                     * 判断参数 InputTokenUsage 是否已赋值
                     * @return InputTokenUsage 是否已赋值
                     * 
                     */
                    bool InputTokenUsageHasBeenSet() const;

                    /**
                     * 获取输出token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputTokenUsage 输出token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetOutputTokenUsage() const;

                    /**
                     * 设置输出token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputTokenUsage 输出token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputTokenUsage(const double& _outputTokenUsage);

                    /**
                     * 判断参数 OutputTokenUsage 是否已赋值
                     * @return OutputTokenUsage 是否已赋值
                     * 
                     */
                    bool OutputTokenUsageHasBeenSet() const;

                    /**
                     * 获取搜索服务调用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchUsage 搜索服务调用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSearchUsage() const;

                    /**
                     * 设置搜索服务调用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchUsage 搜索服务调用次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchUsage(const uint64_t& _searchUsage);

                    /**
                     * 判断参数 SearchUsage 是否已赋值
                     * @return SearchUsage 是否已赋值
                     * 
                     */
                    bool SearchUsageHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取调用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallType 调用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置调用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callType 调用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UinAccount 账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUinAccount() const;

                    /**
                     * 设置账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uinAccount 账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUinAccount(const std::string& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appName 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取总消耗页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageUsage 总消耗页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPageUsage() const;

                    /**
                     * 设置总消耗页数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageUsage 总消耗页数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageUsage(const uint64_t& _pageUsage);

                    /**
                     * 判断参数 PageUsage 是否已赋值
                     * @return PageUsage 是否已赋值
                     * 
                     */
                    bool PageUsageHasBeenSet() const;

                    /**
                     * 获取筛选子场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubScene 筛选子场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubScene() const;

                    /**
                     * 设置筛选子场景
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subScene 筛选子场景
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubScene(const std::string& _subScene);

                    /**
                     * 判断参数 SubScene 是否已赋值
                     * @return SubScene 是否已赋值
                     * 
                     */
                    bool SubSceneHasBeenSet() const;

                    /**
                     * 获取账单明细对应的自定义tag
                     * @return BillingTag 账单明细对应的自定义tag
                     * 
                     */
                    std::string GetBillingTag() const;

                    /**
                     * 设置账单明细对应的自定义tag
                     * @param _billingTag 账单明细对应的自定义tag
                     * 
                     */
                    void SetBillingTag(const std::string& _billingTag);

                    /**
                     * 判断参数 BillingTag 是否已赋值
                     * @return BillingTag 是否已赋值
                     * 
                     */
                    bool BillingTagHasBeenSet() const;

                private:

                    /**
                     * 关联ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 调用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callTime;
                    bool m_callTimeHasBeenSet;

                    /**
                     * 总token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_totalTokenUsage;
                    bool m_totalTokenUsageHasBeenSet;

                    /**
                     * 输入token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_inputTokenUsage;
                    bool m_inputTokenUsageHasBeenSet;

                    /**
                     * 输出token消耗
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_outputTokenUsage;
                    bool m_outputTokenUsageHasBeenSet;

                    /**
                     * 搜索服务调用次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_searchUsage;
                    bool m_searchUsageHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 调用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 总消耗页数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_pageUsage;
                    bool m_pageUsageHasBeenSet;

                    /**
                     * 筛选子场景
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subScene;
                    bool m_subSceneHasBeenSet;

                    /**
                     * 账单明细对应的自定义tag
                     */
                    std::string m_billingTag;
                    bool m_billingTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CALLDETAIL_H_
