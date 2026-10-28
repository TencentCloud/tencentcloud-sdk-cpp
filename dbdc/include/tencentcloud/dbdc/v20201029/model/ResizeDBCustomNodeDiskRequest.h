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

#ifndef TENCENTCLOUD_DBDC_V20201029_MODEL_RESIZEDBCUSTOMNODEDISKREQUEST_H_
#define TENCENTCLOUD_DBDC_V20201029_MODEL_RESIZEDBCUSTOMNODEDISKREQUEST_H_

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
                * ResizeDBCustomNodeDisk请求参数结构体
                */
                class ResizeDBCustomNodeDiskRequest : public AbstractModel
                {
                public:
                    ResizeDBCustomNodeDiskRequest();
                    ~ResizeDBCustomNodeDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>节点ID</p>
                     * @return NodeId <p>节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _nodeId <p>节点ID</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点磁盘ID</p>
                     * @return DiskId <p>节点磁盘ID</p>
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置<p>节点磁盘ID</p>
                     * @param _diskId <p>节点磁盘ID</p>
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取<p>调整后的磁盘容量大小</p><p>单位：GB</p><p>必须大于当前硬盘大小。系统盘小于2048，数据盘小于32000</p>
                     * @return DiskSize <p>调整后的磁盘容量大小</p><p>单位：GB</p><p>必须大于当前硬盘大小。系统盘小于2048，数据盘小于32000</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>调整后的磁盘容量大小</p><p>单位：GB</p><p>必须大于当前硬盘大小。系统盘小于2048，数据盘小于32000</p>
                     * @param _diskSize <p>调整后的磁盘容量大小</p><p>单位：GB</p><p>必须大于当前硬盘大小。系统盘小于2048，数据盘小于32000</p>
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点磁盘ID</p>
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * <p>调整后的磁盘容量大小</p><p>单位：GB</p><p>必须大于当前硬盘大小。系统盘小于2048，数据盘小于32000</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBDC_V20201029_MODEL_RESIZEDBCUSTOMNODEDISKREQUEST_H_
