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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHAUDITLOGRESPONSE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHAUDITLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/AuditLogResult.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * SearchAuditLog返回参数结构体
                */
                class SearchAuditLogResponse : public AbstractModel
                {
                public:
                    SearchAuditLogResponse();
                    ~SearchAuditLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取审计日志
                     * @return AuditLogSet 审计日志
                     * 
                     */
                    std::vector<AuditLogResult> GetAuditLogSet() const;

                    /**
                     * 判断参数 AuditLogSet 是否已赋值
                     * @return AuditLogSet 是否已赋值
                     * 
                     */
                    bool AuditLogSetHasBeenSet() const;

                    /**
                     * 获取日志总数量
                     * @return TotalCount 日志总数量
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
                     * 审计日志
                     */
                    std::vector<AuditLogResult> m_auditLogSet;
                    bool m_auditLogSetHasBeenSet;

                    /**
                     * 日志总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_SEARCHAUDITLOGRESPONSE_H_
