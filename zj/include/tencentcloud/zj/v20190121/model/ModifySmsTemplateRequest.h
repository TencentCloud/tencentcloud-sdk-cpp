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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * ModifySmsTemplate请求参数结构体
                */
                class ModifySmsTemplateRequest : public AbstractModel
                {
                public:
                    ModifySmsTemplateRequest();
                    ~ModifySmsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     * 
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param _license 商户证书
                     * 
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     * 
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取短信模板id
                     * @return TemplateId 短信模板id
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置短信模板id
                     * @param _templateId 短信模板id
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取短信签名，创建签名时返回
                     * @return SignID 短信签名，创建签名时返回
                     * 
                     */
                    uint64_t GetSignID() const;

                    /**
                     * 设置短信签名，创建签名时返回
                     * @param _signID 短信签名，创建签名时返回
                     * 
                     */
                    void SetSignID(const uint64_t& _signID);

                    /**
                     * 判断参数 SignID 是否已赋值
                     * @return SignID 是否已赋值
                     * 
                     */
                    bool SignIDHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return TemplateName 模板名称
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称
                     * @param _templateName 模板名称
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取短信内容，动态内容使用占位符{1}，{2}等表示
                     * @return TemplateContent 短信内容，动态内容使用占位符{1}，{2}等表示
                     * 
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置短信内容，动态内容使用占位符{1}，{2}等表示
                     * @param _templateContent 短信内容，动态内容使用占位符{1}，{2}等表示
                     * 
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取短信类型：{0:普通短信，1:营销短信}
                     * @return SmsType 短信类型：{0:普通短信，1:营销短信}
                     * 
                     */
                    uint64_t GetSmsType() const;

                    /**
                     * 设置短信类型：{0:普通短信，1:营销短信}
                     * @param _smsType 短信类型：{0:普通短信，1:营销短信}
                     * 
                     */
                    void SetSmsType(const uint64_t& _smsType);

                    /**
                     * 判断参数 SmsType 是否已赋值
                     * @return SmsType 是否已赋值
                     * 
                     */
                    bool SmsTypeHasBeenSet() const;

                    /**
                     * 获取是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @return International 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * @param _international 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取短信模板标签
                     * @return Remark 短信模板标签
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置短信模板标签
                     * @param _remark 短信模板标签
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取发送短信活动时配置的落地链接地址,仅用作短信活动
                     * @return Urls 发送短信活动时配置的落地链接地址,仅用作短信活动
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置发送短信活动时配置的落地链接地址,仅用作短信活动
                     * @param _urls 发送短信活动时配置的落地链接地址,仅用作短信活动
                     * 
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取发送短信活动时用于展示人群包动态参数模板占位符序号,仅用作短信活动
                     * @return CommonParams 发送短信活动时用于展示人群包动态参数模板占位符序号,仅用作短信活动
                     * 
                     */
                    std::vector<int64_t> GetCommonParams() const;

                    /**
                     * 设置发送短信活动时用于展示人群包动态参数模板占位符序号,仅用作短信活动
                     * @param _commonParams 发送短信活动时用于展示人群包动态参数模板占位符序号,仅用作短信活动
                     * 
                     */
                    void SetCommonParams(const std::vector<int64_t>& _commonParams);

                    /**
                     * 判断参数 CommonParams 是否已赋值
                     * @return CommonParams 是否已赋值
                     * 
                     */
                    bool CommonParamsHasBeenSet() const;

                    /**
                     * 获取发送短信活动时用于展示短连接模板占位符序号,仅用作短信活动
                     * @return UrlParams 发送短信活动时用于展示短连接模板占位符序号,仅用作短信活动
                     * 
                     */
                    std::vector<int64_t> GetUrlParams() const;

                    /**
                     * 设置发送短信活动时用于展示短连接模板占位符序号,仅用作短信活动
                     * @param _urlParams 发送短信活动时用于展示短连接模板占位符序号,仅用作短信活动
                     * 
                     */
                    void SetUrlParams(const std::vector<int64_t>& _urlParams);

                    /**
                     * 判断参数 UrlParams 是否已赋值
                     * @return UrlParams 是否已赋值
                     * 
                     */
                    bool UrlParamsHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 短信模板id
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 短信签名，创建签名时返回
                     */
                    uint64_t m_signID;
                    bool m_signIDHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 短信内容，动态内容使用占位符{1}，{2}等表示
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * 短信类型：{0:普通短信，1:营销短信}
                     */
                    uint64_t m_smsType;
                    bool m_smsTypeHasBeenSet;

                    /**
                     * 是否国际/港澳台短信：
0：表示国内短信。
1：表示国际/港澳台短信。
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * 短信模板标签
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 发送短信活动时配置的落地链接地址,仅用作短信活动
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 发送短信活动时用于展示人群包动态参数模板占位符序号,仅用作短信活动
                     */
                    std::vector<int64_t> m_commonParams;
                    bool m_commonParamsHasBeenSet;

                    /**
                     * 发送短信活动时用于展示短连接模板占位符序号,仅用作短信活动
                     */
                    std::vector<int64_t> m_urlParams;
                    bool m_urlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_MODIFYSMSTEMPLATEREQUEST_H_
