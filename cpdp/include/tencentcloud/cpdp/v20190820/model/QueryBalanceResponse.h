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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBALANCERESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBALANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryItem.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryBalance返回参数结构体
                */
                class QueryBalanceResponse : public AbstractModel
                {
                public:
                    QueryBalanceResponse();
                    ~QueryBalanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本次交易返回查询结果记录数
                     * @return ResultCount 本次交易返回查询结果记录数
                     * 
                     */
                    std::string GetResultCount() const;

                    /**
                     * 判断参数 ResultCount 是否已赋值
                     * @return ResultCount 是否已赋值
                     * 
                     */
                    bool ResultCountHasBeenSet() const;

                    /**
                     * 获取起始记录号
                     * @return StartRecordOffset 起始记录号
                     * 
                     */
                    std::string GetStartRecordOffset() const;

                    /**
                     * 判断参数 StartRecordOffset 是否已赋值
                     * @return StartRecordOffset 是否已赋值
                     * 
                     */
                    bool StartRecordOffsetHasBeenSet() const;

                    /**
                     * 获取结束标志
                     * @return EndFlag 结束标志
                     * 
                     */
                    std::string GetEndFlag() const;

                    /**
                     * 判断参数 EndFlag 是否已赋值
                     * @return EndFlag 是否已赋值
                     * 
                     */
                    bool EndFlagHasBeenSet() const;

                    /**
                     * 获取符合业务查询条件的记录总数
                     * @return TotalCount 符合业务查询条件的记录总数
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询结果项
                     * @return QueryItems 查询结果项
                     * 
                     */
                    std::vector<QueryItem> GetQueryItems() const;

                    /**
                     * 判断参数 QueryItems 是否已赋值
                     * @return QueryItems 是否已赋值
                     * 
                     */
                    bool QueryItemsHasBeenSet() const;

                private:

                    /**
                     * 本次交易返回查询结果记录数
                     */
                    std::string m_resultCount;
                    bool m_resultCountHasBeenSet;

                    /**
                     * 起始记录号
                     */
                    std::string m_startRecordOffset;
                    bool m_startRecordOffsetHasBeenSet;

                    /**
                     * 结束标志
                     */
                    std::string m_endFlag;
                    bool m_endFlagHasBeenSet;

                    /**
                     * 符合业务查询条件的记录总数
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询结果项
                     */
                    std::vector<QueryItem> m_queryItems;
                    bool m_queryItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYBALANCERESPONSE_H_
