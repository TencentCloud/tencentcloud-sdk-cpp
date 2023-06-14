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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/NotebookLifecycleScriptsSummary.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * DescribeNotebookLifecycleScripts返回参数结构体
                */
                class DescribeNotebookLifecycleScriptsResponse : public AbstractModel
                {
                public:
                    DescribeNotebookLifecycleScriptsResponse();
                    ~DescribeNotebookLifecycleScriptsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Notebook生命周期脚本列表
                     * @return NotebookLifecycleScriptsSet Notebook生命周期脚本列表
                     * 
                     */
                    std::vector<NotebookLifecycleScriptsSummary> GetNotebookLifecycleScriptsSet() const;

                    /**
                     * 判断参数 NotebookLifecycleScriptsSet 是否已赋值
                     * @return NotebookLifecycleScriptsSet 是否已赋值
                     * 
                     */
                    bool NotebookLifecycleScriptsSetHasBeenSet() const;

                    /**
                     * 获取Notebook生命周期脚本总数量
                     * @return TotalCount Notebook生命周期脚本总数量
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
                     * Notebook生命周期脚本列表
                     */
                    std::vector<NotebookLifecycleScriptsSummary> m_notebookLifecycleScriptsSet;
                    bool m_notebookLifecycleScriptsSetHasBeenSet;

                    /**
                     * Notebook生命周期脚本总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_DESCRIBENOTEBOOKLIFECYCLESCRIPTSRESPONSE_H_
