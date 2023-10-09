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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERTYPEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeUserType请求参数结构体
                */
                class DescribeUserTypeRequest : public AbstractModel
                {
                public:
                    DescribeUserTypeRequest();
                    ~DescribeUserTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户ID（UIN），如果不填默认为调用方的子UIN
                     * @return UserId 用户ID（UIN），如果不填默认为调用方的子UIN
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID（UIN），如果不填默认为调用方的子UIN
                     * @param _userId 用户ID（UIN），如果不填默认为调用方的子UIN
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
                     * 用户ID（UIN），如果不填默认为调用方的子UIN
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEUSERTYPEREQUEST_H_
