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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_

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
                * ModifyDBInstanceSpec请求参数结构体
                */
                class ModifyDBInstanceSpecRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSpecRequest();
                    ~ModifyDBInstanceSpecRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     * @param InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例配置变更后的内存大小，单位：GB。内存和磁盘必须同时升配或同时降配
                     * @return Memory 实例配置变更后的内存大小，单位：GB。内存和磁盘必须同时升配或同时降配
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置实例配置变更后的内存大小，单位：GB。内存和磁盘必须同时升配或同时降配
                     * @param Memory 实例配置变更后的内存大小，单位：GB。内存和磁盘必须同时升配或同时降配
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例配置变更后的硬盘大小，单位：GB。内存和磁盘必须同时升配或同时降配。降配时，新的磁盘参数必须大于已用磁盘容量的1.2倍
                     * @return Volume 实例配置变更后的硬盘大小，单位：GB。内存和磁盘必须同时升配或同时降配。降配时，新的磁盘参数必须大于已用磁盘容量的1.2倍
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置实例配置变更后的硬盘大小，单位：GB。内存和磁盘必须同时升配或同时降配。降配时，新的磁盘参数必须大于已用磁盘容量的1.2倍
                     * @param Volume 实例配置变更后的硬盘大小，单位：GB。内存和磁盘必须同时升配或同时降配。降配时，新的磁盘参数必须大于已用磁盘容量的1.2倍
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取实例配置变更后oplog的大小，单位：GB，默认为磁盘空间的10%，允许设置的最小值为磁盘的10%，最大值为磁盘的90%
                     * @return OplogSize 实例配置变更后oplog的大小，单位：GB，默认为磁盘空间的10%，允许设置的最小值为磁盘的10%，最大值为磁盘的90%
                     */
                    uint64_t GetOplogSize() const;

                    /**
                     * 设置实例配置变更后oplog的大小，单位：GB，默认为磁盘空间的10%，允许设置的最小值为磁盘的10%，最大值为磁盘的90%
                     * @param OplogSize 实例配置变更后oplog的大小，单位：GB，默认为磁盘空间的10%，允许设置的最小值为磁盘的10%，最大值为磁盘的90%
                     */
                    void SetOplogSize(const uint64_t& _oplogSize);

                    /**
                     * 判断参数 OplogSize 是否已赋值
                     * @return OplogSize 是否已赋值
                     */
                    bool OplogSizeHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例配置变更后的内存大小，单位：GB。内存和磁盘必须同时升配或同时降配
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例配置变更后的硬盘大小，单位：GB。内存和磁盘必须同时升配或同时降配。降配时，新的磁盘参数必须大于已用磁盘容量的1.2倍
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 实例配置变更后oplog的大小，单位：GB，默认为磁盘空间的10%，允许设置的最小值为磁盘的10%，最大值为磁盘的90%
                     */
                    uint64_t m_oplogSize;
                    bool m_oplogSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYDBINSTANCESPECREQUEST_H_
