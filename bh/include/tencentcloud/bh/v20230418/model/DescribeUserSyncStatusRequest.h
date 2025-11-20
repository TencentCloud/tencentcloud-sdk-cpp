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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSYNCSTATUSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSYNCSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeUserSyncStatus请求参数结构体
                */
                class DescribeUserSyncStatusRequest : public AbstractModel
                {
                public:
                    DescribeUserSyncStatusRequest();
                    ~DescribeUserSyncStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取获取用户同步状态， 1-获取ioa用户同步状态
                     * @return UserKind 获取用户同步状态， 1-获取ioa用户同步状态
                     * 
                     */
                    uint64_t GetUserKind() const;

                    /**
                     * 设置获取用户同步状态， 1-获取ioa用户同步状态
                     * @param _userKind 获取用户同步状态， 1-获取ioa用户同步状态
                     * 
                     */
                    void SetUserKind(const uint64_t& _userKind);

                    /**
                     * 判断参数 UserKind 是否已赋值
                     * @return UserKind 是否已赋值
                     * 
                     */
                    bool UserKindHasBeenSet() const;

                private:

                    /**
                     * 获取用户同步状态， 1-获取ioa用户同步状态
                     */
                    uint64_t m_userKind;
                    bool m_userKindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEUSERSYNCSTATUSREQUEST_H_
