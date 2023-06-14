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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/BlockedIP.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeBlockIPList返回参数结构体
                */
                class DescribeBlockIPListResponse : public AbstractModel
                {
                public:
                    DescribeBlockIPListResponse();
                    ~DescribeBlockIPListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的IP的数量
                     * @return BlockedIPCount 返回的IP的数量
                     * 
                     */
                    uint64_t GetBlockedIPCount() const;

                    /**
                     * 判断参数 BlockedIPCount 是否已赋值
                     * @return BlockedIPCount 是否已赋值
                     * 
                     */
                    bool BlockedIPCountHasBeenSet() const;

                    /**
                     * 获取获取用户真实IP的字段
                     * @return ClientIPField 获取用户真实IP的字段
                     * 
                     */
                    std::string GetClientIPField() const;

                    /**
                     * 判断参数 ClientIPField 是否已赋值
                     * @return ClientIPField 是否已赋值
                     * 
                     */
                    bool ClientIPFieldHasBeenSet() const;

                    /**
                     * 获取加入了12360黑名单的IP列表
                     * @return BlockedIPList 加入了12360黑名单的IP列表
                     * 
                     */
                    std::vector<BlockedIP> GetBlockedIPList() const;

                    /**
                     * 判断参数 BlockedIPList 是否已赋值
                     * @return BlockedIPList 是否已赋值
                     * 
                     */
                    bool BlockedIPListHasBeenSet() const;

                private:

                    /**
                     * 返回的IP的数量
                     */
                    uint64_t m_blockedIPCount;
                    bool m_blockedIPCountHasBeenSet;

                    /**
                     * 获取用户真实IP的字段
                     */
                    std::string m_clientIPField;
                    bool m_clientIPFieldHasBeenSet;

                    /**
                     * 加入了12360黑名单的IP列表
                     */
                    std::vector<BlockedIP> m_blockedIPList;
                    bool m_blockedIPListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEBLOCKIPLISTRESPONSE_H_
