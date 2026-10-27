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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_REMOVEDATADISKSREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_REMOVEDATADISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * RemoveDataDisks请求参数结构体
                */
                class RemoveDataDisksRequest : public AbstractModel
                {
                public:
                    RemoveDataDisksRequest();
                    ~RemoveDataDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取数据盘磁盘 ID，可以通过 DescribeInstances 查下实例数据盘
                     * @return DataDiskIds 数据盘磁盘 ID，可以通过 DescribeInstances 查下实例数据盘
                     * 
                     */
                    std::vector<std::string> GetDataDiskIds() const;

                    /**
                     * 设置数据盘磁盘 ID，可以通过 DescribeInstances 查下实例数据盘
                     * @param _dataDiskIds 数据盘磁盘 ID，可以通过 DescribeInstances 查下实例数据盘
                     * 
                     */
                    void SetDataDiskIds(const std::vector<std::string>& _dataDiskIds);

                    /**
                     * 判断参数 DataDiskIds 是否已赋值
                     * @return DataDiskIds 是否已赋值
                     * 
                     */
                    bool DataDiskIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 数据盘磁盘 ID，可以通过 DescribeInstances 查下实例数据盘
                     */
                    std::vector<std::string> m_dataDiskIds;
                    bool m_dataDiskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_REMOVEDATADISKSREQUEST_H_
