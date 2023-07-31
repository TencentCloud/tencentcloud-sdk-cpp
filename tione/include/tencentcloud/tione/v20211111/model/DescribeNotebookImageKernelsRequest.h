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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGEKERNELSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGEKERNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeNotebookImageKernels请求参数结构体
                */
                class DescribeNotebookImageKernelsRequest : public AbstractModel
                {
                public:
                    DescribeNotebookImageKernelsRequest();
                    ~DescribeNotebookImageKernelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取notebook id
                     * @return NotebookId notebook id
                     * 
                     */
                    std::string GetNotebookId() const;

                    /**
                     * 设置notebook id
                     * @param _notebookId notebook id
                     * 
                     */
                    void SetNotebookId(const std::string& _notebookId);

                    /**
                     * 判断参数 NotebookId 是否已赋值
                     * @return NotebookId 是否已赋值
                     * 
                     */
                    bool NotebookIdHasBeenSet() const;

                private:

                    /**
                     * notebook id
                     */
                    std::string m_notebookId;
                    bool m_notebookIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBENOTEBOOKIMAGEKERNELSREQUEST_H_
