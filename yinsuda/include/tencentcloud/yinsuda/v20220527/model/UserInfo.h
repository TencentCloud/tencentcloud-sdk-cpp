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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_USERINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_USERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/LiveVipUserInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 用户信息
                */
                class UserInfo : public AbstractModel
                {
                public:
                    UserInfo();
                    ~UserInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称。
                     * @return AppName 应用名称。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置应用名称。
                     * @param _appName 应用名称。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取用户标识。
                     * @return UserId 用户标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户标识。
                     * @param _userId 用户标识。
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
                     * 获取直播会员详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveVipUserInfo 直播会员详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveVipUserInfo GetLiveVipUserInfo() const;

                    /**
                     * 设置直播会员详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveVipUserInfo 直播会员详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveVipUserInfo(const LiveVipUserInfo& _liveVipUserInfo);

                    /**
                     * 判断参数 LiveVipUserInfo 是否已赋值
                     * @return LiveVipUserInfo 是否已赋值
                     * 
                     */
                    bool LiveVipUserInfoHasBeenSet() const;

                    /**
                     * 获取用户类型
<li>Normal：普通用户</li>
<li>LiveVip：直播会员用户</li>
                     * @return UserType 用户类型
<li>Normal：普通用户</li>
<li>LiveVip：直播会员用户</li>
                     * 
                     */
                    std::string GetUserType() const;

                    /**
                     * 设置用户类型
<li>Normal：普通用户</li>
<li>LiveVip：直播会员用户</li>
                     * @param _userType 用户类型
<li>Normal：普通用户</li>
<li>LiveVip：直播会员用户</li>
                     * 
                     */
                    void SetUserType(const std::string& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 用户标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 直播会员详细信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveVipUserInfo m_liveVipUserInfo;
                    bool m_liveVipUserInfoHasBeenSet;

                    /**
                     * 用户类型
<li>Normal：普通用户</li>
<li>LiveVip：直播会员用户</li>
                     */
                    std::string m_userType;
                    bool m_userTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_USERINFO_H_
