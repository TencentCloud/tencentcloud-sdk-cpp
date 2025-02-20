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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_MUTEDACCOUNTLIST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_MUTEDACCOUNTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 禁言用户信息数组，内容包括被禁言的成员 ID，及其被禁言到的时间（使用 UTC 时间，即世界协调时间）
                */
                class MutedAccountList : public AbstractModel
                {
                public:
                    MutedAccountList();
                    ~MutedAccountList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户 ID
                     * @return MemberAccount 用户 ID
                     * 
                     */
                    std::string GetMemberAccount() const;

                    /**
                     * 设置用户 ID
                     * @param _memberAccount 用户 ID
                     * 
                     */
                    void SetMemberAccount(const std::string& _memberAccount);

                    /**
                     * 判断参数 MemberAccount 是否已赋值
                     * @return MemberAccount 是否已赋值
                     * 
                     */
                    bool MemberAccountHasBeenSet() const;

                    /**
                     * 获取禁言到的时间（使用 UTC 时间，即世界协调时间）
                     * @return MutedUntil 禁言到的时间（使用 UTC 时间，即世界协调时间）
                     * 
                     */
                    uint64_t GetMutedUntil() const;

                    /**
                     * 设置禁言到的时间（使用 UTC 时间，即世界协调时间）
                     * @param _mutedUntil 禁言到的时间（使用 UTC 时间，即世界协调时间）
                     * 
                     */
                    void SetMutedUntil(const uint64_t& _mutedUntil);

                    /**
                     * 判断参数 MutedUntil 是否已赋值
                     * @return MutedUntil 是否已赋值
                     * 
                     */
                    bool MutedUntilHasBeenSet() const;

                private:

                    /**
                     * 用户 ID
                     */
                    std::string m_memberAccount;
                    bool m_memberAccountHasBeenSet;

                    /**
                     * 禁言到的时间（使用 UTC 时间，即世界协调时间）
                     */
                    uint64_t m_mutedUntil;
                    bool m_mutedUntilHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_MUTEDACCOUNTLIST_H_
