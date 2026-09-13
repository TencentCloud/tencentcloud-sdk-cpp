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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建流程的签署方信息
                */
                class MiniAppCreateApproverInfo : public AbstractModel
                {
                public:
                    MiniAppCreateApproverInfo();
                    ~MiniAppCreateApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：<ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，“授权签”可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">“授权签”使用说明</a>文档。</li><li> <b>7</b> :个人C端“授权签”，适用于个人“授权签”场景。注: <b>个人“授权签”场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul></p>
                     * @return ApproverType <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：<ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，“授权签”可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">“授权签”使用说明</a>文档。</li><li> <b>7</b> :个人C端“授权签”，适用于个人“授权签”场景。注: <b>个人“授权签”场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul></p>
                     * 
                     */
                    int64_t GetApproverType() const;

                    /**
                     * 设置<p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：<ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，“授权签”可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">“授权签”使用说明</a>文档。</li><li> <b>7</b> :个人C端“授权签”，适用于个人“授权签”场景。注: <b>个人“授权签”场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul></p>
                     * @param _approverType <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：<ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，“授权签”可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">“授权签”使用说明</a>文档。</li><li> <b>7</b> :个人C端“授权签”，适用于个人“授权签”场景。注: <b>个人“授权签”场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul></p>
                     * 
                     */
                    void SetApproverType(const int64_t& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取<p>组织机构名称。请确认该名称与企业营业执照中注册的名称一致。如果名称中包含英文括号()，请使用中文括号（）代替。注: <code>当approverType=0(企业签署方) 或 approverType=3(企业“授权签”)时，必须指定</code></p>
                     * @return OrganizationName <p>组织机构名称。请确认该名称与企业营业执照中注册的名称一致。如果名称中包含英文括号()，请使用中文括号（）代替。注: <code>当approverType=0(企业签署方) 或 approverType=3(企业“授权签”)时，必须指定</code></p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>组织机构名称。请确认该名称与企业营业执照中注册的名称一致。如果名称中包含英文括号()，请使用中文括号（）代替。注: <code>当approverType=0(企业签署方) 或 approverType=3(企业“授权签”)时，必须指定</code></p>
                     * @param _organizationName <p>组织机构名称。请确认该名称与企业营业执照中注册的名称一致。如果名称中包含英文括号()，请使用中文括号（）代替。注: <code>当approverType=0(企业签署方) 或 approverType=3(企业“授权签”)时，必须指定</code></p>
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
                     * 获取<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * @return ApproverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * 
                     */
                    std::string GetApproverName() const;

                    /**
                     * 设置<p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * @param _approverName <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     * 
                     */
                    void SetApproverName(const std::string& _approverName);

                    /**
                     * 判断参数 ApproverName 是否已赋值
                     * @return ApproverName 是否已赋值
                     * 
                     */
                    bool ApproverNameHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * @return ApproverMobile <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * 
                     */
                    std::string GetApproverMobile() const;

                    /**
                     * 设置<p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * @param _approverMobile <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     * 
                     */
                    void SetApproverMobile(const std::string& _approverMobile);

                    /**
                     * 判断参数 ApproverMobile 是否已赋值
                     * @return ApproverMobile 是否已赋值
                     * 
                     */
                    bool ApproverMobileHasBeenSet() const;

                    /**
                     * 获取<p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * @return ApproverIdCardType <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardType() const;

                    /**
                     * 设置<p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * @param _approverIdCardType <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     * 
                     */
                    void SetApproverIdCardType(const std::string& _approverIdCardType);

                    /**
                     * 判断参数 ApproverIdCardType 是否已赋值
                     * @return ApproverIdCardType 是否已赋值
                     * 
                     */
                    bool ApproverIdCardTypeHasBeenSet() const;

                    /**
                     * 获取<p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @return ApproverIdCardNumber <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    std::string GetApproverIdCardNumber() const;

                    /**
                     * 设置<p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * @param _approverIdCardNumber <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     * 
                     */
                    void SetApproverIdCardNumber(const std::string& _approverIdCardNumber);

                    /**
                     * 判断参数 ApproverIdCardNumber 是否已赋值
                     * @return ApproverIdCardNumber 是否已赋值
                     * 
                     */
                    bool ApproverIdCardNumberHasBeenSet() const;

                    /**
                     * 获取<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @return RecipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置<p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * @param _recipientId <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                private:

                    /**
                     * <p>在指定签署方时，可以选择企业B端或个人C端等不同的参与者类型，可选类型如下：<ul><li> <b>0</b> :企业B端。</li><li> <b>1</b> :个人C端。</li><li> <b>3</b> :企业B端静默（自动）签署，无需签署人参与，“授权签”可以参考<a href="https://qian.tencent.com/developers/company/autosign_guide" target="_blank" rel="noopener noreferrer">“授权签”使用说明</a>文档。</li><li> <b>7</b> :个人C端“授权签”，适用于个人“授权签”场景。注: <b>个人“授权签”场景为白名单功能，使用前请联系对接的客户经理沟通。</b> </li></ul></p>
                     */
                    int64_t m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * <p>组织机构名称。请确认该名称与企业营业执照中注册的名称一致。如果名称中包含英文括号()，请使用中文括号（）代替。注: <code>当approverType=0(企业签署方) 或 approverType=3(企业“授权签”)时，必须指定</code></p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>签署方经办人的姓名。<br>经办人的姓名将用于身份认证和电子签名，请确保填写的姓名为签署方的真实姓名，而非昵称等代名。</p><p>在未指定签署人电子签UserId情况下，为必填参数</p>
                     */
                    std::string m_approverName;
                    bool m_approverNameHasBeenSet;

                    /**
                     * <p>签署方经办人手机号码， 支持中国大陆手机号11位数字(无需加+86前缀或其他字符)。 此手机号用于通知和用户的实名认证等环境，请确认手机号所有方为此合同签署方。</p><p>注：<code>在未指定签署人电子签UserId情况下，为必填参数</code></p>
                     */
                    std::string m_approverMobile;
                    bool m_approverMobileHasBeenSet;

                    /**
                     * <p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证 (默认值)</li><li><b>HONGKONG_AND_MACAO</b> : 港澳居民来往内地通行证</li><li><b>HONGKONG_MACAO_AND_TAIWAN</b> : 港澳台居民居住证(格式同居民身份证)</li></ul>
                     */
                    std::string m_approverIdCardType;
                    bool m_approverIdCardTypeHasBeenSet;

                    /**
                     * <p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成（如存在X，请大写）。</li><li>中国港澳居民来往内地通行证号码共11位。第1位为字母，“H”字头签发给中国香港居民，“M”字头签发给中国澳门居民；第2位至第11位为数字。</li><li>中国港澳台居民居住证号码编码规则与中国大陆身份证相同，应为18位字符串。</li></ul>
                     */
                    std::string m_approverIdCardNumber;
                    bool m_approverIdCardNumberHasBeenSet;

                    /**
                     * <p>签署方经办人在模板中配置的参与方ID，与控件绑定，是控件的归属方，ID为32位字符串。</p><p><b>模板发起合同时，该参数为必填项，可以通过<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/DescribeFlowTemplates">查询模板信息接口</a>获得。</b><br><b>文件发起合同时，该参数无需传值。</b></p><p>如果开发者后续用合同模板发起合同，建议保存此值，在用合同模板发起合同中需此值绑定对应的签署经办人 。</p>
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_MINIAPPCREATEAPPROVERINFO_H_
