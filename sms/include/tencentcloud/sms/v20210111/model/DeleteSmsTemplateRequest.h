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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DELETESMSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DELETESMSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DeleteSmsTemplate请求参数结构体
                */
                class DeleteSmsTemplateRequest : public AbstractModel
                {
                public:
                    DeleteSmsTemplateRequest();
                    ~DeleteSmsTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待删除的模板 ID。
                     * @return TemplateId 待删除的模板 ID。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置待删除的模板 ID。
                     * @param _templateId 待删除的模板 ID。
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 待删除的模板 ID。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DELETESMSTEMPLATEREQUEST_H_
