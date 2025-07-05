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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/MonitorDetail.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeMonitors返回参数结构体
                */
                class DescribeMonitorsResponse : public AbstractModel
                {
                public:
                    DescribeMonitorsResponse();
                    ~DescribeMonitorsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监控器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorDataSet 监控器列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MonitorDetail> GetMonitorDataSet() const;

                    /**
                     * 判断参数 MonitorDataSet 是否已赋值
                     * @return MonitorDataSet 是否已赋值
                     * 
                     */
                    bool MonitorDataSetHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return TotalCount 数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 监控器列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MonitorDetail> m_monitorDataSet;
                    bool m_monitorDataSetHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSRESPONSE_H_
