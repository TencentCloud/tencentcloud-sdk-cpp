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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFORESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/BriefNodeInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBInstanceNodeInfo返回参数结构体
                */
                class DescribeDCDBInstanceNodeInfoResponse : public AbstractModel
                {
                public:
                    DescribeDCDBInstanceNodeInfoResponse();
                    ~DescribeDCDBInstanceNodeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取节点总个数
                     * @return TotalCount 节点总个数
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
                     * 获取节点信息
                     * @return NodesInfo 节点信息
                     * 
                     */
                    std::vector<BriefNodeInfo> GetNodesInfo() const;

                    /**
                     * 判断参数 NodesInfo 是否已赋值
                     * @return NodesInfo 是否已赋值
                     * 
                     */
                    bool NodesInfoHasBeenSet() const;

                private:

                    /**
                     * 节点总个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 节点信息
                     */
                    std::vector<BriefNodeInfo> m_nodesInfo;
                    bool m_nodesInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBINSTANCENODEINFORESPONSE_H_
