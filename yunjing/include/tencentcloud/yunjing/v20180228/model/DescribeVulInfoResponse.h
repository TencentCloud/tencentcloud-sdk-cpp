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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulInfo返回参数结构体
                */
                class DescribeVulInfoResponse : public AbstractModel
                {
                public:
                    DescribeVulInfoResponse();
                    ~DescribeVulInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞种类ID。
                     * @return VulId 漏洞种类ID。
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取漏洞名称。
                     * @return VulName 漏洞名称。
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取漏洞等级。
                     * @return VulLevel 漏洞等级。
                     * 
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取漏洞类型。
                     * @return VulType 漏洞类型。
                     * 
                     */
                    std::string GetVulType() const;

                    /**
                     * 判断参数 VulType 是否已赋值
                     * @return VulType 是否已赋值
                     * 
                     */
                    bool VulTypeHasBeenSet() const;

                    /**
                     * 获取漏洞描述。
                     * @return Description 漏洞描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取修复方案。
                     * @return RepairPlan 修复方案。
                     * 
                     */
                    std::string GetRepairPlan() const;

                    /**
                     * 判断参数 RepairPlan 是否已赋值
                     * @return RepairPlan 是否已赋值
                     * 
                     */
                    bool RepairPlanHasBeenSet() const;

                    /**
                     * 获取漏洞CVE。
                     * @return CveId 漏洞CVE。
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取参考链接。
                     * @return Reference 参考链接。
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                private:

                    /**
                     * 漏洞种类ID。
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称。
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞等级。
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 漏洞类型。
                     */
                    std::string m_vulType;
                    bool m_vulTypeHasBeenSet;

                    /**
                     * 漏洞描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 修复方案。
                     */
                    std::string m_repairPlan;
                    bool m_repairPlanHasBeenSet;

                    /**
                     * 漏洞CVE。
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 参考链接。
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_DESCRIBEVULINFORESPONSE_H_
