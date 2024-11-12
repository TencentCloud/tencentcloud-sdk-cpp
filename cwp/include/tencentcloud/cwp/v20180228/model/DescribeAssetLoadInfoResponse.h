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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/AssetLoadSummary.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAssetLoadInfo返回参数结构体
                */
                class DescribeAssetLoadInfoResponse : public AbstractModel
                {
                public:
                    DescribeAssetLoadInfoResponse();
                    ~DescribeAssetLoadInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取系统负载
                     * @return CpuLoad 系统负载
                     * 
                     */
                    AssetLoadSummary GetCpuLoad() const;

                    /**
                     * 判断参数 CpuLoad 是否已赋值
                     * @return CpuLoad 是否已赋值
                     * 
                     */
                    bool CpuLoadHasBeenSet() const;

                    /**
                     * 获取内存使用率
                     * @return MemLoad 内存使用率
                     * 
                     */
                    AssetLoadSummary GetMemLoad() const;

                    /**
                     * 判断参数 MemLoad 是否已赋值
                     * @return MemLoad 是否已赋值
                     * 
                     */
                    bool MemLoadHasBeenSet() const;

                    /**
                     * 获取硬盘使用率
                     * @return DiskLoad 硬盘使用率
                     * 
                     */
                    AssetLoadSummary GetDiskLoad() const;

                    /**
                     * 判断参数 DiskLoad 是否已赋值
                     * @return DiskLoad 是否已赋值
                     * 
                     */
                    bool DiskLoadHasBeenSet() const;

                private:

                    /**
                     * 系统负载
                     */
                    AssetLoadSummary m_cpuLoad;
                    bool m_cpuLoadHasBeenSet;

                    /**
                     * 内存使用率
                     */
                    AssetLoadSummary m_memLoad;
                    bool m_memLoadHasBeenSet;

                    /**
                     * 硬盘使用率
                     */
                    AssetLoadSummary m_diskLoad;
                    bool m_diskLoadHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEASSETLOADINFORESPONSE_H_
