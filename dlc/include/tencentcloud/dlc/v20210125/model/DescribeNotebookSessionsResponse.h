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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/NotebookSessions.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNotebookSessions返回参数结构体
                */
                class DescribeNotebookSessionsResponse : public AbstractModel
                {
                public:
                    DescribeNotebookSessionsResponse();
                    ~DescribeNotebookSessionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取session总数量
                     * @return TotalElements session总数量
                     * 
                     */
                    int64_t GetTotalElements() const;

                    /**
                     * 判断参数 TotalElements 是否已赋值
                     * @return TotalElements 是否已赋值
                     * 
                     */
                    bool TotalElementsHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPages 总页数
                     * 
                     */
                    int64_t GetTotalPages() const;

                    /**
                     * 判断参数 TotalPages 是否已赋值
                     * @return TotalPages 是否已赋值
                     * 
                     */
                    bool TotalPagesHasBeenSet() const;

                    /**
                     * 获取当前页码
                     * @return Page 当前页码
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取当前页数量
                     * @return Size 当前页数量
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取session列表信息
                     * @return Sessions session列表信息
                     * 
                     */
                    std::vector<NotebookSessions> GetSessions() const;

                    /**
                     * 判断参数 Sessions 是否已赋值
                     * @return Sessions 是否已赋值
                     * 
                     */
                    bool SessionsHasBeenSet() const;

                private:

                    /**
                     * session总数量
                     */
                    int64_t m_totalElements;
                    bool m_totalElementsHasBeenSet;

                    /**
                     * 总页数
                     */
                    int64_t m_totalPages;
                    bool m_totalPagesHasBeenSet;

                    /**
                     * 当前页码
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 当前页数量
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * session列表信息
                     */
                    std::vector<NotebookSessions> m_sessions;
                    bool m_sessionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSRESPONSE_H_
