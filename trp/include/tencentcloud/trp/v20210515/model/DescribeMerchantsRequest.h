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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEMERCHANTSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEMERCHANTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeMerchants请求参数结构体
                */
                class DescribeMerchantsRequest : public AbstractModel
                {
                public:
                    DescribeMerchantsRequest();
                    ~DescribeMerchantsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索商户名称
                     * @return Name 搜索商户名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置搜索商户名称
                     * @param _name 搜索商户名称
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
                     * 获取条数
                     * @return PageSize 条数
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置条数
                     * @param _pageSize 条数
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageNumber 页数
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页数
                     * @param _pageNumber 页数
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取码来源类型 0:自建, 1:第三方
                     * @return CodeType 码来源类型 0:自建, 1:第三方
                     * 
                     */
                    int64_t GetCodeType() const;

                    /**
                     * 设置码来源类型 0:自建, 1:第三方
                     * @param _codeType 码来源类型 0:自建, 1:第三方
                     * 
                     */
                    void SetCodeType(const int64_t& _codeType);

                    /**
                     * 判断参数 CodeType 是否已赋值
                     * @return CodeType 是否已赋值
                     * 
                     */
                    bool CodeTypeHasBeenSet() const;

                private:

                    /**
                     * 搜索商户名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 条数
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页数
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 码来源类型 0:自建, 1:第三方
                     */
                    int64_t m_codeType;
                    bool m_codeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEMERCHANTSREQUEST_H_
