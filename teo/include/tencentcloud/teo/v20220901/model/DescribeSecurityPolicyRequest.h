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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicy请求参数结构体
                */
                class DescribeSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyRequest();
                    ~DescribeSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。当使用Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @return Entity 子域名/应用名。当使用Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。当使用Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @param Entity 子域名/应用名。当使用Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取模板策略id。当使用模板Id时可不填Entity，否则必须填写Entity。
                     * @return TemplateId 模板策略id。当使用模板Id时可不填Entity，否则必须填写Entity。
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板策略id。当使用模板Id时可不填Entity，否则必须填写Entity。
                     * @param TemplateId 模板策略id。当使用模板Id时可不填Entity，否则必须填写Entity。
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名。当使用Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 模板策略id。当使用模板Id时可不填Entity，否则必须填写Entity。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYPOLICYREQUEST_H_
