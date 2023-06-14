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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 服务器实例类型信息
                */
                class InstanceTypeInfo : public AbstractModel
                {
                public:
                    InstanceTypeInfo();
                    ~InstanceTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型名，例如“标准型SA1”
                     * @return TypeName 类型名，例如“标准型SA1”
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置类型名，例如“标准型SA1”
                     * @param _typeName 类型名，例如“标准型SA1”
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取类型，例如"SA1.SMALL1"
                     * @return InstanceType 类型，例如"SA1.SMALL1"
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置类型，例如"SA1.SMALL1"
                     * @param _instanceType 类型，例如"SA1.SMALL1"
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取CPU，例如1核就是1
                     * @return Cpu CPU，例如1核就是1
                     * 
                     */
                    uint64_t GetCpu() const;

                    /**
                     * 设置CPU，例如1核就是1
                     * @param _cpu CPU，例如1核就是1
                     * 
                     */
                    void SetCpu(const uint64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取内存，例如2G就是2
                     * @return Memory 内存，例如2G就是2
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存，例如2G就是2
                     * @param _memory 内存，例如2G就是2
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
                     * 获取网络收到包,例如25万PPS就是25
                     * @return NetworkCard 网络收到包,例如25万PPS就是25
                     * 
                     */
                    uint64_t GetNetworkCard() const;

                    /**
                     * 设置网络收到包,例如25万PPS就是25
                     * @param _networkCard 网络收到包,例如25万PPS就是25
                     * 
                     */
                    void SetNetworkCard(const uint64_t& _networkCard);

                    /**
                     * 判断参数 NetworkCard 是否已赋值
                     * @return NetworkCard 是否已赋值
                     * 
                     */
                    bool NetworkCardHasBeenSet() const;

                private:

                    /**
                     * 类型名，例如“标准型SA1”
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 类型，例如"SA1.SMALL1"
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * CPU，例如1核就是1
                     */
                    uint64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 内存，例如2G就是2
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 网络收到包,例如25万PPS就是25
                     */
                    uint64_t m_networkCard;
                    bool m_networkCardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_INSTANCETYPEINFO_H_
