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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/UserRiskProfile.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 账号保护配置。
                */
                class AccountProtectionSettings : public AbstractModel
                {
                public:
                    AccountProtectionSettings();
                    ~AccountProtectionSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>账号保护功能开关。</p><p>枚举值：</p><ul><li>on： 开启；</li><li>off： 关闭。</li></ul><p>默认值：off。</p>
                     * @return Enabled <p>账号保护功能开关。</p><p>枚举值：</p><ul><li>on： 开启；</li><li>off： 关闭。</li></ul><p>默认值：off。</p>
                     * 
                     */
                    std::string GetEnabled() const;

                    /**
                     * 设置<p>账号保护功能开关。</p><p>枚举值：</p><ul><li>on： 开启；</li><li>off： 关闭。</li></ul><p>默认值：off。</p>
                     * @param _enabled <p>账号保护功能开关。</p><p>枚举值：</p><ul><li>on： 开启；</li><li>off： 关闭。</li></ul><p>默认值：off。</p>
                     * 
                     */
                    void SetEnabled(const std::string& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>请求目的。用于标识请求所属的业务操作场景。</p> <p>枚举值：</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD：在已知原密码的情况下修改密码的请求；</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION：修改账号安全问题的请求；</li> <li>ACCOUNT.CHECK_EXISTENCE：校验账号是否已存在的请求，常见于登录或注册页面输入邮箱、手机号后的预校验；</li> <li>ACCOUNT.LOGIN：登录账号的请求；</li> <li>ACCOUNT.REGISTER：注册新账号的请求；</li> <li>ACCOUNT.RESET_PASSWORD：重置密码的请求，通常通过邮箱或短信验证身份后设置新密码；</li> <li>ACCOUNT.UPDATE：修改账号关联信息的请求，例如手机号、邮箱、支付卡号、收货地址等；</li> <li>ASSET.CHECK_GIFTCARD_BALANCE：通过卡号等信息查询礼品卡余额的请求；</li> <li>ASSET.CHECK_LOYALTY_POINTS：查询账号积分余额的请求；</li> <li>ASSET.REDEEM_CODE：使用兑换码兑换权益的请求；</li> <li>BROWSE.QUERY：站内搜索商品或服务的请求；</li> <li>PAYMENT.ADD_TO_CART：将商品加入购物车的请求；</li> <li>PAYMENT.GET_METHODS：获取账号已绑定支付方式列表的请求；</li> <li>PAYMENT.MAKE_PAYMENT：提交支付、结算或转账的请求。</li> </ul>
                     * @return RequestPurpose <p>请求目的。用于标识请求所属的业务操作场景。</p> <p>枚举值：</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD：在已知原密码的情况下修改密码的请求；</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION：修改账号安全问题的请求；</li> <li>ACCOUNT.CHECK_EXISTENCE：校验账号是否已存在的请求，常见于登录或注册页面输入邮箱、手机号后的预校验；</li> <li>ACCOUNT.LOGIN：登录账号的请求；</li> <li>ACCOUNT.REGISTER：注册新账号的请求；</li> <li>ACCOUNT.RESET_PASSWORD：重置密码的请求，通常通过邮箱或短信验证身份后设置新密码；</li> <li>ACCOUNT.UPDATE：修改账号关联信息的请求，例如手机号、邮箱、支付卡号、收货地址等；</li> <li>ASSET.CHECK_GIFTCARD_BALANCE：通过卡号等信息查询礼品卡余额的请求；</li> <li>ASSET.CHECK_LOYALTY_POINTS：查询账号积分余额的请求；</li> <li>ASSET.REDEEM_CODE：使用兑换码兑换权益的请求；</li> <li>BROWSE.QUERY：站内搜索商品或服务的请求；</li> <li>PAYMENT.ADD_TO_CART：将商品加入购物车的请求；</li> <li>PAYMENT.GET_METHODS：获取账号已绑定支付方式列表的请求；</li> <li>PAYMENT.MAKE_PAYMENT：提交支付、结算或转账的请求。</li> </ul>
                     * 
                     */
                    std::string GetRequestPurpose() const;

                    /**
                     * 设置<p>请求目的。用于标识请求所属的业务操作场景。</p> <p>枚举值：</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD：在已知原密码的情况下修改密码的请求；</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION：修改账号安全问题的请求；</li> <li>ACCOUNT.CHECK_EXISTENCE：校验账号是否已存在的请求，常见于登录或注册页面输入邮箱、手机号后的预校验；</li> <li>ACCOUNT.LOGIN：登录账号的请求；</li> <li>ACCOUNT.REGISTER：注册新账号的请求；</li> <li>ACCOUNT.RESET_PASSWORD：重置密码的请求，通常通过邮箱或短信验证身份后设置新密码；</li> <li>ACCOUNT.UPDATE：修改账号关联信息的请求，例如手机号、邮箱、支付卡号、收货地址等；</li> <li>ASSET.CHECK_GIFTCARD_BALANCE：通过卡号等信息查询礼品卡余额的请求；</li> <li>ASSET.CHECK_LOYALTY_POINTS：查询账号积分余额的请求；</li> <li>ASSET.REDEEM_CODE：使用兑换码兑换权益的请求；</li> <li>BROWSE.QUERY：站内搜索商品或服务的请求；</li> <li>PAYMENT.ADD_TO_CART：将商品加入购物车的请求；</li> <li>PAYMENT.GET_METHODS：获取账号已绑定支付方式列表的请求；</li> <li>PAYMENT.MAKE_PAYMENT：提交支付、结算或转账的请求。</li> </ul>
                     * @param _requestPurpose <p>请求目的。用于标识请求所属的业务操作场景。</p> <p>枚举值：</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD：在已知原密码的情况下修改密码的请求；</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION：修改账号安全问题的请求；</li> <li>ACCOUNT.CHECK_EXISTENCE：校验账号是否已存在的请求，常见于登录或注册页面输入邮箱、手机号后的预校验；</li> <li>ACCOUNT.LOGIN：登录账号的请求；</li> <li>ACCOUNT.REGISTER：注册新账号的请求；</li> <li>ACCOUNT.RESET_PASSWORD：重置密码的请求，通常通过邮箱或短信验证身份后设置新密码；</li> <li>ACCOUNT.UPDATE：修改账号关联信息的请求，例如手机号、邮箱、支付卡号、收货地址等；</li> <li>ASSET.CHECK_GIFTCARD_BALANCE：通过卡号等信息查询礼品卡余额的请求；</li> <li>ASSET.CHECK_LOYALTY_POINTS：查询账号积分余额的请求；</li> <li>ASSET.REDEEM_CODE：使用兑换码兑换权益的请求；</li> <li>BROWSE.QUERY：站内搜索商品或服务的请求；</li> <li>PAYMENT.ADD_TO_CART：将商品加入购物车的请求；</li> <li>PAYMENT.GET_METHODS：获取账号已绑定支付方式列表的请求；</li> <li>PAYMENT.MAKE_PAYMENT：提交支付、结算或转账的请求。</li> </ul>
                     * 
                     */
                    void SetRequestPurpose(const std::string& _requestPurpose);

                    /**
                     * 判断参数 RequestPurpose 是否已赋值
                     * @return RequestPurpose 是否已赋值
                     * 
                     */
                    bool RequestPurposeHasBeenSet() const;

                    /**
                     * 获取<p>用户标识在请求来源中的位置，其中 key 替换为实际的参数名称。</p><p>取值有：</p><ul><li>http.request.cookies["key"]：从 Cookie 中获取名称为 key 的 Cookie 值；</li><li>http.request.headers["key"]：从请求头中获取名称为 key 的头部值；</li><li>http.request.uri.args["key"]：从 URL 查询参数中获取名称为 key 的参数值。</li></ul>
                     * @return UserIDSource <p>用户标识在请求来源中的位置，其中 key 替换为实际的参数名称。</p><p>取值有：</p><ul><li>http.request.cookies["key"]：从 Cookie 中获取名称为 key 的 Cookie 值；</li><li>http.request.headers["key"]：从请求头中获取名称为 key 的头部值；</li><li>http.request.uri.args["key"]：从 URL 查询参数中获取名称为 key 的参数值。</li></ul>
                     * 
                     */
                    std::string GetUserIDSource() const;

                    /**
                     * 设置<p>用户标识在请求来源中的位置，其中 key 替换为实际的参数名称。</p><p>取值有：</p><ul><li>http.request.cookies["key"]：从 Cookie 中获取名称为 key 的 Cookie 值；</li><li>http.request.headers["key"]：从请求头中获取名称为 key 的头部值；</li><li>http.request.uri.args["key"]：从 URL 查询参数中获取名称为 key 的参数值。</li></ul>
                     * @param _userIDSource <p>用户标识在请求来源中的位置，其中 key 替换为实际的参数名称。</p><p>取值有：</p><ul><li>http.request.cookies["key"]：从 Cookie 中获取名称为 key 的 Cookie 值；</li><li>http.request.headers["key"]：从请求头中获取名称为 key 的头部值；</li><li>http.request.uri.args["key"]：从 URL 查询参数中获取名称为 key 的参数值。</li></ul>
                     * 
                     */
                    void SetUserIDSource(const std::string& _userIDSource);

                    /**
                     * 判断参数 UserIDSource 是否已赋值
                     * @return UserIDSource 是否已赋值
                     * 
                     */
                    bool UserIDSourceHasBeenSet() const;

                    /**
                     * 获取<p>用户风险等级配置。</p>
                     * @return UserRiskProfile <p>用户风险等级配置。</p>
                     * 
                     */
                    UserRiskProfile GetUserRiskProfile() const;

                    /**
                     * 设置<p>用户风险等级配置。</p>
                     * @param _userRiskProfile <p>用户风险等级配置。</p>
                     * 
                     */
                    void SetUserRiskProfile(const UserRiskProfile& _userRiskProfile);

                    /**
                     * 判断参数 UserRiskProfile 是否已赋值
                     * @return UserRiskProfile 是否已赋值
                     * 
                     */
                    bool UserRiskProfileHasBeenSet() const;

                private:

                    /**
                     * <p>账号保护功能开关。</p><p>枚举值：</p><ul><li>on： 开启；</li><li>off： 关闭。</li></ul><p>默认值：off。</p>
                     */
                    std::string m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>请求目的。用于标识请求所属的业务操作场景。</p> <p>枚举值：</p> <ul> <li>ACCOUNT.CHANGE_PASSWORD：在已知原密码的情况下修改密码的请求；</li> <li>ACCOUNT.CHANGE_SECURITY_QUESTION：修改账号安全问题的请求；</li> <li>ACCOUNT.CHECK_EXISTENCE：校验账号是否已存在的请求，常见于登录或注册页面输入邮箱、手机号后的预校验；</li> <li>ACCOUNT.LOGIN：登录账号的请求；</li> <li>ACCOUNT.REGISTER：注册新账号的请求；</li> <li>ACCOUNT.RESET_PASSWORD：重置密码的请求，通常通过邮箱或短信验证身份后设置新密码；</li> <li>ACCOUNT.UPDATE：修改账号关联信息的请求，例如手机号、邮箱、支付卡号、收货地址等；</li> <li>ASSET.CHECK_GIFTCARD_BALANCE：通过卡号等信息查询礼品卡余额的请求；</li> <li>ASSET.CHECK_LOYALTY_POINTS：查询账号积分余额的请求；</li> <li>ASSET.REDEEM_CODE：使用兑换码兑换权益的请求；</li> <li>BROWSE.QUERY：站内搜索商品或服务的请求；</li> <li>PAYMENT.ADD_TO_CART：将商品加入购物车的请求；</li> <li>PAYMENT.GET_METHODS：获取账号已绑定支付方式列表的请求；</li> <li>PAYMENT.MAKE_PAYMENT：提交支付、结算或转账的请求。</li> </ul>
                     */
                    std::string m_requestPurpose;
                    bool m_requestPurposeHasBeenSet;

                    /**
                     * <p>用户标识在请求来源中的位置，其中 key 替换为实际的参数名称。</p><p>取值有：</p><ul><li>http.request.cookies["key"]：从 Cookie 中获取名称为 key 的 Cookie 值；</li><li>http.request.headers["key"]：从请求头中获取名称为 key 的头部值；</li><li>http.request.uri.args["key"]：从 URL 查询参数中获取名称为 key 的参数值。</li></ul>
                     */
                    std::string m_userIDSource;
                    bool m_userIDSourceHasBeenSet;

                    /**
                     * <p>用户风险等级配置。</p>
                     */
                    UserRiskProfile m_userRiskProfile;
                    bool m_userRiskProfileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ACCOUNTPROTECTIONSETTINGS_H_
