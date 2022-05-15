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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeFirstLinkSession返回参数结构体
                */
                class DescribeFirstLinkSessionResponse : public AbstractModel
                {
                public:
                    DescribeFirstLinkSessionResponse();
                    ~DescribeFirstLinkSessionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话状态，具体如下：
1： 加速中；
0： 非加速中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 会话状态，具体如下：
1： 加速中；
0： 非加速中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取剩余加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 剩余加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取加速套餐类型。
套餐说明如下：
T100K：上/下行保障100kbps；
BD4M：下行带宽保障4Mbps；
BU4M：上行带宽保障4Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuiteType 加速套餐类型。
套餐说明如下：
T100K：上/下行保障100kbps；
BD4M：下行带宽保障4Mbps；
BU4M：上行带宽保障4Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSuiteType() const;

                    /**
                     * 判断参数 SuiteType 是否已赋值
                     * @return SuiteType 是否已赋值
                     */
                    bool SuiteTypeHasBeenSet() const;

                    /**
                     * 获取加速终端的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcPublicIpv4 加速终端的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrcPublicIpv4() const;

                    /**
                     * 判断参数 SrcPublicIpv4 是否已赋值
                     * @return SrcPublicIpv4 是否已赋值
                     */
                    bool SrcPublicIpv4HasBeenSet() const;

                    /**
                     * 获取加速目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestIpv4 加速目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDestIpv4() const;

                    /**
                     * 判断参数 DestIpv4 是否已赋值
                     * @return DestIpv4 是否已赋值
                     */
                    bool DestIpv4HasBeenSet() const;

                private:

                    /**
                     * 会话状态，具体如下：
1： 加速中；
0： 非加速中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 剩余加速时间，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 加速套餐类型。
套餐说明如下：
T100K：上/下行保障100kbps；
BD4M：下行带宽保障4Mbps；
BU4M：上行带宽保障4Mbps。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suiteType;
                    bool m_suiteTypeHasBeenSet;

                    /**
                     * 加速终端的公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcPublicIpv4;
                    bool m_srcPublicIpv4HasBeenSet;

                    /**
                     * 加速目标ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_destIpv4;
                    bool m_destIpv4HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEFIRSTLINKSESSIONRESPONSE_H_
