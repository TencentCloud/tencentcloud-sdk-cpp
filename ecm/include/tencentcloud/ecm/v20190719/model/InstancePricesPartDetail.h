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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEPRICESPARTDETAIL_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEPRICESPARTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/PriceDetail.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 描述实例的价格相关
                */
                class InstancePricesPartDetail : public AbstractModel
                {
                public:
                    InstancePricesPartDetail();
                    ~InstancePricesPartDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取cpu的价格信息
                     * @return CpuPrice cpu的价格信息
                     * 
                     */
                    PriceDetail GetCpuPrice() const;

                    /**
                     * 设置cpu的价格信息
                     * @param _cpuPrice cpu的价格信息
                     * 
                     */
                    void SetCpuPrice(const PriceDetail& _cpuPrice);

                    /**
                     * 判断参数 CpuPrice 是否已赋值
                     * @return CpuPrice 是否已赋值
                     * 
                     */
                    bool CpuPriceHasBeenSet() const;

                    /**
                     * 获取内存价格信息
                     * @return MemPrice 内存价格信息
                     * 
                     */
                    PriceDetail GetMemPrice() const;

                    /**
                     * 设置内存价格信息
                     * @param _memPrice 内存价格信息
                     * 
                     */
                    void SetMemPrice(const PriceDetail& _memPrice);

                    /**
                     * 判断参数 MemPrice 是否已赋值
                     * @return MemPrice 是否已赋值
                     * 
                     */
                    bool MemPriceHasBeenSet() const;

                    /**
                     * 获取磁盘价格信息
                     * @return DisksPrice 磁盘价格信息
                     * 
                     */
                    PriceDetail GetDisksPrice() const;

                    /**
                     * 设置磁盘价格信息
                     * @param _disksPrice 磁盘价格信息
                     * 
                     */
                    void SetDisksPrice(const PriceDetail& _disksPrice);

                    /**
                     * 判断参数 DisksPrice 是否已赋值
                     * @return DisksPrice 是否已赋值
                     * 
                     */
                    bool DisksPriceHasBeenSet() const;

                private:

                    /**
                     * cpu的价格信息
                     */
                    PriceDetail m_cpuPrice;
                    bool m_cpuPriceHasBeenSet;

                    /**
                     * 内存价格信息
                     */
                    PriceDetail m_memPrice;
                    bool m_memPriceHasBeenSet;

                    /**
                     * 磁盘价格信息
                     */
                    PriceDetail m_disksPrice;
                    bool m_disksPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_INSTANCEPRICESPARTDETAIL_H_
