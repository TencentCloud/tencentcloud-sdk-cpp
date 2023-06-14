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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEFIRMWARETASKSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEFIRMWARETASKSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeFirmwareTaskStatistics返回参数结构体
                */
                class DescribeFirmwareTaskStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeFirmwareTaskStatisticsResponse();
                    ~DescribeFirmwareTaskStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取升级成功的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessTotal 升级成功的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccessTotal() const;

                    /**
                     * 判断参数 SuccessTotal 是否已赋值
                     * @return SuccessTotal 是否已赋值
                     * 
                     */
                    bool SuccessTotalHasBeenSet() const;

                    /**
                     * 获取升级失败的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailureTotal 升级失败的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFailureTotal() const;

                    /**
                     * 判断参数 FailureTotal 是否已赋值
                     * @return FailureTotal 是否已赋值
                     * 
                     */
                    bool FailureTotalHasBeenSet() const;

                    /**
                     * 获取正在升级的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradingTotal 正在升级的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpgradingTotal() const;

                    /**
                     * 判断参数 UpgradingTotal 是否已赋值
                     * @return UpgradingTotal 是否已赋值
                     * 
                     */
                    bool UpgradingTotalHasBeenSet() const;

                private:

                    /**
                     * 升级成功的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_successTotal;
                    bool m_successTotalHasBeenSet;

                    /**
                     * 升级失败的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failureTotal;
                    bool m_failureTotalHasBeenSet;

                    /**
                     * 正在升级的设备总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_upgradingTotal;
                    bool m_upgradingTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEFIRMWARETASKSTATISTICSRESPONSE_H_
