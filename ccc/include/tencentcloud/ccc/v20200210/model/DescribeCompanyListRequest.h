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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECOMPANYLISTREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECOMPANYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCompanyList请求参数结构体
                */
                class DescribeCompanyListRequest : public AbstractModel
                {
                public:
                    DescribeCompanyListRequest();
                    ~DescribeCompanyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页尺寸，上限 100
                     * @return PageSize 分页尺寸，上限 100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页尺寸，上限 100
                     * @param _pageSize 分页尺寸，上限 100
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码，从 0 开始
                     * @return PageNumber 分页页码，从 0 开始
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，从 0 开始
                     * @param _pageNumber 分页页码，从 0 开始
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取公司名称
                     * @return CompanyName 公司名称
                     * 
                     */
                    std::vector<std::string> GetCompanyName() const;

                    /**
                     * 设置公司名称
                     * @param _companyName 公司名称
                     * 
                     */
                    void SetCompanyName(const std::vector<std::string>& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取审核状态，1-待审核，2-审核通过，3-驳回
                     * @return State 审核状态，1-待审核，2-审核通过，3-驳回
                     * 
                     */
                    std::vector<int64_t> GetState() const;

                    /**
                     * 设置审核状态，1-待审核，2-审核通过，3-驳回
                     * @param _state 审核状态，1-待审核，2-审核通过，3-驳回
                     * 
                     */
                    void SetState(const std::vector<int64_t>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取申请ID
                     * @return ApplyID 申请ID
                     * 
                     */
                    std::vector<int64_t> GetApplyID() const;

                    /**
                     * 设置申请ID
                     * @param _applyID 申请ID
                     * 
                     */
                    void SetApplyID(const std::vector<int64_t>& _applyID);

                    /**
                     * 判断参数 ApplyID 是否已赋值
                     * @return ApplyID 是否已赋值
                     * 
                     */
                    bool ApplyIDHasBeenSet() const;

                private:

                    /**
                     * 分页尺寸，上限 100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，从 0 开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 公司名称
                     */
                    std::vector<std::string> m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 审核状态，1-待审核，2-审核通过，3-驳回
                     */
                    std::vector<int64_t> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 申请ID
                     */
                    std::vector<int64_t> m_applyID;
                    bool m_applyIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECOMPANYLISTREQUEST_H_
