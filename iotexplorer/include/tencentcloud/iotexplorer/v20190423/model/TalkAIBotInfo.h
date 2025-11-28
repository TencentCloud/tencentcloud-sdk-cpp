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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAIBOTINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAIBOTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkSTTConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkLLMConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkTTSConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkAgentConfigInfo.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkProductInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * Talk配置信息描述。
                */
                class TalkAIBotInfo : public AbstractModel
                {
                public:
                    TalkAIBotInfo();
                    ~TalkAIBotInfo() = default;
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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取智能体ID
                     * @return BotId 智能体ID
                     * 
                     */
                    std::string GetBotId() const;

                    /**
                     * 设置智能体ID
                     * @param _botId 智能体ID
                     * 
                     */
                    void SetBotId(const std::string& _botId);

                    /**
                     * 判断参数 BotId 是否已赋值
                     * @return BotId 是否已赋值
                     * 
                     */
                    bool BotIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取语言
                     * @return TargetLanguage 语言
                     * 
                     */
                    std::string GetTargetLanguage() const;

                    /**
                     * 设置语言
                     * @param _targetLanguage 语言
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
                     * 获取语音识别
                     * @return STTConfig 语音识别
                     * 
                     */
                    TalkSTTConfigInfo GetSTTConfig() const;

                    /**
                     * 设置语音识别
                     * @param _sTTConfig 语音识别
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
                     * 获取大模型
                     * @return LLMConfig 大模型
                     * 
                     */
                    TalkLLMConfigInfo GetLLMConfig() const;

                    /**
                     * 设置大模型
                     * @param _lLMConfig 大模型
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
                     * 获取语音合成
                     * @return TTSConfig 语音合成
                     * 
                     */
                    TalkTTSConfigInfo GetTTSConfig() const;

                    /**
                     * 设置语音合成
                     * @param _tTSConfig 语音合成
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
                     * 获取智能体配置
                     * @return AgentConfig 智能体配置
                     * 
                     */
                    TalkAgentConfigInfo GetAgentConfig() const;

                    /**
                     * 设置智能体配置
                     * @param _agentConfig 智能体配置
                     * 
                     */
                    void SetAgentConfig(const TalkAgentConfigInfo& _agentConfig);

                    /**
                     * 判断参数 AgentConfig 是否已赋值
                     * @return AgentConfig 是否已赋值
                     * 
                     */
                    bool AgentConfigHasBeenSet() const;

                    /**
                     * 获取产品信息列表
                     * @return ProductList 产品信息列表
                     * 
                     */
                    TalkProductInfo GetProductList() const;

                    /**
                     * 设置产品信息列表
                     * @param _productList 产品信息列表
                     * 
                     */
                    void SetProductList(const TalkProductInfo& _productList);

                    /**
                     * 判断参数 ProductList 是否已赋值
                     * @return ProductList 是否已赋值
                     * 
                     */
                    bool ProductListHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 智能体ID
                     */
                    std::string m_botId;
                    bool m_botIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 语言
                     */
                    std::string m_targetLanguage;
                    bool m_targetLanguageHasBeenSet;

                    /**
                     * 语音识别
                     */
                    TalkSTTConfigInfo m_sTTConfig;
                    bool m_sTTConfigHasBeenSet;

                    /**
                     * 大模型
                     */
                    TalkLLMConfigInfo m_lLMConfig;
                    bool m_lLMConfigHasBeenSet;

                    /**
                     * 语音合成
                     */
                    TalkTTSConfigInfo m_tTSConfig;
                    bool m_tTSConfigHasBeenSet;

                    /**
                     * 智能体配置
                     */
                    TalkAgentConfigInfo m_agentConfig;
                    bool m_agentConfigHasBeenSet;

                    /**
                     * 产品信息列表
                     */
                    TalkProductInfo m_productList;
                    bool m_productListHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKAIBOTINFO_H_
