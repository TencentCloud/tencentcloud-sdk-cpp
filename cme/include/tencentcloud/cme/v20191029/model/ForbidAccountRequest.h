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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_FORBIDACCOUNTREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_FORBIDACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * ForbidAccount请求参数结构体
                */
                class ForbidAccountRequest : public AbstractModel
                {
                public:
                    ForbidAccountRequest();
                    ~ForbidAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>平台 Id，指定访问的平台。关于平台概念，请参见文档 <a href="https://cloud.tencent.com/document/product/1156/43767">平台</a>。</p>
                     * @return Platform <p>平台 Id，指定访问的平台。关于平台概念，请参见文档 <a href="https://cloud.tencent.com/document/product/1156/43767">平台</a>。</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>平台 Id，指定访问的平台。关于平台概念，请参见文档 <a href="https://cloud.tencent.com/document/product/1156/43767">平台</a>。</p>
                     * @param _platform <p>平台 Id，指定访问的平台。关于平台概念，请参见文档 <a href="https://cloud.tencent.com/document/product/1156/43767">平台</a>。</p>
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
                     * 获取<p>用户标识 。</p>
                     * @return UserId <p>用户标识 。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户标识 。</p>
                     * @param _userId <p>用户标识 。</p>
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
                     * 获取<p>操作者。如不填，默认为 <code>cmeid_system</code>，表示平台管理员操作，可以操作任意账户。如果指定操作者，则操作者必须为账户所有者。</p>
                     * @return Operator <p>操作者。如不填，默认为 <code>cmeid_system</code>，表示平台管理员操作，可以操作任意账户。如果指定操作者，则操作者必须为账户所有者。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者。如不填，默认为 <code>cmeid_system</code>，表示平台管理员操作，可以操作任意账户。如果指定操作者，则操作者必须为账户所有者。</p>
                     * @param _operator <p>操作者。如不填，默认为 <code>cmeid_system</code>，表示平台管理员操作，可以操作任意账户。如果指定操作者，则操作者必须为账户所有者。</p>
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
                     * <p>平台 Id，指定访问的平台。关于平台概念，请参见文档 <a href="https://cloud.tencent.com/document/product/1156/43767">平台</a>。</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>用户标识 。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>操作者。如不填，默认为 <code>cmeid_system</code>，表示平台管理员操作，可以操作任意账户。如果指定操作者，则操作者必须为账户所有者。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_FORBIDACCOUNTREQUEST_H_
