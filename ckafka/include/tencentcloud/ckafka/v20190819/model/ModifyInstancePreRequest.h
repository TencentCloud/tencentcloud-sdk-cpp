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
                     * 获取<p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @return InstanceId <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     * @param _instanceId <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
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
                     * 获取<p>磁盘大小 单位 GB     最大值为500000,步长100可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562</p>
                     * @return DiskSize <p>磁盘大小 单位 GB     最大值为500000,步长100可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562</p>
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置<p>磁盘大小 单位 GB     最大值为500000,步长100可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562</p>
                     * @param _diskSize <p>磁盘大小 单位 GB     最大值为500000,步长100可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562</p>
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
                     * 获取<p>峰值带宽 单位 MB/s可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745</p>
                     * @return BandWidth <p>峰值带宽 单位 MB/s可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745</p>
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置<p>峰值带宽 单位 MB/s可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745</p>
                     * @param _bandWidth <p>峰值带宽 单位 MB/s可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745</p>
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
                     * 获取<p>分区上限 最大值: 40000, 步长: 100可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563</p>
                     * @return Partition <p>分区上限 最大值: 40000, 步长: 100可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>分区上限 最大值: 40000, 步长: 100可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563</p>
                     * @param _partition <p>分区上限 最大值: 40000, 步长: 100可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563</p>
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
                     * <p>ckafka集群实例Id,可通过<a href="https://cloud.tencent.com/document/product/597/40835">DescribeInstances</a>接口获取</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>磁盘大小 单位 GB     最大值为500000,步长100可以通过以下链接查看规格限制：https://cloud.tencent.com/document/product/597/122562</p>
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>峰值带宽 单位 MB/s可以通过以下链接查看规格限制及对应步长: https://cloud.tencent.com/document/product/597/11745</p>
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * <p>分区上限 最大值: 40000, 步长: 100可以通过以下链接查看规格限制: https://cloud.tencent.com/document/product/597/122563</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MODIFYINSTANCEPREREQUEST_H_
