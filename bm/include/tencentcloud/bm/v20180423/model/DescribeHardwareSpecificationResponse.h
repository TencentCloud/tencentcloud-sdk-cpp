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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHARDWARESPECIFICATIONRESPONSE_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHARDWARESPECIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bm/v20180423/model/CpuInfo.h>
#include <tencentcloud/bm/v20180423/model/DiskInfo.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeHardwareSpecification返回参数结构体
                */
                class DescribeHardwareSpecificationResponse : public AbstractModel
                {
                public:
                    DescribeHardwareSpecificationResponse();
                    ~DescribeHardwareSpecificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CPU型号列表
                     * @return CpuInfoSet CPU型号列表
                     * 
                     */
                    std::vector<CpuInfo> GetCpuInfoSet() const;

                    /**
                     * 判断参数 CpuInfoSet 是否已赋值
                     * @return CpuInfoSet 是否已赋值
                     * 
                     */
                    bool CpuInfoSetHasBeenSet() const;

                    /**
                     * 获取内存的取值，单位为G
                     * @return MemSet 内存的取值，单位为G
                     * 
                     */
                    std::vector<uint64_t> GetMemSet() const;

                    /**
                     * 判断参数 MemSet 是否已赋值
                     * @return MemSet 是否已赋值
                     * 
                     */
                    bool MemSetHasBeenSet() const;

                    /**
                     * 获取硬盘型号列表
                     * @return DiskInfoSet 硬盘型号列表
                     * 
                     */
                    std::vector<DiskInfo> GetDiskInfoSet() const;

                    /**
                     * 判断参数 DiskInfoSet 是否已赋值
                     * @return DiskInfoSet 是否已赋值
                     * 
                     */
                    bool DiskInfoSetHasBeenSet() const;

                private:

                    /**
                     * CPU型号列表
                     */
                    std::vector<CpuInfo> m_cpuInfoSet;
                    bool m_cpuInfoSetHasBeenSet;

                    /**
                     * 内存的取值，单位为G
                     */
                    std::vector<uint64_t> m_memSet;
                    bool m_memSetHasBeenSet;

                    /**
                     * 硬盘型号列表
                     */
                    std::vector<DiskInfo> m_diskInfoSet;
                    bool m_diskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHARDWARESPECIFICATIONRESPONSE_H_
