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
                     * 获取是否开启上下文改写
                     * @return EnableContextRewrite 是否开启上下文改写
                     * 
                     */
                    bool GetEnableContextRewrite() const;

                    /**
                     * 设置是否开启上下文改写
                     * @param _enableContextRewrite 是否开启上下文改写
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
                     * 获取是否开启图文检索
                     * @return EnableImageTextRetrieval 是否开启图文检索
                     * 
                     */
                    bool GetEnableImageTextRetrieval() const;

                    /**
                     * 设置是否开启图文检索
                     * @param _enableImageTextRetrieval 是否开启图文检索
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
                     * 获取回复灵活度
                     * @return ReplyFlexibility 回复灵活度
                     * 
                     */
                    uint64_t GetReplyFlexibility() const;

                    /**
                     * 设置回复灵活度
                     * @param _replyFlexibility 回复灵活度
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
                     * 获取意图达成优先级
                     * @return IntentAchievement 意图达成优先级
                     * 
                     */
                    std::vector<IntentAchievementInfo> GetIntentAchievement() const;

                    /**
                     * 设置意图达成优先级
                     * @param _intentAchievement 意图达成优先级
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
                     * 是否开启上下文改写
                     */
                    bool m_enableContextRewrite;
                    bool m_enableContextRewriteHasBeenSet;

                    /**
                     * 是否开启图文检索
                     */
                    bool m_enableImageTextRetrieval;
                    bool m_enableImageTextRetrievalHasBeenSet;

                    /**
                     * 回复灵活度
                     */
                    uint64_t m_replyFlexibility;
                    bool m_replyFlexibilityHasBeenSet;

                    /**
                     * 意图达成优先级
                     */
                    std::vector<IntentAchievementInfo> m_intentAchievement;
                    bool m_intentAchievementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPADVANCEDCONF_H_
