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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_PRESETAPPROVERINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_PRESETAPPROVERINFO_H_

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
                * 预设的动态签署方的补充信息，仅匹配对应信息的签署方才能领取合同。暂时仅对个人参与方生效。
                */
                class PresetApproverInfo : public AbstractModel
                {
                public:
                    PresetApproverInfo();
                    ~PresetApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>预设参与方姓名。</p>
                     * @return Name <p>预设参与方姓名。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>预设参与方姓名。</p>
                     * @param _name <p>预设参与方姓名。</p>
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
                     * 获取<p>预设参与方手机号。</p>
                     * @return Mobile <p>预设参与方手机号。</p>
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置<p>预设参与方手机号。</p>
                     * @param _mobile <p>预设参与方手机号。</p>
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
                     * 获取<p>预设参与方证件号，需要和IdCardType同时传入。</p><p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * @return IdCardNumber <p>预设参与方证件号，需要和IdCardType同时传入。</p><p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置<p>预设参与方证件号，需要和IdCardType同时传入。</p><p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * @param _idCardNumber <p>预设参与方证件号，需要和IdCardType同时传入。</p><p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
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
                     * 获取<p>预设参与方的证件类型，需要与IdCardNumber同时传入。</p><p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * @return IdCardType <p>预设参与方的证件类型，需要与IdCardNumber同时传入。</p><p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置<p>预设参与方的证件类型，需要与IdCardNumber同时传入。</p><p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * @param _idCardType <p>预设参与方的证件类型，需要与IdCardNumber同时传入。</p><p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
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
                     * 获取<p>企业用户动态签署方场景指定预设企业名称。</p><p><code>注意：1. 若为企业动态签署方场景，此参数必须要指定。2. 企业动态签署方场景暂不支持指定姓名证件手机号等参数，仅支持指定企业名称。</code></p>
                     * @return OrganizationName <p>企业用户动态签署方场景指定预设企业名称。</p><p><code>注意：1. 若为企业动态签署方场景，此参数必须要指定。2. 企业动态签署方场景暂不支持指定姓名证件手机号等参数，仅支持指定企业名称。</code></p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>企业用户动态签署方场景指定预设企业名称。</p><p><code>注意：1. 若为企业动态签署方场景，此参数必须要指定。2. 企业动态签署方场景暂不支持指定姓名证件手机号等参数，仅支持指定企业名称。</code></p>
                     * @param _organizationName <p>企业用户动态签署方场景指定预设企业名称。</p><p><code>注意：1. 若为企业动态签署方场景，此参数必须要指定。2. 企业动态签署方场景暂不支持指定姓名证件手机号等参数，仅支持指定企业名称。</code></p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                private:

                    /**
                     * <p>预设参与方姓名。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>预设参与方手机号。</p>
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * <p>预设参与方证件号，需要和IdCardType同时传入。</p><p>证件号码，应符合以下规则</p><ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * <p>预设参与方的证件类型，需要与IdCardNumber同时传入。</p><p>证件类型，支持以下类型</p><ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * <p>企业用户动态签署方场景指定预设企业名称。</p><p><code>注意：1. 若为企业动态签署方场景，此参数必须要指定。2. 企业动态签署方场景暂不支持指定姓名证件手机号等参数，仅支持指定企业名称。</code></p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_PRESETAPPROVERINFO_H_
