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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEUNITRULEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEUNITRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/UnitRuleItem.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * UpdateUnitRule请求参数结构体
                */
                class UpdateUnitRuleRequest : public AbstractModel
                {
                public:
                    UpdateUnitRuleRequest();
                    ~UpdateUnitRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取规则项列表
                     * @return UnitRuleItemList 规则项列表
                     * 
                     */
                    std::vector<UnitRuleItem> GetUnitRuleItemList() const;

                    /**
                     * 设置规则项列表
                     * @param _unitRuleItemList 规则项列表
                     * 
                     */
                    void SetUnitRuleItemList(const std::vector<UnitRuleItem>& _unitRuleItemList);

                    /**
                     * 判断参数 UnitRuleItemList 是否已赋值
                     * @return UnitRuleItemList 是否已赋值
                     * 
                     */
                    bool UnitRuleItemListHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则项列表
                     */
                    std::vector<UnitRuleItem> m_unitRuleItemList;
                    bool m_unitRuleItemListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEUNITRULEREQUEST_H_
