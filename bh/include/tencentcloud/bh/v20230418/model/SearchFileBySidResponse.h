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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/SearchFileBySidResult.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchFileBySid返回参数结构体
                */
                class SearchFileBySidResponse : public AbstractModel
                {
                public:
                    SearchFileBySidResponse();
                    ~SearchFileBySidResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录数
                     * @return TotalCount 记录数
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
                     * 获取某会话的文件操作列表
                     * @return SearchFileBySidResult 某会话的文件操作列表
                     * 
                     */
                    std::vector<SearchFileBySidResult> GetSearchFileBySidResult() const;

                    /**
                     * 判断参数 SearchFileBySidResult 是否已赋值
                     * @return SearchFileBySidResult 是否已赋值
                     * 
                     */
                    bool SearchFileBySidResultHasBeenSet() const;

                private:

                    /**
                     * 记录数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 某会话的文件操作列表
                     */
                    std::vector<SearchFileBySidResult> m_searchFileBySidResult;
                    bool m_searchFileBySidResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHFILEBYSIDRESPONSE_H_
