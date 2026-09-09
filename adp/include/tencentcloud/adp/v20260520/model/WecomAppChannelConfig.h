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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECOMAPPCHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECOMAPPCHANNELCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CallbackConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 企微应用渠道配置
                */
                class WecomAppChannelConfig : public AbstractModel
                {
                public:
                    WecomAppChannelConfig();
                    ~WecomAppChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>回调配置</p>
                     * @return Callback <p>回调配置</p>
                     * 
                     */
                    CallbackConfig GetCallback() const;

                    /**
                     * 设置<p>回调配置</p>
                     * @param _callback <p>回调配置</p>
                     * 
                     */
                    void SetCallback(const CallbackConfig& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取<p>第三方企业ID</p>
                     * @return ThirdChannelCorpId <p>第三方企业ID</p>
                     * 
                     */
                    std::string GetThirdChannelCorpId() const;

                    /**
                     * 设置<p>第三方企业ID</p>
                     * @param _thirdChannelCorpId <p>第三方企业ID</p>
                     * 
                     */
                    void SetThirdChannelCorpId(const std::string& _thirdChannelCorpId);

                    /**
                     * 判断参数 ThirdChannelCorpId 是否已赋值
                     * @return ThirdChannelCorpId 是否已赋值
                     * 
                     */
                    bool ThirdChannelCorpIdHasBeenSet() const;

                    /**
                     * 获取<p>第三方渠道ID</p>
                     * @return ThirdChannelId <p>第三方渠道ID</p>
                     * 
                     */
                    std::string GetThirdChannelId() const;

                    /**
                     * 设置<p>第三方渠道ID</p>
                     * @param _thirdChannelId <p>第三方渠道ID</p>
                     * 
                     */
                    void SetThirdChannelId(const std::string& _thirdChannelId);

                    /**
                     * 判断参数 ThirdChannelId 是否已赋值
                     * @return ThirdChannelId 是否已赋值
                     * 
                     */
                    bool ThirdChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>企微应用ID</p>
                     * @return WecomAgentId <p>企微应用ID</p>
                     * 
                     */
                    std::string GetWecomAgentId() const;

                    /**
                     * 设置<p>企微应用ID</p>
                     * @param _wecomAgentId <p>企微应用ID</p>
                     * 
                     */
                    void SetWecomAgentId(const std::string& _wecomAgentId);

                    /**
                     * 判断参数 WecomAgentId 是否已赋值
                     * @return WecomAgentId 是否已赋值
                     * 
                     */
                    bool WecomAgentIdHasBeenSet() const;

                    /**
                     * 获取<p>企微应用Secret</p>
                     * @return WecomAgentSecret <p>企微应用Secret</p>
                     * 
                     */
                    std::string GetWecomAgentSecret() const;

                    /**
                     * 设置<p>企微应用Secret</p>
                     * @param _wecomAgentSecret <p>企微应用Secret</p>
                     * 
                     */
                    void SetWecomAgentSecret(const std::string& _wecomAgentSecret);

                    /**
                     * 判断参数 WecomAgentSecret 是否已赋值
                     * @return WecomAgentSecret 是否已赋值
                     * 
                     */
                    bool WecomAgentSecretHasBeenSet() const;

                    /**
                     * 获取<p>企业ID</p>
                     * @return WecomCorpId <p>企业ID</p>
                     * 
                     */
                    std::string GetWecomCorpId() const;

                    /**
                     * 设置<p>企业ID</p>
                     * @param _wecomCorpId <p>企业ID</p>
                     * 
                     */
                    void SetWecomCorpId(const std::string& _wecomCorpId);

                    /**
                     * 判断参数 WecomCorpId 是否已赋值
                     * @return WecomCorpId 是否已赋值
                     * 
                     */
                    bool WecomCorpIdHasBeenSet() const;

                private:

                    /**
                     * <p>回调配置</p>
                     */
                    CallbackConfig m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>第三方企业ID</p>
                     */
                    std::string m_thirdChannelCorpId;
                    bool m_thirdChannelCorpIdHasBeenSet;

                    /**
                     * <p>第三方渠道ID</p>
                     */
                    std::string m_thirdChannelId;
                    bool m_thirdChannelIdHasBeenSet;

                    /**
                     * <p>企微应用ID</p>
                     */
                    std::string m_wecomAgentId;
                    bool m_wecomAgentIdHasBeenSet;

                    /**
                     * <p>企微应用Secret</p>
                     */
                    std::string m_wecomAgentSecret;
                    bool m_wecomAgentSecretHasBeenSet;

                    /**
                     * <p>企业ID</p>
                     */
                    std::string m_wecomCorpId;
                    bool m_wecomCorpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECOMAPPCHANNELCONFIG_H_
