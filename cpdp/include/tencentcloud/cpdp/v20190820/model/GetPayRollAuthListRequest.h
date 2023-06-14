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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTREQUEST_H_

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
                * GetPayRollAuthList请求参数结构体
                */
                class GetPayRollAuthListRequest : public AbstractModel
                {
                public:
                    GetPayRollAuthListRequest();
                    ~GetPayRollAuthListRequest() = default;
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
                     * 获取核身日期，一次只能查询一天，最久可查询90天内的记录，格式为YYYY-MM-DD
                     * @return AuthDate 核身日期，一次只能查询一天，最久可查询90天内的记录，格式为YYYY-MM-DD
                     * 
                     */
                    std::string GetAuthDate() const;

                    /**
                     * 设置核身日期，一次只能查询一天，最久可查询90天内的记录，格式为YYYY-MM-DD
                     * @param _authDate 核身日期，一次只能查询一天，最久可查询90天内的记录，格式为YYYY-MM-DD
                     * 
                     */
                    void SetAuthDate(const std::string& _authDate);

                    /**
                     * 判断参数 AuthDate 是否已赋值
                     * @return AuthDate 是否已赋值
                     * 
                     */
                    bool AuthDateHasBeenSet() const;

                    /**
                     * 获取非负整数，表示该次请求资源的起始位置，从0开始计数
                     * @return Offset 非负整数，表示该次请求资源的起始位置，从0开始计数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置非负整数，表示该次请求资源的起始位置，从0开始计数
                     * @param _offset 非负整数，表示该次请求资源的起始位置，从0开始计数
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取非0非负的整数，该次请求可返回的最大资源条数，默认值为10，最大支持10条
                     * @return Limit 非0非负的整数，该次请求可返回的最大资源条数，默认值为10，最大支持10条
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置非0非负的整数，该次请求可返回的最大资源条数，默认值为10，最大支持10条
                     * @param _limit 非0非负的整数，该次请求可返回的最大资源条数，默认值为10，最大支持10条
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

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

                    /**
                     * 获取核身状态，列表查询仅提供成功状态的核身记录查询，故此字段固定AUTHENTICATE_SUCCESS即可
                     * @return AuthStatus 核身状态，列表查询仅提供成功状态的核身记录查询，故此字段固定AUTHENTICATE_SUCCESS即可
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 设置核身状态，列表查询仅提供成功状态的核身记录查询，故此字段固定AUTHENTICATE_SUCCESS即可
                     * @param _authStatus 核身状态，列表查询仅提供成功状态的核身记录查询，故此字段固定AUTHENTICATE_SUCCESS即可
                     * 
                     */
                    void SetAuthStatus(const std::string& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

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
                     * 核身日期，一次只能查询一天，最久可查询90天内的记录，格式为YYYY-MM-DD
                     */
                    std::string m_authDate;
                    bool m_authDateHasBeenSet;

                    /**
                     * 非负整数，表示该次请求资源的起始位置，从0开始计数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 非0非负的整数，该次请求可返回的最大资源条数，默认值为10，最大支持10条
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

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

                    /**
                     * 核身状态，列表查询仅提供成功状态的核身记录查询，故此字段固定AUTHENTICATE_SUCCESS即可
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_GETPAYROLLAUTHLISTREQUEST_H_
