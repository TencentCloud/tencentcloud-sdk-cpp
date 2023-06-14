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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/domain/v20180808/model/TemplateInfo.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeTemplateList返回参数结构体
                */
                class DescribeTemplateListResponse : public AbstractModel
                {
                public:
                    DescribeTemplateListResponse();
                    ~DescribeTemplateListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板数量。
                     * @return TotalCount 模板数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取模板详细信息列表。
                     * @return TemplateSet 模板详细信息列表。
                     * 
                     */
                    std::vector<TemplateInfo> GetTemplateSet() const;

                    /**
                     * 判断参数 TemplateSet 是否已赋值
                     * @return TemplateSet 是否已赋值
                     * 
                     */
                    bool TemplateSetHasBeenSet() const;

                private:

                    /**
                     * 模板数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 模板详细信息列表。
                     */
                    std::vector<TemplateInfo> m_templateSet;
                    bool m_templateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBETEMPLATELISTRESPONSE_H_
