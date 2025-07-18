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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NotebookSessionStatementInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateNotebookSessionStatement返回参数结构体
                */
                class CreateNotebookSessionStatementResponse : public AbstractModel
                {
                public:
                    CreateNotebookSessionStatementResponse();
                    ~CreateNotebookSessionStatementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Session Statement详情
                     * @return NotebookSessionStatement Session Statement详情
                     * 
                     */
                    NotebookSessionStatementInfo GetNotebookSessionStatement() const;

                    /**
                     * 判断参数 NotebookSessionStatement 是否已赋值
                     * @return NotebookSessionStatement 是否已赋值
                     * 
                     */
                    bool NotebookSessionStatementHasBeenSet() const;

                private:

                    /**
                     * Session Statement详情
                     */
                    NotebookSessionStatementInfo m_notebookSessionStatement;
                    bool m_notebookSessionStatementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATENOTEBOOKSESSIONSTATEMENTRESPONSE_H_
