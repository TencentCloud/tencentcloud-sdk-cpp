/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>账单类型，枚举值<br>billOverview=L0-PDF账单<br>billSummary=L1-汇总账单<br>billResource=L2-资源账单<br>billDetail=L3-明细账单<br>billPack=账单包</p>
                     * @return FileType <p>账单类型，枚举值<br>billOverview=L0-PDF账单<br>billSummary=L1-汇总账单<br>billResource=L2-资源账单<br>billDetail=L3-明细账单<br>billPack=账单包</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>账单类型，枚举值<br>billOverview=L0-PDF账单<br>billSummary=L1-汇总账单<br>billResource=L2-资源账单<br>billDetail=L3-明细账单<br>billPack=账单包</p>
                     * @param _fileType <p>账单类型，枚举值<br>billOverview=L0-PDF账单<br>billSummary=L1-汇总账单<br>billResource=L2-资源账单<br>billDetail=L3-明细账单<br>billPack=账单包</p>
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
                     * 获取<p>月份，格式为yyyy-mm，不能早于2021-01  示例值：2026-11</p>
                     * @return Month <p>月份，格式为yyyy-mm，不能早于2021-01  示例值：2026-11</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>月份，格式为yyyy-mm，不能早于2021-01  示例值：2026-11</p>
                     * @param _month <p>月份，格式为yyyy-mm，不能早于2021-01  示例值：2026-11</p>
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
                     * 获取<p>下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @return ChildUin <p>下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * 
                     */
                    std::vector<std::string> GetChildUin() const;

                    /**
                     * 设置<p>下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN</p>
                     * @param _childUin <p>下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN</p>
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
                     * <p>账单类型，枚举值<br>billOverview=L0-PDF账单<br>billSummary=L1-汇总账单<br>billResource=L2-资源账单<br>billDetail=L3-明细账单<br>billPack=账单包</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>月份，格式为yyyy-mm，不能早于2021-01  示例值：2026-11</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>下载的账号 ID列表，默认查询本账号账单，如集团管理账号需下载成员账号自付的账单，该字段需入参成员账号UIN</p>
                     */
                    std::vector<std::string> m_childUin;
                    bool m_childUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLDOWNLOADURLREQUEST_H_
