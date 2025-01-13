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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSUPDATESTAFFDATA_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSUPDATESTAFFDATA_H_

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
                * 更新员工信息成功返回的数据信息， 仅支持未实名的用户进行更新
会通过短信、企微消息或者H5Url 链接
如果是通过H5邀请加入的方式，会返回H5 链接
                */
                class SuccessUpdateStaffData : public AbstractModel
                {
                public:
                    SuccessUpdateStaffData();
                    ~SuccessUpdateStaffData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取传入的用户名称
                     * @return DisplayName 传入的用户名称
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置传入的用户名称
                     * @param _displayName 传入的用户名称
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
                     * 获取传入的手机号，没有打码
                     * @return Mobile 传入的手机号，没有打码
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置传入的手机号，没有打码
                     * @param _mobile 传入的手机号，没有打码
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
                     * 获取H5端员工实名链接
只有入参 InvitationNotifyType = H5的时候才会进行返回。
                     * @return Url H5端员工实名链接
只有入参 InvitationNotifyType = H5的时候才会进行返回。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置H5端员工实名链接
只有入参 InvitationNotifyType = H5的时候才会进行返回。
                     * @param _url H5端员工实名链接
只有入参 InvitationNotifyType = H5的时候才会进行返回。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 传入的用户名称
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 传入的手机号，没有打码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 员工在腾讯电子签平台的唯一身份标识，为32位字符串。
可登录腾讯电子签控制台，在 "更多能力"->"组织管理" 中查看某位员工的UserId(在页面中展示为用户ID)。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * H5端员工实名链接
只有入参 InvitationNotifyType = H5的时候才会进行返回。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSUPDATESTAFFDATA_H_
