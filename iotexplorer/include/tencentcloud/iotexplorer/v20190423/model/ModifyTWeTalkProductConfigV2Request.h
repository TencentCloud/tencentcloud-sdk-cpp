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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKPRODUCTCONFIGV2REQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKPRODUCTCONFIGV2REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkBasicConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkConversationConfigInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ModifyTWeTalkProductConfigV2请求参数结构体
                */
                class ModifyTWeTalkProductConfigV2Request : public AbstractModel
                {
                public:
                    ModifyTWeTalkProductConfigV2Request();
                    ~ModifyTWeTalkProductConfigV2Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取支持的语言，zh-中文；en-英文；默认zh
                     * @return TargetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置支持的语言，zh-中文；en-英文；默认zh
                     * @param _targetLanguage 支持的语言，zh-中文；en-英文；默认zh
                     * 
                     */
                    void SetTargetLanguage(const std::string& _targetLanguage);

                    /**
                     * 判断参数 TargetLanguage 是否已赋值
                     * @return TargetLanguage 是否已赋值
                     * 
                     */
                    bool TargetLanguageHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return ConfigName 名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置名称
                     * @param _configName 名称
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取系统基础配置，当需要使用系统三段式配置时配置。
                     * @return BasicConfig 系统基础配置，当需要使用系统三段式配置时配置。
                     * 
                     */
                    TalkBasicConfigInfo GetBasicConfig() const;

                    /**
                     * 设置系统基础配置，当需要使用系统三段式配置时配置。
                     * @param _basicConfig 系统基础配置，当需要使用系统三段式配置时配置。
                     * 
                     */
                    void SetBasicConfig(const TalkBasicConfigInfo& _basicConfig);

                    /**
                     * 判断参数 BasicConfig 是否已赋值
                     * @return BasicConfig 是否已赋值
                     * 
                     */
                    bool BasicConfigHasBeenSet() const;

                    /**
                     * 获取自定义语音识别配置
                     * @return STTConfig 自定义语音识别配置
                     * 
                     */
                    TalkSTTConfigInfo GetSTTConfig() const;

                    /**
                     * 设置自定义语音识别配置
                     * @param _sTTConfig 自定义语音识别配置
                     * 
                     */
                    void SetSTTConfig(const TalkSTTConfigInfo& _sTTConfig);

                    /**
                     * 判断参数 STTConfig 是否已赋值
                     * @return STTConfig 是否已赋值
                     * 
                     */
                    bool STTConfigHasBeenSet() const;

                    /**
                     * 获取自定义大模型配置
                     * @return LLMConfig 自定义大模型配置
                     * 
                     */
                    TalkLLMConfigInfo GetLLMConfig() const;

                    /**
                     * 设置自定义大模型配置
                     * @param _lLMConfig 自定义大模型配置
                     * 
                     */
                    void SetLLMConfig(const TalkLLMConfigInfo& _lLMConfig);

                    /**
                     * 判断参数 LLMConfig 是否已赋值
                     * @return LLMConfig 是否已赋值
                     * 
                     */
                    bool LLMConfigHasBeenSet() const;

                    /**
                     * 获取语音合成配置
                     * @return TTSConfig 语音合成配置
                     * 
                     */
                    TalkTTSConfigInfo GetTTSConfig() const;

                    /**
                     * 设置语音合成配置
                     * @param _tTSConfig 语音合成配置
                     * 
                     */
                    void SetTTSConfig(const TalkTTSConfigInfo& _tTSConfig);

                    /**
                     * 判断参数 TTSConfig 是否已赋值
                     * @return TTSConfig 是否已赋值
                     * 
                     */
                    bool TTSConfigHasBeenSet() const;

                    /**
                     * 获取会话配置
                     * @return ConversationConfig 会话配置
                     * 
                     */
                    TalkConversationConfigInfo GetConversationConfig() const;

                    /**
                     * 设置会话配置
                     * @param _conversationConfig 会话配置
                     * 
                     */
                    void SetConversationConfig(const TalkConversationConfigInfo& _conversationConfig);

                    /**
                     * 判断参数 ConversationConfig 是否已赋值
                     * @return ConversationConfig 是否已赋值
                     * 
                     */
                    bool ConversationConfigHasBeenSet() const;

                private:

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 支持的语言，zh-中文；en-英文；默认zh
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 系统基础配置，当需要使用系统三段式配置时配置。
                     */
                    TalkBasicConfigInfo m_basicConfig;
                    bool m_basicConfigHasBeenSet;

                    /**
                     * 自定义语音识别配置
                     */
                    TalkSTTConfigInfo m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 自定义大模型配置
                     */
                    TalkLLMConfigInfo m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 语音合成配置
                     */
                    TalkTTSConfigInfo m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 会话配置
                     */
                    TalkConversationConfigInfo m_conversationConfig;
                    bool m_conversationConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_MODIFYTWETALKPRODUCTCONFIGV2REQUEST_H_
