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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/DocLink.h>
#include <tencentcloud/adp/v20260520/model/DocParseConfig.h>
#include <tencentcloud/adp/v20260520/model/DocSummary.h>
#include <tencentcloud/adp/v20260520/model/DocSwitch.h>
#include <tencentcloud/adp/v20260520/model/DocUpdatePeriod.h>
#include <tencentcloud/adp/v20260520/model/UserAccessConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeDoc返回参数结构体
                */
                class DescribeDocResponse : public AbstractModel
                {
                public:
                    DescribeDocResponse();
                    ~DescribeDocResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文档链接（外部链接 + COS 链接）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DocLink <p>文档链接（外部链接 + COS 链接）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocLink GetDocLink() const;

                    /**
                     * 判断参数 DocLink 是否已赋值
                     * @return DocLink 是否已赋值
                     * 
                     */
                    bool DocLinkHasBeenSet() const;

                    /**
                     * 获取<p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParseConfig <p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocParseConfig GetParseConfig() const;

                    /**
                     * 判断参数 ParseConfig 是否已赋值
                     * @return ParseConfig 是否已赋值
                     * 
                     */
                    bool ParseConfigHasBeenSet() const;

                    /**
                     * 获取<p>文档基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Summary <p>文档基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocSummary GetSummary() const;

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Switch <p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocSwitch GetSwitch() const;

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取<p>更新周期配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatePeriod <p>更新周期配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DocUpdatePeriod GetUpdatePeriod() const;

                    /**
                     * 判断参数 UpdatePeriod 是否已赋值
                     * @return UpdatePeriod 是否已赋值
                     * 
                     */
                    bool UpdatePeriodHasBeenSet() const;

                    /**
                     * 获取<p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAccessConfig <p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UserAccessConfig GetUserAccessConfig() const;

                    /**
                     * 判断参数 UserAccessConfig 是否已赋值
                     * @return UserAccessConfig 是否已赋值
                     * 
                     */
                    bool UserAccessConfigHasBeenSet() const;

                private:

                    /**
                     * <p>文档链接（外部链接 + COS 链接）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocLink m_docLink;
                    bool m_docLinkHasBeenSet;

                    /**
                     * <p>解析配置（分割规则、内容过滤等）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocParseConfig m_parseConfig;
                    bool m_parseConfigHasBeenSet;

                    /**
                     * <p>文档基础信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>开关配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocSwitch m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * <p>更新周期配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DocUpdatePeriod m_updatePeriod;
                    bool m_updatePeriodHasBeenSet;

                    /**
                     * <p>用户访问配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserAccessConfig m_userAccessConfig;
                    bool m_userAccessConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBEDOCRESPONSE_H_
