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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20181225
        {
            namespace Model
            {
                /**
                * ListOrganizationInvitations请求参数结构体
                */
                class ListOrganizationInvitationsRequest : public AbstractModel
                {
                public:
                    ListOrganizationInvitationsRequest();
                    ~ListOrganizationInvitationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否被邀请。1：被邀请，0：发出的邀请
                     * @return Invited 是否被邀请。1：被邀请，0：发出的邀请
                     * 
                     */
                    uint64_t GetInvited() const;

                    /**
                     * 设置是否被邀请。1：被邀请，0：发出的邀请
                     * @param _invited 是否被邀请。1：被邀请，0：发出的邀请
                     * 
                     */
                    void SetInvited(const uint64_t& _invited);

                    /**
                     * 判断参数 Invited 是否已赋值
                     * @return Invited 是否已赋值
                     * 
                     */
                    bool InvitedHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 获取限制数目
                     * @return Limit 限制数目
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param _limit 限制数目
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 是否被邀请。1：被邀请，0：发出的邀请
                     */
                    uint64_t m_invited;
                    bool m_invitedHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_LISTORGANIZATIONINVITATIONSREQUEST_H_
