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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDUPDATESTAFFDATA_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDUPDATESTAFFDATA_H_

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
                * 更新员工信息失败返回的数据信息
                */
                class FailedUpdateStaffData : public AbstractModel
                {
                public:
                    FailedUpdateStaffData();
                    ~FailedUpdateStaffData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户传入的名称
                     * @return DisplayName 用户传入的名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置用户传入的名称
                     * @param _displayName 用户传入的名称
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取用户传入的手机号，明文展示
                     * @return Mobile 用户传入的手机号，明文展示
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户传入的手机号，明文展示
                     * @param _mobile 用户传入的手机号，明文展示
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
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
                     * @param _reason 失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * @return UserId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * @param _userId 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取员工在第三方平台的openId
                     * @return OpenId 员工在第三方平台的openId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置员工在第三方平台的openId
                     * @param _openId 员工在第三方平台的openId
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 用户传入的名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 用户传入的手机号，明文展示
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 员工在第三方平台的openId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FAILEDUPDATESTAFFDATA_H_
