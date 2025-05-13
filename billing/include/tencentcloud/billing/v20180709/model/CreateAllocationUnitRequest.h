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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEALLOCATIONUNITREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEALLOCATIONUNITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateAllocationUnit请求参数结构体
                */
                class CreateAllocationUnitRequest : public AbstractModel
                {
                public:
                    CreateAllocationUnitRequest();
                    ~CreateAllocationUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新增分账单元父节点ID
                     * @return ParentId 新增分账单元父节点ID
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置新增分账单元父节点ID
                     * @param _parentId 新增分账单元父节点ID
                     * 
                     */
                    void SetParentId(const uint64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取新增分账单元名称
                     * @return Name 新增分账单元名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置新增分账单元名称
                     * @param _name 新增分账单元名称
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
                     * 获取月份，不传默认当前月
                     * @return Month 月份，不传默认当前月
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置月份，不传默认当前月
                     * @param _month 月份，不传默认当前月
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                private:

                    /**
                     * 新增分账单元父节点ID
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 新增分账单元名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 月份，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEALLOCATIONUNITREQUEST_H_
