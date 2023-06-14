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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_RESIZEDISKREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_RESIZEDISKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ResizeDisk请求参数结构体
                */
                class ResizeDiskRequest : public AbstractModel
                {
                public:
                    ResizeDiskRequest();
                    ~ResizeDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例唯一ID
                     * @return InstanceId 实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceId 实例唯一ID
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
                     * 获取节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @return Type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @param _type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取磁盘扩容后容量，不能小于原有用量。clickhouse最小200，且为100的整数倍。 zk最小100，且为10的整数倍；
                     * @return DiskSize 磁盘扩容后容量，不能小于原有用量。clickhouse最小200，且为100的整数倍。 zk最小100，且为10的整数倍；
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘扩容后容量，不能小于原有用量。clickhouse最小200，且为100的整数倍。 zk最小100，且为10的整数倍；
                     * @param _diskSize 磁盘扩容后容量，不能小于原有用量。clickhouse最小200，且为100的整数倍。 zk最小100，且为10的整数倍；
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 磁盘扩容后容量，不能小于原有用量。clickhouse最小200，且为100的整数倍。 zk最小100，且为10的整数倍；
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_RESIZEDISKREQUEST_H_
