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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AgentRuntimeConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateUserKey请求参数结构体
                */
                class CreateUserKeyRequest : public AbstractModel
                {
                public:
                    CreateUserKeyRequest();
                    ~CreateUserKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境ID</p>
                     * @return EnvId <p>环境ID</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>环境ID</p>
                     * @param _envId <p>环境ID</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>用户创建的集成名称，或者密钥名称</p>
                     * @return Name <p>用户创建的集成名称，或者密钥名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>用户创建的集成名称，或者密钥名称</p>
                     * @param _name <p>用户创建的集成名称，或者密钥名称</p>
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
                     * 获取<p>用户创建的集成ID，集成表示，或者密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @return KeyID <p>用户创建的集成ID，集成表示，或者密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    std::string GetKeyID() const;

                    /**
                     * 设置<p>用户创建的集成ID，集成表示，或者密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * @param _keyID <p>用户创建的集成ID，集成表示，或者密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     * 
                     */
                    void SetKeyID(const std::string& _keyID);

                    /**
                     * 判断参数 KeyID 是否已赋值
                     * @return KeyID 是否已赋值
                     * 
                     */
                    bool KeyIDHasBeenSet() const;

                    /**
                     * 获取<p>集成描述</p>
                     * @return Description <p>集成描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>集成描述</p>
                     * @param _description <p>集成描述</p>
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
                     * 获取<p>集成类型，或者授权类型码，对应GetUserKeyTemplateList接口的AuthTypeCode字段，比如github、gitlab、gitee、meeting、PublicAccountOpenService等</p>
                     * @return AuthTypeCode <p>集成类型，或者授权类型码，对应GetUserKeyTemplateList接口的AuthTypeCode字段，比如github、gitlab、gitee、meeting、PublicAccountOpenService等</p>
                     * 
                     */
                    std::string GetAuthTypeCode() const;

                    /**
                     * 设置<p>集成类型，或者授权类型码，对应GetUserKeyTemplateList接口的AuthTypeCode字段，比如github、gitlab、gitee、meeting、PublicAccountOpenService等</p>
                     * @param _authTypeCode <p>集成类型，或者授权类型码，对应GetUserKeyTemplateList接口的AuthTypeCode字段，比如github、gitlab、gitee、meeting、PublicAccountOpenService等</p>
                     * 
                     */
                    void SetAuthTypeCode(const std::string& _authTypeCode);

                    /**
                     * 判断参数 AuthTypeCode 是否已赋值
                     * @return AuthTypeCode 是否已赋值
                     * 
                     */
                    bool AuthTypeCodeHasBeenSet() const;

                    /**
                     * 获取<p>根据集成类型的不同，ext会有不同的子结构，具体每种授权类型的ext需要填写的信息，可以通过GetUserKeyTemplateList获取</p>
                     * @return Ext <p>根据集成类型的不同，ext会有不同的子结构，具体每种授权类型的ext需要填写的信息，可以通过GetUserKeyTemplateList获取</p>
                     * 
                     */
                    std::string GetExt() const;

                    /**
                     * 设置<p>根据集成类型的不同，ext会有不同的子结构，具体每种授权类型的ext需要填写的信息，可以通过GetUserKeyTemplateList获取</p>
                     * @param _ext <p>根据集成类型的不同，ext会有不同的子结构，具体每种授权类型的ext需要填写的信息，可以通过GetUserKeyTemplateList获取</p>
                     * 
                     */
                    void SetExt(const std::string& _ext);

                    /**
                     * 判断参数 Ext 是否已赋值
                     * @return Ext 是否已赋值
                     * 
                     */
                    bool ExtHasBeenSet() const;

                    /**
                     * 获取<p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * @return TicketID <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * 
                     */
                    std::string GetTicketID() const;

                    /**
                     * 设置<p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * @param _ticketID <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     * 
                     */
                    void SetTicketID(const std::string& _ticketID);

                    /**
                     * 判断参数 TicketID 是否已赋值
                     * @return TicketID 是否已赋值
                     * 
                     */
                    bool TicketIDHasBeenSet() const;

                    /**
                     * 获取<p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * @return Business <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置<p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * @param _business <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>创建demo代码云函数需要的参数信息</p><p>入参限制：当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * @return RuntimeConfig <p>创建demo代码云函数需要的参数信息</p><p>入参限制：当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * 
                     */
                    AgentRuntimeConfig GetRuntimeConfig() const;

                    /**
                     * 设置<p>创建demo代码云函数需要的参数信息</p><p>入参限制：当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * @param _runtimeConfig <p>创建demo代码云函数需要的参数信息</p><p>入参限制：当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * 
                     */
                    void SetRuntimeConfig(const AgentRuntimeConfig& _runtimeConfig);

                    /**
                     * 判断参数 RuntimeConfig 是否已赋值
                     * @return RuntimeConfig 是否已赋值
                     * 
                     */
                    bool RuntimeConfigHasBeenSet() const;

                    /**
                     * 获取<p>创建集成时创建关联的示例代码云函数的名称，当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * @return DemoCodeFunctionName <p>创建集成时创建关联的示例代码云函数的名称，当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * 
                     */
                    std::string GetDemoCodeFunctionName() const;

                    /**
                     * 设置<p>创建集成时创建关联的示例代码云函数的名称，当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * @param _demoCodeFunctionName <p>创建集成时创建关联的示例代码云函数的名称，当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     * 
                     */
                    void SetDemoCodeFunctionName(const std::string& _demoCodeFunctionName);

                    /**
                     * 判断参数 DemoCodeFunctionName 是否已赋值
                     * @return DemoCodeFunctionName 是否已赋值
                     * 
                     */
                    bool DemoCodeFunctionNameHasBeenSet() const;

                private:

                    /**
                     * <p>环境ID</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>用户创建的集成名称，或者密钥名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户创建的集成ID，集成表示，或者密钥对标识，前半部分用户填写，后半部分平台按照一定规则生成</p>
                     */
                    std::string m_keyID;
                    bool m_keyIDHasBeenSet;

                    /**
                     * <p>集成描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>集成类型，或者授权类型码，对应GetUserKeyTemplateList接口的AuthTypeCode字段，比如github、gitlab、gitee、meeting、PublicAccountOpenService等</p>
                     */
                    std::string m_authTypeCode;
                    bool m_authTypeCodeHasBeenSet;

                    /**
                     * <p>根据集成类型的不同，ext会有不同的子结构，具体每种授权类型的ext需要填写的信息，可以通过GetUserKeyTemplateList获取</p>
                     */
                    std::string m_ext;
                    bool m_extHasBeenSet;

                    /**
                     * <p>github、gitlab、gitee、腾讯会议等oauth类型的，需要传这个ticket_id，创建的密钥对跟auth_ticket_token(对于github、gitlab、gitee)、weda_ticket_token(对于腾讯会议)关联起来</p>
                     */
                    std::string m_ticketID;
                    bool m_ticketIDHasBeenSet;

                    /**
                     * <p>业务类型，integration：从集成中心来的，默认为空，表示是从授权管理中心来的</p>
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>创建demo代码云函数需要的参数信息</p><p>入参限制：当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     */
                    AgentRuntimeConfig m_runtimeConfig;
                    bool m_runtimeConfigHasBeenSet;

                    /**
                     * <p>创建集成时创建关联的示例代码云函数的名称，当Business为integration，且AuthTypeCode为(weixinmp、wxvirtualpay、weixin-store、channels、weixinpaydc)之一时必填</p>
                     */
                    std::string m_demoCodeFunctionName;
                    bool m_demoCodeFunctionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEUSERKEYREQUEST_H_
