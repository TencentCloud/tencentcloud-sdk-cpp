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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEINFERTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEINFERTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/InferTemplateGroup.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeInferTemplates返回参数结构体
                */
                class DescribeInferTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeInferTemplatesResponse();
                    ~DescribeInferTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkTemplates 模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InferTemplateGroup> GetFrameworkTemplates() const;

                    /**
                     * 判断参数 FrameworkTemplates 是否已赋值
                     * @return FrameworkTemplates 是否已赋值
                     * 
                     */
                    bool FrameworkTemplatesHasBeenSet() const;

                private:

                    /**
                     * 模板列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InferTemplateGroup> m_frameworkTemplates;
                    bool m_frameworkTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEINFERTEMPLATESRESPONSE_H_
