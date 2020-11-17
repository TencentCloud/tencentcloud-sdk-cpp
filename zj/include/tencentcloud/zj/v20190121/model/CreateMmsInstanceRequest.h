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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCEREQUEST_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/CreateMmsInstanceItem.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * CreateMmsInstance请求参数结构体
                */
                class CreateMmsInstanceRequest : public AbstractModel
                {
                public:
                    CreateMmsInstanceRequest();
                    ~CreateMmsInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取商户证书
                     * @return License 商户证书
                     */
                    std::string GetLicense() const;

                    /**
                     * 设置商户证书
                     * @param License 商户证书
                     */
                    void SetLicense(const std::string& _license);

                    /**
                     * 判断参数 License 是否已赋值
                     * @return License 是否已赋值
                     */
                    bool LicenseHasBeenSet() const;

                    /**
                     * 获取样例名称
                     * @return InstanceName 样例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置样例名称
                     * @param InstanceName 样例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取标题
                     * @return Title 标题
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置标题
                     * @param Title 标题
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取签名
                     * @return Sign 签名
                     */
                    std::string GetSign() const;

                    /**
                     * 设置签名
                     * @param Sign 签名
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取素材内容
                     * @return Contents 素材内容
                     */
                    std::vector<CreateMmsInstanceItem> GetContents() const;

                    /**
                     * 设置素材内容
                     * @param Contents 素材内容
                     */
                    void SetContents(const std::vector<CreateMmsInstanceItem>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取样例中链接动态变量对应的链接，和占位符顺序一致
                     * @return Urls 样例中链接动态变量对应的链接，和占位符顺序一致
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 设置样例中链接动态变量对应的链接，和占位符顺序一致
                     * @param Urls 样例中链接动态变量对应的链接，和占位符顺序一致
                     */
                    void SetUrls(const std::vector<std::string>& _urls);

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     */
                    bool UrlsHasBeenSet() const;

                    /**
                     * 获取机型列表
                     * @return PhoneType 机型列表
                     */
                    std::vector<uint64_t> GetPhoneType() const;

                    /**
                     * 设置机型列表
                     * @param PhoneType 机型列表
                     */
                    void SetPhoneType(const std::vector<uint64_t>& _phoneType);

                    /**
                     * 判断参数 PhoneType 是否已赋值
                     * @return PhoneType 是否已赋值
                     */
                    bool PhoneTypeHasBeenSet() const;

                    /**
                     * 获取发送超短活动时用于展示人群包动态参数模板占位符序号或接口发送时变量占位符序号
                     * @return CommonParams 发送超短活动时用于展示人群包动态参数模板占位符序号或接口发送时变量占位符序号
                     */
                    std::vector<uint64_t> GetCommonParams() const;

                    /**
                     * 设置发送超短活动时用于展示人群包动态参数模板占位符序号或接口发送时变量占位符序号
                     * @param CommonParams 发送超短活动时用于展示人群包动态参数模板占位符序号或接口发送时变量占位符序号
                     */
                    void SetCommonParams(const std::vector<uint64_t>& _commonParams);

                    /**
                     * 判断参数 CommonParams 是否已赋值
                     * @return CommonParams 是否已赋值
                     */
                    bool CommonParamsHasBeenSet() const;

                    /**
                     * 获取发送超短活动时用于展示短连接模板占位符序号,仅用作超短活动
                     * @return UrlParams 发送超短活动时用于展示短连接模板占位符序号,仅用作超短活动
                     */
                    std::vector<uint64_t> GetUrlParams() const;

                    /**
                     * 设置发送超短活动时用于展示短连接模板占位符序号,仅用作超短活动
                     * @param UrlParams 发送超短活动时用于展示短连接模板占位符序号,仅用作超短活动
                     */
                    void SetUrlParams(const std::vector<uint64_t>& _urlParams);

                    /**
                     * 判断参数 UrlParams 是否已赋值
                     * @return UrlParams 是否已赋值
                     */
                    bool UrlParamsHasBeenSet() const;

                private:

                    /**
                     * 商户证书
                     */
                    std::string m_license;
                    bool m_licenseHasBeenSet;

                    /**
                     * 样例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 签名
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 素材内容
                     */
                    std::vector<CreateMmsInstanceItem> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * 样例中链接动态变量对应的链接，和占位符顺序一致
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                    /**
                     * 机型列表
                     */
                    std::vector<uint64_t> m_phoneType;
                    bool m_phoneTypeHasBeenSet;

                    /**
                     * 发送超短活动时用于展示人群包动态参数模板占位符序号或接口发送时变量占位符序号
                     */
                    std::vector<uint64_t> m_commonParams;
                    bool m_commonParamsHasBeenSet;

                    /**
                     * 发送超短活动时用于展示短连接模板占位符序号,仅用作超短活动
                     */
                    std::vector<uint64_t> m_urlParams;
                    bool m_urlParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_CREATEMMSINSTANCEREQUEST_H_
