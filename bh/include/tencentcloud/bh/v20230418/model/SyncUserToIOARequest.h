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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SYNCUSERTOIOAREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SYNCUSERTOIOAREQUEST_H_

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
                * SyncUserToIOA请求参数结构体
                */
                class SyncUserToIOARequest : public AbstractModel
                {
                public:
                    SyncUserToIOARequest();
                    ~SyncUserToIOARequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要同步到ioa的本地用户的id集合
                     * @return UserIdSet 需要同步到ioa的本地用户的id集合
                     * 
                     */
                    std::vector<uint64_t> GetUserIdSet() const;

                    /**
                     * 设置需要同步到ioa的本地用户的id集合
                     * @param _userIdSet 需要同步到ioa的本地用户的id集合
                     * 
                     */
                    void SetUserIdSet(const std::vector<uint64_t>& _userIdSet);

                    /**
                     * 判断参数 UserIdSet 是否已赋值
                     * @return UserIdSet 是否已赋值
                     * 
                     */
                    bool UserIdSetHasBeenSet() const;

                private:

                    /**
                     * 需要同步到ioa的本地用户的id集合
                     */
                    std::vector<uint64_t> m_userIdSet;
                    bool m_userIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SYNCUSERTOIOAREQUEST_H_
