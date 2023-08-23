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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplate.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeFirewallTemplates返回参数结构体
                */
                class DescribeFirewallTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeFirewallTemplatesResponse();
                    ~DescribeFirewallTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板总数量。
                     * @return TotalCount 模板总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取防火墙模板列表。
                     * @return TemplateSet 防火墙模板列表。
                     * 
                     */
                    std::vector<FirewallTemplate> GetTemplateSet() const;

                    /**
                     * 判断参数 TemplateSet 是否已赋值
                     * @return TemplateSet 是否已赋值
                     * 
                     */
                    bool TemplateSetHasBeenSet() const;

                private:

                    /**
                     * 模板总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 防火墙模板列表。
                     */
                    std::vector<FirewallTemplate> m_templateSet;
                    bool m_templateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEFIREWALLTEMPLATESRESPONSE_H_
