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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NotebookSessionStatementBatchInformation.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNotebookSessionStatements返回参数结构体
                */
                class DescribeNotebookSessionStatementsResponse : public AbstractModel
                {
                public:
                    DescribeNotebookSessionStatementsResponse();
                    ~DescribeNotebookSessionStatementsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Session Statement详情
                     * @return NotebookSessionStatements Session Statement详情
                     * 
                     */
                    NotebookSessionStatementBatchInformation GetNotebookSessionStatements() const;

                    /**
                     * 判断参数 NotebookSessionStatements 是否已赋值
                     * @return NotebookSessionStatements 是否已赋值
                     * 
                     */
                    bool NotebookSessionStatementsHasBeenSet() const;

                private:

                    /**
                     * Session Statement详情
                     */
                    NotebookSessionStatementBatchInformation m_notebookSessionStatements;
                    bool m_notebookSessionStatementsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSTATEMENTSRESPONSE_H_
