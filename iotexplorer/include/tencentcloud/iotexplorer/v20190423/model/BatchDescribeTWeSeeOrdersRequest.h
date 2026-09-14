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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchDescribeTWeSeeOrdersEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BatchDescribeTWeSeeOrders请求参数结构体
                */
                class BatchDescribeTWeSeeOrdersRequest : public AbstractModel
                {
                public:
                    BatchDescribeTWeSeeOrdersRequest();
                    ~BatchDescribeTWeSeeOrdersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询的订单列表，最多 200 条
                     * @return Entries 待查询的订单列表，最多 200 条
                     * 
                     */
                    std::vector<BatchDescribeTWeSeeOrdersEntry> GetEntries() const;

                    /**
                     * 设置待查询的订单列表，最多 200 条
                     * @param _entries 待查询的订单列表，最多 200 条
                     * 
                     */
                    void SetEntries(const std::vector<BatchDescribeTWeSeeOrdersEntry>& _entries);

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * 待查询的订单列表，最多 200 条
                     */
                    std::vector<BatchDescribeTWeSeeOrdersEntry> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHDESCRIBETWESEEORDERSREQUEST_H_
