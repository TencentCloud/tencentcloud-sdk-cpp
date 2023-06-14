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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * InquirePriceModifyDBInstanceSpec请求参数结构体
                */
                class InquirePriceModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    InquirePriceModifyDBInstanceSpecRequest();
                    ~InquirePriceModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，格式如：cmgo-p8vn****。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例 ID，格式如：cmgo-p8vn****。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cmgo-p8vn****。与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例 ID，格式如：cmgo-p8vn****。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取变更配置后实例内存大小，单位：GB。
                     * @return Memory 变更配置后实例内存大小，单位：GB。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置变更配置后实例内存大小，单位：GB。
                     * @param _memory 变更配置后实例内存大小，单位：GB。
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取变更配置后实例磁盘大小，单位：GB。
                     * @return Volume 变更配置后实例磁盘大小，单位：GB。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置变更配置后实例磁盘大小，单位：GB。
                     * @param _volume 变更配置后实例磁盘大小，单位：GB。
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取实例节点数。默认为不变更节点数，暂不支持变更。
                     * @return NodeNum 实例节点数。默认为不变更节点数，暂不支持变更。
                     * 
                     */
                    int64_t GetNodeNum() const;

                    /**
                     * 设置实例节点数。默认为不变更节点数，暂不支持变更。
                     * @param _nodeNum 实例节点数。默认为不变更节点数，暂不支持变更。
                     * 
                     */
                    void SetNodeNum(const int64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取实例分片数。默认为不变更分片数，暂不支持变更。
                     * @return ReplicateSetNum 实例分片数。默认为不变更分片数，暂不支持变更。
                     * 
                     */
                    int64_t GetReplicateSetNum() const;

                    /**
                     * 设置实例分片数。默认为不变更分片数，暂不支持变更。
                     * @param _replicateSetNum 实例分片数。默认为不变更分片数，暂不支持变更。
                     * 
                     */
                    void SetReplicateSetNum(const int64_t& _replicateSetNum);

                    /**
                     * 判断参数 ReplicateSetNum 是否已赋值
                     * @return ReplicateSetNum 是否已赋值
                     * 
                     */
                    bool ReplicateSetNumHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cmgo-p8vn****。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 变更配置后实例内存大小，单位：GB。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 变更配置后实例磁盘大小，单位：GB。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例节点数。默认为不变更节点数，暂不支持变更。
                     */
                    int64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 实例分片数。默认为不变更分片数，暂不支持变更。
                     */
                    int64_t m_replicateSetNum;
                    bool m_replicateSetNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INQUIREPRICEMODIFYDBINSTANCESPECREQUEST_H_
