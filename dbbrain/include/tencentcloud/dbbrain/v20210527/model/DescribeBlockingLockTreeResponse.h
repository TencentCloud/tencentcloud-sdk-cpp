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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/BlockingChainTree.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeBlockingLockTree返回参数结构体
                */
                class DescribeBlockingLockTreeResponse : public AbstractModel
                {
                public:
                    DescribeBlockingLockTreeResponse();
                    ~DescribeBlockingLockTreeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>阻塞树列表（同一 MonitorLoop 下可能存在多棵独立阻塞树，按链路影响时长倒序）。若按 BlockingTime 定位时未找到附近 MonitorLoop，返回空列表。</p>
                     * @return Items <p>阻塞树列表（同一 MonitorLoop 下可能存在多棵独立阻塞树，按链路影响时长倒序）。若按 BlockingTime 定位时未找到附近 MonitorLoop，返回空列表。</p>
                     * 
                     */
                    std::vector<BlockingChainTree> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * <p>阻塞树列表（同一 MonitorLoop 下可能存在多棵独立阻塞树，按链路影响时长倒序）。若按 BlockingTime 定位时未找到附近 MonitorLoop，返回空列表。</p>
                     */
                    std::vector<BlockingChainTree> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEBLOCKINGLOCKTREERESPONSE_H_
