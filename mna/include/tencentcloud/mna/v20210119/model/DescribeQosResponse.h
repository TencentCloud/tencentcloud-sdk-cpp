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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEQOSRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEQOSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * DescribeQos返回参数结构体
                */
                class DescribeQosResponse : public AbstractModel
                {
                public:
                    DescribeQosResponse();
                    ~DescribeQosResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0：无匹配的加速中会话
1：存在匹配的加速中会话
                     * @return Status 0：无匹配的加速中会话
1：存在匹配的加速中会话
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取手机公网出口IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcPublicIpv4 手机公网出口IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcPublicIpv4() const;

                    /**
                     * 判断参数 SrcPublicIpv4 是否已赋值
                     * @return SrcPublicIpv4 是否已赋值
                     * 
                     */
                    bool SrcPublicIpv4HasBeenSet() const;

                    /**
                     * 获取业务访问目的IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestIpv4 业务访问目的IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetDestIpv4() const;

                    /**
                     * 判断参数 DestIpv4 是否已赋值
                     * @return DestIpv4 是否已赋值
                     * 
                     */
                    bool DestIpv4HasBeenSet() const;

                    /**
                     * 获取当前加速剩余时长（单位秒）有，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 当前加速剩余时长（单位秒）有，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取加速套餐类型，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QosMenu 加速套餐类型，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQosMenu() const;

                    /**
                     * 判断参数 QosMenu 是否已赋值
                     * @return QosMenu 是否已赋值
                     * 
                     */
                    bool QosMenuHasBeenSet() const;

                private:

                    /**
                     * 0：无匹配的加速中会话
1：存在匹配的加速中会话
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 手机公网出口IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcPublicIpv4;
                    bool m_srcPublicIpv4HasBeenSet;

                    /**
                     * 业务访问目的IP，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_destIpv4;
                    bool m_destIpv4HasBeenSet;

                    /**
                     * 当前加速剩余时长（单位秒）有，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 加速套餐类型，仅匹配时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_qosMenu;
                    bool m_qosMenuHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_DESCRIBEQOSRESPONSE_H_
