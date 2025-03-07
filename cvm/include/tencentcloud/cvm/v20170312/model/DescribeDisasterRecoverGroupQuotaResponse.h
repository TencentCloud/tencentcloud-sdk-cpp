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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDisasterRecoverGroupQuota返回参数结构体
                */
                class DescribeDisasterRecoverGroupQuotaResponse : public AbstractModel
                {
                public:
                    DescribeDisasterRecoverGroupQuotaResponse();
                    ~DescribeDisasterRecoverGroupQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可创建置放群组数量的上限。
                     * @return GroupQuota 可创建置放群组数量的上限。
                     * 
                     */
                    int64_t GetGroupQuota() const;

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
                     * 判断参数 CvmInHostGroupQuota 是否已赋值
                     * @return CvmInHostGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInHostGroupQuotaHasBeenSet() const;

                    /**
                     * 获取交换机类型容灾组内实例的配额数。
                     * @return CvmInSwGroupQuota 交换机类型容灾组内实例的配额数。
                     * @deprecated
                     */
                    int64_t GetCvmInSwGroupQuota() const;

                    /**
                     * 判断参数 CvmInSwGroupQuota 是否已赋值
                     * @return CvmInSwGroupQuota 是否已赋值
                     * @deprecated
                     */
                    bool CvmInSwGroupQuotaHasBeenSet() const;

                    /**
                     * 获取机架类型容灾组内实例的配额数。
                     * @return CvmInRackGroupQuota 机架类型容灾组内实例的配额数。
                     * 
                     */
                    int64_t GetCvmInRackGroupQuota() const;

                    /**
                     * 判断参数 CvmInRackGroupQuota 是否已赋值
                     * @return CvmInRackGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInRackGroupQuotaHasBeenSet() const;

                    /**
                     * 获取交换机类型容灾组内实例的配额数。
                     * @return CvmInSwitchGroupQuota 交换机类型容灾组内实例的配额数。
                     * 
                     */
                    int64_t GetCvmInSwitchGroupQuota() const;

                    /**
                     * 判断参数 CvmInSwitchGroupQuota 是否已赋值
                     * @return CvmInSwitchGroupQuota 是否已赋值
                     * 
                     */
                    bool CvmInSwitchGroupQuotaHasBeenSet() const;

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
                    int64_t m_cvmInSwGroupQuota;
                    bool m_cvmInSwGroupQuotaHasBeenSet;

                    /**
                     * 机架类型容灾组内实例的配额数。
                     */
                    int64_t m_cvmInRackGroupQuota;
                    bool m_cvmInRackGroupQuotaHasBeenSet;

                    /**
                     * 交换机类型容灾组内实例的配额数。
                     */
                    int64_t m_cvmInSwitchGroupQuota;
                    bool m_cvmInSwitchGroupQuotaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEDISASTERRECOVERGROUPQUOTARESPONSE_H_
