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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_

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
                * ModifyInstancePre请求参数结构体
                */
                class ModifyInstancePreRequest : public AbstractModel
                {
                public:
                    ModifyInstancePreRequest();
                    ~ModifyInstancePreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ckafka集群实例Id,可通过DescribeInstances接口获取
                     * @return InstanceId ckafka集群实例Id,可通过DescribeInstances接口获取
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ckafka集群实例Id,可通过DescribeInstances接口获取
                     * @param _instanceId ckafka集群实例Id,可通过DescribeInstances接口获取
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
                     * 获取磁盘大小 单位 GB     最大值为500000,步长100
可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562

                     * @return DiskSize 磁盘大小 单位 GB     最大值为500000,步长100
可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562

                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小 单位 GB     最大值为500000,步长100
可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562

                     * @param _diskSize 磁盘大小 单位 GB     最大值为500000,步长100
可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562

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
                     * 获取峰值带宽 单位 MB/s
可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745

                     * @return BandWidth 峰值带宽 单位 MB/s
可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745

                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置峰值带宽 单位 MB/s
可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745

                     * @param _bandWidth 峰值带宽 单位 MB/s
可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745

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
                     * 获取分区上限 最大值: 40000, 步长: 100
可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563
                     * @return Partition 分区上限 最大值: 40000, 步长: 100
可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区上限 最大值: 40000, 步长: 100
可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563
                     * @param _partition 分区上限 最大值: 40000, 步长: 100
可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                private:

                    /**
                     * ckafka集群实例Id,可通过DescribeInstances接口获取
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 磁盘大小 单位 GB     最大值为500000,步长100
可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562

                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 峰值带宽 单位 MB/s
可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745

                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 分区上限 最大值: 40000, 步长: 100
可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
