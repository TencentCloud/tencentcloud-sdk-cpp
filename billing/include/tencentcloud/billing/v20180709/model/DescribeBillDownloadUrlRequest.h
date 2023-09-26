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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillDownloadUrl请求参数结构体
                */
                class DescribeBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBillDownloadUrlRequest();
                    ~DescribeBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账单类型，枚举值
billOverview=L0-PDF账单
billSummary=L1-汇总账单	
billResource=L2-资源账单	
billDetail=L3-明细账单	
billPack=账单包
                     * @return FileType 账单类型，枚举值
billOverview=L0-PDF账单
billSummary=L1-汇总账单	
billResource=L2-资源账单	
billDetail=L3-明细账单	
billPack=账单包
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置账单类型，枚举值
billOverview=L0-PDF账单
billSummary=L1-汇总账单	
billResource=L2-资源账单	
billDetail=L3-明细账单	
billPack=账单包
                     * @param _fileType 账单类型，枚举值
billOverview=L0-PDF账单
billSummary=L1-汇总账单	
billResource=L2-资源账单	
billDetail=L3-明细账单	
billPack=账单包
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取账单月份
支持的最早开始月份为2021-01
L0-PDF&账单包不支持当月下载，当月账单请在次月1号19:00出账后下载
                     * @return Month 账单月份
支持的最早开始月份为2021-01
L0-PDF&账单包不支持当月下载，当月账单请在次月1号19:00出账后下载
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份
支持的最早开始月份为2021-01
L0-PDF&账单包不支持当月下载，当月账单请在次月1号19:00出账后下载
                     * @param _month 账单月份
支持的最早开始月份为2021-01
L0-PDF&账单包不支持当月下载，当月账单请在次月1号19:00出账后下载
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN
                     * @return ChildUin 下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN
                     * 
                     */
                    std::vector<std::string> GetChildUin() const;

                    /**
                     * 设置下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN
                     * @param _childUin 下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN
                     * 
                     */
                    void SetChildUin(const std::vector<std::string>& _childUin);

                    /**
                     * 判断参数 ChildUin 是否已赋值
                     * @return ChildUin 是否已赋值
                     * 
                     */
                    bool ChildUinHasBeenSet() const;

                private:

                    /**
                     * 账单类型，枚举值
billOverview=L0-PDF账单
billSummary=L1-汇总账单	
billResource=L2-资源账单	
billDetail=L3-明细账单	
billPack=账单包
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 账单月份
支持的最早开始月份为2021-01
L0-PDF&账单包不支持当月下载，当月账单请在次月1号19:00出账后下载
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN
                     */
                    std::vector<std::string> m_childUin;
                    bool m_childUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
