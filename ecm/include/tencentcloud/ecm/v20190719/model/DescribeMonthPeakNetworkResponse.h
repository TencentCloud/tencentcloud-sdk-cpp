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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/MonthNetwork.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeMonthPeakNetwork返回参数结构体
                */
                class DescribeMonthPeakNetworkResponse : public AbstractModel
                {
                public:
                    DescribeMonthPeakNetworkResponse();
                    ~DescribeMonthPeakNetworkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取无
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonthNetWorkData 无
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MonthNetwork> GetMonthNetWorkData() const;

                    /**
                     * 判断参数 MonthNetWorkData 是否已赋值
                     * @return MonthNetWorkData 是否已赋值
                     * 
                     */
                    bool MonthNetWorkDataHasBeenSet() const;

                private:

                    /**
                     * 无
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MonthNetwork> m_monthNetWorkData;
                    bool m_monthNetWorkDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DESCRIBEMONTHPEAKNETWORKRESPONSE_H_
