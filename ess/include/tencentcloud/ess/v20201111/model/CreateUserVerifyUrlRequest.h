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
                     * 获取<p>操作人信息</p>
                     * @return Operator <p>操作人信息</p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>操作人信息</p>
                     * @param _operator <p>操作人信息</p>
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
                     * 获取<p>要实名的姓名</p>
                     * @return Name <p>要实名的姓名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>要实名的姓名</p>
                     * @param _name <p>要实名的姓名</p>
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
                     * 获取<p>要实名的身份证号码，<br>身份证号码如果有x的话，统一传大写X</p>
                     * @return IdCardNumber <p>要实名的身份证号码，<br>身份证号码如果有x的话，统一传大写X</p>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置<p>要实名的身份证号码，<br>身份证号码如果有x的话，统一传大写X</p>
                     * @param _idCardNumber <p>要实名的身份证号码，<br>身份证号码如果有x的话，统一传大写X</p>
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
                     * 获取<p>证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li></ul><p>注:  港澳居民来往内地通行证 和  港澳台居民居住证 类型的签署人<b>至少要过一次大陆的海关</b>才能使用。</p>
                     * @return IdCardType <p>证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li></ul><p>注:  港澳居民来往内地通行证 和  港澳台居民居住证 类型的签署人<b>至少要过一次大陆的海关</b>才能使用。</p>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置<p>证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li></ul><p>注:  港澳居民来往内地通行证 和  港澳台居民居住证 类型的签署人<b>至少要过一次大陆的海关</b>才能使用。</p>
                     * @param _idCardType <p>证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li></ul><p>注:  港澳居民来往内地通行证 和  港澳台居民居住证 类型的签署人<b>至少要过一次大陆的海关</b>才能使用。</p>
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
                     * 获取<p>要实名的手机号，兼容带+86的格式</p>
                     * @return Mobile <p>要实名的手机号，兼容带+86的格式</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>要实名的手机号，兼容带+86的格式</p>
                     * @param _mobile <p>要实名的手机号，兼容带+86的格式</p>
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
                     * 获取<p>实名完之后的跳转链接，最大长度1000个字符。<br>链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>。</p><p>注：此参数仅支持 Endpoint 为 <font color="red">H5 或 H5_SHORT_URL </font>的时候传递</p>
                     * @return JumpUrl <p>实名完之后的跳转链接，最大长度1000个字符。<br>链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>。</p><p>注：此参数仅支持 Endpoint 为 <font color="red">H5 或 H5_SHORT_URL </font>的时候传递</p>
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置<p>实名完之后的跳转链接，最大长度1000个字符。<br>链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>。</p><p>注：此参数仅支持 Endpoint 为 <font color="red">H5 或 H5_SHORT_URL </font>的时候传递</p>
                     * @param _jumpUrl <p>实名完之后的跳转链接，最大长度1000个字符。<br>链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>。</p><p>注：此参数仅支持 Endpoint 为 <font color="red">H5 或 H5_SHORT_URL </font>的时候传递</p>
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取<p>要跳转的链接类型</p><ul><li><strong>HTTP</strong>：适用于短信通知或H5跳转的电子签小程序HTTP长链接</li><li><strong>HTTP_SHORT_URL</strong>：适用于短信通知或H5跳转的电子签小程序HTTP短链接</li><li><strong>APP</strong>：（默认类型）适用于第三方APP或小程序跳转的电子签小程序路径</li><li><strong>H5</strong>：适用于跳转至电子签H5实名页面的长链接</li><li><strong>H5_SHORT_URL</strong>：适用于跳转至电子签H5实名页面的短链接</li></ul><p>注：如果不传递，默认值是 <font color="red"> APP </font></p>
                     * @return Endpoint <p>要跳转的链接类型</p><ul><li><strong>HTTP</strong>：适用于短信通知或H5跳转的电子签小程序HTTP长链接</li><li><strong>HTTP_SHORT_URL</strong>：适用于短信通知或H5跳转的电子签小程序HTTP短链接</li><li><strong>APP</strong>：（默认类型）适用于第三方APP或小程序跳转的电子签小程序路径</li><li><strong>H5</strong>：适用于跳转至电子签H5实名页面的长链接</li><li><strong>H5_SHORT_URL</strong>：适用于跳转至电子签H5实名页面的短链接</li></ul><p>注：如果不传递，默认值是 <font color="red"> APP </font></p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>要跳转的链接类型</p><ul><li><strong>HTTP</strong>：适用于短信通知或H5跳转的电子签小程序HTTP长链接</li><li><strong>HTTP_SHORT_URL</strong>：适用于短信通知或H5跳转的电子签小程序HTTP短链接</li><li><strong>APP</strong>：（默认类型）适用于第三方APP或小程序跳转的电子签小程序路径</li><li><strong>H5</strong>：适用于跳转至电子签H5实名页面的长链接</li><li><strong>H5_SHORT_URL</strong>：适用于跳转至电子签H5实名页面的短链接</li></ul><p>注：如果不传递，默认值是 <font color="red"> APP </font></p>
                     * @param _endpoint <p>要跳转的链接类型</p><ul><li><strong>HTTP</strong>：适用于短信通知或H5跳转的电子签小程序HTTP长链接</li><li><strong>HTTP_SHORT_URL</strong>：适用于短信通知或H5跳转的电子签小程序HTTP短链接</li><li><strong>APP</strong>：（默认类型）适用于第三方APP或小程序跳转的电子签小程序路径</li><li><strong>H5</strong>：适用于跳转至电子签H5实名页面的长链接</li><li><strong>H5_SHORT_URL</strong>：适用于跳转至电子签H5实名页面的短链接</li></ul><p>注：如果不传递，默认值是 <font color="red"> APP </font></p>
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
                     * 获取<p>签署完成后是否自动回跳</p><ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul><p>注: </p><ol><li>该参数<font color="red">只针对APP类型（第三方APP或小程序跳转电子签小程序）场景</font> 的实名链接有效</li><li><font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考<a href="https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object">这个</a></li><li><font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font></li></ol>
                     * @return AutoJumpBack <p>签署完成后是否自动回跳</p><ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul><p>注: </p><ol><li>该参数<font color="red">只针对APP类型（第三方APP或小程序跳转电子签小程序）场景</font> 的实名链接有效</li><li><font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考<a href="https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object">这个</a></li><li><font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font></li></ol>
                     * 
                     */
                    bool GetAutoJumpBack() const;

                    /**
                     * 设置<p>签署完成后是否自动回跳</p><ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul><p>注: </p><ol><li>该参数<font color="red">只针对APP类型（第三方APP或小程序跳转电子签小程序）场景</font> 的实名链接有效</li><li><font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考<a href="https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object">这个</a></li><li><font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font></li></ol>
                     * @param _autoJumpBack <p>签署完成后是否自动回跳</p><ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul><p>注: </p><ol><li>该参数<font color="red">只针对APP类型（第三方APP或小程序跳转电子签小程序）场景</font> 的实名链接有效</li><li><font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考<a href="https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object">这个</a></li><li><font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font></li></ol>
                     * 
                     */
                    void SetAutoJumpBack(const bool& _autoJumpBack);

                    /**
                     * 判断参数 AutoJumpBack 是否已赋值
                     * @return AutoJumpBack 是否已赋值
                     * 
                     */
                    bool AutoJumpBackHasBeenSet() const;

                    /**
                     * 获取<p>在用户完成实名认证后，其自定义数据将通过<a href="https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E4%BA%8C-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%B8%AA%E4%BA%BA%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83">企业引导个人实名认证后回调</a>返回，以便用户确认其个人数据信息。请注意，自定义数据的字符长度上限为1000，且必须采用base64编码格式。</p>
                     * @return UserData <p>在用户完成实名认证后，其自定义数据将通过<a href="https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E4%BA%8C-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%B8%AA%E4%BA%BA%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83">企业引导个人实名认证后回调</a>返回，以便用户确认其个人数据信息。请注意，自定义数据的字符长度上限为1000，且必须采用base64编码格式。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>在用户完成实名认证后，其自定义数据将通过<a href="https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E4%BA%8C-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%B8%AA%E4%BA%BA%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83">企业引导个人实名认证后回调</a>返回，以便用户确认其个人数据信息。请注意，自定义数据的字符长度上限为1000，且必须采用base64编码格式。</p>
                     * @param _userData <p>在用户完成实名认证后，其自定义数据将通过<a href="https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E4%BA%8C-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%B8%AA%E4%BA%BA%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83">企业引导个人实名认证后回调</a>返回，以便用户确认其个人数据信息。请注意，自定义数据的字符长度上限为1000，且必须采用base64编码格式。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                private:

                    /**
                     * <p>操作人信息</p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>要实名的姓名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>要实名的身份证号码，<br>身份证号码如果有x的话，统一传大写X</p>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * <p>证件类型，支持以下类型，样式可以参考<a href="https://qian.tencent.com/developers/partner/id_card_support/" target="_blank">常见个人证件类型介绍</a></p><ul><li>ID_CARD 中国大陆居民身份证  (默认值)</li><li>HONGKONG_AND_MACAO 港澳居民来往内地通行证</li><li>HONGKONG_MACAO_AND_TAIWAN 港澳台居民居住证(格式同居民身份证)</li></ul><p>注:  港澳居民来往内地通行证 和  港澳台居民居住证 类型的签署人<b>至少要过一次大陆的海关</b>才能使用。</p>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * <p>要实名的手机号，兼容带+86的格式</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>实名完之后的跳转链接，最大长度1000个字符。<br>链接类型请参考 <a href="https://qian.tencent.com/developers/company/openqianh5" target="_blank">跳转电子签H5</a>。</p><p>注：此参数仅支持 Endpoint 为 <font color="red">H5 或 H5_SHORT_URL </font>的时候传递</p>
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * <p>要跳转的链接类型</p><ul><li><strong>HTTP</strong>：适用于短信通知或H5跳转的电子签小程序HTTP长链接</li><li><strong>HTTP_SHORT_URL</strong>：适用于短信通知或H5跳转的电子签小程序HTTP短链接</li><li><strong>APP</strong>：（默认类型）适用于第三方APP或小程序跳转的电子签小程序路径</li><li><strong>H5</strong>：适用于跳转至电子签H5实名页面的长链接</li><li><strong>H5_SHORT_URL</strong>：适用于跳转至电子签H5实名页面的短链接</li></ul><p>注：如果不传递，默认值是 <font color="red"> APP </font></p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>签署完成后是否自动回跳</p><ul><li>false：否, 实名完成不会自动跳转回来(默认)</li><li>true：是, 实名完成会自动跳转回来</li></ul><p>注: </p><ol><li>该参数<font color="red">只针对APP类型（第三方APP或小程序跳转电子签小程序）场景</font> 的实名链接有效</li><li><font color="red">手机应用APP 或 微信小程序需要监控界面的返回走后序逻辑</font>, 微信小程序的文档可以参考<a href="https://developers.weixin.qq.com/miniprogram/dev/reference/api/App.html#onShow-Object-object">这个</a></li><li><font color="red">电子签小程序跳转贵方APP，不支持自动跳转，必需用户手动点击完成按钮（微信的限制）</font></li></ol>
                     */
                    bool m_autoJumpBack;
                    bool m_autoJumpBackHasBeenSet;

                    /**
                     * <p>在用户完成实名认证后，其自定义数据将通过<a href="https://qian.tencent.com/developers/company/callback_types_staffs/#%E5%8D%81%E4%BA%8C-%E4%BC%81%E4%B8%9A%E5%BC%95%E5%AF%BC%E4%B8%AA%E4%BA%BA%E5%AE%9E%E5%90%8D%E8%AE%A4%E8%AF%81%E5%90%8E%E5%9B%9E%E8%B0%83">企业引导个人实名认证后回调</a>返回，以便用户确认其个人数据信息。请注意，自定义数据的字符长度上限为1000，且必须采用base64编码格式。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEUSERVERIFYURLREQUEST_H_
