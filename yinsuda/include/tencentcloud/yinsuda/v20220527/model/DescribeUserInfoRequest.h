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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEUSERINFOREQUEST_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEUSERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * DescribeUserInfo请求参数结构体
                */
                class DescribeUserInfoRequest : public AbstractModel
                {
                public:
                    DescribeUserInfoRequest();
                    ~DescribeUserInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用名称。</p>
                     * @return AppName <p>应用名称。</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>应用名称。</p>
                     * @param _appName <p>应用名称。</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>用户标识。</p>
                     * @return UserId <p>用户标识。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户标识。</p>
                     * @param _userId <p>用户标识。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用名称。</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>用户标识。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_DESCRIBEUSERINFOREQUEST_H_
