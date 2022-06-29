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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_CREATESCANUSERREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_CREATESCANUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * CreateScanUser请求参数结构体
                */
                class CreateScanUserRequest : public AbstractModel
                {
                public:
                    CreateScanUserRequest();
                    ~CreateScanUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，登录控制台 - 服务管理创建应用得到的AppID
                     * @return BizId 应用ID，登录控制台 - 服务管理创建应用得到的AppID
                     */
                    uint64_t GetBizId() const;

                    /**
                     * 设置应用ID，登录控制台 - 服务管理创建应用得到的AppID
                     * @param BizId 应用ID，登录控制台 - 服务管理创建应用得到的AppID
                     */
                    void SetBizId(const uint64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取需要新增送检的用户号。示例：1234
                     * @return UserId 需要新增送检的用户号。示例：1234
                     */
                    uint64_t GetUserId() const;

                    /**
                     * 设置需要新增送检的用户号。示例：1234
                     * @param UserId 需要新增送检的用户号。示例：1234
                     */
                    void SetUserId(const uint64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * 应用ID，登录控制台 - 服务管理创建应用得到的AppID
                     */
                    uint64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * 需要新增送检的用户号。示例：1234
                     */
                    uint64_t m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_CREATESCANUSERREQUEST_H_
