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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditTemplate.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditTemplates返回参数结构体
                */
                class DescribeAuditTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeAuditTemplatesResponse();
                    ~DescribeAuditTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>审核模板列表。</p>
                     * @return AuditTemplates <p>审核模板列表。</p>
                     * 
                     */
                    std::vector<AuditTemplate> GetAuditTemplates() const;

                    /**
                     * 判断参数 AuditTemplates 是否已赋值
                     * @return AuditTemplates 是否已赋值
                     * 
                     */
                    bool AuditTemplatesHasBeenSet() const;

                private:

                    /**
                     * <p>审核模板列表。</p>
                     */
                    std::vector<AuditTemplate> m_auditTemplates;
                    bool m_auditTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITTEMPLATESRESPONSE_H_
