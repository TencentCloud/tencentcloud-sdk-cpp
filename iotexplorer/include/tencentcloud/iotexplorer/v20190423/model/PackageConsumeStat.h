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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PACKAGECONSUMESTAT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PACKAGECONSUMESTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 云存套餐包消耗统计
                */
                class PackageConsumeStat : public AbstractModel
                {
                public:
                    PackageConsumeStat();
                    ~PackageConsumeStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云存套餐包id
                     * @return PackageId 云存套餐包id
                     * 
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置云存套餐包id
                     * @param _packageId 云存套餐包id
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
                     * 获取云存套餐包名称
                     * @return PackageName 云存套餐包名称
                     * 
                     */
                    std::string GetPackageName() const;

                    /**
                     * 设置云存套餐包名称
                     * @param _packageName 云存套餐包名称
                     * 
                     */
                    void SetPackageName(const std::string& _packageName);

                    /**
                     * 判断参数 PackageName 是否已赋值
                     * @return PackageName 是否已赋值
                     * 
                     */
                    bool PackageNameHasBeenSet() const;

                    /**
                     * 获取消耗个数
                     * @return Cnt 消耗个数
                     * 
                     */
                    uint64_t GetCnt() const;

                    /**
                     * 设置消耗个数
                     * @param _cnt 消耗个数
                     * 
                     */
                    void SetCnt(const uint64_t& _cnt);

                    /**
                     * 判断参数 Cnt 是否已赋值
                     * @return Cnt 是否已赋值
                     * 
                     */
                    bool CntHasBeenSet() const;

                    /**
                     * 获取套餐包单价，单位分
                     * @return Price 套餐包单价，单位分
                     * 
                     */
                    int64_t GetPrice() const;

                    /**
                     * 设置套餐包单价，单位分
                     * @param _price 套餐包单价，单位分
                     * 
                     */
                    void SetPrice(const int64_t& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取消耗来源，1预付费
                     * @return Source 消耗来源，1预付费
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置消耗来源，1预付费
                     * @param _source 消耗来源，1预付费
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 云存套餐包id
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 云存套餐包名称
                     */
                    std::string m_packageName;
                    bool m_packageNameHasBeenSet;

                    /**
                     * 消耗个数
                     */
                    uint64_t m_cnt;
                    bool m_cntHasBeenSet;

                    /**
                     * 套餐包单价，单位分
                     */
                    int64_t m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 消耗来源，1预付费
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_PACKAGECONSUMESTAT_H_
