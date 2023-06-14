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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_MODIFYPSAREGULATIONREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_MODIFYPSAREGULATIONREQUEST_H_

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
                * ModifyPsaRegulation请求参数结构体
                */
                class ModifyPsaRegulationRequest : public AbstractModel
                {
                public:
                    ModifyPsaRegulationRequest();
                    ~ModifyPsaRegulationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预授权规则ID
                     * @return PsaId 预授权规则ID
                     * 
                     */
                    std::string GetPsaId() const;

                    /**
                     * 设置预授权规则ID
                     * @param _psaId 预授权规则ID
                     * 
                     */
                    void SetPsaId(const std::string& _psaId);

                    /**
                     * 判断参数 PsaId 是否已赋值
                     * @return PsaId 是否已赋值
                     * 
                     */
                    bool PsaIdHasBeenSet() const;

                    /**
                     * 获取预授权规则别名
                     * @return PsaName 预授权规则别名
                     * 
                     */
                    std::string GetPsaName() const;

                    /**
                     * 设置预授权规则别名
                     * @param _psaName 预授权规则别名
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
                     * 获取维修中的实例上限
                     * @return RepairLimit 维修中的实例上限
                     * 
                     */
                    uint64_t GetRepairLimit() const;

                    /**
                     * 设置维修中的实例上限
                     * @param _repairLimit 维修中的实例上限
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
                     * 获取预授权规则备注
                     * @return PsaDescription 预授权规则备注
                     * 
                     */
                    std::string GetPsaDescription() const;

                    /**
                     * 设置预授权规则备注
                     * @param _psaDescription 预授权规则备注
                     * 
                     */
                    void SetPsaDescription(const std::string& _psaDescription);

                    /**
                     * 判断参数 PsaDescription 是否已赋值
                     * @return PsaDescription 是否已赋值
                     * 
                     */
                    bool PsaDescriptionHasBeenSet() const;

                    /**
                     * 获取预授权规则关联故障类型ID列表
                     * @return TaskTypeIds 预授权规则关联故障类型ID列表
                     * 
                     */
                    std::vector<uint64_t> GetTaskTypeIds() const;

                    /**
                     * 设置预授权规则关联故障类型ID列表
                     * @param _taskTypeIds 预授权规则关联故障类型ID列表
                     * 
                     */
                    void SetTaskTypeIds(const std::vector<uint64_t>& _taskTypeIds);

                    /**
                     * 判断参数 TaskTypeIds 是否已赋值
                     * @return TaskTypeIds 是否已赋值
                     * 
                     */
                    bool TaskTypeIdsHasBeenSet() const;

                private:

                    /**
                     * 预授权规则ID
                     */
                    std::string m_psaId;
                    bool m_psaIdHasBeenSet;

                    /**
                     * 预授权规则别名
                     */
                    std::string m_psaName;
                    bool m_psaNameHasBeenSet;

                    /**
                     * 维修中的实例上限
                     */
                    uint64_t m_repairLimit;
                    bool m_repairLimitHasBeenSet;

                    /**
                     * 预授权规则备注
                     */
                    std::string m_psaDescription;
                    bool m_psaDescriptionHasBeenSet;

                    /**
                     * 预授权规则关联故障类型ID列表
                     */
                    std::vector<uint64_t> m_taskTypeIds;
                    bool m_taskTypeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_MODIFYPSAREGULATIONREQUEST_H_
