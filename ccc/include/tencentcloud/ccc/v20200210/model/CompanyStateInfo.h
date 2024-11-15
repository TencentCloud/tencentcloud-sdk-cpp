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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYSTATEINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYSTATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 公司资质审核状态信息
                */
                class CompanyStateInfo : public AbstractModel
                {
                public:
                    CompanyStateInfo();
                    ~CompanyStateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取申请单ID
                     * @return Id 申请单ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置申请单ID
                     * @param _id 申请单ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取审核时间
                     * @return CheckTime 审核时间
                     * 
                     */
                    int64_t GetCheckTime() const;

                    /**
                     * 设置审核时间
                     * @param _checkTime 审核时间
                     * 
                     */
                    void SetCheckTime(const int64_t& _checkTime);

                    /**
                     * 判断参数 CheckTime 是否已赋值
                     * @return CheckTime 是否已赋值
                     * 
                     */
                    bool CheckTimeHasBeenSet() const;

                    /**
                     * 获取审核备注
                     * @return CheckMsg 审核备注
                     * 
                     */
                    std::string GetCheckMsg() const;

                    /**
                     * 设置审核备注
                     * @param _checkMsg 审核备注
                     * 
                     */
                    void SetCheckMsg(const std::string& _checkMsg);

                    /**
                     * 判断参数 CheckMsg 是否已赋值
                     * @return CheckMsg 是否已赋值
                     * 
                     */
                    bool CheckMsgHasBeenSet() const;

                    /**
                     * 获取审核状态，1-待审核，2-审核通过，3-驳回
                     * @return State 审核状态，1-待审核，2-审核通过，3-驳回
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置审核状态，1-待审核，2-审核通过，3-驳回
                     * @param _state 审核状态，1-待审核，2-审核通过，3-驳回
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取公司统一社会信用代码
                     * @return BusinessId 公司统一社会信用代码
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置公司统一社会信用代码
                     * @param _businessId 公司统一社会信用代码
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    int64_t GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const int64_t& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取合同编号
                     * @return ContractNo 合同编号
                     * 
                     */
                    std::string GetContractNo() const;

                    /**
                     * 设置合同编号
                     * @param _contractNo 合同编号
                     * 
                     */
                    void SetContractNo(const std::string& _contractNo);

                    /**
                     * 判断参数 ContractNo 是否已赋值
                     * @return ContractNo 是否已赋值
                     * 
                     */
                    bool ContractNoHasBeenSet() const;

                private:

                    /**
                     * 申请单ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 审核时间
                     */
                    int64_t m_checkTime;
                    bool m_checkTimeHasBeenSet;

                    /**
                     * 审核备注
                     */
                    std::string m_checkMsg;
                    bool m_checkMsgHasBeenSet;

                    /**
                     * 审核状态，1-待审核，2-审核通过，3-驳回
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 公司统一社会信用代码
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 合同编号
                     */
                    std::string m_contractNo;
                    bool m_contractNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_COMPANYSTATEINFO_H_
