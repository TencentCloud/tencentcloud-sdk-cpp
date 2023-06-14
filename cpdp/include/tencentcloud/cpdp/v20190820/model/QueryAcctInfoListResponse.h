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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAcctInfoList返回参数结构体
                */
                class QueryAcctInfoListResponse : public AbstractModel
                {
                public:
                    QueryAcctInfoListResponse();
                    ~QueryAcctInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次交易返回查询结果记录数
                     * @return ResultCount 本次交易返回查询结果记录数
                     * 
                     */
                    int64_t GetResultCount() const;

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     * 
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取符合业务查询条件的记录总数
                     * @return TotalCount 符合业务查询条件的记录总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询结果项 [object,object]
                     * @return QueryAcctItems 查询结果项 [object,object]
                     * 
                     */
                    std::vector<QueryAcctItem> GetQueryAcctItems() const;

                    /**
                     * 判断参数 QueryAcctItems 是否已赋值
                     * @return QueryAcctItems 是否已赋值
                     * 
                     */
                    bool QueryAcctItemsHasBeenSet() const;

                private:

                    /**
                     * 本次交易返回查询结果记录数
                     */
                    int64_t m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * 符合业务查询条件的记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询结果项 [object,object]
                     */
                    std::vector<QueryAcctItem> m_queryAcctItems;
                    bool m_queryAcctItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTRESPONSE_H_
