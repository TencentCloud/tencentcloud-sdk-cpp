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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LOGINSTATUSINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LOGINSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 登录态信息
                */
                class LoginStatusInfo : public AbstractModel
                {
                public:
                    LoginStatusInfo();
                    ~LoginStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 Id。
                     * @return UserId 用户 Id。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 Id。
                     * @param _userId 用户 Id。
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
                     * 获取用户登录状态。
<li>Online：在线；</li>
<li>Offline：离线。</li>
                     * @return Status 用户登录状态。
<li>Online：在线；</li>
<li>Offline：离线。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置用户登录状态。
<li>Online：在线；</li>
<li>Offline：离线。</li>
                     * @param _status 用户登录状态。
<li>Online：在线；</li>
<li>Offline：离线。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 用户 Id。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户登录状态。
<li>Online：在线；</li>
<li>Offline：离线。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LOGINSTATUSINFO_H_
