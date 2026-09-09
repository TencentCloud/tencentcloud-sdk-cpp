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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCUSTOMERSERVICECHANNELCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCUSTOMERSERVICECHANNELCONFIG_H_

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
                * 微信客服渠道配置
                */
                class WechatCustomerServiceChannelConfig : public AbstractModel
                {
                public:
                    WechatCustomerServiceChannelConfig();
                    ~WechatCustomerServiceChannelConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>企业微信应用Secret</p>
                     * @return AgentSecret <p>企业微信应用Secret</p>
                     * 
                     */
                    std::string GetAgentSecret() const;

                    /**
                     * 设置<p>企业微信应用Secret</p>
                     * @param _agentSecret <p>企业微信应用Secret</p>
                     * 
                     */
                    void SetAgentSecret(const std::string& _agentSecret);

                    /**
                     * 判断参数 AgentSecret 是否已赋值
                     * @return AgentSecret 是否已赋值
                     * 
                     */
                    bool AgentSecretHasBeenSet() const;

                    /**
                     * 获取<p>头像URL</p>
                     * @return Avatar <p>头像URL</p>
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置<p>头像URL</p>
                     * @param _avatar <p>头像URL</p>
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

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
                     * 获取<p>客服账号ID</p>
                     * @return CustomerServiceId <p>客服账号ID</p>
                     * 
                     */
                    std::string GetCustomerServiceId() const;

                    /**
                     * 设置<p>客服账号ID</p>
                     * @param _customerServiceId <p>客服账号ID</p>
                     * 
                     */
                    void SetCustomerServiceId(const std::string& _customerServiceId);

                    /**
                     * 判断参数 CustomerServiceId 是否已赋值
                     * @return CustomerServiceId 是否已赋值
                     * 
                     */
                    bool CustomerServiceIdHasBeenSet() const;

                    /**
                     * 获取<p>客服账号名称</p>
                     * @return Name <p>客服账号名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>客服账号名称</p>
                     * @param _name <p>客服账号名称</p>
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
                     * 获取<p>客服形象二维码URL</p>
                     * @return ShareCodeUrl <p>客服形象二维码URL</p>
                     * 
                     */
                    std::string GetShareCodeUrl() const;

                    /**
                     * 设置<p>客服形象二维码URL</p>
                     * @param _shareCodeUrl <p>客服形象二维码URL</p>
                     * 
                     */
                    void SetShareCodeUrl(const std::string& _shareCodeUrl);

                    /**
                     * 判断参数 ShareCodeUrl 是否已赋值
                     * @return ShareCodeUrl 是否已赋值
                     * 
                     */
                    bool ShareCodeUrlHasBeenSet() const;

                    /**
                     * 获取<p>企业微信企业ID</p>
                     * @return WecomCorpId <p>企业微信企业ID</p>
                     * 
                     */
                    std::string GetWecomCorpId() const;

                    /**
                     * 设置<p>企业微信企业ID</p>
                     * @param _wecomCorpId <p>企业微信企业ID</p>
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
                     * <p>企业微信应用Secret</p>
                     */
                    std::string m_agentSecret;
                    bool m_agentSecretHasBeenSet;

                    /**
                     * <p>头像URL</p>
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * <p>回调配置</p>
                     */
                    CallbackConfig m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * <p>客服账号ID</p>
                     */
                    std::string m_customerServiceId;
                    bool m_customerServiceIdHasBeenSet;

                    /**
                     * <p>客服账号名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>客服形象二维码URL</p>
                     */
                    std::string m_shareCodeUrl;
                    bool m_shareCodeUrlHasBeenSet;

                    /**
                     * <p>企业微信企业ID</p>
                     */
                    std::string m_wecomCorpId;
                    bool m_wecomCorpIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_WECHATCUSTOMERSERVICECHANNELCONFIG_H_
