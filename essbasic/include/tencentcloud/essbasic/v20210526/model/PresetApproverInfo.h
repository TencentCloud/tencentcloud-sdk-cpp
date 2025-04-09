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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PRESETAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PRESETAPPROVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
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
                     * 获取预设参与方姓名。
                     * @return Name 预设参与方姓名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置预设参与方姓名。
                     * @param _name 预设参与方姓名。
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
                     * 获取预设参与方手机号。
                     * @return Mobile 预设参与方手机号。
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置预设参与方手机号。
                     * @param _mobile 预设参与方手机号。
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
                     * 获取预设参与方证件号，需要和IdCardType同时传入。

证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * @return IdCardNumber 预设参与方证件号，需要和IdCardType同时传入。

证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置预设参与方证件号，需要和IdCardType同时传入。

证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     * @param _idCardNumber 预设参与方证件号，需要和IdCardType同时传入。

证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
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
                     * 获取预设参与方的证件类型，需要与IdCardNumber同时传入。

证件类型，支持以下类型
<ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * @return IdCardType 预设参与方的证件类型，需要与IdCardNumber同时传入。

证件类型，支持以下类型
<ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * 
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置预设参与方的证件类型，需要与IdCardNumber同时传入。

证件类型，支持以下类型
<ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * @param _idCardType 预设参与方的证件类型，需要与IdCardNumber同时传入。

证件类型，支持以下类型
<ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     * 
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     * 
                     */
                    bool IdCardTypeHasBeenSet() const;

                private:

                    /**
                     * 预设参与方姓名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 预设参与方手机号。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 预设参与方证件号，需要和IdCardType同时传入。

证件号码，应符合以下规则
<ul><li>中国大陆居民身份证号码应为18位字符串，由数字和大写字母X组成(如存在X，请大写)。</li></ul>
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 预设参与方的证件类型，需要与IdCardNumber同时传入。

证件类型，支持以下类型
<ul><li><b>ID_CARD</b>: 居民身份证</li></ul>
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_PRESETAPPROVERINFO_H_
