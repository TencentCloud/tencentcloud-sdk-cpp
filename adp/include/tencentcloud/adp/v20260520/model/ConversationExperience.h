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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AICallConfig.h>
#include <tencentcloud/adp/v20260520/model/BackgroundImage.h>
#include <tencentcloud/adp/v20260520/model/InputBoxConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 对话体验配置
                */
                class ConversationExperience : public AbstractModel
                {
                public:
                    ConversationExperience();
                    ~ConversationExperience() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AI通话配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiCall AI通话配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallConfig GetAiCall() const;

                    /**
                     * 设置AI通话配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiCall AI通话配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAiCall(const AICallConfig& _aiCall);

                    /**
                     * 判断参数 AiCall 是否已赋值
                     * @return AiCall 是否已赋值
                     * 
                     */
                    bool AiCallHasBeenSet() const;

                    /**
                     * 获取背景图片配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackgroundImage 背景图片配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackgroundImage GetBackgroundImage() const;

                    /**
                     * 设置背景图片配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backgroundImage 背景图片配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackgroundImage(const BackgroundImage& _backgroundImage);

                    /**
                     * 判断参数 BackgroundImage 是否已赋值
                     * @return BackgroundImage 是否已赋值
                     * 
                     */
                    bool BackgroundImageHasBeenSet() const;

                    /**
                     * 获取兜底回复开关
                     * @return EnableFallbackReply 兜底回复开关
                     * 
                     */
                    bool GetEnableFallbackReply() const;

                    /**
                     * 设置兜底回复开关
                     * @param _enableFallbackReply 兜底回复开关
                     * 
                     */
                    void SetEnableFallbackReply(const bool& _enableFallbackReply);

                    /**
                     * 判断参数 EnableFallbackReply 是否已赋值
                     * @return EnableFallbackReply 是否已赋值
                     * 
                     */
                    bool EnableFallbackReplyHasBeenSet() const;

                    /**
                     * 获取是否使用推荐问
                     * @return EnableRecommended 是否使用推荐问
                     * 
                     */
                    bool GetEnableRecommended() const;

                    /**
                     * 设置是否使用推荐问
                     * @param _enableRecommended 是否使用推荐问
                     * 
                     */
                    void SetEnableRecommended(const bool& _enableRecommended);

                    /**
                     * 判断参数 EnableRecommended 是否已赋值
                     * @return EnableRecommended 是否已赋值
                     * 
                     */
                    bool EnableRecommendedHasBeenSet() const;

                    /**
                     * 获取是否使用联网搜索
                     * @return EnableWebSearch 是否使用联网搜索
                     * 
                     */
                    bool GetEnableWebSearch() const;

                    /**
                     * 设置是否使用联网搜索
                     * @param _enableWebSearch 是否使用联网搜索
                     * 
                     */
                    void SetEnableWebSearch(const bool& _enableWebSearch);

                    /**
                     * 判断参数 EnableWebSearch 是否已赋值
                     * @return EnableWebSearch 是否已赋值
                     * 
                     */
                    bool EnableWebSearchHasBeenSet() const;

                    /**
                     * 获取兜底回复语
                     * @return FallbackReply 兜底回复语
                     * 
                     */
                    std::string GetFallbackReply() const;

                    /**
                     * 设置兜底回复语
                     * @param _fallbackReply 兜底回复语
                     * 
                     */
                    void SetFallbackReply(const std::string& _fallbackReply);

                    /**
                     * 判断参数 FallbackReply 是否已赋值
                     * @return FallbackReply 是否已赋值
                     * 
                     */
                    bool FallbackReplyHasBeenSet() const;

                    /**
                     * 获取输入框配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputBoxConfig 输入框配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InputBoxConfig GetInputBoxConfig() const;

                    /**
                     * 设置输入框配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputBoxConfig 输入框配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputBoxConfig(const InputBoxConfig& _inputBoxConfig);

                    /**
                     * 判断参数 InputBoxConfig 是否已赋值
                     * @return InputBoxConfig 是否已赋值
                     * 
                     */
                    bool InputBoxConfigHasBeenSet() const;

                    /**
                     * 获取输出方式。枚举值: 1:流式, 2:非流式
                     * @return Method 输出方式。枚举值: 1:流式, 2:非流式
                     * 
                     */
                    int64_t GetMethod() const;

                    /**
                     * 设置输出方式。枚举值: 1:流式, 2:非流式
                     * @param _method 输出方式。枚举值: 1:流式, 2:非流式
                     * 
                     */
                    void SetMethod(const int64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt
                     * @return RecommendPromptMode 推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt
                     * 
                     */
                    int64_t GetRecommendPromptMode() const;

                    /**
                     * 设置推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt
                     * @param _recommendPromptMode 推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt
                     * 
                     */
                    void SetRecommendPromptMode(const int64_t& _recommendPromptMode);

                    /**
                     * 判断参数 RecommendPromptMode 是否已赋值
                     * @return RecommendPromptMode 是否已赋值
                     * 
                     */
                    bool RecommendPromptModeHasBeenSet() const;

                private:

                    /**
                     * AI通话配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallConfig m_aiCall;
                    bool m_aiCallHasBeenSet;

                    /**
                     * 背景图片配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackgroundImage m_backgroundImage;
                    bool m_backgroundImageHasBeenSet;

                    /**
                     * 兜底回复开关
                     */
                    bool m_enableFallbackReply;
                    bool m_enableFallbackReplyHasBeenSet;

                    /**
                     * 是否使用推荐问
                     */
                    bool m_enableRecommended;
                    bool m_enableRecommendedHasBeenSet;

                    /**
                     * 是否使用联网搜索
                     */
                    bool m_enableWebSearch;
                    bool m_enableWebSearchHasBeenSet;

                    /**
                     * 兜底回复语
                     */
                    std::string m_fallbackReply;
                    bool m_fallbackReplyHasBeenSet;

                    /**
                     * 输入框配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InputBoxConfig m_inputBoxConfig;
                    bool m_inputBoxConfigHasBeenSet;

                    /**
                     * 输出方式。枚举值: 1:流式, 2:非流式
                     */
                    int64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt
                     */
                    int64_t m_recommendPromptMode;
                    bool m_recommendPromptModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_
