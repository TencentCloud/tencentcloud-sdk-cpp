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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESECURITYAUDITLOGEXPORTTASKRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESECURITYAUDITLOGEXPORTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * CreateSecurityAuditLogExportTask返回参数结构体
                */
                class CreateSecurityAuditLogExportTaskResponse : public AbstractModel
                {
                public:
                    CreateSecurityAuditLogExportTaskResponse();
                    ~CreateSecurityAuditLogExportTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志导出任务Id。
                     * @return AsyncRequestId 日志导出任务Id。
                     * 
                     */
                    uint64_t GetAsyncRequestId() const;

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 日志导出任务Id。
                     */
                    uint64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATESECURITYAUDITLOGEXPORTTASKRESPONSE_H_
