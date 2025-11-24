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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWSWITCHRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWSWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatSwitchListData.h>
#include <tencentcloud/cfw/v20190904/model/CommonIdName.h>
#include <tencentcloud/cfw/v20190904/model/CommonIdNameStatus.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatFwSwitch返回参数结构体
                */
                class DescribeNatFwSwitchResponse : public AbstractModel
                {
                public:
                    DescribeNatFwSwitchResponse();
                    ~DescribeNatFwSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取NAT边界防火墙开关列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data NAT边界防火墙开关列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NatSwitchListData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取开关相关VPC列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcList 开关相关VPC列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonIdName> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     * 
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取开关相关NAT列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NatList 开关相关NAT列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonIdName> GetNatList() const;

                    /**
                     * 判断参数 NatList 是否已赋值
                     * @return NatList 是否已赋值
                     * 
                     */
                    bool NatListHasBeenSet() const;

                    /**
                     * 获取开关相关ROUTE列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RouteList 开关相关ROUTE列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonIdName> GetRouteList() const;

                    /**
                     * 判断参数 RouteList 是否已赋值
                     * @return RouteList 是否已赋值
                     * 
                     */
                    bool RouteListHasBeenSet() const;

                    /**
                     * 获取开启开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnNum 开启开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOnNum() const;

                    /**
                     * 判断参数 OnNum 是否已赋值
                     * @return OnNum 是否已赋值
                     * 
                     */
                    bool OnNumHasBeenSet() const;

                    /**
                     * 获取关闭开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OffNum 关闭开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOffNum() const;

                    /**
                     * 判断参数 OffNum 是否已赋值
                     * @return OffNum 是否已赋值
                     * 
                     */
                    bool OffNumHasBeenSet() const;

                    /**
                     * 获取失败开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailData 失败开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CommonIdNameStatus> GetFailData() const;

                    /**
                     * 判断参数 FailData 是否已赋值
                     * @return FailData 是否已赋值
                     * 
                     */
                    bool FailDataHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * NAT边界防火墙开关列表数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NatSwitchListData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 开关相关VPC列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonIdName> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 开关相关NAT列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonIdName> m_natList;
                    bool m_natListHasBeenSet;

                    /**
                     * 开关相关ROUTE列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonIdName> m_routeList;
                    bool m_routeListHasBeenSet;

                    /**
                     * 开启开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_onNum;
                    bool m_onNumHasBeenSet;

                    /**
                     * 关闭开关个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offNum;
                    bool m_offNumHasBeenSet;

                    /**
                     * 失败开关状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CommonIdNameStatus> m_failData;
                    bool m_failDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATFWSWITCHRESPONSE_H_
