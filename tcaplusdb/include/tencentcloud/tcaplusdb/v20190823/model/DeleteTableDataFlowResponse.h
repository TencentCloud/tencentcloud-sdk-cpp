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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETETABLEDATAFLOWRESPONSE_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETETABLEDATAFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TableResultNew.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * DeleteTableDataFlow返回参数结构体
                */
                class DeleteTableDataFlowResponse : public AbstractModel
                {
                public:
                    DeleteTableDataFlowResponse();
                    ~DeleteTableDataFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除表格分布式索引结果数量
                     * @return TotalCount 删除表格分布式索引结果数量
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
                     * 获取删除表格分布式索引结果列表
                     * @return TableResults 删除表格分布式索引结果列表
                     * 
                     */
                    std::vector<TableResultNew> GetTableResults() const;

                    /**
                     * 判断参数 TableResults 是否已赋值
                     * @return TableResults 是否已赋值
                     * 
                     */
                    bool TableResultsHasBeenSet() const;

                private:

                    /**
                     * 删除表格分布式索引结果数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 删除表格分布式索引结果列表
                     */
                    std::vector<TableResultNew> m_tableResults;
                    bool m_tableResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_DELETETABLEDATAFLOWRESPONSE_H_
