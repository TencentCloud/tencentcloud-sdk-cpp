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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * CreatePsaRegulation请求参数结构体
                */
                class CreatePsaRegulationRequest : public AbstractModel
                {
                public:
                    CreatePsaRegulationRequest();
                    ~CreatePsaRegulationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则别名
                     * @return PsaName 规则别名
                     * 
                     */
                    std::string GetPsaName() const;

                    /**
                     * 设置规则别名
                     * @param _psaName 规则别名
                     * 
                     */
                    void SetPsaName(const std::string& _psaName);

                    /**
                     * 判断参数 PsaName 是否已赋值
                     * @return PsaName 是否已赋值
                     * 
                     */
                    bool PsaNameHasBeenSet() const;

                    /**
                     * 获取关联的故障类型ID列表
                     * @return TaskTypeIds 关联的故障类型ID列表
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIds() const;

                    /**
                     * 设置关联的故障类型ID列表
                     * @param _taskTypeIds 关联的故障类型ID列表
                     * 
                     */
                    void SetTaskTypeIds(const std::vector<uint64_t>& _taskTypeIds);

                    /**
                     * 判断参数 TaskTypeIds 是否已赋值
                     * @return TaskTypeIds 是否已赋值
                     * 
                     */
                    bool TaskTypeIdsHasBeenSet() const;

                    /**
                     * 获取维修实例上限，默认为5
                     * @return RepairLimit 维修实例上限，默认为5
                     * 
                     */
                    uint64_t GetRepairLimit() const;

                    /**
                     * 设置维修实例上限，默认为5
                     * @param _repairLimit 维修实例上限，默认为5
                     * 
                     */
                    void SetRepairLimit(const uint64_t& _repairLimit);

                    /**
                     * 判断参数 RepairLimit 是否已赋值
                     * @return RepairLimit 是否已赋值
                     * 
                     */
                    bool RepairLimitHasBeenSet() const;

                    /**
                     * 获取规则备注
                     * @return PsaDescription 规则备注
                     * 
                     */
                    std::string GetPsaDescription() const;

                    /**
                     * 设置规则备注
                     * @param _psaDescription 规则备注
                     * 
                     */
                    void SetPsaDescription(const std::string& _psaDescription);

                    /**
                     * 判断参数 PsaDescription 是否已赋值
                     * @return PsaDescription 是否已赋值
                     * 
                     */
                    bool PsaDescriptionHasBeenSet() const;

                private:

                    /**
                     * 规则别名
                     */
                    std::string m_psaName;
                    bool m_psaNameHasBeenSet;

                    /**
                     * 关联的故障类型ID列表
                     */
                    std::vector<uint64_t> m_taskTypeIds;
                    bool m_taskTypeIdsHasBeenSet;

                    /**
                     * 维修实例上限，默认为5
                     */
                    uint64_t m_repairLimit;
                    bool m_repairLimitHasBeenSet;

                    /**
                     * 规则备注
                     */
                    std::string m_psaDescription;
                    bool m_psaDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_CREATEPSAREGULATIONREQUEST_H_
