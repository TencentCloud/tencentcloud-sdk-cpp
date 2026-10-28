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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_STOPDBCUSTOMNODESREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_STOPDBCUSTOMNODESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbdc
    {
        namespace V20201029
        {
            namespace Model
            {
                /**
                * StopDBCustomNodes请求参数结构体
                */
                class StopDBCustomNodesRequest : public AbstractModel
                {
                public:
                    StopDBCustomNodesRequest();
                    ~StopDBCustomNodesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点 ID 列表</p><p>入参限制：最多支持 100 个</p>
                     * @return NodeIds <p>节点 ID 列表</p><p>入参限制：最多支持 100 个</p>
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置<p>节点 ID 列表</p><p>入参限制：最多支持 100 个</p>
                     * @param _nodeIds <p>节点 ID 列表</p><p>入参限制：最多支持 100 个</p>
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取<p>关机类型</p><p>枚举值：</p><ul><li>SOFT： 软关机</li><li>HARD： 硬关机</li><li>SOFT_FIRST： 优先软关机，失败再执行硬关机</li></ul><p>默认值：SOFT</p>
                     * @return StopType <p>关机类型</p><p>枚举值：</p><ul><li>SOFT： 软关机</li><li>HARD： 硬关机</li><li>SOFT_FIRST： 优先软关机，失败再执行硬关机</li></ul><p>默认值：SOFT</p>
                     * 
                     */
                    std::string GetStopType() const;

                    /**
                     * 设置<p>关机类型</p><p>枚举值：</p><ul><li>SOFT： 软关机</li><li>HARD： 硬关机</li><li>SOFT_FIRST： 优先软关机，失败再执行硬关机</li></ul><p>默认值：SOFT</p>
                     * @param _stopType <p>关机类型</p><p>枚举值：</p><ul><li>SOFT： 软关机</li><li>HARD： 硬关机</li><li>SOFT_FIRST： 优先软关机，失败再执行硬关机</li></ul><p>默认值：SOFT</p>
                     * 
                     */
                    void SetStopType(const std::string& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * <p>节点 ID 列表</p><p>入参限制：最多支持 100 个</p>
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * <p>关机类型</p><p>枚举值：</p><ul><li>SOFT： 软关机</li><li>HARD： 硬关机</li><li>SOFT_FIRST： 优先软关机，失败再执行硬关机</li></ul><p>默认值：SOFT</p>
                     */
                    std::string m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_STOPDBCUSTOMNODESREQUEST_H_
