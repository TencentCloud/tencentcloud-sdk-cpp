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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DeletePrometheusTemp请求参数结构体
                */
                class DeletePrometheusTempRequest : public AbstractModel
                {
                public:
                    DeletePrometheusTempRequest();
                    ~DeletePrometheusTempRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模板id
                     * @return TemplateId 模板id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板id
                     * @param _templateId 模板id
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
                     * 模板id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DELETEPROMETHEUSTEMPREQUEST_H_
