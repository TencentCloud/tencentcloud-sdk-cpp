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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSREQUEST_H_

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
                * DescribeScanLogs请求参数结构体
                */
                class DescribeScanLogsRequest : public AbstractModel
                {
                public:
                    DescribeScanLogsRequest();
                    ~DescribeScanLogsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取分页数量
                     * @return PageSize 分页数量
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页数量
                     * @param _pageSize 分页数量
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
                     * 获取当前分页
                     * @return PageNumber 当前分页
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置当前分页
                     * @param _pageNumber 当前分页
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
                     * 获取安心码
                     * @return Code 安心码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置安心码
                     * @param _code 安心码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取小程序用户ID
                     * @return Openid 小程序用户ID
                     * 
                     */
                    std::string GetOpenid() const;

                    /**
                     * 设置小程序用户ID
                     * @param _openid 小程序用户ID
                     * 
                     */
                    void SetOpenid(const std::string& _openid);

                    /**
                     * 判断参数 Openid 是否已赋值
                     * @return Openid 是否已赋值
                     * 
                     */
                    bool OpenidHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 分页数量
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前分页
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 安心码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 小程序用户ID
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBESCANLOGSREQUEST_H_
