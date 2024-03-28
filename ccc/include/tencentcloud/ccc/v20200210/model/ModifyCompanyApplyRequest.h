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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYCOMPANYAPPLYREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYCOMPANYAPPLYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/CompanyApplyInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * ModifyCompanyApply请求参数结构体
                */
                class ModifyCompanyApplyRequest : public AbstractModel
                {
                public:
                    ModifyCompanyApplyRequest();
                    ~ModifyCompanyApplyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取申请单ID(只能修改状态为“驳回”或者“待审核”的申请单)
                     * @return ApplyId 申请单ID(只能修改状态为“驳回”或者“待审核”的申请单)
                     * 
                     */
                    int64_t GetApplyId() const;

                    /**
                     * 设置申请单ID(只能修改状态为“驳回”或者“待审核”的申请单)
                     * @param _applyId 申请单ID(只能修改状态为“驳回”或者“待审核”的申请单)
                     * 
                     */
                    void SetApplyId(const int64_t& _applyId);

                    /**
                     * 判断参数 ApplyId 是否已赋值
                     * @return ApplyId 是否已赋值
                     * 
                     */
                    bool ApplyIdHasBeenSet() const;

                    /**
                     * 获取企业资质信息
                     * @return CompanyInfo 企业资质信息
                     * 
                     */
                    CompanyApplyInfo GetCompanyInfo() const;

                    /**
                     * 设置企业资质信息
                     * @param _companyInfo 企业资质信息
                     * 
                     */
                    void SetCompanyInfo(const CompanyApplyInfo& _companyInfo);

                    /**
                     * 判断参数 CompanyInfo 是否已赋值
                     * @return CompanyInfo 是否已赋值
                     * 
                     */
                    bool CompanyInfoHasBeenSet() const;

                private:

                    /**
                     * 申请单ID(只能修改状态为“驳回”或者“待审核”的申请单)
                     */
                    int64_t m_applyId;
                    bool m_applyIdHasBeenSet;

                    /**
                     * 企业资质信息
                     */
                    CompanyApplyInfo m_companyInfo;
                    bool m_companyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_MODIFYCOMPANYAPPLYREQUEST_H_
