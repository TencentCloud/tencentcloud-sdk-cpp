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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUSERTOKENREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUSERTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * CreateUserToken请求参数结构体
                */
                class CreateUserTokenRequest : public AbstractModel
                {
                public:
                    CreateUserTokenRequest();
                    ~CreateUserTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取token过期时间，有效值是1~300秒
                     * @return Second token过期时间，有效值是1~300秒
                     * 
                     */
                    int64_t GetSecond() const;

                    /**
                     * 设置token过期时间，有效值是1~300秒
                     * @param _second token过期时间，有效值是1~300秒
                     * 
                     */
                    void SetSecond(const int64_t& _second);

                    /**
                     * 判断参数 Second 是否已赋值
                     * @return Second 是否已赋值
                     * 
                     */
                    bool SecondHasBeenSet() const;

                private:

                    /**
                     * token过期时间，有效值是1~300秒
                     */
                    int64_t m_second;
                    bool m_secondHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_CREATEUSERTOKENREQUEST_H_
