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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ModelDetailInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 记忆配置
                */
                class AppMemoryConfig : public AbstractModel
                {
                public:
                    AppMemoryConfig();
                    ~AppMemoryConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启长记忆
                     * @return Enabled 是否开启长记忆
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启长记忆
                     * @param _enabled 是否开启长记忆
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取长记忆时长
                     * @return LongMemoryDay 长记忆时长
                     * 
                     */
                    uint64_t GetLongMemoryDay() const;

                    /**
                     * 设置长记忆时长
                     * @param _longMemoryDay 长记忆时长
                     * 
                     */
                    void SetLongMemoryDay(const uint64_t& _longMemoryDay);

                    /**
                     * 判断参数 LongMemoryDay 是否已赋值
                     * @return LongMemoryDay 是否已赋值
                     * 
                     */
                    bool LongMemoryDayHasBeenSet() const;

                    /**
                     * 获取模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Model 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ModelDetailInfo GetModel() const;

                    /**
                     * 设置模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _model 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModel(const ModelDetailInfo& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取prompt内容
                     * @return PromptContent prompt内容
                     * 
                     */
                    std::string GetPromptContent() const;

                    /**
                     * 设置prompt内容
                     * @param _promptContent prompt内容
                     * 
                     */
                    void SetPromptContent(const std::string& _promptContent);

                    /**
                     * 判断参数 PromptContent 是否已赋值
                     * @return PromptContent 是否已赋值
                     * 
                     */
                    bool PromptContentHasBeenSet() const;

                    /**
                     * 获取提示词模式。枚举值: 1:自定义
                     * @return PromptMode 提示词模式。枚举值: 1:自定义
                     * 
                     */
                    int64_t GetPromptMode() const;

                    /**
                     * 设置提示词模式。枚举值: 1:自定义
                     * @param _promptMode 提示词模式。枚举值: 1:自定义
                     * 
                     */
                    void SetPromptMode(const int64_t& _promptMode);

                    /**
                     * 判断参数 PromptMode 是否已赋值
                     * @return PromptMode 是否已赋值
                     * 
                     */
                    bool PromptModeHasBeenSet() const;

                private:

                    /**
                     * 是否开启长记忆
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 长记忆时长
                     */
                    uint64_t m_longMemoryDay;
                    bool m_longMemoryDayHasBeenSet;

                    /**
                     * 模型配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ModelDetailInfo m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * prompt内容
                     */
                    std::string m_promptContent;
                    bool m_promptContentHasBeenSet;

                    /**
                     * 提示词模式。枚举值: 1:自定义
                     */
                    int64_t m_promptMode;
                    bool m_promptModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPMEMORYCONFIG_H_
