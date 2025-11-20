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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_CREATESYNCUSERTASKREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_CREATESYNCUSERTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateSyncUserTask请求参数结构体
                */
                class CreateSyncUserTaskRequest : public AbstractModel
                {
                public:
                    CreateSyncUserTaskRequest();
                    ~CreateSyncUserTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步用户类型, 1-同步ioa用户
                     * @return UserKind 同步用户类型, 1-同步ioa用户
                     * 
                     */
                    uint64_t GetUserKind() const;

                    /**
                     * 设置同步用户类型, 1-同步ioa用户
                     * @param _userKind 同步用户类型, 1-同步ioa用户
                     * 
                     */
                    void SetUserKind(const uint64_t& _userKind);

                    /**
                     * 判断参数 UserKind 是否已赋值
                     * @return UserKind 是否已赋值
                     * 
                     */
                    bool UserKindHasBeenSet() const;

                private:

                    /**
                     * 同步用户类型, 1-同步ioa用户
                     */
                    uint64_t m_userKind;
                    bool m_userKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_CREATESYNCUSERTASKREQUEST_H_
