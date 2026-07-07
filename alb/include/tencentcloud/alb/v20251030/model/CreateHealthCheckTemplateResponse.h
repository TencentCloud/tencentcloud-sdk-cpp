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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * CreateHealthCheckTemplate返回参数结构体
                */
                class CreateHealthCheckTemplateResponse : public AbstractModel
                {
                public:
                    CreateHealthCheckTemplateResponse();
                    ~CreateHealthCheckTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康检查模板 ID，格式为 hct- 后接字母数字。所有接口（创建、查询、修改、删除）均使用 hct- 前缀。
                     * @return HealthCheckTemplateId 健康检查模板 ID，格式为 hct- 后接字母数字。所有接口（创建、查询、修改、删除）均使用 hct- 前缀。
                     * 
                     */
                    std::string GetHealthCheckTemplateId() const;

                    /**
                     * 判断参数 HealthCheckTemplateId 是否已赋值
                     * @return HealthCheckTemplateId 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdHasBeenSet() const;

                private:

                    /**
                     * 健康检查模板 ID，格式为 hct- 后接字母数字。所有接口（创建、查询、修改、删除）均使用 hct- 前缀。
                     */
                    std::string m_healthCheckTemplateId;
                    bool m_healthCheckTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_CREATEHEALTHCHECKTEMPLATERESPONSE_H_
