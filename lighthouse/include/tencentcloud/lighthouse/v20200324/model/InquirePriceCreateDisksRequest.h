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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEDISKSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DiskChargePrepaid.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * InquirePriceCreateDisks请求参数结构体
                */
                class InquirePriceCreateDisksRequest : public AbstractModel
                {
                public:
                    InquirePriceCreateDisksRequest();
                    ~InquirePriceCreateDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取磁盘大小
                     * @return DiskSize 磁盘大小
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小
                     * @param DiskSize 磁盘大小
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取硬盘介质类型
                     * @return DiskType 硬盘介质类型
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置硬盘介质类型
                     * @param DiskType 硬盘介质类型
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取新购磁盘包年包月相关参数设置
                     * @return DiskChargePrepaid 新购磁盘包年包月相关参数设置
                     */
                    DiskChargePrepaid GetDiskChargePrepaid() const;

                    /**
                     * 设置新购磁盘包年包月相关参数设置
                     * @param DiskChargePrepaid 新购磁盘包年包月相关参数设置
                     */
                    void SetDiskChargePrepaid(const DiskChargePrepaid& _diskChargePrepaid);

                    /**
                     * 判断参数 DiskChargePrepaid 是否已赋值
                     * @return DiskChargePrepaid 是否已赋值
                     */
                    bool DiskChargePrepaidHasBeenSet() const;

                    /**
                     * 获取磁盘个数, 默认值: 1
                     * @return DiskCount 磁盘个数, 默认值: 1
                     */
                    int64_t GetDiskCount() const;

                    /**
                     * 设置磁盘个数, 默认值: 1
                     * @param DiskCount 磁盘个数, 默认值: 1
                     */
                    void SetDiskCount(const int64_t& _diskCount);

                    /**
                     * 判断参数 DiskCount 是否已赋值
                     * @return DiskCount 是否已赋值
                     */
                    bool DiskCountHasBeenSet() const;

                private:

                    /**
                     * 磁盘大小
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 硬盘介质类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 新购磁盘包年包月相关参数设置
                     */
                    DiskChargePrepaid m_diskChargePrepaid;
                    bool m_diskChargePrepaidHasBeenSet;

                    /**
                     * 磁盘个数, 默认值: 1
                     */
                    int64_t m_diskCount;
                    bool m_diskCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INQUIREPRICECREATEDISKSREQUEST_H_
