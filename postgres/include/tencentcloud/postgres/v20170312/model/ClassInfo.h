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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLASSINFO_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLASSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 数据库实例规格
                */
                class ClassInfo : public AbstractModel
                {
                public:
                    ClassInfo();
                    ~ClassInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格ID
                     * @return SpecCode 规格ID
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置规格ID
                     * @param _specCode 规格ID
                     * 
                     */
                    void SetSpecCode(const std::string& _specCode);

                    /**
                     * 判断参数 SpecCode 是否已赋值
                     * @return SpecCode 是否已赋值
                     * 
                     */
                    bool SpecCodeHasBeenSet() const;

                    /**
                     * 获取CPU核数
                     * @return CPU CPU核数
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置CPU核数
                     * @param _cPU CPU核数
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
                     * 获取内存大小，单位：MB
                     * @return Memory 内存大小，单位：MB
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存大小，单位：MB
                     * @param _memory 内存大小，单位：MB
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
                     * 获取该规格所支持最大存储容量，单位：GB
                     * @return MaxStorage 该规格所支持最大存储容量，单位：GB
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置该规格所支持最大存储容量，单位：GB
                     * @param _maxStorage 该规格所支持最大存储容量，单位：GB
                     * 
                     */
                    void SetMaxStorage(const uint64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取该规格所支持最小存储容量，单位：GB
                     * @return MinStorage 该规格所支持最小存储容量，单位：GB
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置该规格所支持最小存储容量，单位：GB
                     * @param _minStorage 该规格所支持最小存储容量，单位：GB
                     * 
                     */
                    void SetMinStorage(const uint64_t& _minStorage);

                    /**
                     * 判断参数 MinStorage 是否已赋值
                     * @return MinStorage 是否已赋值
                     * 
                     */
                    bool MinStorageHasBeenSet() const;

                    /**
                     * 获取该规格的预估QPS
                     * @return QPS 该规格的预估QPS
                     * 
                     */
                    uint64_t GetQPS() const;

                    /**
                     * 设置该规格的预估QPS
                     * @param _qPS 该规格的预估QPS
                     * 
                     */
                    void SetQPS(const uint64_t& _qPS);

                    /**
                     * 判断参数 QPS 是否已赋值
                     * @return QPS 是否已赋值
                     * 
                     */
                    bool QPSHasBeenSet() const;

                private:

                    /**
                     * 规格ID
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * CPU核数
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存大小，单位：MB
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 该规格所支持最大存储容量，单位：GB
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 该规格所支持最小存储容量，单位：GB
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * 该规格的预估QPS
                     */
                    uint64_t m_qPS;
                    bool m_qPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLASSINFO_H_
