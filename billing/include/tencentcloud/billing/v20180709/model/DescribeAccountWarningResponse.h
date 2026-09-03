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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTWARNINGRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTWARNINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAccountWarning返回参数结构体
                */
                class DescribeAccountWarningResponse : public AbstractModel
                {
                public:
                    DescribeAccountWarningResponse();
                    ~DescribeAccountWarningResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取余额阈值（单位：国内分、国际美分）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Threshold 余额阈值（单位：国内分、国际美分）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThreshold() const;

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                    /**
                     * 获取是否开启余额告警 1 开启 0 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Open 是否开启余额告警 1 开启 0 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOpen() const;

                    /**
                     * 判断参数 Open 是否已赋值
                     * @return Open 是否已赋值
                     * 
                     */
                    bool OpenHasBeenSet() const;

                private:

                    /**
                     * 余额阈值（单位：国内分、国际美分）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_threshold;
                    bool m_thresholdHasBeenSet;

                    /**
                     * 是否开启余额告警 1 开启 0 关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_open;
                    bool m_openHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEACCOUNTWARNINGRESPONSE_H_
