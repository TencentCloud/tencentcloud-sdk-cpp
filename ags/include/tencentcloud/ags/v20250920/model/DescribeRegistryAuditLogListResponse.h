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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudAuditLog.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeRegistryAuditLogList返回参数结构体
                */
                class DescribeRegistryAuditLogListResponse : public AbstractModel
                {
                public:
                    DescribeRegistryAuditLogListResponse();
                    ~DescribeRegistryAuditLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Record 维度的审计日志。</p>
                     * @return AuditLogSet <p>Record 维度的审计日志。</p>
                     * 
                     */
                    std::vector<CloudAuditLog> GetAuditLogSet() const;

                    /**
                     * 判断参数 AuditLogSet 是否已赋值
                     * @return AuditLogSet 是否已赋值
                     * 
                     */
                    bool AuditLogSetHasBeenSet() const;

                    /**
                     * 获取<p>符合条件的总数。</p>
                     * @return TotalCount <p>符合条件的总数。</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Record 维度的审计日志。</p>
                     */
                    std::vector<CloudAuditLog> m_auditLogSet;
                    bool m_auditLogSetHasBeenSet;

                    /**
                     * <p>符合条件的总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEREGISTRYAUDITLOGLISTRESPONSE_H_
