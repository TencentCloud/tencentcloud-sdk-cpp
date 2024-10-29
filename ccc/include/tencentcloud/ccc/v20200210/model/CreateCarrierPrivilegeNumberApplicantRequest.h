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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_CREATECARRIERPRIVILEGENUMBERAPPLICANTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_CREATECARRIERPRIVILEGENUMBERAPPLICANTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * CreateCarrierPrivilegeNumberApplicant请求参数结构体
                */
                class CreateCarrierPrivilegeNumberApplicantRequest : public AbstractModel
                {
                public:
                    CreateCarrierPrivilegeNumberApplicantRequest();
                    ~CreateCarrierPrivilegeNumberApplicantRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @return SdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * @param _sdkAppId 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取主叫号码，必须为实例中存在的号码，格式为0086xxxx（暂时只支持国内号码）
                     * @return Callers 主叫号码，必须为实例中存在的号码，格式为0086xxxx（暂时只支持国内号码）
                     * 
                     */
                    std::vector<std::string> GetCallers() const;

                    /**
                     * 设置主叫号码，必须为实例中存在的号码，格式为0086xxxx（暂时只支持国内号码）
                     * @param _callers 主叫号码，必须为实例中存在的号码，格式为0086xxxx（暂时只支持国内号码）
                     * 
                     */
                    void SetCallers(const std::vector<std::string>& _callers);

                    /**
                     * 判断参数 Callers 是否已赋值
                     * @return Callers 是否已赋值
                     * 
                     */
                    bool CallersHasBeenSet() const;

                    /**
                     * 获取被叫号码，必须为实例中坐席绑定的手机号码，格式为0086xxxx（暂时只支持国内号码）
                     * @return Callees 被叫号码，必须为实例中坐席绑定的手机号码，格式为0086xxxx（暂时只支持国内号码）
                     * 
                     */
                    std::vector<std::string> GetCallees() const;

                    /**
                     * 设置被叫号码，必须为实例中坐席绑定的手机号码，格式为0086xxxx（暂时只支持国内号码）
                     * @param _callees 被叫号码，必须为实例中坐席绑定的手机号码，格式为0086xxxx（暂时只支持国内号码）
                     * 
                     */
                    void SetCallees(const std::vector<std::string>& _callees);

                    /**
                     * 判断参数 Callees 是否已赋值
                     * @return Callees 是否已赋值
                     * 
                     */
                    bool CalleesHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 应用 ID（必填），可以查看 https://console.cloud.tencent.com/ccc
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 主叫号码，必须为实例中存在的号码，格式为0086xxxx（暂时只支持国内号码）
                     */
                    std::vector<std::string> m_callers;
                    bool m_callersHasBeenSet;

                    /**
                     * 被叫号码，必须为实例中坐席绑定的手机号码，格式为0086xxxx（暂时只支持国内号码）
                     */
                    std::vector<std::string> m_callees;
                    bool m_calleesHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_CREATECARRIERPRIVILEGENUMBERAPPLICANTREQUEST_H_
