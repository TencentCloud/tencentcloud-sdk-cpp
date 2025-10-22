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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATERESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/ModifyTemplateStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ModifySmsTemplate返回参数结构体
                */
                class ModifySmsTemplateResponse : public AbstractModel
                {
                public:
                    ModifySmsTemplateResponse();
                    ~ModifySmsTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取修改模板参数响应
                     * @return ModifyTemplateStatus 修改模板参数响应
                     * 
                     */
                    ModifyTemplateStatus GetModifyTemplateStatus() const;

                    /**
                     * 判断参数 ModifyTemplateStatus 是否已赋值
                     * @return ModifyTemplateStatus 是否已赋值
                     * 
                     */
                    bool ModifyTemplateStatusHasBeenSet() const;

                private:

                    /**
                     * 修改模板参数响应
                     */
                    ModifyTemplateStatus m_modifyTemplateStatus;
                    bool m_modifyTemplateStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_MODIFYSMSTEMPLATERESPONSE_H_
