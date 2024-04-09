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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CHECKACCOUNTDELETEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CHECKACCOUNTDELETEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CheckAccountDelete请求参数结构体
                */
                class CheckAccountDeleteRequest : public AbstractModel
                {
                public:
                    CheckAccountDeleteRequest();
                    ~CheckAccountDeleteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取成员Uin。
                     * @return MemberUin 成员Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置成员Uin。
                     * @param _memberUin 成员Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                private:

                    /**
                     * 成员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CHECKACCOUNTDELETEREQUEST_H_
