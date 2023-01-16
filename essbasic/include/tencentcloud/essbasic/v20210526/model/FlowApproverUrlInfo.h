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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERURLINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERURLINFO_H_

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
                * 签署人签署链接信息
                */
                class FlowApproverUrlInfo : public AbstractModel
                {
                public:
                    FlowApproverUrlInfo();
                    ~FlowApproverUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
                     * @return SignUrl 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 设置签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
                     * @param SignUrl 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
                     */
                    void SetSignUrl(const std::string& _signUrl);

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取签署人手机号
                     * @return Mobile 签署人手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号
                     * @param Mobile 签署人手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取签署人姓名
                     * @return Name 签署人姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名
                     * @param Name 签署人姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署人类型 PERSON-个人
                     * @return ApproverType 签署人类型 PERSON-个人
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置签署人类型 PERSON-个人
                     * @param ApproverType 签署人类型 PERSON-个人
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                private:

                    /**
                     * 签署链接，注意该链接有效期为30分钟，同时需要注意保密，不要外泄给无关用户。
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 签署人手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署人姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人类型 PERSON-个人
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERURLINFO_H_
