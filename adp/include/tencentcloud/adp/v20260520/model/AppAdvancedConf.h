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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DialogCustomConfig.h>
#include <tencentcloud/adp/v20260520/model/IntentAchievementInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用高级配置
                */
                class AppAdvancedConf : public AbstractModel
                {
                public:
                    AppAdvancedConf();
                    ~AppAdvancedConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启上下文改写</p>
                     * @return EnableContextRewrite <p>是否开启上下文改写</p>
                     * 
                     */
                    bool GetEnableContextRewrite() const;

                    /**
                     * 设置<p>是否开启上下文改写</p>
                     * @param _enableContextRewrite <p>是否开启上下文改写</p>
                     * 
                     */
                    void SetEnableContextRewrite(const bool& _enableContextRewrite);

                    /**
                     * 判断参数 EnableContextRewrite 是否已赋值
                     * @return EnableContextRewrite 是否已赋值
                     * 
                     */
                    bool EnableContextRewriteHasBeenSet() const;

                    /**
                     * 获取<p>是否开启图文检索</p>
                     * @return EnableImageTextRetrieval <p>是否开启图文检索</p>
                     * 
                     */
                    bool GetEnableImageTextRetrieval() const;

                    /**
                     * 设置<p>是否开启图文检索</p>
                     * @param _enableImageTextRetrieval <p>是否开启图文检索</p>
                     * 
                     */
                    void SetEnableImageTextRetrieval(const bool& _enableImageTextRetrieval);

                    /**
                     * 判断参数 EnableImageTextRetrieval 是否已赋值
                     * @return EnableImageTextRetrieval 是否已赋值
                     * 
                     */
                    bool EnableImageTextRetrievalHasBeenSet() const;

                    /**
                     * 获取<p>回复灵活度</p>
                     * @return ReplyFlexibility <p>回复灵活度</p>
                     * 
                     */
                    uint64_t GetReplyFlexibility() const;

                    /**
                     * 设置<p>回复灵活度</p>
                     * @param _replyFlexibility <p>回复灵活度</p>
                     * 
                     */
                    void SetReplyFlexibility(const uint64_t& _replyFlexibility);

                    /**
                     * 判断参数 ReplyFlexibility 是否已赋值
                     * @return ReplyFlexibility 是否已赋值
                     * 
                     */
                    bool ReplyFlexibilityHasBeenSet() const;

                    /**
                     * 获取<p>对话端自定义配置(所有模式共用,允许对话中动态修改配置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DialogCustomConfig <p>对话端自定义配置(所有模式共用,允许对话中动态修改配置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DialogCustomConfig GetDialogCustomConfig() const;

                    /**
                     * 设置<p>对话端自定义配置(所有模式共用,允许对话中动态修改配置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dialogCustomConfig <p>对话端自定义配置(所有模式共用,允许对话中动态修改配置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDialogCustomConfig(const DialogCustomConfig& _dialogCustomConfig);

                    /**
                     * 判断参数 DialogCustomConfig 是否已赋值
                     * @return DialogCustomConfig 是否已赋值
                     * 
                     */
                    bool DialogCustomConfigHasBeenSet() const;

                    /**
                     * 获取<p>意图达成优先级</p>
                     * @return IntentAchievement <p>意图达成优先级</p>
                     * 
                     */
                    std::vector<IntentAchievementInfo> GetIntentAchievement() const;

                    /**
                     * 设置<p>意图达成优先级</p>
                     * @param _intentAchievement <p>意图达成优先级</p>
                     * 
                     */
                    void SetIntentAchievement(const std::vector<IntentAchievementInfo>& _intentAchievement);

                    /**
                     * 判断参数 IntentAchievement 是否已赋值
                     * @return IntentAchievement 是否已赋值
                     * 
                     */
                    bool IntentAchievementHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启上下文改写</p>
                     */
                    bool m_enableContextRewrite;
                    bool m_enableContextRewriteHasBeenSet;

                    /**
                     * <p>是否开启图文检索</p>
                     */
                    bool m_enableImageTextRetrieval;
                    bool m_enableImageTextRetrievalHasBeenSet;

                    /**
                     * <p>回复灵活度</p>
                     */
                    uint64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * <p>对话端自定义配置(所有模式共用,允许对话中动态修改配置)</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DialogCustomConfig m_dialogCustomConfig;
                    bool m_dialogCustomConfigHasBeenSet;

                    /**
                     * <p>意图达成优先级</p>
                     */
                    std::vector<IntentAchievementInfo> m_intentAchievement;
                    bool m_intentAchievementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_
