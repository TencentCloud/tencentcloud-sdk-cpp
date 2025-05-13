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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_

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
                * ModifyAllocationUnit请求参数结构体
                */
                class ModifyAllocationUnitRequest : public AbstractModel
                {
                public:
                    ModifyAllocationUnitRequest();
                    ~ModifyAllocationUnitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所修改分账单元ID
                     * @return Id 所修改分账单元ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置所修改分账单元ID
                     * @param _id 所修改分账单元ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取修改后分账单元名称
                     * @return Name 修改后分账单元名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改后分账单元名称
                     * @param _name 修改后分账单元名称
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
                     * 获取修改后分账单元源组织名称
                     * @return SourceName 修改后分账单元源组织名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置修改后分账单元源组织名称
                     * @param _sourceName 修改后分账单元源组织名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取修改后分账单元源组织ID
                     * @return SourceId 修改后分账单元源组织ID
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置修改后分账单元源组织ID
                     * @param _sourceId 修改后分账单元源组织ID
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取分账单元备注说明
                     * @return Remark 分账单元备注说明
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置分账单元备注说明
                     * @param _remark 分账单元备注说明
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

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
                     * 所修改分账单元ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后分账单元名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 修改后分账单元源组织名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 修改后分账单元源组织ID
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 分账单元备注说明
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_
