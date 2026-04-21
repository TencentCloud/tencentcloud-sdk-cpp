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
                     * 获取<p>所修改分账单元ID</p>
                     * @return Id <p>所修改分账单元ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>所修改分账单元ID</p>
                     * @param _id <p>所修改分账单元ID</p>
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
                     * 获取<p>修改后分账单元名称</p>
                     * @return Name <p>修改后分账单元名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>修改后分账单元名称</p>
                     * @param _name <p>修改后分账单元名称</p>
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
                     * 获取<p>修改后分账单元源组织名称</p>
                     * @return SourceName <p>修改后分账单元源组织名称</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>修改后分账单元源组织名称</p>
                     * @param _sourceName <p>修改后分账单元源组织名称</p>
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
                     * 获取<p>修改后分账单元源组织ID</p>
                     * @return SourceId <p>修改后分账单元源组织ID</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>修改后分账单元源组织ID</p>
                     * @param _sourceId <p>修改后分账单元源组织ID</p>
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
                     * 获取<p>分账单元备注说明</p>
                     * @return Remark <p>分账单元备注说明</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>分账单元备注说明</p>
                     * @param _remark <p>分账单元备注说明</p>
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
                     * <p>所修改分账单元ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>修改后分账单元名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>修改后分账单元源组织名称</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>修改后分账单元源组织ID</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>分账单元备注说明</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_MODIFYALLOCATIONUNITREQUEST_H_
