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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERUSERSTATUSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERUSERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeCasterUserStatus返回参数结构体
                */
                class DescribeCasterUserStatusResponse : public AbstractModel
                {
                public:
                    DescribeCasterUserStatusResponse();
                    ~DescribeCasterUserStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0: 未开通导播台
1:开通了导播台，且处于正常状态
2:开通了导播台，但处于欠费状态
3:开通了导播台，但处于封禁状态
                     * @return UserStatus 0: 未开通导播台
1:开通了导播台，且处于正常状态
2:开通了导播台，但处于欠费状态
3:开通了导播台，但处于封禁状态
                     * 
                     */
                    int64_t GetUserStatus() const;

                    /**
                     * 判断参数 UserStatus 是否已赋值
                     * @return UserStatus 是否已赋值
                     * 
                     */
                    bool UserStatusHasBeenSet() const;

                private:

                    /**
                     * 0: 未开通导播台
1:开通了导播台，且处于正常状态
2:开通了导播台，但处于欠费状态
3:开通了导播台，但处于封禁状态
                     */
                    int64_t m_userStatus;
                    bool m_userStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERUSERSTATUSRESPONSE_H_
