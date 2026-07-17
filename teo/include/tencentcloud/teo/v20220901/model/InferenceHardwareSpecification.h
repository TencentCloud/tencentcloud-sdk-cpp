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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理硬件规格信息。
                */
                class InferenceHardwareSpecification : public AbstractModel
                {
                public:
                    InferenceHardwareSpecification();
                    ~InferenceHardwareSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格标识。
                     * @return Spec 规格标识。
                     * 
                     */
                    std::string GetSpec() const;

                    /**
                     * 设置规格标识。
                     * @param _spec 规格标识。
                     * 
                     */
                    void SetSpec(const std::string& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取规格名称。
                     * @return Name 规格名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规格名称。
                     * @param _name 规格名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取CPU 核数。
                     * @return CPUNum CPU 核数。
                     * 
                     */
                    double GetCPUNum() const;

                    /**
                     * 设置CPU 核数。
                     * @param _cPUNum CPU 核数。
                     * 
                     */
                    void SetCPUNum(const double& _cPUNum);

                    /**
                     * 判断参数 CPUNum 是否已赋值
                     * @return CPUNum 是否已赋值
                     * 
                     */
                    bool CPUNumHasBeenSet() const;

                    /**
                     * 获取内存大小。单位为 MB。
                     * @return MemSize 内存大小。单位为 MB。
                     * 
                     */
                    int64_t GetMemSize() const;

                    /**
                     * 设置内存大小。单位为 MB。
                     * @param _memSize 内存大小。单位为 MB。
                     * 
                     */
                    void SetMemSize(const int64_t& _memSize);

                    /**
                     * 判断参数 MemSize 是否已赋值
                     * @return MemSize 是否已赋值
                     * 
                     */
                    bool MemSizeHasBeenSet() const;

                    /**
                     * 获取GPU 卡数。
                     * @return GPUNum GPU 卡数。
                     * 
                     */
                    double GetGPUNum() const;

                    /**
                     * 设置GPU 卡数。
                     * @param _gPUNum GPU 卡数。
                     * 
                     */
                    void SetGPUNum(const double& _gPUNum);

                    /**
                     * 判断参数 GPUNum 是否已赋值
                     * @return GPUNum 是否已赋值
                     * 
                     */
                    bool GPUNumHasBeenSet() const;

                    /**
                     * 获取显存大小。单位为 MB。
                     * @return GPUMemSize 显存大小。单位为 MB。
                     * 
                     */
                    int64_t GetGPUMemSize() const;

                    /**
                     * 设置显存大小。单位为 MB。
                     * @param _gPUMemSize 显存大小。单位为 MB。
                     * 
                     */
                    void SetGPUMemSize(const int64_t& _gPUMemSize);

                    /**
                     * 判断参数 GPUMemSize 是否已赋值
                     * @return GPUMemSize 是否已赋值
                     * 
                     */
                    bool GPUMemSizeHasBeenSet() const;

                private:

                    /**
                     * 规格标识。
                     */
                    std::string m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * 规格名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * CPU 核数。
                     */
                    double m_cPUNum;
                    bool m_cPUNumHasBeenSet;

                    /**
                     * 内存大小。单位为 MB。
                     */
                    int64_t m_memSize;
                    bool m_memSizeHasBeenSet;

                    /**
                     * GPU 卡数。
                     */
                    double m_gPUNum;
                    bool m_gPUNumHasBeenSet;

                    /**
                     * 显存大小。单位为 MB。
                     */
                    int64_t m_gPUMemSize;
                    bool m_gPUMemSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEHARDWARESPECIFICATION_H_
