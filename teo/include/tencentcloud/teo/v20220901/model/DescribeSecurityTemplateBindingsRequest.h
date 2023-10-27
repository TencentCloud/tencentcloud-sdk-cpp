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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSREQUEST_H_

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
                * DescribeSecurityTemplateBindings请求参数结构体
                */
                class DescribeSecurityTemplateBindingsRequest : public AbstractModel
                {
                public:
                    DescribeSecurityTemplateBindingsRequest();
                    ~DescribeSecurityTemplateBindingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的站点 ID。
                     * @return ZoneId 要查询的站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置要查询的站点 ID。
                     * @param _zoneId 要查询的站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取要查询的策略模板 ID。
                     * @return TemplateId 要查询的策略模板 ID。
                     * 
                     */
                    std::vector<std::string> GetTemplateId() const;

                    /**
                     * 设置要查询的策略模板 ID。
                     * @param _templateId 要查询的策略模板 ID。
                     * 
                     */
                    void SetTemplateId(const std::vector<std::string>& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 要查询的站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 要查询的策略模板 ID。
                     */
                    std::vector<std::string> m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYTEMPLATEBINDINGSREQUEST_H_
