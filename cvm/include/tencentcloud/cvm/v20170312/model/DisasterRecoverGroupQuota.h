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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUPQUOTA_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUPQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 置放群组配置数据
                */
                class DisasterRecoverGroupQuota : public AbstractModel
                {
                public:
                    DisasterRecoverGroupQuota();
                    ~DisasterRecoverGroupQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可创建置放群组数量的上限。
                     * @return GroupQuota 可创建置放群组数量的上限。
                     * 
                     */
                    int64_t GetGroupQuota() const;

                    /**
                     * 设置可创建置放群组数量的上限。
                     * @param _groupQuota 可创建置放群组数量的上限。
                     * 
                     */
                    void SetGroupQuota(const int64_t& _groupQuota);

                    /**
                     * 判断参数 GroupQuota 是否已赋值
                     * @return GroupQuota 是否已赋值
                     * 
                     */
                    bool GroupQuotaHasBeenSet() const;

                    /**
                     * 获取当前用户已经创建的置放群组数量。
                     * @return CurrentNum 当前用户已经创建的置放群组数量。
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置当前用户已经创建的置放群组数量。
                     * @param _currentNum 当前用户已经创建的置放群组数量。
                     * 
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取物理机类型容灾组内实例的配额数。
                     * @return CvmInHostGroupQuota 物理机类型容灾组内实例的配额数。
                     * 
                     */
                    int64_t GetCvmInHostGroupQuota() const;

                    /**
                     * 设置物理机类型容灾组内实例的配额数。
                     * @param _cvmInHostGroupQuota 物理机类型容灾组内实例的配额数。
                     * 
                     */
                    void SetCvmInHostGroupQuota(const int64_t& _cvmInHostGroupQuota);

                    /**
                     * 判断参数 CvmInHostGroupQuota 是否已赋值
                     * @return CvmInHostGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInHostGroupQuotaHasBeenSet() const;

                    /**
                     * 获取交换机类型容灾组内实例的配额数。
                     * @return CvmInSwitchGroupQuota 交换机类型容灾组内实例的配额数。
                     * 
                     */
                    int64_t GetCvmInSwitchGroupQuota() const;

                    /**
                     * 设置交换机类型容灾组内实例的配额数。
                     * @param _cvmInSwitchGroupQuota 交换机类型容灾组内实例的配额数。
                     * 
                     */
                    void SetCvmInSwitchGroupQuota(const int64_t& _cvmInSwitchGroupQuota);

                    /**
                     * 判断参数 CvmInSwitchGroupQuota 是否已赋值
                     * @return CvmInSwitchGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInSwitchGroupQuotaHasBeenSet() const;

                    /**
                     * 获取机架类型容灾组内实例的配额数。
                     * @return CvmInRackGroupQuota 机架类型容灾组内实例的配额数。
                     * 
                     */
                    int64_t GetCvmInRackGroupQuota() const;

                    /**
                     * 设置机架类型容灾组内实例的配额数。
                     * @param _cvmInRackGroupQuota 机架类型容灾组内实例的配额数。
                     * 
                     */
                    void SetCvmInRackGroupQuota(const int64_t& _cvmInRackGroupQuota);

                    /**
                     * 判断参数 CvmInRackGroupQuota 是否已赋值
                     * @return CvmInRackGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInRackGroupQuotaHasBeenSet() const;

                private:

                    /**
                     * 可创建置放群组数量的上限。
                     */
                    int64_t m_groupQuota;
                    bool m_groupQuotaHasBeenSet;

                    /**
                     * 当前用户已经创建的置放群组数量。
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 物理机类型容灾组内实例的配额数。
                     */
                    int64_t m_cvmInHostGroupQuota;
                    bool m_cvmInHostGroupQuotaHasBeenSet;

                    /**
                     * 交换机类型容灾组内实例的配额数。
                     */
                    int64_t m_cvmInSwitchGroupQuota;
                    bool m_cvmInSwitchGroupQuotaHasBeenSet;

                    /**
                     * 机架类型容灾组内实例的配额数。
                     */
                    int64_t m_cvmInRackGroupQuota;
                    bool m_cvmInRackGroupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUPQUOTA_H_
