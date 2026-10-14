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
                     * 获取<p>AI通话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AiCall <p>AI通话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AICallConfig GetAiCall() const;

                    /**
                     * 设置<p>AI通话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aiCall <p>AI通话配置</p>
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
                     * 获取<p>背景图片配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackgroundImage <p>背景图片配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BackgroundImage GetBackgroundImage() const;

                    /**
                     * 设置<p>背景图片配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backgroundImage <p>背景图片配置</p>
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
                     * 获取<p>兜底回复开关</p>
                     * @return EnableFallbackReply <p>兜底回复开关</p>
                     * 
                     */
                    bool GetEnableFallbackReply() const;

                    /**
                     * 设置<p>兜底回复开关</p>
                     * @param _enableFallbackReply <p>兜底回复开关</p>
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
                     * 获取<p>是否使用推荐问</p>
                     * @return EnableRecommended <p>是否使用推荐问</p>
                     * 
                     */
                    bool GetEnableRecommended() const;

                    /**
                     * 设置<p>是否使用推荐问</p>
                     * @param _enableRecommended <p>是否使用推荐问</p>
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
                     * 获取<p>是否使用联网搜索</p>
                     * @return EnableWebSearch <p>是否使用联网搜索</p>
                     * 
                     */
                    bool GetEnableWebSearch() const;

                    /**
                     * 设置<p>是否使用联网搜索</p>
                     * @param _enableWebSearch <p>是否使用联网搜索</p>
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
                     * 获取<p>兜底回复语</p>
                     * @return FallbackReply <p>兜底回复语</p>
                     * 
                     */
                    std::string GetFallbackReply() const;

                    /**
                     * 设置<p>兜底回复语</p>
                     * @param _fallbackReply <p>兜底回复语</p>
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
                     * 获取<p>输入框配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputBoxConfig <p>输入框配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InputBoxConfig GetInputBoxConfig() const;

                    /**
                     * 设置<p>输入框配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputBoxConfig <p>输入框配置</p>
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
                     * 获取<p>输出方式。枚举值: 1:流式, 2:非流式</p>
                     * @return Method <p>输出方式。枚举值: 1:流式, 2:非流式</p>
                     * 
                     */
                    int64_t GetMethod() const;

                    /**
                     * 设置<p>输出方式。枚举值: 1:流式, 2:非流式</p>
                     * @param _method <p>输出方式。枚举值: 1:流式, 2:非流式</p>
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
                     * 获取<p>推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt</p>
                     * @return RecommendPromptMode <p>推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt</p>
                     * 
                     */
                    int64_t GetRecommendPromptMode() const;

                    /**
                     * 设置<p>推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt</p>
                     * @param _recommendPromptMode <p>推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt</p>
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
                     * <p>AI通话配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AICallConfig m_aiCall;
                    bool m_aiCallHasBeenSet;

                    /**
                     * <p>背景图片配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BackgroundImage m_backgroundImage;
                    bool m_backgroundImageHasBeenSet;

                    /**
                     * <p>兜底回复开关</p>
                     */
                    bool m_enableFallbackReply;
                    bool m_enableFallbackReplyHasBeenSet;

                    /**
                     * <p>是否使用推荐问</p>
                     */
                    bool m_enableRecommended;
                    bool m_enableRecommendedHasBeenSet;

                    /**
                     * <p>是否使用联网搜索</p>
                     */
                    bool m_enableWebSearch;
                    bool m_enableWebSearchHasBeenSet;

                    /**
                     * <p>兜底回复语</p>
                     */
                    std::string m_fallbackReply;
                    bool m_fallbackReplyHasBeenSet;

                    /**
                     * <p>输入框配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InputBoxConfig m_inputBoxConfig;
                    bool m_inputBoxConfigHasBeenSet;

                    /**
                     * <p>输出方式。枚举值: 1:流式, 2:非流式</p>
                     */
                    int64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>推荐问生成prompt模式。枚举值: 1:仅结合知识库输出推荐问的prompt</p>
                     */
                    int64_t m_recommendPromptMode;
                    bool m_recommendPromptModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONEXPERIENCE_H_
