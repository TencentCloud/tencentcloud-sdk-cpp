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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/TemplateInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * DescribeTemplates返回参数结构体
                */
                class DescribeTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeTemplatesResponse();
                    ~DescribeTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板详情
                     * @return Templates 模板详情
                     * 
                     */
                    std::vector<TemplateInfo> GetTemplates() const;

                    /**
                     * 判断参数 Templates 是否已赋值
                     * @return Templates 是否已赋值
                     * 
                     */
                    bool TemplatesHasBeenSet() const;

                    /**
                     * 获取查询总数
                     * @return TotalCount 查询总数
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
                     * 获取查询数量
                     * @return Limit 查询数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询起始偏移
                     * @return Offset 查询起始偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 模板详情
                     */
                    std::vector<TemplateInfo> m_templates;
                    bool m_templatesHasBeenSet;

                    /**
                     * 查询总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询起始偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_DESCRIBETEMPLATESRESPONSE_H_
