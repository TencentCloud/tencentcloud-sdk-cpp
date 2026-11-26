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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORKNOWLEDGESCOPE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORKNOWLEDGESCOPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ConnectorResource.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 连接器知识范围
                */
                class ConnectorKnowledgeScope : public AbstractModel
                {
                public:
                    ConnectorKnowledgeScope();
                    ~ConnectorKnowledgeScope() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否启用知识范围</p>
                     * @return Enabled <p>是否启用知识范围</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>是否启用知识范围</p>
                     * @param _enabled <p>是否启用知识范围</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取<p>已选资源列表，Enabled 为 true 时至少 1 项</p>
                     * @return ResourceList <p>已选资源列表，Enabled 为 true 时至少 1 项</p>
                     * 
                     */
                    std::vector<ConnectorResource> GetResourceList() const;

                    /**
                     * 设置<p>已选资源列表，Enabled 为 true 时至少 1 项</p>
                     * @param _resourceList <p>已选资源列表，Enabled 为 true 时至少 1 项</p>
                     * 
                     */
                    void SetResourceList(const std::vector<ConnectorResource>& _resourceList);

                    /**
                     * 判断参数 ResourceList 是否已赋值
                     * @return ResourceList 是否已赋值
                     * 
                     */
                    bool ResourceListHasBeenSet() const;

                private:

                    /**
                     * <p>是否启用知识范围</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * <p>已选资源列表，Enabled 为 true 时至少 1 项</p>
                     */
                    std::vector<ConnectorResource> m_resourceList;
                    bool m_resourceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONNECTORKNOWLEDGESCOPE_H_
