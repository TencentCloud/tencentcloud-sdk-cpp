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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSTEMPLATERESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/AddTemplateStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * AddSmsTemplate返回参数结构体
                */
                class AddSmsTemplateResponse : public AbstractModel
                {
                public:
                    AddSmsTemplateResponse();
                    ~AddSmsTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加短信模板响应包体
                     * @return AddTemplateStatus 添加短信模板响应包体
                     * 
                     */
                    AddTemplateStatus GetAddTemplateStatus() const;

                    /**
                     * 判断参数 AddTemplateStatus 是否已赋值
                     * @return AddTemplateStatus 是否已赋值
                     * 
                     */
                    bool AddTemplateStatusHasBeenSet() const;

                private:

                    /**
                     * 添加短信模板响应包体
                     */
                    AddTemplateStatus m_addTemplateStatus;
                    bool m_addTemplateStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_ADDSMSTEMPLATERESPONSE_H_
