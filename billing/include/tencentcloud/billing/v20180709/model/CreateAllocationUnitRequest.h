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
                     * 获取<p>新增分账单元父节点ID</p>
                     * @return ParentId <p>新增分账单元父节点ID</p>
                     * 
                     */
                    uint64_t GetParentId() const;

                    /**
                     * 设置<p>新增分账单元父节点ID</p>
                     * @param _parentId <p>新增分账单元父节点ID</p>
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
                     * 获取<p>新增分账单元名称</p>
                     * @return Name <p>新增分账单元名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>新增分账单元名称</p>
                     * @param _name <p>新增分账单元名称</p>
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
                     * 获取<p>月份，不传默认当前月</p>
                     * @return Month <p>月份，不传默认当前月</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，不传默认当前月</p>
                     * @param _month <p>月份，不传默认当前月</p>
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
                     * <p>新增分账单元父节点ID</p>
                     */
                    uint64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * <p>新增分账单元名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>月份，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_CREATEALLOCATIONUNITREQUEST_H_
