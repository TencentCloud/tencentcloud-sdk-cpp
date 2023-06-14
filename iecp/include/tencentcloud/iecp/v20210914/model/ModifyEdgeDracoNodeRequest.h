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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEDRACONODEREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEDRACONODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/DracoNodeInfo.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ModifyEdgeDracoNode请求参数结构体
                */
                class ModifyEdgeDracoNodeRequest : public AbstractModel
                {
                public:
                    ModifyEdgeDracoNodeRequest();
                    ~ModifyEdgeDracoNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取边缘单元ID
                     * @return EdgeUnitId 边缘单元ID
                     * 
                     */
                    uint64_t GetEdgeUnitId() const;

                    /**
                     * 设置边缘单元ID
                     * @param _edgeUnitId 边缘单元ID
                     * 
                     */
                    void SetEdgeUnitId(const uint64_t& _edgeUnitId);

                    /**
                     * 判断参数 EdgeUnitId 是否已赋值
                     * @return EdgeUnitId 是否已赋值
                     * 
                     */
                    bool EdgeUnitIdHasBeenSet() const;

                    /**
                     * 获取边缘节点ID
                     * @return NodeId 边缘节点ID
                     * 
                     */
                    uint64_t GetNodeId() const;

                    /**
                     * 设置边缘节点ID
                     * @param _nodeId 边缘节点ID
                     * 
                     */
                    void SetNodeId(const uint64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点信息
                     * @return NodeInfo 节点信息
                     * 
                     */
                    DracoNodeInfo GetNodeInfo() const;

                    /**
                     * 设置节点信息
                     * @param _nodeInfo 节点信息
                     * 
                     */
                    void SetNodeInfo(const DracoNodeInfo& _nodeInfo);

                    /**
                     * 判断参数 NodeInfo 是否已赋值
                     * @return NodeInfo 是否已赋值
                     * 
                     */
                    bool NodeInfoHasBeenSet() const;

                    /**
                     * 获取是否重置draco设备
                     * @return IsReset 是否重置draco设备
                     * 
                     */
                    bool GetIsReset() const;

                    /**
                     * 设置是否重置draco设备
                     * @param _isReset 是否重置draco设备
                     * 
                     */
                    void SetIsReset(const bool& _isReset);

                    /**
                     * 判断参数 IsReset 是否已赋值
                     * @return IsReset 是否已赋值
                     * 
                     */
                    bool IsResetHasBeenSet() const;

                private:

                    /**
                     * 边缘单元ID
                     */
                    uint64_t m_edgeUnitId;
                    bool m_edgeUnitIdHasBeenSet;

                    /**
                     * 边缘节点ID
                     */
                    uint64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点信息
                     */
                    DracoNodeInfo m_nodeInfo;
                    bool m_nodeInfoHasBeenSet;

                    /**
                     * 是否重置draco设备
                     */
                    bool m_isReset;
                    bool m_isResetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_MODIFYEDGEDRACONODEREQUEST_H_
