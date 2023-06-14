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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXBILLDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXBILLDOWNLOADURLREQUEST_H_

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
                * QueryFlexBillDownloadUrl请求参数结构体
                */
                class QueryFlexBillDownloadUrlRequest : public AbstractModel
                {
                public:
                    QueryFlexBillDownloadUrlRequest();
                    ~QueryFlexBillDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取对账单日期
                     * @return BillDate 对账单日期
                     * 
                     */
                    std::string GetBillDate() const;

                    /**
                     * 设置对账单日期
                     * @param _billDate 对账单日期
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
                     * 获取对账单类型：FREEZE, SETTLEMENT,PAYMENT
                     * @return BillType 对账单类型：FREEZE, SETTLEMENT,PAYMENT
                     * 
                     */
                    std::string GetBillType() const;

                    /**
                     * 设置对账单类型：FREEZE, SETTLEMENT,PAYMENT
                     * @param _billType 对账单类型：FREEZE, SETTLEMENT,PAYMENT
                     * 
                     */
                    void SetBillType(const std::string& _billType);

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取服务商ID，如不填则查询平台级别对账单文件
                     * @return ServiceProviderId 服务商ID，如不填则查询平台级别对账单文件
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置服务商ID，如不填则查询平台级别对账单文件
                     * @param _serviceProviderId 服务商ID，如不填则查询平台级别对账单文件
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @return Environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * @param _environment 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 对账单日期
                     */
                    std::string m_billDate;
                    bool m_billDateHasBeenSet;

                    /**
                     * 对账单类型：FREEZE, SETTLEMENT,PAYMENT
                     */
                    std::string m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 服务商ID，如不填则查询平台级别对账单文件
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * 环境类型
__release__:生产环境
__sandbox__:沙箱环境
__test__:测试环境
缺省默认为生产环境
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXBILLDOWNLOADURLREQUEST_H_
