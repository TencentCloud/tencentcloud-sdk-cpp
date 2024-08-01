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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYRESPONSE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDmsSqlHistory返回参数结构体
                */
                class DescribeDmsSqlHistoryResponse : public AbstractModel
                {
                public:
                    DescribeDmsSqlHistoryResponse();
                    ~DescribeDmsSqlHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群所有的查询节点
                     * @return QueryNodeList 集群所有的查询节点
                     * 
                     */
                    std::vector<std::string> GetQueryNodeList() const;

                    /**
                     * 判断参数 QueryNodeList 是否已赋值
                     * @return QueryNodeList 是否已赋值
                     * 
                     */
                    bool QueryNodeListHasBeenSet() const;

                    /**
                     * 获取集群所有的查询状态
                     * @return QueryStatusList 集群所有的查询状态
                     * 
                     */
                    std::vector<std::string> GetQueryStatusList() const;

                    /**
                     * 判断参数 QueryStatusList 是否已赋值
                     * @return QueryStatusList 是否已赋值
                     * 
                     */
                    bool QueryStatusListHasBeenSet() const;

                private:

                    /**
                     * 集群所有的查询节点
                     */
                    std::vector<std::string> m_queryNodeList;
                    bool m_queryNodeListHasBeenSet;

                    /**
                     * 集群所有的查询状态
                     */
                    std::vector<std::string> m_queryStatusList;
                    bool m_queryStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDMSSQLHISTORYRESPONSE_H_
