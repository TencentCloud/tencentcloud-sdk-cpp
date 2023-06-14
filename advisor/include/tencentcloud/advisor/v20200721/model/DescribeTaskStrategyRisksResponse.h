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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/RiskFieldsDesc.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * DescribeTaskStrategyRisks返回参数结构体
                */
                class DescribeTaskStrategyRisksResponse : public AbstractModel
                {
                public:
                    DescribeTaskStrategyRisksResponse();
                    ~DescribeTaskStrategyRisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取根据此配置，匹配风险实例列表（Risks）对应字段，例如:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{}},{"Field":"InstanceName","FieldName":"名称","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"状态","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"创建失败","PENDING":"创建中","REBOOTING":"重启中","RUNNING":"运行中","SHUTDOWN":"停止待销毁","STARTING":"开机中","STOPPED":"关机","STOPPING":"关机中","TERMINATING":"销毁中"}},{"Field":"Zone","FieldName":"可用区","FieldType":"string","FieldDict":{}},{"Field":"PrivateIPAddresses","FieldName":"IP地址(内)","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"IP地址(公)","FieldType":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"地域","FieldType":"string","FieldDict":{}},{"Field":"Tags","FieldName":"标签","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\":\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]","StrategyId":9}}
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskFieldsDesc 根据此配置，匹配风险实例列表（Risks）对应字段，例如:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{}},{"Field":"InstanceName","FieldName":"名称","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"状态","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"创建失败","PENDING":"创建中","REBOOTING":"重启中","RUNNING":"运行中","SHUTDOWN":"停止待销毁","STARTING":"开机中","STOPPED":"关机","STOPPING":"关机中","TERMINATING":"销毁中"}},{"Field":"Zone","FieldName":"可用区","FieldType":"string","FieldDict":{}},{"Field":"PrivateIPAddresses","FieldName":"IP地址(内)","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"IP地址(公)","FieldType":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"地域","FieldType":"string","FieldDict":{}},{"Field":"Tags","FieldName":"标签","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\":\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]","StrategyId":9}}
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RiskFieldsDesc> GetRiskFieldsDesc() const;

                    /**
                     * 判断参数 RiskFieldsDesc 是否已赋值
                     * @return RiskFieldsDesc 是否已赋值
                     * 
                     */
                    bool RiskFieldsDescHasBeenSet() const;

                    /**
                     * 获取评估项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyId 评估项ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取风险实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskTotalCount 风险实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRiskTotalCount() const;

                    /**
                     * 判断参数 RiskTotalCount 是否已赋值
                     * @return RiskTotalCount 是否已赋值
                     * 
                     */
                    bool RiskTotalCountHasBeenSet() const;

                    /**
                     * 获取风险实例详情列表，需要json decode
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Risks 风险实例详情列表，需要json decode
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRisks() const;

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                    /**
                     * 获取巡检资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceCount 巡检资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceCount() const;

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                private:

                    /**
                     * 根据此配置，匹配风险实例列表（Risks）对应字段，例如:
{"Response":{"RequestId":"111","RiskFieldsDesc":[{"Field":"InstanceId","FieldName":"ID","FieldType":"string","FieldDict":{}},{"Field":"InstanceName","FieldName":"名称","FieldType":"string","FieldDict":{}},{"Field":"InstanceState","FieldName":"状态","FieldType":"string","FieldDict":{"LAUNCH_FAILED":"创建失败","PENDING":"创建中","REBOOTING":"重启中","RUNNING":"运行中","SHUTDOWN":"停止待销毁","STARTING":"开机中","STOPPED":"关机","STOPPING":"关机中","TERMINATING":"销毁中"}},{"Field":"Zone","FieldName":"可用区","FieldType":"string","FieldDict":{}},{"Field":"PrivateIPAddresses","FieldName":"IP地址(内)","FieldType":"stringSlice","FieldDict":{}},{"Field":"PublicIPAddresses","FieldName":"IP地址(公)","FieldType":"stringSlice","FieldDict":{}},{"Field":"Region","FieldName":"地域","FieldType":"string","FieldDict":{}},{"Field":"Tags","FieldName":"标签","FieldType":"tags","FieldDict":{}}],"RiskTotalCount":3,"Risks":"[{\"InstanceId\":\"ins-xxx1\",\"InstanceName\":\"xxx1\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.2\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"},{\"InstanceId\":\"ins-xxx2\",\"InstanceName\":\"xxx2\",\"InstanceState\":\"RUNNING\",\"PrivateIPAddresses\":[\"1.17.64.11\"],\"PublicIPAddresses\":null,\"Region\":\"ap-shanghai\",\"Tags\":null,\"Zone\":\"ap-shanghai-2\"}]","StrategyId":9}}
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RiskFieldsDesc> m_riskFieldsDesc;
                    bool m_riskFieldsDescHasBeenSet;

                    /**
                     * 评估项ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 风险实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_riskTotalCount;
                    bool m_riskTotalCountHasBeenSet;

                    /**
                     * 风险实例详情列表，需要json decode
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_risks;
                    bool m_risksHasBeenSet;

                    /**
                     * 巡检资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSRESPONSE_H_
