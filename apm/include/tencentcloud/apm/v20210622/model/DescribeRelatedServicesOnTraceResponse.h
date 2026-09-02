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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACERESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ServiceRelation.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRelatedServicesOnTrace返回参数结构体
                */
                class DescribeRelatedServicesOnTraceResponse : public AbstractModel
                {
                public:
                    DescribeRelatedServicesOnTraceResponse();
                    ~DescribeRelatedServicesOnTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的总链路数
                     * @return TotalTraces 查询的总链路数
                     * 
                     */
                    int64_t GetTotalTraces() const;

                    /**
                     * 判断参数 TotalTraces 是否已赋值
                     * @return TotalTraces 是否已赋值
                     * 
                     */
                    bool TotalTracesHasBeenSet() const;

                    /**
                     * 获取查询到的应用的数量
                     * @return TotalServices 查询到的应用的数量
                     * 
                     */
                    int64_t GetTotalServices() const;

                    /**
                     * 判断参数 TotalServices 是否已赋值
                     * @return TotalServices 是否已赋值
                     * 
                     */
                    bool TotalServicesHasBeenSet() const;

                    /**
                     * 获取挑选的链路数量
                     * @return SelectedTraces 挑选的链路数量
                     * 
                     */
                    int64_t GetSelectedTraces() const;

                    /**
                     * 判断参数 SelectedTraces 是否已赋值
                     * @return SelectedTraces 是否已赋值
                     * 
                     */
                    bool SelectedTracesHasBeenSet() const;

                    /**
                     * 获取相关的服务/应用名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceRelations 相关的服务/应用名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceRelation> GetServiceRelations() const;

                    /**
                     * 判断参数 ServiceRelations 是否已赋值
                     * @return ServiceRelations 是否已赋值
                     * 
                     */
                    bool ServiceRelationsHasBeenSet() const;

                private:

                    /**
                     * 查询的总链路数
                     */
                    int64_t m_totalTraces;
                    bool m_totalTracesHasBeenSet;

                    /**
                     * 查询到的应用的数量
                     */
                    int64_t m_totalServices;
                    bool m_totalServicesHasBeenSet;

                    /**
                     * 挑选的链路数量
                     */
                    int64_t m_selectedTraces;
                    bool m_selectedTracesHasBeenSet;

                    /**
                     * 相关的服务/应用名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceRelation> m_serviceRelations;
                    bool m_serviceRelationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBERELATEDSERVICESONTRACERESPONSE_H_
