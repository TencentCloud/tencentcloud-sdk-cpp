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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDISKSRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Disk.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeDisks返回参数结构体
                */
                class DescribeDisksResponse : public AbstractModel
                {
                public:
                    DescribeDisksResponse();
                    ~DescribeDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的云硬盘数量。
                     * @return TotalCount 符合条件的云硬盘数量。
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
                     * 获取云硬盘的详细信息列表。
                     * @return DiskSet 云硬盘的详细信息列表。
                     * 
                     */
                    std::vector<Disk> GetDiskSet() const;

                    /**
                     * 判断参数 DiskSet 是否已赋值
                     * @return DiskSet 是否已赋值
                     * 
                     */
                    bool DiskSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的云硬盘数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 云硬盘的详细信息列表。
                     */
                    std::vector<Disk> m_diskSet;
                    bool m_diskSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEDISKSRESPONSE_H_
