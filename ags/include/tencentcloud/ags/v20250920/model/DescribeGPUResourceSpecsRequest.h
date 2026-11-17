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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESPECSREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESPECSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * DescribeGPUResourceSpecs请求参数结构体
                */
                class DescribeGPUResourceSpecsRequest : public AbstractModel
                {
                public:
                    DescribeGPUResourceSpecsRequest();
                    ~DescribeGPUResourceSpecsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>GPU 类型标识，例如 5090d；指定时必须同时提供 CPU、Memory、GPUNum。</p>
                     * @return GPUType <p>GPU 类型标识，例如 5090d；指定时必须同时提供 CPU、Memory、GPUNum。</p>
                     * 
                     */
                    std::string GetGPUType() const;

                    /**
                     * 设置<p>GPU 类型标识，例如 5090d；指定时必须同时提供 CPU、Memory、GPUNum。</p>
                     * @param _gPUType <p>GPU 类型标识，例如 5090d；指定时必须同时提供 CPU、Memory、GPUNum。</p>
                     * 
                     */
                    void SetGPUType(const std::string& _gPUType);

                    /**
                     * 判断参数 GPUType 是否已赋值
                     * @return GPUType 是否已赋值
                     * 
                     */
                    bool GPUTypeHasBeenSet() const;

                    /**
                     * 获取<p>CPU 核数，必须为正数；与 GPUType、Memory、GPUNum 同时提供。</p>
                     * @return CPU <p>CPU 核数，必须为正数；与 GPUType、Memory、GPUNum 同时提供。</p>
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置<p>CPU 核数，必须为正数；与 GPUType、Memory、GPUNum 同时提供。</p>
                     * @param _cPU <p>CPU 核数，必须为正数；与 GPUType、Memory、GPUNum 同时提供。</p>
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取<p>主机内存 GiB，必须为正数；与 GPUType、CPU、GPUNum 同时提供。</p>
                     * @return Memory <p>主机内存 GiB，必须为正数；与 GPUType、CPU、GPUNum 同时提供。</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>主机内存 GiB，必须为正数；与 GPUType、CPU、GPUNum 同时提供。</p>
                     * @param _memory <p>主机内存 GiB，必须为正数；与 GPUType、CPU、GPUNum 同时提供。</p>
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>单台 GPU 卡数，必须为正整数；与 GPUType、CPU、Memory 同时提供。</p>
                     * @return GPUNum <p>单台 GPU 卡数，必须为正整数；与 GPUType、CPU、Memory 同时提供。</p>
                     * 
                     */
                    uint64_t GetGPUNum() const;

                    /**
                     * 设置<p>单台 GPU 卡数，必须为正整数；与 GPUType、CPU、Memory 同时提供。</p>
                     * @param _gPUNum <p>单台 GPU 卡数，必须为正整数；与 GPUType、CPU、Memory 同时提供。</p>
                     * 
                     */
                    void SetGPUNum(const uint64_t& _gPUNum);

                    /**
                     * 判断参数 GPUNum 是否已赋值
                     * @return GPUNum 是否已赋值
                     * 
                     */
                    bool GPUNumHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * @return Offset <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * @param _offset <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * @return Limit <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * @param _limit <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>GPU 类型标识，例如 5090d；指定时必须同时提供 CPU、Memory、GPUNum。</p>
                     */
                    std::string m_gPUType;
                    bool m_gPUTypeHasBeenSet;

                    /**
                     * <p>CPU 核数，必须为正数；与 GPUType、Memory、GPUNum 同时提供。</p>
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>主机内存 GiB，必须为正数；与 GPUType、CPU、GPUNum 同时提供。</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>单台 GPU 卡数，必须为正整数；与 GPUType、CPU、Memory 同时提供。</p>
                     */
                    uint64_t m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为 0，必须大于等于 0。</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页条数，省略或传 0 时取 100；非零取值范围 1–500。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DESCRIBEGPURESOURCESPECSREQUEST_H_
