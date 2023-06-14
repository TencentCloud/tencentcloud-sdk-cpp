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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHUSERPOLICYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHUSERPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AttachUserPolicy请求参数结构体
                */
                class AttachUserPolicyRequest : public AbstractModel
                {
                public:
                    AttachUserPolicyRequest();
                    ~AttachUserPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户Id，和子用户uin相同，需要先使用CreateUser接口创建用户。可以使用DescribeUsers接口查看。
                     * @return UserId 用户Id，和子用户uin相同，需要先使用CreateUser接口创建用户。可以使用DescribeUsers接口查看。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户Id，和子用户uin相同，需要先使用CreateUser接口创建用户。可以使用DescribeUsers接口查看。
                     * @param _userId 用户Id，和子用户uin相同，需要先使用CreateUser接口创建用户。可以使用DescribeUsers接口查看。
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
                     * 获取鉴权策略集合
                     * @return PolicySet 鉴权策略集合
                     * 
                     */
                    std::vector<Policy> GetPolicySet() const;

                    /**
                     * 设置鉴权策略集合
                     * @param _policySet 鉴权策略集合
                     * 
                     */
                    void SetPolicySet(const std::vector<Policy>& _policySet);

                    /**
                     * 判断参数 PolicySet 是否已赋值
                     * @return PolicySet 是否已赋值
                     * 
                     */
                    bool PolicySetHasBeenSet() const;

                private:

                    /**
                     * 用户Id，和子用户uin相同，需要先使用CreateUser接口创建用户。可以使用DescribeUsers接口查看。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 鉴权策略集合
                     */
                    std::vector<Policy> m_policySet;
                    bool m_policySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ATTACHUSERPOLICYREQUEST_H_
