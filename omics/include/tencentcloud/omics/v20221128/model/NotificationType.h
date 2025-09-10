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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_NOTIFICATIONTYPE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_NOTIFICATIONTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 通知类型
                */
                class NotificationType : public AbstractModel
                {
                public:
                    NotificationType();
                    ~NotificationType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯健康组学平台站点信息。
                     * @return StationMessage 腾讯健康组学平台站点信息。
                     * 
                     */
                    bool GetStationMessage() const;

                    /**
                     * 设置腾讯健康组学平台站点信息。
                     * @param _stationMessage 腾讯健康组学平台站点信息。
                     * 
                     */
                    void SetStationMessage(const bool& _stationMessage);

                    /**
                     * 判断参数 StationMessage 是否已赋值
                     * @return StationMessage 是否已赋值
                     * 
                     */
                    bool StationMessageHasBeenSet() const;

                    /**
                     * 获取邮箱列表。
                     * @return Email 邮箱列表。
                     * 
                     */
                    std::vector<std::string> GetEmail() const;

                    /**
                     * 设置邮箱列表。
                     * @param _email 邮箱列表。
                     * 
                     */
                    void SetEmail(const std::vector<std::string>& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取当前用户邮箱。
                     * @return CurrentUserEmail 当前用户邮箱。
                     * 
                     */
                    bool GetCurrentUserEmail() const;

                    /**
                     * 设置当前用户邮箱。
                     * @param _currentUserEmail 当前用户邮箱。
                     * 
                     */
                    void SetCurrentUserEmail(const bool& _currentUserEmail);

                    /**
                     * 判断参数 CurrentUserEmail 是否已赋值
                     * @return CurrentUserEmail 是否已赋值
                     * 
                     */
                    bool CurrentUserEmailHasBeenSet() const;

                private:

                    /**
                     * 腾讯健康组学平台站点信息。
                     */
                    bool m_stationMessage;
                    bool m_stationMessageHasBeenSet;

                    /**
                     * 邮箱列表。
                     */
                    std::vector<std::string> m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 当前用户邮箱。
                     */
                    bool m_currentUserEmail;
                    bool m_currentUserEmailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_NOTIFICATIONTYPE_H_
