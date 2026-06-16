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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESRESPONSE_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbdc/v20201029/model/DBCustomNode.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * DescribeDBCustomNodes返回参数结构体
                */
                class DescribeDBCustomNodesResponse : public AbstractModel
                {
                public:
                    DescribeDBCustomNodesResponse();
                    ~DescribeDBCustomNodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>当前账号下拥有的DB Custom 节点总数</p>
                     * @return TotalCount <p>当前账号下拥有的DB Custom 节点总数</p>
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
                     * 获取<p>当前账号下拥有的DB Custom 节点列表信息</p>
                     * @return NodeSet <p>当前账号下拥有的DB Custom 节点列表信息</p>
                     * 
                     */
                    std::vector<DBCustomNode> GetNodeSet() const;

                    /**
                     * 判断参数 NodeSet 是否已赋值
                     * @return NodeSet 是否已赋值
                     * 
                     */
                    bool NodeSetHasBeenSet() const;

                private:

                    /**
                     * <p>当前账号下拥有的DB Custom 节点总数</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>当前账号下拥有的DB Custom 节点列表信息</p>
                     */
                    std::vector<DBCustomNode> m_nodeSet;
                    bool m_nodeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_DESCRIBEDBCUSTOMNODESRESPONSE_H_
