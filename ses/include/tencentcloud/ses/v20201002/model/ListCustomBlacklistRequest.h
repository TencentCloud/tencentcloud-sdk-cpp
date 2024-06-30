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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListCustomBlacklist请求参数结构体
                */
                class ListCustomBlacklistRequest : public AbstractModel
                {
                public:
                    ListCustomBlacklistRequest();
                    ~ListCustomBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，整型，从0开始
                     * @return Offset 偏移量，整型，从0开始
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，整型，从0开始
                     * @param _offset 偏移量，整型，从0开始
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目，整型,不超过100
                     * @return Limit 限制数目，整型,不超过100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目，整型,不超过100
                     * @param _limit 限制数目，整型,不超过100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取筛选黑名单的状态，0:已过期，1:生效中, 2:全部
                     * @return Status 筛选黑名单的状态，0:已过期，1:生效中, 2:全部
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置筛选黑名单的状态，0:已过期，1:生效中, 2:全部
                     * @param _status 筛选黑名单的状态，0:已过期，1:生效中, 2:全部
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取黑名单中的邮箱地址
                     * @return Email 黑名单中的邮箱地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置黑名单中的邮箱地址
                     * @param _email 黑名单中的邮箱地址
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                private:

                    /**
                     * 偏移量，整型，从0开始
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目，整型,不超过100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 筛选黑名单的状态，0:已过期，1:生效中, 2:全部
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 黑名单中的邮箱地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTCUSTOMBLACKLISTREQUEST_H_
