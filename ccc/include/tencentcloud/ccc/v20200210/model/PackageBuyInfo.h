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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 套餐包购买信息
                */
                class PackageBuyInfo : public AbstractModel
                {
                public:
                    PackageBuyInfo();
                    ~PackageBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐包Id
                     * @return PackageId 套餐包Id
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置套餐包Id
                     * @param _packageId 套餐包Id
                     * 
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     * 
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取套餐包类型，0-外呼套餐包|1-400呼入套餐包
                     * @return Type 套餐包类型，0-外呼套餐包|1-400呼入套餐包
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置套餐包类型，0-外呼套餐包|1-400呼入套餐包
                     * @param _type 套餐包类型，0-外呼套餐包|1-400呼入套餐包
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取套餐包总量
                     * @return CapacitySize 套餐包总量
                     * 
                     */
                    int64_t GetCapacitySize() const;

                    /**
                     * 设置套餐包总量
                     * @param _capacitySize 套餐包总量
                     * 
                     */
                    void SetCapacitySize(const int64_t& _capacitySize);

                    /**
                     * 判断参数 CapacitySize 是否已赋值
                     * @return CapacitySize 是否已赋值
                     * 
                     */
                    bool CapacitySizeHasBeenSet() const;

                    /**
                     * 获取套餐包剩余量
                     * @return CapacityRemain 套餐包剩余量
                     * 
                     */
                    int64_t GetCapacityRemain() const;

                    /**
                     * 设置套餐包剩余量
                     * @param _capacityRemain 套餐包剩余量
                     * 
                     */
                    void SetCapacityRemain(const int64_t& _capacityRemain);

                    /**
                     * 判断参数 CapacityRemain 是否已赋值
                     * @return CapacityRemain 是否已赋值
                     * 
                     */
                    bool CapacityRemainHasBeenSet() const;

                    /**
                     * 获取购买时间戳
                     * @return BuyTime 购买时间戳
                     * 
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置购买时间戳
                     * @param _buyTime 购买时间戳
                     * 
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     * 
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取截止时间戳
                     * @return EndTime 截止时间戳
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止时间戳
                     * @param _endTime 截止时间戳
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 套餐包Id
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 套餐包类型，0-外呼套餐包|1-400呼入套餐包
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 套餐包总量
                     */
                    int64_t m_capacitySize;
                    bool m_capacitySizeHasBeenSet;

                    /**
                     * 套餐包剩余量
                     */
                    int64_t m_capacityRemain;
                    bool m_capacityRemainHasBeenSet;

                    /**
                     * 购买时间戳
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 截止时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_PACKAGEBUYINFO_H_
