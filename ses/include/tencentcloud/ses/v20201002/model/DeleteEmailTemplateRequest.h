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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * DeleteEmailTemplate请求参数结构体
                */
                class DeleteEmailTemplateRequest : public AbstractModel
                {
                public:
                    DeleteEmailTemplateRequest();
                    ~DeleteEmailTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板ID
                     * @return TemplateID 模板ID
                     * 
                     */
                    uint64_t GetTemplateID() const;

                    /**
                     * 设置模板ID
                     * @param _templateID 模板ID
                     * 
                     */
                    void SetTemplateID(const uint64_t& _templateID);

                    /**
                     * 判断参数 TemplateID 是否已赋值
                     * @return TemplateID 是否已赋值
                     * 
                     */
                    bool TemplateIDHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    uint64_t m_templateID;
                    bool m_templateIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_DELETEEMAILTEMPLATEREQUEST_H_
