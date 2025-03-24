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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/Conditions.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * 评估项信息
                */
                class Strategies : public AbstractModel
                {
                public:
                    Strategies();
                    ~Strategies() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取评估项ID
                     * @return StrategyId 评估项ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置评估项ID
                     * @param _strategyId 评估项ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取评估项名称
                     * @return Name 评估项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置评估项名称
                     * @param _name 评估项名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取评估项描述
                     * @return Desc 评估项描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置评估项描述
                     * @param _desc 评估项描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取评估项对应产品ID
                     * @return Product 评估项对应产品ID
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置评估项对应产品ID
                     * @param _product 评估项对应产品ID
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取评估项对应产品名称
                     * @return ProductDesc 评估项对应产品名称
                     * 
                     */
                    std::string GetProductDesc() const;

                    /**
                     * 设置评估项对应产品名称
                     * @param _productDesc 评估项对应产品名称
                     * 
                     */
                    void SetProductDesc(const std::string& _productDesc);

                    /**
                     * 判断参数 ProductDesc 是否已赋值
                     * @return ProductDesc 是否已赋值
                     * 
                     */
                    bool ProductDescHasBeenSet() const;

                    /**
                     * 获取评估项优化建议
                     * @return Repair 评估项优化建议
                     * 
                     */
                    std::string GetRepair() const;

                    /**
                     * 设置评估项优化建议
                     * @param _repair 评估项优化建议
                     * 
                     */
                    void SetRepair(const std::string& _repair);

                    /**
                     * 判断参数 Repair 是否已赋值
                     * @return Repair 是否已赋值
                     * 
                     */
                    bool RepairHasBeenSet() const;

                    /**
                     * 获取评估项类别ID
                     * @return GroupId 评估项类别ID
                     * 
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置评估项类别ID
                     * @param _groupId 评估项类别ID
                     * 
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取评估项类别名称
                     * @return GroupName 评估项类别名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置评估项类别名称
                     * @param _groupName 评估项类别名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取评估项风险列表
                     * @return Conditions 评估项风险列表
                     * 
                     */
                    std::vector<Conditions> GetConditions() const;

                    /**
                     * 设置评估项风险列表
                     * @param _conditions 评估项风险列表
                     * 
                     */
                    void SetConditions(const std::vector<Conditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                private:

                    /**
                     * 评估项ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * 评估项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 评估项描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 评估项对应产品ID
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 评估项对应产品名称
                     */
                    std::string m_productDesc;
                    bool m_productDescHasBeenSet;

                    /**
                     * 评估项优化建议
                     */
                    std::string m_repair;
                    bool m_repairHasBeenSet;

                    /**
                     * 评估项类别ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 评估项类别名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 评估项风险列表
                     */
                    std::vector<Conditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_STRATEGIES_H_
