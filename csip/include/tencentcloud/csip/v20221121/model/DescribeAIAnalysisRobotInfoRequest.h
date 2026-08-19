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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisRobotInfo请求参数结构体
                */
                class DescribeAIAnalysisRobotInfoRequest : public AbstractModel
                {
                public:
                    DescribeAIAnalysisRobotInfoRequest();
                    ~DescribeAIAnalysisRobotInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入类型，0/不传入：企业微信url配置接入 1:企业微信扫码接入 2:微信扫码接入 3:QQ 账密接入 4:飞书 账密接入 5:钉钉 账密接入</p>
                     * @return AccessType <p>接入类型，0/不传入：企业微信url配置接入 1:企业微信扫码接入 2:微信扫码接入 3:QQ 账密接入 4:飞书 账密接入 5:钉钉 账密接入</p>
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置<p>接入类型，0/不传入：企业微信url配置接入 1:企业微信扫码接入 2:微信扫码接入 3:QQ 账密接入 4:飞书 账密接入 5:钉钉 账密接入</p>
                     * @param _accessType <p>接入类型，0/不传入：企业微信url配置接入 1:企业微信扫码接入 2:微信扫码接入 3:QQ 账密接入 4:飞书 账密接入 5:钉钉 账密接入</p>
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>QQ/飞书/钉钉 创建Bot账号ID</p>
                     * @return AccountId <p>QQ/飞书/钉钉 创建Bot账号ID</p>
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置<p>QQ/飞书/钉钉 创建Bot账号ID</p>
                     * @param _accountId <p>QQ/飞书/钉钉 创建Bot账号ID</p>
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取<p>QQ/飞书/钉钉 创建Bot密钥</p>
                     * @return Secret <p>QQ/飞书/钉钉 创建Bot密钥</p>
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置<p>QQ/飞书/钉钉 创建Bot密钥</p>
                     * @param _secret <p>QQ/飞书/钉钉 创建Bot密钥</p>
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取<p>预设机器人名称，为空时则后台生成</p>
                     * @return BotName <p>预设机器人名称，为空时则后台生成</p>
                     * 
                     */
                    std::string GetBotName() const;

                    /**
                     * 设置<p>预设机器人名称，为空时则后台生成</p>
                     * @param _botName <p>预设机器人名称，为空时则后台生成</p>
                     * 
                     */
                    void SetBotName(const std::string& _botName);

                    /**
                     * 判断参数 BotName 是否已赋值
                     * @return BotName 是否已赋值
                     * 
                     */
                    bool BotNameHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型，0/不传入：企业微信url配置接入 1:企业微信扫码接入 2:微信扫码接入 3:QQ 账密接入 4:飞书 账密接入 5:钉钉 账密接入</p>
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>QQ/飞书/钉钉 创建Bot账号ID</p>
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * <p>QQ/飞书/钉钉 创建Bot密钥</p>
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * <p>预设机器人名称，为空时则后台生成</p>
                     */
                    std::string m_botName;
                    bool m_botNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISROBOTINFOREQUEST_H_
