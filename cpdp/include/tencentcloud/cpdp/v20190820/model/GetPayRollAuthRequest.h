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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHREQUEST_H_

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
                * GetPayRollAuth请求参数结构体
                */
                class GetPayRollAuthRequest : public AbstractModel
                {
                public:
                    GetPayRollAuthRequest();
                    ~GetPayRollAuthRequest() = default;
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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHREQUEST_H_
