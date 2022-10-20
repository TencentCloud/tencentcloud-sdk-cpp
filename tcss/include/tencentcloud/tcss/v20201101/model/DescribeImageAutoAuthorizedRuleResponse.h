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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeImageAutoAuthorizedRule返回参数结构体
                */
                class DescribeImageAutoAuthorizedRuleResponse : public AbstractModel
                {
                public:
                    DescribeImageAutoAuthorizedRuleResponse();
                    ~DescribeImageAutoAuthorizedRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则是否生效，0:不生效，1:已生效
                     * @return IsEnabled 规则是否生效，0:不生效，1:已生效
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RangeType 授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRangeType() const;

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取授权范围是自选主机时的主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostCount 授权范围是自选主机时的主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取每天最大的镜像授权数限制, 0表示无限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDailyCount 每天最大的镜像授权数限制, 0表示无限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxDailyCount() const;

                    /**
                     * 判断参数 MaxDailyCount 是否已赋值
                     * @return MaxDailyCount 是否已赋值
                     */
                    bool MaxDailyCountHasBeenSet() const;

                    /**
                     * 获取规则id，用未设置时为0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则id，用未设置时为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 规则是否生效，0:不生效，1:已生效
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * 授权范围是自选主机时的主机数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * 每天最大的镜像授权数限制, 0表示无限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxDailyCount;
                    bool m_maxDailyCountHasBeenSet;

                    /**
                     * 规则id，用未设置时为0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEIMAGEAUTOAUTHORIZEDRULERESPONSE_H_
