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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_GPUINFO_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_GPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 节点Gpu信息
                */
                class GpuInfo : public AbstractModel
                {
                public:
                    GpuInfo();
                    ~GpuInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Gpu块数
                     * @return GpuCount Gpu块数
                     * 
                     */
                    int64_t GetGpuCount() const;

                    /**
                     * 设置Gpu块数
                     * @param _gpuCount Gpu块数
                     * 
                     */
                    void SetGpuCount(const int64_t& _gpuCount);

                    /**
                     * 判断参数 GpuCount 是否已赋值
                     * @return GpuCount 是否已赋值
                     * 
                     */
                    bool GpuCountHasBeenSet() const;

                    /**
                     * 获取Gpu类型
                     * @return GpuType Gpu类型
                     * 
                     */
                    std::string GetGpuType() const;

                    /**
                     * 设置Gpu类型
                     * @param _gpuType Gpu类型
                     * 
                     */
                    void SetGpuType(const std::string& _gpuType);

                    /**
                     * 判断参数 GpuType 是否已赋值
                     * @return GpuType 是否已赋值
                     * 
                     */
                    bool GpuTypeHasBeenSet() const;

                private:

                    /**
                     * Gpu块数
                     */
                    int64_t m_gpuCount;
                    bool m_gpuCountHasBeenSet;

                    /**
                     * Gpu类型
                     */
                    std::string m_gpuType;
                    bool m_gpuTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_GPUINFO_H_
