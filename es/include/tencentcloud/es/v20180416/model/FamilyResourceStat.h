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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_FAMILYRESOURCESTAT_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_FAMILYRESOURCESTAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 机型族下单个机型族的资源可用性明细
                */
                class FamilyResourceStat : public AbstractModel
                {
                public:
                    FamilyResourceStat();
                    ~FamilyResourceStat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>机型族，如 &quot;SA5&quot;</p>
                     * @return InsFamily <p>机型族，如 &quot;SA5&quot;</p>
                     * 
                     */
                    std::string GetInsFamily() const;

                    /**
                     * 设置<p>机型族，如 &quot;SA5&quot;</p>
                     * @param _insFamily <p>机型族，如 &quot;SA5&quot;</p>
                     * 
                     */
                    void SetInsFamily(const std::string& _insFamily);

                    /**
                     * 判断参数 InsFamily 是否已赋值
                     * @return InsFamily 是否已赋值
                     * 
                     */
                    bool InsFamilyHasBeenSet() const;

                    /**
                     * 获取<p>CVM资源是否有货</p>
                     * @return CvmAvailable <p>CVM资源是否有货</p>
                     * 
                     */
                    bool GetCvmAvailable() const;

                    /**
                     * 设置<p>CVM资源是否有货</p>
                     * @param _cvmAvailable <p>CVM资源是否有货</p>
                     * 
                     */
                    void SetCvmAvailable(const bool& _cvmAvailable);

                    /**
                     * 判断参数 CvmAvailable 是否已赋值
                     * @return CvmAvailable 是否已赋值
                     * 
                     */
                    bool CvmAvailableHasBeenSet() const;

                    /**
                     * 获取<p>系统盘资源是否有货</p>
                     * @return SysDiskAvailable <p>系统盘资源是否有货</p>
                     * 
                     */
                    bool GetSysDiskAvailable() const;

                    /**
                     * 设置<p>系统盘资源是否有货</p>
                     * @param _sysDiskAvailable <p>系统盘资源是否有货</p>
                     * 
                     */
                    void SetSysDiskAvailable(const bool& _sysDiskAvailable);

                    /**
                     * 判断参数 SysDiskAvailable 是否已赋值
                     * @return SysDiskAvailable 是否已赋值
                     * 
                     */
                    bool SysDiskAvailableHasBeenSet() const;

                    /**
                     * 获取<p>该盘型数据盘资源是否有货</p>
                     * @return DiskAvailable <p>该盘型数据盘资源是否有货</p>
                     * 
                     */
                    bool GetDiskAvailable() const;

                    /**
                     * 设置<p>该盘型数据盘资源是否有货</p>
                     * @param _diskAvailable <p>该盘型数据盘资源是否有货</p>
                     * 
                     */
                    void SetDiskAvailable(const bool& _diskAvailable);

                    /**
                     * 判断参数 DiskAvailable 是否已赋值
                     * @return DiskAvailable 是否已赋值
                     * 
                     */
                    bool DiskAvailableHasBeenSet() const;

                    /**
                     * 获取<p>三类资源是否全部有货(可直接购买)</p>
                     * @return Purchasable <p>三类资源是否全部有货(可直接购买)</p>
                     * 
                     */
                    bool GetPurchasable() const;

                    /**
                     * 设置<p>三类资源是否全部有货(可直接购买)</p>
                     * @param _purchasable <p>三类资源是否全部有货(可直接购买)</p>
                     * 
                     */
                    void SetPurchasable(const bool& _purchasable);

                    /**
                     * 判断参数 Purchasable 是否已赋值
                     * @return Purchasable 是否已赋值
                     * 
                     */
                    bool PurchasableHasBeenSet() const;

                    /**
                     * 获取<p>缺少的资源，取值 CVM/SYSDISK/DISK；为空表示不缺</p>
                     * @return MissingResources <p>缺少的资源，取值 CVM/SYSDISK/DISK；为空表示不缺</p>
                     * 
                     */
                    std::vector<std::string> GetMissingResources() const;

                    /**
                     * 设置<p>缺少的资源，取值 CVM/SYSDISK/DISK；为空表示不缺</p>
                     * @param _missingResources <p>缺少的资源，取值 CVM/SYSDISK/DISK；为空表示不缺</p>
                     * 
                     */
                    void SetMissingResources(const std::vector<std::string>& _missingResources);

                    /**
                     * 判断参数 MissingResources 是否已赋值
                     * @return MissingResources 是否已赋值
                     * 
                     */
                    bool MissingResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>机型族，如 &quot;SA5&quot;</p>
                     */
                    std::string m_insFamily;
                    bool m_insFamilyHasBeenSet;

                    /**
                     * <p>CVM资源是否有货</p>
                     */
                    bool m_cvmAvailable;
                    bool m_cvmAvailableHasBeenSet;

                    /**
                     * <p>系统盘资源是否有货</p>
                     */
                    bool m_sysDiskAvailable;
                    bool m_sysDiskAvailableHasBeenSet;

                    /**
                     * <p>该盘型数据盘资源是否有货</p>
                     */
                    bool m_diskAvailable;
                    bool m_diskAvailableHasBeenSet;

                    /**
                     * <p>三类资源是否全部有货(可直接购买)</p>
                     */
                    bool m_purchasable;
                    bool m_purchasableHasBeenSet;

                    /**
                     * <p>缺少的资源，取值 CVM/SYSDISK/DISK；为空表示不缺</p>
                     */
                    std::vector<std::string> m_missingResources;
                    bool m_missingResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_FAMILYRESOURCESTAT_H_
