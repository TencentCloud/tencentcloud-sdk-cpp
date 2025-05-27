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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/HistoryJob.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCpuExpandHistory返回参数结构体
                */
                class DescribeCpuExpandHistoryResponse : public AbstractModel
                {
                public:
                    DescribeCpuExpandHistoryResponse();
                    ~DescribeCpuExpandHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足查询要求的扩容历史
                     * @return Items 满足查询要求的扩容历史
                     * 
                     */
                    std::vector<HistoryJob> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总数出参
                     * @return TotalCount 总数出参
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 满足查询要求的扩容历史
                     */
                    std::vector<HistoryJob> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总数出参
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYRESPONSE_H_
