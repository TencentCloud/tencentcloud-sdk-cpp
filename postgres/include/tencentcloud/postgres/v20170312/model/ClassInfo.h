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
                     * 获取<p>规格ID</p>
                     * @return SpecCode <p>规格ID</p>
                     * 
                     */
                    std::string GetSpecCode() const;

                    /**
                     * 设置<p>规格ID</p>
                     * @param _specCode <p>规格ID</p>
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
                     * 获取<p>CPU核数</p>
                     * @return CPU <p>CPU核数</p>
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置<p>CPU核数</p>
                     * @param _cPU <p>CPU核数</p>
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
                     * 获取<p>内存大小，单位：MB</p>
                     * @return Memory <p>内存大小，单位：MB</p>
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置<p>内存大小，单位：MB</p>
                     * @param _memory <p>内存大小，单位：MB</p>
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
                     * 获取<p>该规格所支持最大存储容量，单位：GB</p>
                     * @return MaxStorage <p>该规格所支持最大存储容量，单位：GB</p>
                     * 
                     */
                    uint64_t GetMaxStorage() const;

                    /**
                     * 设置<p>该规格所支持最大存储容量，单位：GB</p>
                     * @param _maxStorage <p>该规格所支持最大存储容量，单位：GB</p>
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
                     * 获取<p>该规格所支持最小存储容量，单位：GB</p>
                     * @return MinStorage <p>该规格所支持最小存储容量，单位：GB</p>
                     * 
                     */
                    uint64_t GetMinStorage() const;

                    /**
                     * 设置<p>该规格所支持最小存储容量，单位：GB</p>
                     * @param _minStorage <p>该规格所支持最小存储容量，单位：GB</p>
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
                     * 获取<p>该规格的预估QPS</p>
                     * @return QPS <p>该规格的预估QPS</p>
                     * 
                     */
                    uint64_t GetQPS() const;

                    /**
                     * 设置<p>该规格的预估QPS</p>
                     * @param _qPS <p>该规格的预估QPS</p>
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
                     * <p>规格ID</p>
                     */
                    std::string m_specCode;
                    bool m_specCodeHasBeenSet;

                    /**
                     * <p>CPU核数</p>
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * <p>内存大小，单位：MB</p>
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>该规格所支持最大存储容量，单位：GB</p>
                     */
                    uint64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * <p>该规格所支持最小存储容量，单位：GB</p>
                     */
                    uint64_t m_minStorage;
                    bool m_minStorageHasBeenSet;

                    /**
                     * <p>该规格的预估QPS</p>
                     */
                    uint64_t m_qPS;
                    bool m_qPSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CLASSINFO_H_
