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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/NotebookDetail.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeNotebook返回参数结构体
                */
                class DescribeNotebookResponse : public AbstractModel
                {
                public:
                    DescribeNotebookResponse();
                    ~DescribeNotebookResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取详情
                     * @return NotebookDetail 详情
                     * 
                     */
                    NotebookDetail GetNotebookDetail() const;

                    /**
                     * 判断参数 NotebookDetail 是否已赋值
                     * @return NotebookDetail 是否已赋值
                     * 
                     */
                    bool NotebookDetailHasBeenSet() const;

                private:

                    /**
                     * 详情
                     */
                    NotebookDetail m_notebookDetail;
                    bool m_notebookDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKRESPONSE_H_
