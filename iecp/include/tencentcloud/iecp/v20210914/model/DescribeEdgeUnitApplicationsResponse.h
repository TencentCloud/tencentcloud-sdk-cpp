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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSRESPONSE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ApplicationStatusInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DescribeEdgeUnitApplications返回参数结构体
                */
                class DescribeEdgeUnitApplicationsResponse : public AbstractModel
                {
                public:
                    DescribeEdgeUnitApplicationsResponse();
                    ~DescribeEdgeUnitApplicationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 总数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取应用列表
                     * @return ApplicationSet 应用列表
                     * 
                     */
                    std::vector<ApplicationStatusInfo> GetApplicationSet() const;

                    /**
                     * 判断参数 ApplicationSet 是否已赋值
                     * @return ApplicationSet 是否已赋值
                     * 
                     */
                    bool ApplicationSetHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 应用列表
                     */
                    std::vector<ApplicationStatusInfo> m_applicationSet;
                    bool m_applicationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DESCRIBEEDGEUNITAPPLICATIONSRESPONSE_H_
