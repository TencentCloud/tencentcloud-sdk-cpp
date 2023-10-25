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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 合同组的配置项信息包括：在合同组签署过程中，是否需要对每个子合同进行独立的意愿确认。
                */
                class FlowGroupOptions : public AbstractModel
                {
                public:
                    FlowGroupOptions();
                    ~FlowGroupOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @return SelfOrganizationApproverSignEach 发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    bool GetSelfOrganizationApproverSignEach() const;

                    /**
                     * 设置发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @param _selfOrganizationApproverSignEach 发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    void SetSelfOrganizationApproverSignEach(const bool& _selfOrganizationApproverSignEach);

                    /**
                     * 判断参数 SelfOrganizationApproverSignEach 是否已赋值
                     * @return SelfOrganizationApproverSignEach 是否已赋值
                     * 
                     */
                    bool SelfOrganizationApproverSignEachHasBeenSet() const;

                    /**
                     * 获取非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @return OtherApproverSignEach 非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    bool GetOtherApproverSignEach() const;

                    /**
                     * 设置非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @param _otherApproverSignEach 非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    void SetOtherApproverSignEach(const bool& _otherApproverSignEach);

                    /**
                     * 判断参数 OtherApproverSignEach 是否已赋值
                     * @return OtherApproverSignEach 是否已赋值
                     * 
                     */
                    bool OtherApproverSignEachHasBeenSet() const;

                private:

                    /**
                     * 发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     */
                    bool m_selfOrganizationApproverSignEach;
                    bool m_selfOrganizationApproverSignEachHasBeenSet;

                    /**
                     * 非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认
<ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li>
<li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     */
                    bool m_otherApproverSignEach;
                    bool m_otherApproverSignEachHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_
