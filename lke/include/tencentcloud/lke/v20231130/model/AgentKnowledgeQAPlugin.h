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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEQAPLUGIN_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEQAPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentKnowledgeFilter.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 知识库问答插件
                */
                class AgentKnowledgeQAPlugin : public AbstractModel
                {
                public:
                    AgentKnowledgeQAPlugin();
                    ~AgentKnowledgeQAPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取知识检索筛选范围
                     * @return Filter 知识检索筛选范围
                     * 
                     */
                    AgentKnowledgeFilter GetFilter() const;

                    /**
                     * 设置知识检索筛选范围
                     * @param _filter 知识检索筛选范围
                     * 
                     */
                    void SetFilter(const AgentKnowledgeFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 知识检索筛选范围
                     */
                    AgentKnowledgeFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTKNOWLEDGEQAPLUGIN_H_
