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
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取被授权目标，个人或团队。
                     * @return Authorizee 被授权目标，个人或团队。
                     * 
                     */
                    Entity GetAuthorizee() const;

                    /**
                     * 设置被授权目标，个人或团队。
                     * @param _authorizee 被授权目标，个人或团队。
                     * 
                     */
                    void SetAuthorizee(const Entity& _authorizee);

                    /**
                     * 判断参数 Authorizee 是否已赋值
                     * @return Authorizee 是否已赋值
                     * 
                     */
                    bool AuthorizeeHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询任意个人或者团队的共享空间。如果指定操作者，则操作者必须本人或者团队成员。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询任意个人或者团队的共享空间。如果指定操作者，则操作者必须本人或者团队成员。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询任意个人或者团队的共享空间。如果指定操作者，则操作者必须本人或者团队成员。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询任意个人或者团队的共享空间。如果指定操作者，则操作者必须本人或者团队成员。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 被授权目标，个人或团队。
                     */
                    Entity m_authorizee;
                    bool m_authorizeeHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以查询任意个人或者团队的共享空间。如果指定操作者，则操作者必须本人或者团队成员。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACEREQUEST_H_
