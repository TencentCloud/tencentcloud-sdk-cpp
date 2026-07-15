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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Agent.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateBatchAdminChangeInvitationsUrl请求参数结构体
                */
                class CreateBatchAdminChangeInvitationsUrlRequest : public AbstractModel
                {
                public:
                    CreateBatchAdminChangeInvitationsUrlRequest();
                    ~CreateBatchAdminChangeInvitationsUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li></ul>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li></ul>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li></ul>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li></ul>
                     * 
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     * 
                     */
                    bool AgentHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。</p>
                     * @return NewAdminName <p>组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。</p>
                     * 
                     */
                    std::string GetNewAdminName() const;

                    /**
                     * 设置<p>组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。</p>
                     * @param _newAdminName <p>组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。</p>
                     * 
                     */
                    void SetNewAdminName(const std::string& _newAdminName);

                    /**
                     * 判断参数 NewAdminName 是否已赋值
                     * @return NewAdminName 是否已赋值
                     * 
                     */
                    bool NewAdminNameHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管手机号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。 超管手机号 和超管证件号 二选一 必填。 注意： 1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。</p>
                     * @return NewAdminMobile <p>组织机构要变更的超管手机号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。 超管手机号 和超管证件号 二选一 必填。 注意： 1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。</p>
                     * 
                     */
                    std::string GetNewAdminMobile() const;

                    /**
                     * 设置<p>组织机构要变更的超管手机号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。 超管手机号 和超管证件号 二选一 必填。 注意： 1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。</p>
                     * @param _newAdminMobile <p>组织机构要变更的超管手机号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。 超管手机号 和超管证件号 二选一 必填。 注意： 1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。</p>
                     * 
                     */
                    void SetNewAdminMobile(const std::string& _newAdminMobile);

                    /**
                     * 判断参数 NewAdminMobile 是否已赋值
                     * @return NewAdminMobile 是否已赋值
                     * 
                     */
                    bool NewAdminMobileHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)<br>需要更当前操作人的证件类型保持一致。</li></ul><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>默认值：ID_CARD</p>
                     * @return NewAdminIdCardType <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)<br>需要更当前操作人的证件类型保持一致。</li></ul><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>默认值：ID_CARD</p>
                     * 
                     */
                    std::string GetNewAdminIdCardType() const;

                    /**
                     * 设置<p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)<br>需要更当前操作人的证件类型保持一致。</li></ul><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>默认值：ID_CARD</p>
                     * @param _newAdminIdCardType <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)<br>需要更当前操作人的证件类型保持一致。</li></ul><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>默认值：ID_CARD</p>
                     * 
                     */
                    void SetNewAdminIdCardType(const std::string& _newAdminIdCardType);

                    /**
                     * 判断参数 NewAdminIdCardType 是否已赋值
                     * @return NewAdminIdCardType 是否已赋值
                     * 
                     */
                    bool NewAdminIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>组织机构要变更的超管证件号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。 超管手机号和超管证件号 二选一必填。</p>
                     * @return NewAdminIdCardNumber <p>组织机构要变更的超管证件号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。 超管手机号和超管证件号 二选一必填。</p>
                     * 
                     */
                    std::string GetNewAdminIdCardNumber() const;

                    /**
                     * 设置<p>组织机构要变更的超管证件号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。 超管手机号和超管证件号 二选一必填。</p>
                     * @param _newAdminIdCardNumber <p>组织机构要变更的超管证件号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。 超管手机号和超管证件号 二选一必填。</p>
                     * 
                     */
                    void SetNewAdminIdCardNumber(const std::string& _newAdminIdCardNumber);

                    /**
                     * 判断参数 NewAdminIdCardNumber 是否已赋值
                     * @return NewAdminIdCardNumber 是否已赋值
                     * 
                     */
                    bool NewAdminIdCardNumberHasBeenSet() const;

                    /**
                     * 获取<p>要跳转的链接类型</p><ul><li> **HTTP**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>枚举值：</p><ul><li>HTTP： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>HTTP_SHORT_URL： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>APP： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>QR_CODE： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>默认值：HTTP</p>
                     * @return Endpoint <p>要跳转的链接类型</p><ul><li> **HTTP**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>枚举值：</p><ul><li>HTTP： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>HTTP_SHORT_URL： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>APP： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>QR_CODE： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>默认值：HTTP</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>要跳转的链接类型</p><ul><li> **HTTP**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>枚举值：</p><ul><li>HTTP： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>HTTP_SHORT_URL： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>APP： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>QR_CODE： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>默认值：HTTP</p>
                     * @param _endpoint <p>要跳转的链接类型</p><ul><li> **HTTP**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>枚举值：</p><ul><li>HTTP： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>HTTP_SHORT_URL： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>APP： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>QR_CODE： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>默认值：HTTP</p>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容，您可以参阅开发者中心所提供的 Agent 结构体以获取详细定义。</p><p>此接口下面信息必填。</p><ul><li>渠道应用标识:  Agent.AppId</li></ul>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管姓名。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的姓名保持一致。</p>
                     */
                    std::string m_newAdminName;
                    bool m_newAdminNameHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管手机号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的手机号保持一致。 超管手机号 和超管证件号 二选一 必填。 注意： 1. 如果新超管的个人身份在电子签进行了手机号的变更，之前提交的超管变更任务将无法获取。</p>
                     */
                    std::string m_newAdminMobile;
                    bool m_newAdminMobileHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管证件类型支持以下类型</p><ul><li>ID_CARD : 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO : 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN : 中国港澳台居民居住证(格式同中国大陆居民身份证)<br>需要更当前操作人的证件类型保持一致。</li></ul><p>枚举值：</p><ul><li>ID_CARD： 中国大陆居民身份证 (默认值)</li><li>HONGKONG_AND_MACAO： 中国港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN： 中国港澳台居民居住证(格式同中国大陆居民身份证)</li></ul><p>默认值：ID_CARD</p>
                     */
                    std::string m_newAdminIdCardType;
                    bool m_newAdminIdCardTypeHasBeenSet;

                    /**
                     * <p>组织机构要变更的超管证件号。 在超管变更流程中，必须是超管本人进行操作，需要更当前操作人的证件号保持一致。 超管手机号和超管证件号 二选一必填。</p>
                     */
                    std::string m_newAdminIdCardNumber;
                    bool m_newAdminIdCardNumberHasBeenSet;

                    /**
                     * <p>要跳转的链接类型</p><ul><li> **HTTP**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>**HTTP_SHORT_URL**：跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>**APP**： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>**QR_CODE**： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>枚举值：</p><ul><li>HTTP： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型 ，此时返回长链 （默认类型）。</li><li>HTTP_SHORT_URL： 跳转电子签小程序的http_url，短信通知或者H5跳转适合此类型，此时返回短链。</li><li>APP： 第三方APP或小程序跳转电子签小程序的path，APP或者小程序跳转适合此类型。</li><li>QR_CODE： 跳转电子签小程序的http_url的二维码形式，可以在页面展示适合此类型。</li></ul><p>默认值：HTTP</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEBATCHADMINCHANGEINVITATIONSURLREQUEST_H_
