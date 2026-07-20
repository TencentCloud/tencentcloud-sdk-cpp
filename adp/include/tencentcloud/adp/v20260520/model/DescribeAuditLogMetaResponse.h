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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGMETARESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGMETARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AuditLogMetaField.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeAuditLogMeta返回参数结构体
                */
                class DescribeAuditLogMetaResponse : public AbstractModel
                {
                public:
                    DescribeAuditLogMetaResponse();
                    ~DescribeAuditLogMetaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作类型列表</p>
                     * @return Actions <p>操作类型列表</p>
                     * 
                     */
                    std::vector<AuditLogMetaField> GetActions() const;

                    /**
                     * 判断参数 Actions 是否已赋值
                     * @return Actions 是否已赋值
                     * 
                     */
                    bool ActionsHasBeenSet() const;

                    /**
                     * 获取<p>操作对象列表</p>
                     * @return BizObjects <p>操作对象列表</p>
                     * 
                     */
                    std::vector<AuditLogMetaField> GetBizObjects() const;

                    /**
                     * 判断参数 BizObjects 是否已赋值
                     * @return BizObjects 是否已赋值
                     * 
                     */
                    bool BizObjectsHasBeenSet() const;

                private:

                    /**
                     * <p>操作类型列表</p>
                     */
                    std::vector<AuditLogMetaField> m_actions;
                    bool m_actionsHasBeenSet;

                    /**
                     * <p>操作对象列表</p>
                     */
                    std::vector<AuditLogMetaField> m_bizObjects;
                    bool m_bizObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEAUDITLOGMETARESPONSE_H_
