/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * CreatePayRollPreOrderWithAuth请求参数结构体
                */
                class CreatePayRollPreOrderWithAuthRequest : public AbstractModel
                {
                public:
                    CreatePayRollPreOrderWithAuthRequest();
                    ~CreatePayRollPreOrderWithAuthRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户在商户对应appid下的唯一标识
                     * @return OpenId 用户在商户对应appid下的唯一标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在商户对应appid下的唯一标识
                     * @param _openId 用户在商户对应appid下的唯一标识
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @return SubMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetSubMerchantId() const;

                    /**
                     * 设置微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @param _subMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    void SetSubMerchantId(const std::string& _subMerchantId);

                    /**
                     * 判断参数 SubMerchantId 是否已赋值
                     * @return SubMerchantId 是否已赋值
                     * 
                     */
                    bool SubMerchantIdHasBeenSet() const;

                    /**
                     * 获取商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @return AuthNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    std::string GetAuthNumber() const;

                    /**
                     * 设置商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @param _authNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    void SetAuthNumber(const std::string& _authNumber);

                    /**
                     * 判断参数 AuthNumber 是否已赋值
                     * @return AuthNumber 是否已赋值
                     * 
                     */
                    bool AuthNumberHasBeenSet() const;

                    /**
                     * 获取该劳务活动的项目名称
                     * @return ProjectName 该劳务活动的项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置该劳务活动的项目名称
                     * @param _projectName 该劳务活动的项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取该工人所属的用工企业
                     * @return CompanyName 该工人所属的用工企业
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置该工人所属的用工企业
                     * @param _companyName 该工人所属的用工企业
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取用户实名信息，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * @return UserName 用户实名信息，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户实名信息，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * @param _userName 用户实名信息，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户证件号，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * @return IdNo 用户证件号，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * 
                     */
                    std::string GetIdNo() const;

                    /**
                     * 设置用户证件号，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * @param _idNo 用户证件号，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     * 
                     */
                    void SetIdNo(const std::string& _idNo);

                    /**
                     * 判断参数 IdNo 是否已赋值
                     * @return IdNo 是否已赋值
                     * 
                     */
                    bool IdNoHasBeenSet() const;

                    /**
                     * 获取微工卡服务仅支持用于与商户有用工关系的用户，需明确用工类型；参考值：
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * @return EmploymentType 微工卡服务仅支持用于与商户有用工关系的用户，需明确用工类型；参考值：
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * 
                     */
                    std::string GetEmploymentType() const;

                    /**
                     * 设置微工卡服务仅支持用于与商户有用工关系的用户，需明确用工类型；参考值：
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * @param _employmentType 微工卡服务仅支持用于与商户有用工关系的用户，需明确用工类型；参考值：
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     * 
                     */
                    void SetEmploymentType(const std::string& _employmentType);

                    /**
                     * 判断参数 EmploymentType 是否已赋值
                     * @return EmploymentType 是否已赋值
                     * 
                     */
                    bool EmploymentTypeHasBeenSet() const;

                    /**
                     * 获取是服务商在微信申请公众号/小程序或移动应用成功后分配的账号ID（与服务商主体一致）
当输入服务商Appid时，会校验其与服务商商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * @return WechatAppId 是服务商在微信申请公众号/小程序或移动应用成功后分配的账号ID（与服务商主体一致）
当输入服务商Appid时，会校验其与服务商商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * 
                     */
                    std::string GetWechatAppId() const;

                    /**
                     * 设置是服务商在微信申请公众号/小程序或移动应用成功后分配的账号ID（与服务商主体一致）
当输入服务商Appid时，会校验其与服务商商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * @param _wechatAppId 是服务商在微信申请公众号/小程序或移动应用成功后分配的账号ID（与服务商主体一致）
当输入服务商Appid时，会校验其与服务商商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * 
                     */
                    void SetWechatAppId(const std::string& _wechatAppId);

                    /**
                     * 判断参数 WechatAppId 是否已赋值
                     * @return WechatAppId 是否已赋值
                     * 
                     */
                    bool WechatAppIdHasBeenSet() const;

                    /**
                     * 获取特约商户在微信申请公众号/小程序或移动应用成功后分配的账号ID（与特约商户主体一致）
当输入特约商户Appid时，会校验其与特约商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * @return WechatSubAppId 特约商户在微信申请公众号/小程序或移动应用成功后分配的账号ID（与特约商户主体一致）
当输入特约商户Appid时，会校验其与特约商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * 
                     */
                    std::string GetWechatSubAppId() const;

                    /**
                     * 设置特约商户在微信申请公众号/小程序或移动应用成功后分配的账号ID（与特约商户主体一致）
当输入特约商户Appid时，会校验其与特约商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * @param _wechatSubAppId 特约商户在微信申请公众号/小程序或移动应用成功后分配的账号ID（与特约商户主体一致）
当输入特约商户Appid时，会校验其与特约商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     * 
                     */
                    void SetWechatSubAppId(const std::string& _wechatSubAppId);

                    /**
                     * 判断参数 WechatSubAppId 是否已赋值
                     * @return WechatSubAppId 是否已赋值
                     * 
                     */
                    bool WechatSubAppIdHasBeenSet() const;

                private:

                    /**
                     * 用户在商户对应appid下的唯一标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 微信服务商下特约商户的商户号，由微信支付生成并下发
                     */
                    std::string m_subMerchantId;
                    bool m_subMerchantIdHasBeenSet;

                    /**
                     * 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     */
                    std::string m_authNumber;
                    bool m_authNumberHasBeenSet;

                    /**
                     * 该劳务活动的项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 该工人所属的用工企业
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 用户实名信息，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户证件号，该字段需进行加密处理，加密方法详见[敏感信息加密说明](https://pay.weixin.qq.com/wiki/doc/apiv3_partner/wechatpay/wechatpay4_3.shtml)
                     */
                    std::string m_idNo;
                    bool m_idNoHasBeenSet;

                    /**
                     * 微工卡服务仅支持用于与商户有用工关系的用户，需明确用工类型；参考值：
LONG_TERM_EMPLOYMENT：长期用工，
SHORT_TERM_EMPLOYMENT： 短期用工，
COOPERATION_EMPLOYMENT：合作关系
                     */
                    std::string m_employmentType;
                    bool m_employmentTypeHasBeenSet;

                    /**
                     * 是服务商在微信申请公众号/小程序或移动应用成功后分配的账号ID（与服务商主体一致）
当输入服务商Appid时，会校验其与服务商商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     */
                    std::string m_wechatAppId;
                    bool m_wechatAppIdHasBeenSet;

                    /**
                     * 特约商户在微信申请公众号/小程序或移动应用成功后分配的账号ID（与特约商户主体一致）
当输入特约商户Appid时，会校验其与特约商户号的绑定关系。服务商APPID和与特约商户APPID至少输入一个，且必须要有拉起领薪卡小程序时使用的APPID
                     */
                    std::string m_wechatSubAppId;
                    bool m_wechatSubAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEPAYROLLPREORDERWITHAUTHREQUEST_H_
