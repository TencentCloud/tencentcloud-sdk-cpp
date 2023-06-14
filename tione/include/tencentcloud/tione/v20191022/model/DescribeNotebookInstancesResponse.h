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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/NotebookInstanceSummary.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookInstances返回参数结构体
                */
                class DescribeNotebookInstancesResponse : public AbstractModel
                {
                public:
                    DescribeNotebookInstancesResponse();
                    ~DescribeNotebookInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook实例列表
                     * @return NotebookInstanceSet Notebook实例列表
                     * 
                     */
                    std::vector<NotebookInstanceSummary> GetNotebookInstanceSet() const;

                    /**
                     * 判断参数 NotebookInstanceSet 是否已赋值
                     * @return NotebookInstanceSet 是否已赋值
                     * 
                     */
                    bool NotebookInstanceSetHasBeenSet() const;

                    /**
                     * 获取Notebook实例总数目
                     * @return TotalCount Notebook实例总数目
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
                     * Notebook实例列表
                     */
                    std::vector<NotebookInstanceSummary> m_notebookInstanceSet;
                    bool m_notebookInstanceSetHasBeenSet;

                    /**
                     * Notebook实例总数目
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKINSTANCESRESPONSE_H_
