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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEQUOTA_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 资源配额。
                */
                class ResourceQuota : public AbstractModel
                {
                public:
                    ResourceQuota();
                    ~ResourceQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU Limit设置。
                     * @return CPULimit CPU Limit设置。
                     * 
                     */
                    std::string GetCPULimit() const;

                    /**
                     * 设置CPU Limit设置。
                     * @param _cPULimit CPU Limit设置。
                     * 
                     */
                    void SetCPULimit(const std::string& _cPULimit);

                    /**
                     * 判断参数 CPULimit 是否已赋值
                     * @return CPULimit 是否已赋值
                     * 
                     */
                    bool CPULimitHasBeenSet() const;

                    /**
                     * 获取内存Limit设置（单位：Mi，Gi，Ti，M，G，T）
                     * @return MemoryLimit 内存Limit设置（单位：Mi，Gi，Ti，M，G，T）
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置内存Limit设置（单位：Mi，Gi，Ti，M，G，T）
                     * @param _memoryLimit 内存Limit设置（单位：Mi，Gi，Ti，M，G，T）
                     * 
                     */
                    void SetMemoryLimit(const std::string& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取Pods数量设置
                     * @return Pods Pods数量设置
                     * 
                     */
                    std::string GetPods() const;

                    /**
                     * 设置Pods数量设置
                     * @param _pods Pods数量设置
                     * 
                     */
                    void SetPods(const std::string& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * 
                     */
                    bool PodsHasBeenSet() const;

                private:

                    /**
                     * CPU Limit设置。
                     */
                    std::string m_cPULimit;
                    bool m_cPULimitHasBeenSet;

                    /**
                     * 内存Limit设置（单位：Mi，Gi，Ti，M，G，T）
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * Pods数量设置
                     */
                    std::string m_pods;
                    bool m_podsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RESOURCEQUOTA_H_
