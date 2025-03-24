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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPERSONNELVISITWORKORDERREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPERSONNELVISITWORKORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chc/v20230418/model/Personnel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreatePersonnelVisitWorkOrder请求参数结构体
                */
                class CreatePersonnelVisitWorkOrderRequest : public AbstractModel
                {
                public:
                    CreatePersonnelVisitWorkOrderRequest();
                    ~CreatePersonnelVisitWorkOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取到访人员信息
                     * @return PersonnelSet 到访人员信息
                     * 
                     */
                    std::vector<Personnel> GetPersonnelSet() const;

                    /**
                     * 设置到访人员信息
                     * @param _personnelSet 到访人员信息
                     * 
                     */
                    void SetPersonnelSet(const std::vector<Personnel>& _personnelSet);

                    /**
                     * 判断参数 PersonnelSet 是否已赋值
                     * @return PersonnelSet 是否已赋值
                     * 
                     */
                    bool PersonnelSetHasBeenSet() const;

                    /**
                     * 获取机房 ID
                     * @return IdcId 机房 ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房 ID
                     * @param _idcId 机房 ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取机房管理单元列表
                     * @return IdcUnitIdSet 机房管理单元列表
                     * 
                     */
                    std::vector<uint64_t> GetIdcUnitIdSet() const;

                    /**
                     * 设置机房管理单元列表
                     * @param _idcUnitIdSet 机房管理单元列表
                     * 
                     */
                    void SetIdcUnitIdSet(const std::vector<uint64_t>& _idcUnitIdSet);

                    /**
                     * 判断参数 IdcUnitIdSet 是否已赋值
                     * @return IdcUnitIdSet 是否已赋值
                     * 
                     */
                    bool IdcUnitIdSetHasBeenSet() const;

                    /**
                     * 获取到访开始时间
                     * @return EnterStartTime 到访开始时间
                     * 
                     */
                    std::string GetEnterStartTime() const;

                    /**
                     * 设置到访开始时间
                     * @param _enterStartTime 到访开始时间
                     * 
                     */
                    void SetEnterStartTime(const std::string& _enterStartTime);

                    /**
                     * 判断参数 EnterStartTime 是否已赋值
                     * @return EnterStartTime 是否已赋值
                     * 
                     */
                    bool EnterStartTimeHasBeenSet() const;

                    /**
                     * 获取到访结束时间
                     * @return EnterEndTime 到访结束时间
                     * 
                     */
                    std::string GetEnterEndTime() const;

                    /**
                     * 设置到访结束时间
                     * @param _enterEndTime 到访结束时间
                     * 
                     */
                    void SetEnterEndTime(const std::string& _enterEndTime);

                    /**
                     * 判断参数 EnterEndTime 是否已赋值
                     * @return EnterEndTime 是否已赋值
                     * 
                     */
                    bool EnterEndTimeHasBeenSet() const;

                    /**
                     * 获取到访原因，映射关系：IT_OPERATION IT运维 OTHER 其他
                     * @return VisitReason 到访原因，映射关系：IT_OPERATION IT运维 OTHER 其他
                     * 
                     */
                    std::vector<std::string> GetVisitReason() const;

                    /**
                     * 设置到访原因，映射关系：IT_OPERATION IT运维 OTHER 其他
                     * @param _visitReason 到访原因，映射关系：IT_OPERATION IT运维 OTHER 其他
                     * 
                     */
                    void SetVisitReason(const std::vector<std::string>& _visitReason);

                    /**
                     * 判断参数 VisitReason 是否已赋值
                     * @return VisitReason 是否已赋值
                     * 
                     */
                    bool VisitReasonHasBeenSet() const;

                    /**
                     * 获取到访说明
                     * @return VisitRemark 到访说明
                     * 
                     */
                    std::string GetVisitRemark() const;

                    /**
                     * 设置到访说明
                     * @param _visitRemark 到访说明
                     * 
                     */
                    void SetVisitRemark(const std::string& _visitRemark);

                    /**
                     * 判断参数 VisitRemark 是否已赋值
                     * @return VisitRemark 是否已赋值
                     * 
                     */
                    bool VisitRemarkHasBeenSet() const;

                private:

                    /**
                     * 到访人员信息
                     */
                    std::vector<Personnel> m_personnelSet;
                    bool m_personnelSetHasBeenSet;

                    /**
                     * 机房 ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * 机房管理单元列表
                     */
                    std::vector<uint64_t> m_idcUnitIdSet;
                    bool m_idcUnitIdSetHasBeenSet;

                    /**
                     * 到访开始时间
                     */
                    std::string m_enterStartTime;
                    bool m_enterStartTimeHasBeenSet;

                    /**
                     * 到访结束时间
                     */
                    std::string m_enterEndTime;
                    bool m_enterEndTimeHasBeenSet;

                    /**
                     * 到访原因，映射关系：IT_OPERATION IT运维 OTHER 其他
                     */
                    std::vector<std::string> m_visitReason;
                    bool m_visitReasonHasBeenSet;

                    /**
                     * 到访说明
                     */
                    std::string m_visitRemark;
                    bool m_visitRemarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CREATEPERSONNELVISITWORKORDERREQUEST_H_
