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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/TemplateDetail.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeDeployTemplates返回参数结构体
                */
                class DescribeDeployTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeDeployTemplatesResponse();
                    ~DescribeDeployTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板列表
                     * @return TemplateSet 模板列表
                     * 
                     */
                    std::vector<TemplateDetail> GetTemplateSet() const;

                    /**
                     * 判断参数 TemplateSet 是否已赋值
                     * @return TemplateSet 是否已赋值
                     * 
                     */
                    bool TemplateSetHasBeenSet() const;

                    /**
                     * 获取支持的推理引擎
                     * @return EngineTypes 支持的推理引擎
                     * 
                     */
                    std::vector<std::string> GetEngineTypes() const;

                    /**
                     * 判断参数 EngineTypes 是否已赋值
                     * @return EngineTypes 是否已赋值
                     * 
                     */
                    bool EngineTypesHasBeenSet() const;

                private:

                    /**
                     * 模板列表
                     */
                    std::vector<TemplateDetail> m_templateSet;
                    bool m_templateSetHasBeenSet;

                    /**
                     * 支持的推理引擎
                     */
                    std::vector<std::string> m_engineTypes;
                    bool m_engineTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEDEPLOYTEMPLATESRESPONSE_H_
