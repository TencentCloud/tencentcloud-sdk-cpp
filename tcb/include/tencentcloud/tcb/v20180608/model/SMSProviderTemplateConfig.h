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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_SMSPROVIDERTEMPLATECONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_SMSPROVIDERTEMPLATECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/SMSTemplateParams.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 自定义短信服务商模板配置
                */
                class SMSProviderTemplateConfig : public AbstractModel
                {
                public:
                    SMSProviderTemplateConfig();
                    ~SMSProviderTemplateConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>短信服务商类型</p><p>枚举值：</p><ul><li>TENCENT_CN： 腾讯云国内短信</li><li>TENCENT_INTL： 腾讯云国际短信</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vendor <p>短信服务商类型</p><p>枚举值：</p><ul><li>TENCENT_CN： 腾讯云国内短信</li><li>TENCENT_INTL： 腾讯云国际短信</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>短信服务商类型</p><p>枚举值：</p><ul><li>TENCENT_CN： 腾讯云国内短信</li><li>TENCENT_INTL： 腾讯云国际短信</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vendor <p>短信服务商类型</p><p>枚举值：</p><ul><li>TENCENT_CN： 腾讯云国内短信</li><li>TENCENT_INTL： 腾讯云国际短信</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>短信服务商侧申请并审核通过的模板ID。</p><ul><li>腾讯云短信模板ID可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-template">腾讯云国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateId <p>短信服务商侧申请并审核通过的模板ID。</p><ul><li>腾讯云短信模板ID可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-template">腾讯云国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>短信服务商侧申请并审核通过的模板ID。</p><ul><li>腾讯云短信模板ID可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-template">腾讯云国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateId <p>短信服务商侧申请并审核通过的模板ID。</p><ul><li>腾讯云短信模板ID可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-template">腾讯云国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>短信服务商侧为应用分配的ID，按照服务商文档和要求需要此参数的，填写该参数。</p><ul><li>腾讯云国内短信和国际短信此参数必填，可以在<a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>的应用列表中查看对应的应用id。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SdkAppId <p>短信服务商侧为应用分配的ID，按照服务商文档和要求需要此参数的，填写该参数。</p><ul><li>腾讯云国内短信和国际短信此参数必填，可以在<a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>的应用列表中查看对应的应用id。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置<p>短信服务商侧为应用分配的ID，按照服务商文档和要求需要此参数的，填写该参数。</p><ul><li>腾讯云国内短信和国际短信此参数必填，可以在<a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>的应用列表中查看对应的应用id。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sdkAppId <p>短信服务商侧为应用分配的ID，按照服务商文档和要求需要此参数的，填写该参数。</p><ul><li>腾讯云国内短信和国际短信此参数必填，可以在<a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>的应用列表中查看对应的应用id。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>短信服务商侧申请并审核通过的签名，按照服务商的文档和要求填写。</p><ul><li>腾讯云短信服务商，签名信息可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-sign">国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-sign">国际/港澳台短信</a> 的签名管理查看。<br> 注意：<ol><li>发送国内短信该参数必填，且需填写签名内容而非签名ID。</li><li>发送国际/港澳台短信该参数非必填。</li></ol></li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignName <p>短信服务商侧申请并审核通过的签名，按照服务商的文档和要求填写。</p><ul><li>腾讯云短信服务商，签名信息可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-sign">国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-sign">国际/港澳台短信</a> 的签名管理查看。<br> 注意：<ol><li>发送国内短信该参数必填，且需填写签名内容而非签名ID。</li><li>发送国际/港澳台短信该参数非必填。</li></ol></li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置<p>短信服务商侧申请并审核通过的签名，按照服务商的文档和要求填写。</p><ul><li>腾讯云短信服务商，签名信息可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-sign">国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-sign">国际/港澳台短信</a> 的签名管理查看。<br> 注意：<ol><li>发送国内短信该参数必填，且需填写签名内容而非签名ID。</li><li>发送国际/港澳台短信该参数非必填。</li></ol></li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _signName <p>短信服务商侧申请并审核通过的签名，按照服务商的文档和要求填写。</p><ul><li>腾讯云短信服务商，签名信息可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-sign">国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-sign">国际/港澳台短信</a> 的签名管理查看。<br> 注意：<ol><li>发送国内短信该参数必填，且需填写签名内容而非签名ID。</li><li>发送国际/港澳台短信该参数非必填。</li></ol></li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取<p>调用短信服务商发送短信接口的调用秘钥对应的ID。</p><ul><li>调用api秘钥会保存在云开发平台控制台—扩展功能—授权管理中，如果对于短信调用的api秘钥有删除需求，可在此处进行删除，删除后，短信将无法正常发送。</li><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID，并且按照最小权限配置。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretId <p>调用短信服务商发送短信接口的调用秘钥对应的ID。</p><ul><li>调用api秘钥会保存在云开发平台控制台—扩展功能—授权管理中，如果对于短信调用的api秘钥有删除需求，可在此处进行删除，删除后，短信将无法正常发送。</li><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID，并且按照最小权限配置。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretId() const;

                    /**
                     * 设置<p>调用短信服务商发送短信接口的调用秘钥对应的ID。</p><ul><li>调用api秘钥会保存在云开发平台控制台—扩展功能—授权管理中，如果对于短信调用的api秘钥有删除需求，可在此处进行删除，删除后，短信将无法正常发送。</li><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID，并且按照最小权限配置。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretId <p>调用短信服务商发送短信接口的调用秘钥对应的ID。</p><ul><li>调用api秘钥会保存在云开发平台控制台—扩展功能—授权管理中，如果对于短信调用的api秘钥有删除需求，可在此处进行删除，删除后，短信将无法正常发送。</li><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID，并且按照最小权限配置。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretId(const std::string& _secretId);

                    /**
                     * 判断参数 SecretId 是否已赋值
                     * @return SecretId 是否已赋值
                     * 
                     */
                    bool SecretIdHasBeenSet() const;

                    /**
                     * 获取<p>调用短信服务商发送短信接口的调用api秘钥对应的秘钥Key。</p><ul><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID, 并且按照最小权限配置。平台对于调用api秘钥key是加密存储的，不会明文存储。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretKey <p>调用短信服务商发送短信接口的调用api秘钥对应的秘钥Key。</p><ul><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID, 并且按照最小权限配置。平台对于调用api秘钥key是加密存储的，不会明文存储。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>调用短信服务商发送短信接口的调用api秘钥对应的秘钥Key。</p><ul><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID, 并且按照最小权限配置。平台对于调用api秘钥key是加密存储的，不会明文存储。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretKey <p>调用短信服务商发送短信接口的调用api秘钥对应的秘钥Key。</p><ul><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID, 并且按照最小权限配置。平台对于调用api秘钥key是加密存储的，不会明文存储。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>短信服务商侧自定义短信发送的senderID，按照服务商文档和要求传参。</p><ul><li>仅国际化场景使用。部分国家/运营商支持自定义 Sender ID替代默认主叫号码。国内站点忽略此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SenderId <p>短信服务商侧自定义短信发送的senderID，按照服务商文档和要求传参。</p><ul><li>仅国际化场景使用。部分国家/运营商支持自定义 Sender ID替代默认主叫号码。国内站点忽略此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSenderId() const;

                    /**
                     * 设置<p>短信服务商侧自定义短信发送的senderID，按照服务商文档和要求传参。</p><ul><li>仅国际化场景使用。部分国家/运营商支持自定义 Sender ID替代默认主叫号码。国内站点忽略此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _senderId <p>短信服务商侧自定义短信发送的senderID，按照服务商文档和要求传参。</p><ul><li>仅国际化场景使用。部分国家/运营商支持自定义 Sender ID替代默认主叫号码。国内站点忽略此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSenderId(const std::string& _senderId);

                    /**
                     * 判断参数 SenderId 是否已赋值
                     * @return SenderId 是否已赋值
                     * 
                     */
                    bool SenderIdHasBeenSet() const;

                    /**
                     * 获取<p>当短信自定义模板含多个占位符时，平台只负责生成验证码值，其余占位符由调用方在此提供。</p><ul><li>无需提供验证码对应的占位的值，验证码由云开发平台侧生成。</li><li>如果是命名占位的服务商的短信模板，这里的参数按照需要对应的占位的key和value，会按照对应的key和value在发送短信时，填充到模板中。</li><li>如果是序号占位的服务商的短信模板，这里的参数不需要key, 只需要填写对应的value, 会按照填写的顺序依次填充到模板中。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateExtendParam <p>当短信自定义模板含多个占位符时，平台只负责生成验证码值，其余占位符由调用方在此提供。</p><ul><li>无需提供验证码对应的占位的值，验证码由云开发平台侧生成。</li><li>如果是命名占位的服务商的短信模板，这里的参数按照需要对应的占位的key和value，会按照对应的key和value在发送短信时，填充到模板中。</li><li>如果是序号占位的服务商的短信模板，这里的参数不需要key, 只需要填写对应的value, 会按照填写的顺序依次填充到模板中。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SMSTemplateParams> GetTemplateExtendParam() const;

                    /**
                     * 设置<p>当短信自定义模板含多个占位符时，平台只负责生成验证码值，其余占位符由调用方在此提供。</p><ul><li>无需提供验证码对应的占位的值，验证码由云开发平台侧生成。</li><li>如果是命名占位的服务商的短信模板，这里的参数按照需要对应的占位的key和value，会按照对应的key和value在发送短信时，填充到模板中。</li><li>如果是序号占位的服务商的短信模板，这里的参数不需要key, 只需要填写对应的value, 会按照填写的顺序依次填充到模板中。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateExtendParam <p>当短信自定义模板含多个占位符时，平台只负责生成验证码值，其余占位符由调用方在此提供。</p><ul><li>无需提供验证码对应的占位的值，验证码由云开发平台侧生成。</li><li>如果是命名占位的服务商的短信模板，这里的参数按照需要对应的占位的key和value，会按照对应的key和value在发送短信时，填充到模板中。</li><li>如果是序号占位的服务商的短信模板，这里的参数不需要key, 只需要填写对应的value, 会按照填写的顺序依次填充到模板中。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateExtendParam(const std::vector<SMSTemplateParams>& _templateExtendParam);

                    /**
                     * 判断参数 TemplateExtendParam 是否已赋值
                     * @return TemplateExtendParam 是否已赋值
                     * 
                     */
                    bool TemplateExtendParamHasBeenSet() const;

                private:

                    /**
                     * <p>短信服务商类型</p><p>枚举值：</p><ul><li>TENCENT_CN： 腾讯云国内短信</li><li>TENCENT_INTL： 腾讯云国际短信</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>短信服务商侧申请并审核通过的模板ID。</p><ul><li>腾讯云短信模板ID可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-template">腾讯云国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-template">国际/港澳台短信</a> 的正文模板管理查看，若向境外手机号发送短信，仅支持使用国际/港澳台短信模板。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>短信服务商侧为应用分配的ID，按照服务商文档和要求需要此参数的，填写该参数。</p><ul><li>腾讯云国内短信和国际短信此参数必填，可以在<a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>的应用列表中查看对应的应用id。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>短信服务商侧申请并审核通过的签名，按照服务商的文档和要求填写。</p><ul><li>腾讯云短信服务商，签名信息可前往 <a href="https://console.cloud.tencent.com/smsv2/csms-sign">国内短信</a> 或 <a href="https://console.cloud.tencent.com/smsv2/isms-sign">国际/港澳台短信</a> 的签名管理查看。<br> 注意：<ol><li>发送国内短信该参数必填，且需填写签名内容而非签名ID。</li><li>发送国际/港澳台短信该参数非必填。</li></ol></li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * <p>调用短信服务商发送短信接口的调用秘钥对应的ID。</p><ul><li>调用api秘钥会保存在云开发平台控制台—扩展功能—授权管理中，如果对于短信调用的api秘钥有删除需求，可在此处进行删除，删除后，短信将无法正常发送。</li><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID，并且按照最小权限配置。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretId;
                    bool m_secretIdHasBeenSet;

                    /**
                     * <p>调用短信服务商发送短信接口的调用api秘钥对应的秘钥Key。</p><ul><li>腾讯云的调用api秘钥在腾讯云控制台获取，建议使用子账号的秘钥ID, 并且按照最小权限配置。平台对于调用api秘钥key是加密存储的，不会明文存储。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>短信服务商侧自定义短信发送的senderID，按照服务商文档和要求传参。</p><ul><li>仅国际化场景使用。部分国家/运营商支持自定义 Sender ID替代默认主叫号码。国内站点忽略此字段。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_senderId;
                    bool m_senderIdHasBeenSet;

                    /**
                     * <p>当短信自定义模板含多个占位符时，平台只负责生成验证码值，其余占位符由调用方在此提供。</p><ul><li>无需提供验证码对应的占位的值，验证码由云开发平台侧生成。</li><li>如果是命名占位的服务商的短信模板，这里的参数按照需要对应的占位的key和value，会按照对应的key和value在发送短信时，填充到模板中。</li><li>如果是序号占位的服务商的短信模板，这里的参数不需要key, 只需要填写对应的value, 会按照填写的顺序依次填充到模板中。</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SMSTemplateParams> m_templateExtendParam;
                    bool m_templateExtendParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_SMSPROVIDERTEMPLATECONFIG_H_
