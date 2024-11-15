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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_

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
                * 资源限制范围。
                */
                class LimitRange : public AbstractModel
                {
                public:
                    LimitRange();
                    ~LimitRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大CPU设置
                     * @return MaxCPU 最大CPU设置
                     * 
                     */
                    std::string GetMaxCPU() const;

                    /**
                     * 设置最大CPU设置
                     * @param _maxCPU 最大CPU设置
                     * 
                     */
                    void SetMaxCPU(const std::string& _maxCPU);

                    /**
                     * 判断参数 MaxCPU 是否已赋值
                     * @return MaxCPU 是否已赋值
                     * 
                     */
                    bool MaxCPUHasBeenSet() const;

                    /**
                     * 获取最大内存设置（单位：Mi，Gi，Ti，M，G，T）
                     * @return MaxMemory 最大内存设置（单位：Mi，Gi，Ti，M，G，T）
                     * 
                     */
                    std::string GetMaxMemory() const;

                    /**
                     * 设置最大内存设置（单位：Mi，Gi，Ti，M，G，T）
                     * @param _maxMemory 最大内存设置（单位：Mi，Gi，Ti，M，G，T）
                     * 
                     */
                    void SetMaxMemory(const std::string& _maxMemory);

                    /**
                     * 判断参数 MaxMemory 是否已赋值
                     * @return MaxMemory 是否已赋值
                     * 
                     */
                    bool MaxMemoryHasBeenSet() const;

                private:

                    /**
                     * 最大CPU设置
                     */
                    std::string m_maxCPU;
                    bool m_maxCPUHasBeenSet;

                    /**
                     * 最大内存设置（单位：Mi，Gi，Ti，M，G，T）
                     */
                    std::string m_maxMemory;
                    bool m_maxMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_LIMITRANGE_H_
