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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * DownloadReconciliationUrl请求参数结构体
                */
                class DownloadReconciliationUrlRequest : public AbstractModel
                {
                public:
                    DownloadReconciliationUrlRequest();
                    ~DownloadReconciliationUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台应用ID
                     * @return MainAppId 平台应用ID
                     * 
                     */
                    std::string GetMainAppId() const;

                    /**
                     * 设置平台应用ID
                     * @param _mainAppId 平台应用ID
                     * 
                     */
                    void SetMainAppId(const std::string& _mainAppId);

                    /**
                     * 判断参数 MainAppId 是否已赋值
                     * @return MainAppId 是否已赋值
                     * 
                     */
                    bool MainAppIdHasBeenSet() const;

                    /**
                     * 获取平台代码
                     * @return AppCode 平台代码
                     * 
                     */
                    std::string GetAppCode() const;

                    /**
                     * 设置平台代码
                     * @param _appCode 平台代码
                     * 
                     */
                    void SetAppCode(const std::string& _appCode);

                    /**
                     * 判断参数 AppCode 是否已赋值
                     * @return AppCode 是否已赋值
                     * 
                     */
                    bool AppCodeHasBeenSet() const;

                    /**
                     * 获取账单日期，yyyy-MM-dd
                     * @return BillDate 账单日期，yyyy-MM-dd
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置账单日期，yyyy-MM-dd
                     * @param _billDate 账单日期，yyyy-MM-dd
                     * 
                     */
                    void SetBillDate(const std::string& _billDate);

                    /**
                     * 判断参数 BillDate 是否已赋值
                     * @return BillDate 是否已赋值
                     * 
                     */
                    bool BillDateHasBeenSet() const;

                    /**
                     * 获取商户或者代理商ID
                     * @return SubAppId 商户或者代理商ID
                     * 
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置商户或者代理商ID
                     * @param _subAppId 商户或者代理商ID
                     * 
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 平台应用ID
                     */
                    std::string m_mainAppId;
                    bool m_mainAppIdHasBeenSet;

                    /**
                     * 平台代码
                     */
                    std::string m_appCode;
                    bool m_appCodeHasBeenSet;

                    /**
                     * 账单日期，yyyy-MM-dd
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 商户或者代理商ID
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DOWNLOADRECONCILIATIONURLREQUEST_H_
