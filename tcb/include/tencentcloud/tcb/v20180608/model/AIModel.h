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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AIMODEL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AIMODEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * AI 模型信息
                */
                class AIModel : public AbstractModel
                {
                public:
                    AIModel();
                    ~AIModel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名
                     * @return Model 模型名
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名
                     * @param _model 模型名
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取是否开启MCP
                     * @return EnableMCP 是否开启MCP
                     * 
                     */
                    bool GetEnableMCP() const;

                    /**
                     * 设置是否开启MCP
                     * @param _enableMCP 是否开启MCP
                     * 
                     */
                    void SetEnableMCP(const bool& _enableMCP);

                    /**
                     * 判断参数 EnableMCP 是否已赋值
                     * @return EnableMCP 是否已赋值
                     * 
                     */
                    bool EnableMCPHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 模型名
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 是否开启MCP
                     */
                    bool m_enableMCP;
                    bool m_enableMCPHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AIMODEL_H_
