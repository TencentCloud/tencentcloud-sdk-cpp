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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCELISTRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/DataCompliance.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeComplianceList返回参数结构体
                */
                class DescribeComplianceListResponse : public AbstractModel
                {
                public:
                    DescribeComplianceListResponse();
                    ~DescribeComplianceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检查项列表
                     * @return Data 检查项列表
                     * 
                     */
                    std::vector<DataCompliance> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取总检查资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTotalNum 总检查资产数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetTotalNum() const;

                    /**
                     * 判断参数 AssetTotalNum 是否已赋值
                     * @return AssetTotalNum 是否已赋值
                     * 
                     */
                    bool AssetTotalNumHasBeenSet() const;

                    /**
                     * 获取总检查项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigTotalNum 总检查项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetConfigTotalNum() const;

                    /**
                     * 判断参数 ConfigTotalNum 是否已赋值
                     * @return ConfigTotalNum 是否已赋值
                     * 
                     */
                    bool ConfigTotalNumHasBeenSet() const;

                private:

                    /**
                     * 检查项列表
                     */
                    std::vector<DataCompliance> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 总检查资产数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetTotalNum;
                    bool m_assetTotalNumHasBeenSet;

                    /**
                     * 总检查项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_configTotalNum;
                    bool m_configTotalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCELISTRESPONSE_H_
