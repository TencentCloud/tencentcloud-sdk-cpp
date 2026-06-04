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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppShareWhitelistItem.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用分享访问控制配置
                */
                class AppShareAccessControl : public AbstractModel
                {
                public:
                    AppShareAccessControl();
                    ~AppShareAccessControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问控制类型。枚举值: 1:公开访问(所有用户都可访问), 2:内部访问(仅企业用户可访问), 3:账号白名单(指定UIN/手机/邮箱/IP可访问)
                     * @return AccessType 访问控制类型。枚举值: 1:公开访问(所有用户都可访问), 2:内部访问(仅企业用户可访问), 3:账号白名单(指定UIN/手机/邮箱/IP可访问)
                     * 
                     */
                    int64_t GetAccessType() const;

                    /**
                     * 设置访问控制类型。枚举值: 1:公开访问(所有用户都可访问), 2:内部访问(仅企业用户可访问), 3:账号白名单(指定UIN/手机/邮箱/IP可访问)
                     * @param _accessType 访问控制类型。枚举值: 1:公开访问(所有用户都可访问), 2:内部访问(仅企业用户可访问), 3:账号白名单(指定UIN/手机/邮箱/IP可访问)
                     * 
                     */
                    void SetAccessType(const int64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取体验链接开关
                     * @return Enabled 体验链接开关
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置体验链接开关
                     * @param _enabled 体验链接开关
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取白名单(仅 access_type=ACCOUNT_WHITELIST 时生效)
                     * @return Whitelist 白名单(仅 access_type=ACCOUNT_WHITELIST 时生效)
                     * 
                     */
                    std::vector<AppShareWhitelistItem> GetWhitelist() const;

                    /**
                     * 设置白名单(仅 access_type=ACCOUNT_WHITELIST 时生效)
                     * @param _whitelist 白名单(仅 access_type=ACCOUNT_WHITELIST 时生效)
                     * 
                     */
                    void SetWhitelist(const std::vector<AppShareWhitelistItem>& _whitelist);

                    /**
                     * 判断参数 Whitelist 是否已赋值
                     * @return Whitelist 是否已赋值
                     * 
                     */
                    bool WhitelistHasBeenSet() const;

                private:

                    /**
                     * 访问控制类型。枚举值: 1:公开访问(所有用户都可访问), 2:内部访问(仅企业用户可访问), 3:账号白名单(指定UIN/手机/邮箱/IP可访问)
                     */
                    int64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 体验链接开关
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 白名单(仅 access_type=ACCOUNT_WHITELIST 时生效)
                     */
                    std::vector<AppShareWhitelistItem> m_whitelist;
                    bool m_whitelistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREACCESSCONTROL_H_
