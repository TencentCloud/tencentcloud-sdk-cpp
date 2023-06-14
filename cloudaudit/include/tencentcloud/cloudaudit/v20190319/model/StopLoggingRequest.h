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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STOPLOGGINGREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STOPLOGGINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * StopLogging请求参数结构体
                */
                class StopLoggingRequest : public AbstractModel
                {
                public:
                    StopLoggingRequest();
                    ~StopLoggingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集名称
                     * @return AuditName 跟踪集名称
                     * 
                     */
                    std::string GetAuditName() const;

                    /**
                     * 设置跟踪集名称
                     * @param _auditName 跟踪集名称
                     * 
                     */
                    void SetAuditName(const std::string& _auditName);

                    /**
                     * 判断参数 AuditName 是否已赋值
                     * @return AuditName 是否已赋值
                     * 
                     */
                    bool AuditNameHasBeenSet() const;

                private:

                    /**
                     * 跟踪集名称
                     */
                    std::string m_auditName;
                    bool m_auditNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STOPLOGGINGREQUEST_H_
