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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALERESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeRoMinScale返回参数结构体
                */
                class DescribeRoMinScaleResponse : public AbstractModel
                {
                public:
                    DescribeRoMinScaleResponse();
                    ~DescribeRoMinScaleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内存规格大小, 单位为：MB。
                     * @return Memory 内存规格大小, 单位为：MB。
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取磁盘规格大小, 单位为：GB。
                     * @return Volume 磁盘规格大小, 单位为：GB。
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * 内存规格大小, 单位为：MB。
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 磁盘规格大小, 单位为：GB。
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEROMINSCALERESPONSE_H_
