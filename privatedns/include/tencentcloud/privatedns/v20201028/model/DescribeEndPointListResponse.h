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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/EndPointInfo.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeEndPointList返回参数结构体
                */
                class DescribeEndPointListResponse : public AbstractModel
                {
                public:
                    DescribeEndPointListResponse();
                    ~DescribeEndPointListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点总数
                     * @return TotalCount 终端节点总数
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
                     * 获取终端节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndPointSet 终端节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EndPointInfo> GetEndPointSet() const;

                    /**
                     * 判断参数 EndPointSet 是否已赋值
                     * @return EndPointSet 是否已赋值
                     * 
                     */
                    bool EndPointSetHasBeenSet() const;

                private:

                    /**
                     * 终端节点总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 终端节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EndPointInfo> m_endPointSet;
                    bool m_endPointSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEENDPOINTLISTRESPONSE_H_
