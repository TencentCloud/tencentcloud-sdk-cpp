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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/workbuddyenterprise/v20260709/model/ConnectorInfo.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeConnectorList返回参数结构体
                */
                class DescribeConnectorListResponse : public AbstractModel
                {
                public:
                    DescribeConnectorListResponse();
                    ~DescribeConnectorListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的连接器总数
                     * @return TotalCount 符合条件的连接器总数
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
                     * 获取连接器列表（分页后）；连接器挂调用方主账号 UIN 下，不挂 OneID 企业
                     * @return ConnectorSet 连接器列表（分页后）；连接器挂调用方主账号 UIN 下，不挂 OneID 企业
                     * 
                     */
                    std::vector<ConnectorInfo> GetConnectorSet() const;

                    /**
                     * 判断参数 ConnectorSet 是否已赋值
                     * @return ConnectorSet 是否已赋值
                     * 
                     */
                    bool ConnectorSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的连接器总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 连接器列表（分页后）；连接器挂调用方主账号 UIN 下，不挂 OneID 企业
                     */
                    std::vector<ConnectorInfo> m_connectorSet;
                    bool m_connectorSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBECONNECTORLISTRESPONSE_H_
