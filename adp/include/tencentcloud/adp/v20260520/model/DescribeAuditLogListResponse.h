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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AuditLog.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAuditLogList返回参数结构体
                */
                class DescribeAuditLogListResponse : public AbstractModel
                {
                public:
                    DescribeAuditLogListResponse();
                    ~DescribeAuditLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作日志列表</p>
                     * @return AuditLogList <p>操作日志列表</p>
                     * 
                     */
                    std::vector<AuditLog> GetAuditLogList() const;

                    /**
                     * 判断参数 AuditLogList 是否已赋值
                     * @return AuditLogList 是否已赋值
                     * 
                     */
                    bool AuditLogListHasBeenSet() const;

                    /**
                     * 获取<p>es查询起始位置</p><p>用于入参查询下一页</p>
                     * @return SearchAfter <p>es查询起始位置</p><p>用于入参查询下一页</p>
                     * 
                     */
                    std::vector<std::string> GetSearchAfter() const;

                    /**
                     * 判断参数 SearchAfter 是否已赋值
                     * @return SearchAfter 是否已赋值
                     * 
                     */
                    bool SearchAfterHasBeenSet() const;

                private:

                    /**
                     * <p>操作日志列表</p>
                     */
                    std::vector<AuditLog> m_auditLogList;
                    bool m_auditLogListHasBeenSet;

                    /**
                     * <p>es查询起始位置</p><p>用于入参查询下一页</p>
                     */
                    std::vector<std::string> m_searchAfter;
                    bool m_searchAfterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGLISTRESPONSE_H_
