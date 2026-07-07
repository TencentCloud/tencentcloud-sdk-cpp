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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_

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
                * DeleteHealthCheckTemplates请求参数结构体
                */
                class DeleteHealthCheckTemplatesRequest : public AbstractModel
                {
                public:
                    DeleteHealthCheckTemplatesRequest();
                    ~DeleteHealthCheckTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除模板。
- **true**：发送预览请求，检查删除模板的参数、格式、业务限制等是否符合要求。
                     * @return DryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除模板。
- **true**：发送预览请求，检查删除模板的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除模板。
- **true**：发送预览请求，检查删除模板的参数、格式、业务限制等是否符合要求。
                     * @param _dryRun 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除模板。
- **true**：发送预览请求，检查删除模板的参数、格式、业务限制等是否符合要求。
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。
                     * @return HealthCheckTemplateIds 健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。
                     * 
                     */
                    std::vector<std::string> GetHealthCheckTemplateIds() const;

                    /**
                     * 设置健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。
                     * @param _healthCheckTemplateIds 健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。
                     * 
                     */
                    void SetHealthCheckTemplateIds(const std::vector<std::string>& _healthCheckTemplateIds);

                    /**
                     * 判断参数 HealthCheckTemplateIds 是否已赋值
                     * @return HealthCheckTemplateIds 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 是否预览此次请求。
- **false**（默认）：发送普通请求，直接删除模板。
- **true**：发送预览请求，检查删除模板的参数、格式、业务限制等是否符合要求。
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 健康检查模板 ID 列表，ID 格式为 hct- 后接字母数字。
                     */
                    std::vector<std::string> m_healthCheckTemplateIds;
                    bool m_healthCheckTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETEHEALTHCHECKTEMPLATESREQUEST_H_
