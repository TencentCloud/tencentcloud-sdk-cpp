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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFOREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFOREQUEST_H_

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
                * ModifyOrganizationBusinessInfo请求参数结构体
                */
                class ModifyOrganizationBusinessInfoRequest : public AbstractModel
                {
                public:
                    ModifyOrganizationBusinessInfoRequest();
                    ~ModifyOrganizationBusinessInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容此接口下面信息必填。<ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code></p>
                     * @return Agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容此接口下面信息必填。<ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code></p>
                     * 
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置<p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容此接口下面信息必填。<ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code></p>
                     * @param _agent <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容此接口下面信息必填。<ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code></p>
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
                     * 获取<p>企业营业执照或相关证照图片的 resourceId，需提前通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles">上传文件接口</a>获取后传入。<br>注意：电子签<b>不会</b>对上传的营业执照图片做 OCR 识别，该图片仅作为企业信息变更的凭证留存；企业最新的名称、法人、地址等信息仍需通过本接口的其它字段显式传入。</p>
                     * @return BizLicenseResourceId <p>企业营业执照或相关证照图片的 resourceId，需提前通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles">上传文件接口</a>获取后传入。<br>注意：电子签<b>不会</b>对上传的营业执照图片做 OCR 识别，该图片仅作为企业信息变更的凭证留存；企业最新的名称、法人、地址等信息仍需通过本接口的其它字段显式传入。</p>
                     * 
                     */
                    std::string GetBizLicenseResourceId() const;

                    /**
                     * 设置<p>企业营业执照或相关证照图片的 resourceId，需提前通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles">上传文件接口</a>获取后传入。<br>注意：电子签<b>不会</b>对上传的营业执照图片做 OCR 识别，该图片仅作为企业信息变更的凭证留存；企业最新的名称、法人、地址等信息仍需通过本接口的其它字段显式传入。</p>
                     * @param _bizLicenseResourceId <p>企业营业执照或相关证照图片的 resourceId，需提前通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles">上传文件接口</a>获取后传入。<br>注意：电子签<b>不会</b>对上传的营业执照图片做 OCR 识别，该图片仅作为企业信息变更的凭证留存；企业最新的名称、法人、地址等信息仍需通过本接口的其它字段显式传入。</p>
                     * 
                     */
                    void SetBizLicenseResourceId(const std::string& _bizLicenseResourceId);

                    /**
                     * 判断参数 BizLicenseResourceId 是否已赋值
                     * @return BizLicenseResourceId 是否已赋值
                     * 
                     */
                    bool BizLicenseResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>变更后的最新工商登记企业名称。<br>仅当企业名称发生变更时传入，未变更则不传（系统自动沿用电子签侧当前企业名称）。<br></p>
                     * @return OrganizationName <p>变更后的最新工商登记企业名称。<br>仅当企业名称发生变更时传入，未变更则不传（系统自动沿用电子签侧当前企业名称）。<br></p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>变更后的最新工商登记企业名称。<br>仅当企业名称发生变更时传入，未变更则不传（系统自动沿用电子签侧当前企业名称）。<br></p>
                     * @param _organizationName <p>变更后的最新工商登记企业名称。<br>仅当企业名称发生变更时传入，未变更则不传（系统自动沿用电子签侧当前企业名称）。<br></p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>变更后的企业注册地址。<br>仅当地址发生变更时传入，未变更则不传；传入后系统会自动解析省/市/区。<br></p>
                     * @return Address <p>变更后的企业注册地址。<br>仅当地址发生变更时传入，未变更则不传；传入后系统会自动解析省/市/区。<br></p>
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置<p>变更后的企业注册地址。<br>仅当地址发生变更时传入，未变更则不传；传入后系统会自动解析省/市/区。<br></p>
                     * @param _address <p>变更后的企业注册地址。<br>仅当地址发生变更时传入，未变更则不传；传入后系统会自动解析省/市/区。<br></p>
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取<p>变更后的企业类型。<br>仅当企业类型发生变更时传入，未变更则不传（沿用当前类型）。<br>目前仅支持个体工商户（INDIVIDUALBIZ）变更为企业（ENTERPRISE）。</p><p>枚举值：</p><ul><li>INDIVIDUALBIZ： 个体工商户</li><li>ENTERPRISE： 企业</li></ul>
                     * @return OrganizationType <p>变更后的企业类型。<br>仅当企业类型发生变更时传入，未变更则不传（沿用当前类型）。<br>目前仅支持个体工商户（INDIVIDUALBIZ）变更为企业（ENTERPRISE）。</p><p>枚举值：</p><ul><li>INDIVIDUALBIZ： 个体工商户</li><li>ENTERPRISE： 企业</li></ul>
                     * 
                     */
                    std::string GetOrganizationType() const;

                    /**
                     * 设置<p>变更后的企业类型。<br>仅当企业类型发生变更时传入，未变更则不传（沿用当前类型）。<br>目前仅支持个体工商户（INDIVIDUALBIZ）变更为企业（ENTERPRISE）。</p><p>枚举值：</p><ul><li>INDIVIDUALBIZ： 个体工商户</li><li>ENTERPRISE： 企业</li></ul>
                     * @param _organizationType <p>变更后的企业类型。<br>仅当企业类型发生变更时传入，未变更则不传（沿用当前类型）。<br>目前仅支持个体工商户（INDIVIDUALBIZ）变更为企业（ENTERPRISE）。</p><p>枚举值：</p><ul><li>INDIVIDUALBIZ： 个体工商户</li><li>ENTERPRISE： 企业</li></ul>
                     * 
                     */
                    void SetOrganizationType(const std::string& _organizationType);

                    /**
                     * 判断参数 OrganizationType 是否已赋值
                     * @return OrganizationType 是否已赋值
                     * 
                     */
                    bool OrganizationTypeHasBeenSet() const;

                    /**
                     * 获取<p>变更后的最新工商登记法人姓名。<br>仅当法人发生变更时传入，未变更则不传（系统自动沿用当前法人姓名）。</p>
                     * @return LegalName <p>变更后的最新工商登记法人姓名。<br>仅当法人发生变更时传入，未变更则不传（系统自动沿用当前法人姓名）。</p>
                     * 
                     */
                    std::string GetLegalName() const;

                    /**
                     * 设置<p>变更后的最新工商登记法人姓名。<br>仅当法人发生变更时传入，未变更则不传（系统自动沿用当前法人姓名）。</p>
                     * @param _legalName <p>变更后的最新工商登记法人姓名。<br>仅当法人发生变更时传入，未变更则不传（系统自动沿用当前法人姓名）。</p>
                     * 
                     */
                    void SetLegalName(const std::string& _legalName);

                    /**
                     * 判断参数 LegalName 是否已赋值
                     * @return LegalName 是否已赋值
                     * 
                     */
                    bool LegalNameHasBeenSet() const;

                    /**
                     * 获取<p>新法人的手机号。<br>仅当法人发生变更时传入，用于向新法人发送短信通知。<br>需为合法的手机号或固定电话格式。</p>
                     * @return NewLegalMobile <p>新法人的手机号。<br>仅当法人发生变更时传入，用于向新法人发送短信通知。<br>需为合法的手机号或固定电话格式。</p>
                     * 
                     */
                    std::string GetNewLegalMobile() const;

                    /**
                     * 设置<p>新法人的手机号。<br>仅当法人发生变更时传入，用于向新法人发送短信通知。<br>需为合法的手机号或固定电话格式。</p>
                     * @param _newLegalMobile <p>新法人的手机号。<br>仅当法人发生变更时传入，用于向新法人发送短信通知。<br>需为合法的手机号或固定电话格式。</p>
                     * 
                     */
                    void SetNewLegalMobile(const std::string& _newLegalMobile);

                    /**
                     * 判断参数 NewLegalMobile 是否已赋值
                     * @return NewLegalMobile 是否已赋值
                     * 
                     */
                    bool NewLegalMobileHasBeenSet() const;

                private:

                    /**
                     * <p>关于渠道应用的相关信息，包括渠道应用标识、第三方平台子客企业标识及第三方平台子客企业中的员工标识等内容此接口下面信息必填。<ul><li>渠道应用标识:  Agent.AppId</li><li>第三方平台子客企业标识: Agent.ProxyOrganizationOpenId</li><li>第三方平台子客企业中的员工标识: Agent.ProxyOperator.OpenId</li></ul>注:<code>1. 企业激活时， 此时的Agent.ProxyOrganizationOpenId将会是企业激活后企业的唯一标识，建议开发者保存企业ProxyOrganizationOpenId，后续各项接口调用皆需要此参数。</code><code>2. 员工认证时， 此时的Agent.ProxyOperator.OpenId将会是员工认证加入企业后的唯一标识，建议开发者保存此员工的OpenId，后续各项接口调用皆需要此参数。</code><code>3. 同渠道应用(Agent.AppId)下，企业唯一标识ProxyOrganizationOpenId需要保持唯一，员工唯一标识OpenId也要保持唯一 (而不是企业下唯一)。</code></p>
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                    /**
                     * <p>企业营业执照或相关证照图片的 resourceId，需提前通过<a href="https://qian.tencent.com/developers/partnerApis/files/UploadFiles">上传文件接口</a>获取后传入。<br>注意：电子签<b>不会</b>对上传的营业执照图片做 OCR 识别，该图片仅作为企业信息变更的凭证留存；企业最新的名称、法人、地址等信息仍需通过本接口的其它字段显式传入。</p>
                     */
                    std::string m_bizLicenseResourceId;
                    bool m_bizLicenseResourceIdHasBeenSet;

                    /**
                     * <p>变更后的最新工商登记企业名称。<br>仅当企业名称发生变更时传入，未变更则不传（系统自动沿用电子签侧当前企业名称）。<br></p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>变更后的企业注册地址。<br>仅当地址发生变更时传入，未变更则不传；传入后系统会自动解析省/市/区。<br></p>
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * <p>变更后的企业类型。<br>仅当企业类型发生变更时传入，未变更则不传（沿用当前类型）。<br>目前仅支持个体工商户（INDIVIDUALBIZ）变更为企业（ENTERPRISE）。</p><p>枚举值：</p><ul><li>INDIVIDUALBIZ： 个体工商户</li><li>ENTERPRISE： 企业</li></ul>
                     */
                    std::string m_organizationType;
                    bool m_organizationTypeHasBeenSet;

                    /**
                     * <p>变更后的最新工商登记法人姓名。<br>仅当法人发生变更时传入，未变更则不传（系统自动沿用当前法人姓名）。</p>
                     */
                    std::string m_legalName;
                    bool m_legalNameHasBeenSet;

                    /**
                     * <p>新法人的手机号。<br>仅当法人发生变更时传入，用于向新法人发送短信通知。<br>需为合法的手机号或固定电话格式。</p>
                     */
                    std::string m_newLegalMobile;
                    bool m_newLegalMobileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_MODIFYORGANIZATIONBUSINESSINFOREQUEST_H_
