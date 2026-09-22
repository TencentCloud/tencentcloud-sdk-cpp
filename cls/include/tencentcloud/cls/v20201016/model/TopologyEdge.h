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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYEDGE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYEDGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 拓扑边
                */
                class TopologyEdge : public AbstractModel
                {
                public:
                    TopologyEdge();
                    ~TopologyEdge() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源实体 ID</p>
                     * @return SrcEntityId <p>源实体 ID</p>
                     * 
                     */
                    std::string GetSrcEntityId() const;

                    /**
                     * 设置<p>源实体 ID</p>
                     * @param _srcEntityId <p>源实体 ID</p>
                     * 
                     */
                    void SetSrcEntityId(const std::string& _srcEntityId);

                    /**
                     * 判断参数 SrcEntityId 是否已赋值
                     * @return SrcEntityId 是否已赋值
                     * 
                     */
                    bool SrcEntityIdHasBeenSet() const;

                    /**
                     * 获取<p>目的实体 ID</p>
                     * @return DstEntityId <p>目的实体 ID</p>
                     * 
                     */
                    std::string GetDstEntityId() const;

                    /**
                     * 设置<p>目的实体 ID</p>
                     * @param _dstEntityId <p>目的实体 ID</p>
                     * 
                     */
                    void SetDstEntityId(const std::string& _dstEntityId);

                    /**
                     * 判断参数 DstEntityId 是否已赋值
                     * @return DstEntityId 是否已赋值
                     * 
                     */
                    bool DstEntityIdHasBeenSet() const;

                    /**
                     * 获取<p>关系类型：contains / same_as / calls</p><p>枚举值：</p><ul><li>contains： 包含关系，A 包含 B</li><li>same_as： 等价关系，A 等价 B</li><li>calls： 调用关系， A 调用 B</li></ul><p>默认值：-</p>
                     * @return RelationType <p>关系类型：contains / same_as / calls</p><p>枚举值：</p><ul><li>contains： 包含关系，A 包含 B</li><li>same_as： 等价关系，A 等价 B</li><li>calls： 调用关系， A 调用 B</li></ul><p>默认值：-</p>
                     * 
                     */
                    std::string GetRelationType() const;

                    /**
                     * 设置<p>关系类型：contains / same_as / calls</p><p>枚举值：</p><ul><li>contains： 包含关系，A 包含 B</li><li>same_as： 等价关系，A 等价 B</li><li>calls： 调用关系， A 调用 B</li></ul><p>默认值：-</p>
                     * @param _relationType <p>关系类型：contains / same_as / calls</p><p>枚举值：</p><ul><li>contains： 包含关系，A 包含 B</li><li>same_as： 等价关系，A 等价 B</li><li>calls： 调用关系， A 调用 B</li></ul><p>默认值：-</p>
                     * 
                     */
                    void SetRelationType(const std::string& _relationType);

                    /**
                     * 判断参数 RelationType 是否已赋值
                     * @return RelationType 是否已赋值
                     * 
                     */
                    bool RelationTypeHasBeenSet() const;

                private:

                    /**
                     * <p>源实体 ID</p>
                     */
                    std::string m_srcEntityId;
                    bool m_srcEntityIdHasBeenSet;

                    /**
                     * <p>目的实体 ID</p>
                     */
                    std::string m_dstEntityId;
                    bool m_dstEntityIdHasBeenSet;

                    /**
                     * <p>关系类型：contains / same_as / calls</p><p>枚举值：</p><ul><li>contains： 包含关系，A 包含 B</li><li>same_as： 等价关系，A 等价 B</li><li>calls： 调用关系， A 调用 B</li></ul><p>默认值：-</p>
                     */
                    std::string m_relationType;
                    bool m_relationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYEDGE_H_
