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

#ifndef TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERREQUEST_H_

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
                * GetOrganizationMember请求参数结构体
                */
                class GetOrganizationMemberRequest : public AbstractModel
                {
                public:
                    GetOrganizationMemberRequest();
                    ~GetOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取组织成员UIN
                     * @return MemberUin 组织成员UIN
                     * 
                     */
                    uint64_t GetMemberUin() const;

                    /**
                     * 设置组织成员UIN
                     * @param _memberUin 组织成员UIN
                     * 
                     */
                    void SetMemberUin(const uint64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * 组织成员UIN
                     */
                    uint64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20181225_MODEL_GETORGANIZATIONMEMBERREQUEST_H_
