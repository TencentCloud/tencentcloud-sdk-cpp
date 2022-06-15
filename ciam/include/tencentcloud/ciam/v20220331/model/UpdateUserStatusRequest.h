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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERSTATUSREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * UpdateUserStatus请求参数结构体
                */
                class UpdateUserStatusRequest : public AbstractModel
                {
                public:
                    UpdateUserStatusRequest();
                    ~UpdateUserStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param UserStoreId 用户目录ID
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param UserId 用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取NORMAL（正常）,LOCK（锁定）,FREEZE（冻结）,请传英文大写字母
                     * @return Status NORMAL（正常）,LOCK（锁定）,FREEZE（冻结）,请传英文大写字母
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置NORMAL（正常）,LOCK（锁定）,FREEZE（冻结）,请传英文大写字母
                     * @param Status NORMAL（正常）,LOCK（锁定）,FREEZE（冻结）,请传英文大写字母
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * NORMAL（正常）,LOCK（锁定）,FREEZE（冻结）,请传英文大写字母
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_UPDATEUSERSTATUSREQUEST_H_
