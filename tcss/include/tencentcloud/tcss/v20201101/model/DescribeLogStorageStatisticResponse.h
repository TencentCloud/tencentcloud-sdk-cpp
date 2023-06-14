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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeLogStorageStatistic返回参数结构体
                */
                class DescribeLogStorageStatisticResponse : public AbstractModel
                {
                public:
                    DescribeLogStorageStatisticResponse();
                    ~DescribeLogStorageStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总容量（单位：B）
                     * @return TotalSize 总容量（单位：B）
                     * 
                     */
                    uint64_t GetTotalSize() const;

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取已使用容量（单位：B）
                     * @return UsedSize 已使用容量（单位：B）
                     * 
                     */
                    uint64_t GetUsedSize() const;

                    /**
                     * 判断参数 UsedSize 是否已赋值
                     * @return UsedSize 是否已赋值
                     * 
                     */
                    bool UsedSizeHasBeenSet() const;

                private:

                    /**
                     * 总容量（单位：B）
                     */
                    uint64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 已使用容量（单位：B）
                     */
                    uint64_t m_usedSize;
                    bool m_usedSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBELOGSTORAGESTATISTICRESPONSE_H_
