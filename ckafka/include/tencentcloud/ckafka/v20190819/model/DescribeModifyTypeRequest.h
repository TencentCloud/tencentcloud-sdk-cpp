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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeModifyType请求参数结构体
                */
                class DescribeModifyTypeRequest : public AbstractModel
                {
                public:
                    DescribeModifyTypeRequest();
                    ~DescribeModifyTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id
                     * @return InstanceId ckafka集群实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id
                     * @param _instanceId ckafka集群实例Id
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
                     * 获取升配后的带宽，单位mb
                     * @return BandWidth 升配后的带宽，单位mb
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置升配后的带宽，单位mb
                     * @param _bandWidth 升配后的带宽，单位mb
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取升配后的磁盘，单位G
                     * @return DiskSize 升配后的磁盘，单位G
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置升配后的磁盘，单位G
                     * @param _diskSize 升配后的磁盘，单位G
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取磁盘类型，例如 CLOUD_PREMIUM
                     * @return DiskType 磁盘类型，例如 CLOUD_PREMIUM
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置磁盘类型，例如 CLOUD_PREMIUM
                     * @param _diskType 磁盘类型，例如 CLOUD_PREMIUM
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取分区数量
                     * @return Partition 分区数量
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区数量
                     * @param _partition 分区数量
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取topic数量
                     * @return Topic topic数量
                     * 
                     */
                    int64_t GetTopic() const;

                    /**
                     * 设置topic数量
                     * @param _topic topic数量
                     * 
                     */
                    void SetTopic(const int64_t& _topic);

                    /**
                     * 判断参数 Topic 是否已赋值
                     * @return Topic 是否已赋值
                     * 
                     */
                    bool TopicHasBeenSet() const;

                    /**
                     * 获取实例类型例如 sp_ckafka_profession
                     * @return Type 实例类型例如 sp_ckafka_profession
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例类型例如 sp_ckafka_profession
                     * @param _type 实例类型例如 sp_ckafka_profession
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
                     * 获取变配入口
                     * @return ModifyEntry 变配入口
                     * 
                     */
                    std::string GetModifyEntry() const;

                    /**
                     * 设置变配入口
                     * @param _modifyEntry 变配入口
                     * 
                     */
                    void SetModifyEntry(const std::string& _modifyEntry);

                    /**
                     * 判断参数 ModifyEntry 是否已赋值
                     * @return ModifyEntry 是否已赋值
                     * 
                     */
                    bool ModifyEntryHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 升配后的带宽，单位mb
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 升配后的磁盘，单位G
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 磁盘类型，例如 CLOUD_PREMIUM
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 分区数量
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * topic数量
                     */
                    int64_t m_topic;
                    bool m_topicHasBeenSet;

                    /**
                     * 实例类型例如 sp_ckafka_profession
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 变配入口
                     */
                    std::string m_modifyEntry;
                    bool m_modifyEntryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEMODIFYTYPEREQUEST_H_
