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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VULBaseInfo.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeVULList返回参数结构体
                */
                class DescribeVULListResponse : public AbstractModel
                {
                public:
                    DescribeVULListResponse();
                    ~DescribeVULListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取漏洞列表
                     * @return Data 漏洞列表
                     * 
                     */
                    std::vector<VULBaseInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取漏洞类型列表
                     * @return VULTypeLists 漏洞类型列表
                     * 
                     */
                    std::vector<FilterDataObject> GetVULTypeLists() const;

                    /**
                     * 判断参数 VULTypeLists 是否已赋值
                     * @return VULTypeLists 是否已赋值
                     * 
                     */
                    bool VULTypeListsHasBeenSet() const;

                    /**
                     * 获取风险等级列表
                     * @return RiskLevels 风险等级列表
                     * 
                     */
                    std::vector<FilterDataObject> GetRiskLevels() const;

                    /**
                     * 判断参数 RiskLevels 是否已赋值
                     * @return RiskLevels 是否已赋值
                     * 
                     */
                    bool RiskLevelsHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<FilterDataObject> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取产品支持情况
                     * @return ProductSupport 产品支持情况
                     * 
                     */
                    std::vector<FilterDataObject> GetProductSupport() const;

                    /**
                     * 判断参数 ProductSupport 是否已赋值
                     * @return ProductSupport 是否已赋值
                     * 
                     */
                    bool ProductSupportHasBeenSet() const;

                    /**
                     * 获取产品支持情况
                     * @return CheckStatus 产品支持情况
                     * 
                     */
                    std::vector<FilterDataObject> GetCheckStatus() const;

                    /**
                     * 判断参数 CheckStatus 是否已赋值
                     * @return CheckStatus 是否已赋值
                     * 
                     */
                    bool CheckStatusHasBeenSet() const;

                    /**
                     * 获取攻击热度枚举
                     * @return AttackHeat 攻击热度枚举
                     * 
                     */
                    std::vector<FilterDataObject> GetAttackHeat() const;

                    /**
                     * 判断参数 AttackHeat 是否已赋值
                     * @return AttackHeat 是否已赋值
                     * 
                     */
                    bool AttackHeatHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 漏洞列表
                     */
                    std::vector<VULBaseInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 漏洞类型列表
                     */
                    std::vector<FilterDataObject> m_vULTypeLists;
                    bool m_vULTypeListsHasBeenSet;

                    /**
                     * 风险等级列表
                     */
                    std::vector<FilterDataObject> m_riskLevels;
                    bool m_riskLevelsHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<FilterDataObject> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 产品支持情况
                     */
                    std::vector<FilterDataObject> m_productSupport;
                    bool m_productSupportHasBeenSet;

                    /**
                     * 产品支持情况
                     */
                    std::vector<FilterDataObject> m_checkStatus;
                    bool m_checkStatusHasBeenSet;

                    /**
                     * 攻击热度枚举
                     */
                    std::vector<FilterDataObject> m_attackHeat;
                    bool m_attackHeatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEVULLISTRESPONSE_H_
