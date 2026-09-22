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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYAUDITTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYAUDITTEMPLATEREQUEST_H_

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
                * ModifyAuditTemplate请求参数结构体
                */
                class ModifyAuditTemplateRequest : public AbstractModel
                {
                public:
                    ModifyAuditTemplateRequest();
                    ~ModifyAuditTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>审核模板。</p>
                     * @return AuditTemplate <p>审核模板。</p>
                     * 
                     */
                    AuditTemplate GetAuditTemplate() const;

                    /**
                     * 设置<p>审核模板。</p>
                     * @param _auditTemplate <p>审核模板。</p>
                     * 
                     */
                    void SetAuditTemplate(const AuditTemplate& _auditTemplate);

                    /**
                     * 判断参数 AuditTemplate 是否已赋值
                     * @return AuditTemplate 是否已赋值
                     * 
                     */
                    bool AuditTemplateHasBeenSet() const;

                private:

                    /**
                     * <p>审核模板。</p>
                     */
                    AuditTemplate m_auditTemplate;
                    bool m_auditTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYAUDITTEMPLATEREQUEST_H_
