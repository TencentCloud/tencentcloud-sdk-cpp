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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEPARAMETERTEMPLATEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEPARAMETERTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteParameterTemplate请求参数结构体
                */
                class DeleteParameterTemplateRequest : public AbstractModel
                {
                public:
                    DeleteParameterTemplateRequest();
                    ~DeleteParameterTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数模板ID，用于唯一确认待操作的参数模板。可通过[DescribeParameterTemplates](https://cloud.tencent.com/document/api/409/84067)接口获取
                     * @return TemplateId 参数模板ID，用于唯一确认待操作的参数模板。可通过[DescribeParameterTemplates](https://cloud.tencent.com/document/api/409/84067)接口获取
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置参数模板ID，用于唯一确认待操作的参数模板。可通过[DescribeParameterTemplates](https://cloud.tencent.com/document/api/409/84067)接口获取
                     * @param _templateId 参数模板ID，用于唯一确认待操作的参数模板。可通过[DescribeParameterTemplates](https://cloud.tencent.com/document/api/409/84067)接口获取
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 参数模板ID，用于唯一确认待操作的参数模板。可通过[DescribeParameterTemplates](https://cloud.tencent.com/document/api/409/84067)接口获取
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETEPARAMETERTEMPLATEREQUEST_H_
