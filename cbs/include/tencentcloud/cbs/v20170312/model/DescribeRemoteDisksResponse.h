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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/RemoteDiskDetail.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeRemoteDisks返回参数结构体
                */
                class DescribeRemoteDisksResponse : public AbstractModel
                {
                public:
                    DescribeRemoteDisksResponse();
                    ~DescribeRemoteDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>单副本SSD硬盘的详细信息列表。</p>
                     * @return RemoteDiskSet <p>单副本SSD硬盘的详细信息列表。</p>
                     * 
                     */
                    std::vector<RemoteDiskDetail> GetRemoteDiskSet() const;

                    /**
                     * 判断参数 RemoteDiskSet 是否已赋值
                     * @return RemoteDiskSet 是否已赋值
                     * 
                     */
                    bool RemoteDiskSetHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的单副本SSD硬盘数量。</p>
                     * @return TotalCount <p>符合条件的单副本SSD硬盘数量。</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>单副本SSD硬盘的详细信息列表。</p>
                     */
                    std::vector<RemoteDiskDetail> m_remoteDiskSet;
                    bool m_remoteDiskSetHasBeenSet;

                    /**
                     * <p>符合条件的单副本SSD硬盘数量。</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEREMOTEDISKSRESPONSE_H_
