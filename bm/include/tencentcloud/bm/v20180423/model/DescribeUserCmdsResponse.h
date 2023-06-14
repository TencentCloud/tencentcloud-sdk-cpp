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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDSRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/UserCmd.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeUserCmds返回参数结构体
                */
                class DescribeUserCmdsResponse : public AbstractModel
                {
                public:
                    DescribeUserCmdsResponse();
                    ~DescribeUserCmdsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数量
                     * @return TotalCount 返回数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取脚本信息列表
                     * @return UserCmds 脚本信息列表
                     * 
                     */
                    std::vector<UserCmd> GetUserCmds() const;

                    /**
                     * 判断参数 UserCmds 是否已赋值
                     * @return UserCmds 是否已赋值
                     * 
                     */
                    bool UserCmdsHasBeenSet() const;

                private:

                    /**
                     * 返回数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 脚本信息列表
                     */
                    std::vector<UserCmd> m_userCmds;
                    bool m_userCmdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEUSERCMDSRESPONSE_H_
