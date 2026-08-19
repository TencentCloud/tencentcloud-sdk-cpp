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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMSHARDCONFIGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMSHARDCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCspmShardConfig返回参数结构体
                */
                class DescribeCspmShardConfigResponse : public AbstractModel
                {
                public:
                    DescribeCspmShardConfigResponse();
                    ~DescribeCspmShardConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>共享配额来源appid</p>
                     * @return ShardFromAppID <p>共享配额来源appid</p>
                     * 
                     */
                    uint64_t GetShardFromAppID() const;

                    /**
                     * 判断参数 ShardFromAppID 是否已赋值
                     * @return ShardFromAppID 是否已赋值
                     * 
                     */
                    bool ShardFromAppIDHasBeenSet() const;

                    /**
                     * 获取<p>自动共享开关状态</p>
                     * @return AutoShardStatus <p>自动共享开关状态</p>
                     * 
                     */
                    uint64_t GetAutoShardStatus() const;

                    /**
                     * 判断参数 AutoShardStatus 是否已赋值
                     * @return AutoShardStatus 是否已赋值
                     * 
                     */
                    bool AutoShardStatusHasBeenSet() const;

                    /**
                     * 获取<p>已被共享配额的目标appid列表</p>
                     * @return ShardAppIDs <p>已被共享配额的目标appid列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetShardAppIDs() const;

                    /**
                     * 判断参数 ShardAppIDs 是否已赋值
                     * @return ShardAppIDs 是否已赋值
                     * 
                     */
                    bool ShardAppIDsHasBeenSet() const;

                private:

                    /**
                     * <p>共享配额来源appid</p>
                     */
                    uint64_t m_shardFromAppID;
                    bool m_shardFromAppIDHasBeenSet;

                    /**
                     * <p>自动共享开关状态</p>
                     */
                    uint64_t m_autoShardStatus;
                    bool m_autoShardStatusHasBeenSet;

                    /**
                     * <p>已被共享配额的目标appid列表</p>
                     */
                    std::vector<uint64_t> m_shardAppIDs;
                    bool m_shardAppIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECSPMSHARDCONFIGRESPONSE_H_
