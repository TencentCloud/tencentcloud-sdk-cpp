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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RiskMainClass.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeInjectRiskyServiceSwitch返回参数结构体
                */
                class DescribeInjectRiskyServiceSwitchResponse : public AbstractModel
                {
                public:
                    DescribeInjectRiskyServiceSwitchResponse();
                    ~DescribeInjectRiskyServiceSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内存马是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JavaShellInjectRiskyServiceStatus 内存马是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetJavaShellInjectRiskyServiceStatus() const;

                    /**
                     * 判断参数 JavaShellInjectRiskyServiceStatus 是否已赋值
                     * @return JavaShellInjectRiskyServiceStatus 是否已赋值
                     * 
                     */
                    bool JavaShellInjectRiskyServiceStatusHasBeenSet() const;

                    /**
                     * 获取主机rasp是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RaspInjectRiskyServiceStatus 主机rasp是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRaspInjectRiskyServiceStatus() const;

                    /**
                     * 判断参数 RaspInjectRiskyServiceStatus 是否已赋值
                     * @return RaspInjectRiskyServiceStatus 是否已赋值
                     * 
                     */
                    bool RaspInjectRiskyServiceStatusHasBeenSet() const;

                    /**
                     * 获取风险服务总条数
                     * @return TotalCount 风险服务总条数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取风险服务列表
                     * @return List 风险服务列表
                     * 
                     */
                    std::vector<RiskMainClass> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 内存马是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_javaShellInjectRiskyServiceStatus;
                    bool m_javaShellInjectRiskyServiceStatusHasBeenSet;

                    /**
                     * 主机rasp是否注入风险服务配置，0: 用户没有操作过，默认不注入 1: 注入,2:用户指定不注入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_raspInjectRiskyServiceStatus;
                    bool m_raspInjectRiskyServiceStatusHasBeenSet;

                    /**
                     * 风险服务总条数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 风险服务列表
                     */
                    std::vector<RiskMainClass> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEINJECTRISKYSERVICESWITCHRESPONSE_H_
