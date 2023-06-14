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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_TICKETAUTHINFO_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_TICKETAUTHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 数据源授权信息
                */
                class TicketAuthInfo : public AbstractModel
                {
                public:
                    TicketAuthInfo();
                    ~TicketAuthInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取授权用户
                     * @return AuthUser 授权用户
                     * 
                     */
                    std::string GetAuthUser() const;

                    /**
                     * 设置授权用户
                     * @param _authUser 授权用户
                     * 
                     */
                    void SetAuthUser(const std::string& _authUser);

                    /**
                     * 判断参数 AuthUser 是否已赋值
                     * @return AuthUser 是否已赋值
                     * 
                     */
                    bool AuthUserHasBeenSet() const;

                private:

                    /**
                     * 授权用户
                     */
                    std::string m_authUser;
                    bool m_authUserHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_TICKETAUTHINFO_H_
