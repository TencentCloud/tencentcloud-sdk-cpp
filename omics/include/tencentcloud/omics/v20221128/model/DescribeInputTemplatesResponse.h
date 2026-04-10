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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEINPUTTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEINPUTTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/InputTemplate.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeInputTemplates返回参数结构体
                */
                class DescribeInputTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeInputTemplatesResponse();
                    ~DescribeInputTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>运行应用参数模板列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTemplates <p>运行应用参数模板列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InputTemplate> GetInputTemplates() const;

                    /**
                     * 判断参数 InputTemplates 是否已赋值
                     * @return InputTemplates 是否已赋值
                     * 
                     */
                    bool InputTemplatesHasBeenSet() const;

                    /**
                     * 获取<p>运行参数模板列表总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount <p>运行参数模板列表总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>运行应用参数模板列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InputTemplate> m_inputTemplates;
                    bool m_inputTemplatesHasBeenSet;

                    /**
                     * <p>运行参数模板列表总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBEINPUTTEMPLATESRESPONSE_H_
