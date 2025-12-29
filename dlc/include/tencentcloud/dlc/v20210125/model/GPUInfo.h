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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GPUINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GPUINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GPU 机型
                */
                class GPUInfo : public AbstractModel
                {
                public:
                    GPUInfo();
                    ~GPUInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项
                     * @return BillingItem 计费项
                     * 
                     */
                    std::string GetBillingItem() const;

                    /**
                     * 设置计费项
                     * @param _billingItem 计费项
                     * 
                     */
                    void SetBillingItem(const std::string& _billingItem);

                    /**
                     * 判断参数 BillingItem 是否已赋值
                     * @return BillingItem 是否已赋值
                     * 
                     */
                    bool BillingItemHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return Model 机型
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置机型
                     * @param _model 机型
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取cu
                     * @return CU cu
                     * 
                     */
                    int64_t GetCU() const;

                    /**
                     * 设置cu
                     * @param _cU cu
                     * 
                     */
                    void SetCU(const int64_t& _cU);

                    /**
                     * 判断参数 CU 是否已赋值
                     * @return CU 是否已赋值
                     * 
                     */
                    bool CUHasBeenSet() const;

                    /**
                     * 获取gpu 机型
                     * @return Type gpu 机型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置gpu 机型
                     * @param _type gpu 机型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Num 数量
                     * 
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置数量
                     * @param _num 数量
                     * 
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取显存
                     * @return GPUMemory 显存
                     * 
                     */
                    int64_t GetGPUMemory() const;

                    /**
                     * 设置显存
                     * @param _gPUMemory 显存
                     * 
                     */
                    void SetGPUMemory(const int64_t& _gPUMemory);

                    /**
                     * 判断参数 GPUMemory 是否已赋值
                     * @return GPUMemory 是否已赋值
                     * 
                     */
                    bool GPUMemoryHasBeenSet() const;

                    /**
                     * 获取机型
                     * @return InstanceType 机型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置机型
                     * @param _instanceType 机型
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
                     * 获取售卖情况（1-缺货，2-低库存，3-充足）
                     * @return SaleStatus 售卖情况（1-缺货，2-低库存，3-充足）
                     * 
                     */
                    int64_t GetSaleStatus() const;

                    /**
                     * 设置售卖情况（1-缺货，2-低库存，3-充足）
                     * @param _saleStatus 售卖情况（1-缺货，2-低库存，3-充足）
                     * 
                     */
                    void SetSaleStatus(const int64_t& _saleStatus);

                    /**
                     * 判断参数 SaleStatus 是否已赋值
                     * @return SaleStatus 是否已赋值
                     * 
                     */
                    bool SaleStatusHasBeenSet() const;

                private:

                    /**
                     * 计费项
                     */
                    std::string m_billingItem;
                    bool m_billingItemHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * cu
                     */
                    int64_t m_cU;
                    bool m_cUHasBeenSet;

                    /**
                     * gpu 机型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 显存
                     */
                    int64_t m_gPUMemory;
                    bool m_gPUMemoryHasBeenSet;

                    /**
                     * 机型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 售卖情况（1-缺货，2-低库存，3-充足）
                     */
                    int64_t m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GPUINFO_H_
