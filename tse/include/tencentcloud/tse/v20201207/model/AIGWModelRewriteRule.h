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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELREWRITERULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELREWRITERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 模型名字重写规则
                */
                class AIGWModelRewriteRule : public AbstractModel
                {
                public:
                    AIGWModelRewriteRule();
                    ~AIGWModelRewriteRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>原始模型</p>
                     * @return SourceModel <p>原始模型</p>
                     * 
                     */
                    std::string GetSourceModel() const;

                    /**
                     * 设置<p>原始模型</p>
                     * @param _sourceModel <p>原始模型</p>
                     * 
                     */
                    void SetSourceModel(const std::string& _sourceModel);

                    /**
                     * 判断参数 SourceModel 是否已赋值
                     * @return SourceModel 是否已赋值
                     * 
                     */
                    bool SourceModelHasBeenSet() const;

                    /**
                     * 获取<p>目标模型</p>
                     * @return TargetModel <p>目标模型</p>
                     * 
                     */
                    std::string GetTargetModel() const;

                    /**
                     * 设置<p>目标模型</p>
                     * @param _targetModel <p>目标模型</p>
                     * 
                     */
                    void SetTargetModel(const std::string& _targetModel);

                    /**
                     * 判断参数 TargetModel 是否已赋值
                     * @return TargetModel 是否已赋值
                     * 
                     */
                    bool TargetModelHasBeenSet() const;

                private:

                    /**
                     * <p>原始模型</p>
                     */
                    std::string m_sourceModel;
                    bool m_sourceModelHasBeenSet;

                    /**
                     * <p>目标模型</p>
                     */
                    std::string m_targetModel;
                    bool m_targetModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWMODELREWRITERULE_H_
