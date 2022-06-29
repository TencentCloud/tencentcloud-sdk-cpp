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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/TemplateInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFlowTemplates返回参数结构体
                */
                class DescribeFlowTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeFlowTemplatesResponse();
                    ~DescribeFlowTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板详情列表
                     * @return Templates 模板详情列表
                     */
                    std::vector<TemplateInfo> GetTemplates() const;

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     */
                    bool TemplatesHasBeenSet() const;

                    /**
                     * 获取查询到的总个数
                     * @return TotalCount 查询到的总个数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 模板详情列表
                     */
                    std::vector<TemplateInfo> m_templates;
                    bool m_templatesHasBeenSet;

                    /**
                     * 查询到的总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWTEMPLATESRESPONSE_H_
