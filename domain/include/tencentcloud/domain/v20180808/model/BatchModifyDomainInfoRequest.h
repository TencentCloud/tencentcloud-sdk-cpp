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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYDOMAININFOREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYDOMAININFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * BatchModifyDomainInfo请求参数结构体
                */
                class BatchModifyDomainInfoRequest : public AbstractModel
                {
                public:
                    BatchModifyDomainInfoRequest();
                    ~BatchModifyDomainInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批量修改的域名。
                     * @return Domains 批量修改的域名。
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置批量修改的域名。
                     * @param Domains 批量修改的域名。
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取模板ID。
                     * @return TemplateId 模板ID。
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID。
                     * @param TemplateId 模板ID。
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 批量修改的域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 模板ID。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_BATCHMODIFYDOMAININFOREQUEST_H_
