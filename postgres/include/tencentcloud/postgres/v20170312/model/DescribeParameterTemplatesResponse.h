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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParameterTemplate.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParameterTemplates返回参数结构体
                */
                class DescribeParameterTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeParameterTemplatesResponse();
                    ~DescribeParameterTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的参数模板总数
                     * @return TotalCount 符合查询条件的参数模板总数
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
                     * 获取参数模板列表
                     * @return ParameterTemplateSet 参数模板列表
                     * 
                     */
                    std::vector<ParameterTemplate> GetParameterTemplateSet() const;

                    /**
                     * 判断参数 ParameterTemplateSet 是否已赋值
                     * @return ParameterTemplateSet 是否已赋值
                     * 
                     */
                    bool ParameterTemplateSetHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的参数模板总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 参数模板列表
                     */
                    std::vector<ParameterTemplate> m_parameterTemplateSet;
                    bool m_parameterTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_
