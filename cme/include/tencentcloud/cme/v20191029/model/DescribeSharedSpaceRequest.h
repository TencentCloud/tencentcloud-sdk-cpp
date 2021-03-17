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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACEREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeSharedSpace请求参数结构体
                */
                class DescribeSharedSpaceRequest : public AbstractModel
                {
                public:
                    DescribeSharedSpaceRequest();
                    ~DescribeSharedSpaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取被授权目标,，个人或团队。
                     * @return Authorizee 被授权目标,，个人或团队。
                     */
                    Entity GetAuthorizee() const;

                    /**
                     * 设置被授权目标,，个人或团队。
                     * @param Authorizee 被授权目标,，个人或团队。
                     */
                    void SetAuthorizee(const Entity& _authorizee);

                    /**
                     * 判断参数 Authorizee 是否已赋值
                     * @return Authorizee 是否已赋值
                     */
                    bool AuthorizeeHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 被授权目标,，个人或团队。
                     */
                    Entity m_authorizee;
                    bool m_authorizeeHasBeenSet;

                    /**
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACEREQUEST_H_
