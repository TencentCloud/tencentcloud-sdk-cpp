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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateUserVerifyUrl请求参数结构体
                */
                class CreateUserVerifyUrlRequest : public AbstractModel
                {
                public:
                    CreateUserVerifyUrlRequest();
                    ~CreateUserVerifyUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param _operator 操作人信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取要实名的姓名
                     * @return Name 要实名的姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置要实名的姓名
                     * @param _name 要实名的姓名
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
                     * 获取要实名的身份证号码，
身份证号码如果有x的话，统一传大写X
                     * @return IdCardNumber 要实名的身份证号码，
身份证号码如果有x的话，统一传大写X
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置要实名的身份证号码，
身份证号码如果有x的话，统一传大写X
                     * @param _idCardNumber 要实名的身份证号码，
身份证号码如果有x的话，统一传大写X
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取证件类型，目前只支持身份证类型：ID_CARD
                     * @return IdCardType 证件类型，目前只支持身份证类型：ID_CARD
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置证件类型，目前只支持身份证类型：ID_CARD
                     * @param _idCardType 证件类型，目前只支持身份证类型：ID_CARD
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取要实名的手机号，兼容带+86的格式
                     * @return Mobile 要实名的手机号，兼容带+86的格式
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置要实名的手机号，兼容带+86的格式
                     * @param _mobile 要实名的手机号，兼容带+86的格式
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取要跳转的链接类型

- HTTP：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型 ，此时返回长链 (默认类型)

- HTTP_SHORT_URL：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型，此时返回短链

- APP：
第三方APP或小程序跳转电子签小程序的path, APP或者小程序跳转适合此类型
                     * @return Endpoint 要跳转的链接类型

- HTTP：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型 ，此时返回长链 (默认类型)

- HTTP_SHORT_URL：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型，此时返回短链

- APP：
第三方APP或小程序跳转电子签小程序的path, APP或者小程序跳转适合此类型
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置要跳转的链接类型

- HTTP：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型 ，此时返回长链 (默认类型)

- HTTP_SHORT_URL：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型，此时返回短链

- APP：
第三方APP或小程序跳转电子签小程序的path, APP或者小程序跳转适合此类型
                     * @param _endpoint 要跳转的链接类型

- HTTP：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型 ，此时返回长链 (默认类型)

- HTTP_SHORT_URL：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型，此时返回短链

- APP：
第三方APP或小程序跳转电子签小程序的path, APP或者小程序跳转适合此类型
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取签署完成后是否自动回跳
<ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的实名链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @return AutoJumpBack 签署完成后是否自动回跳
<ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的实名链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置签署完成后是否自动回跳
<ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的实名链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * @param _autoJumpBack 签署完成后是否自动回跳
<ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的实名链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     * 
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     * 
                     */
                    bool AutoJumpBackHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 要实名的姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 要实名的身份证号码，
身份证号码如果有x的话，统一传大写X
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 证件类型，目前只支持身份证类型：ID_CARD
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 要实名的手机号，兼容带+86的格式
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 要跳转的链接类型

- HTTP：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型 ，此时返回长链 (默认类型)

- HTTP_SHORT_URL：
跳转电子签小程序的http_url,短信通知或者H5跳转适合此类型，此时返回短链

- APP：
第三方APP或小程序跳转电子签小程序的path, APP或者小程序跳转适合此类型
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 签署完成后是否自动回跳
<ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul>

注: 
1. 该参数<font color="red">只针对APP类型（电子签小程序跳转贵方小程序）场景</font> 的实名链接有效
2. <font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考[这个](https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object)
3. <font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font> 
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLREQUEST_H_
