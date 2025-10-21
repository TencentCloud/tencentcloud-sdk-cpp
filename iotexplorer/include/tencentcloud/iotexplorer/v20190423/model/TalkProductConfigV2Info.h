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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKPRODUCTCONFIGV2INFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKPRODUCTCONFIGV2INFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * twetalk连接配置信息。
                */
                class TalkProductConfigV2Info : public AbstractModel
                {
                public:
                    TalkProductConfigV2Info();
                    ~TalkProductConfigV2Info() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UIN
                     * @return Uin UIN
                     * 
                     */
                    int64_t GetUin() const;

                    /**
                     * 设置UIN
                     * @param _uin UIN
                     * 
                     */
                    void SetUin(const int64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取APPID
                     * @return AppId APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置APPID
                     * @param _appId APPID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
                     * 获取配置名称
                     * @return ConfigName 配置名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名称
                     * @param _configName 配置名称
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
                     * 获取语言，默认zh；zh-中文；en-英文
                     * @return TargetLanguage 语言，默认zh；zh-中文；en-英文
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置语言，默认zh；zh-中文；en-英文
                     * @param _targetLanguage 语言，默认zh；zh-中文；en-英文
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
                     * 获取基础配置
                     * @return BasicConfig 基础配置
                     * 
                     */
                    TalkBasicConfigInfo GetBasicConfig() const;

                    /**
                     * 设置基础配置
                     * @param _basicConfig 基础配置
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
                     * 获取语音识别配置
                     * @return STTConfig 语音识别配置
                     * 
                     */
                    TalkSTTConfigInfo GetSTTConfig() const;

                    /**
                     * 设置语音识别配置
                     * @param _sTTConfig 语音识别配置
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
                     * 获取大模型配置
                     * @return LLMConfig 大模型配置
                     * 
                     */
                    TalkLLMConfigInfo GetLLMConfig() const;

                    /**
                     * 设置大模型配置
                     * @param _lLMConfig 大模型配置
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

                    /**
                     * 获取版本号
                     * @return Version 版本号
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置版本号
                     * @param _version 版本号
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取创建时间，秒级时间戳
                     * @return CreateTime 创建时间，秒级时间戳
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，秒级时间戳
                     * @param _createTime 创建时间，秒级时间戳
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间，秒级时间戳
                     * @return UpdateTime 更新时间，秒级时间戳
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间，秒级时间戳
                     * @param _updateTime 更新时间，秒级时间戳
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * UIN
                     */
                    int64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

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
                     * 配置名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 语言，默认zh；zh-中文；en-英文
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 基础配置
                     */
                    TalkBasicConfigInfo m_basicConfig;
                    bool m_basicConfigHasBeenSet;

                    /**
                     * 语音识别配置
                     */
                    TalkSTTConfigInfo m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 大模型配置
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

                    /**
                     * 版本号
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 创建时间，秒级时间戳
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，秒级时间戳
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKPRODUCTCONFIGV2INFO_H_
