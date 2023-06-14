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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSETTLEMENTORDERLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSETTLEMENTORDERLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/Paging.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexSettlementOrderList请求参数结构体
                */
                class QueryFlexSettlementOrderListRequest : public AbstractModel
                {
                public:
                    QueryFlexSettlementOrderListRequest();
                    ~QueryFlexSettlementOrderListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     * 
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param _payeeId 收款用户ID
                     * 
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     * 
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取开始时间，格式"yyyy-MM-dd hh:mm:ss"
                     * @return StartTime 开始时间，格式"yyyy-MM-dd hh:mm:ss"
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式"yyyy-MM-dd hh:mm:ss"
                     * @param _startTime 开始时间，格式"yyyy-MM-dd hh:mm:ss"
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，格式"yyyy-MM-dd hh:mm:ss"
                     * @return EndTime 结束时间，格式"yyyy-MM-dd hh:mm:ss"
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式"yyyy-MM-dd hh:mm:ss"
                     * @param _endTime 结束时间，格式"yyyy-MM-dd hh:mm:ss"
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页
                     * @return PageNumber 分页
                     * 
                     */
                    Paging GetPageNumber() const;

                    /**
                     * 设置分页
                     * @param _pageNumber 分页
                     * 
                     */
                    void SetPageNumber(const Paging& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取操作类型。
ENABLE_SETTLE: 正常结算
DISABLE_SETTLE: 停用结算
UNFREEZE_SETTLE: 解冻结算
若需要支持多个操作类型，则以;分隔
                     * @return OperationType 操作类型。
ENABLE_SETTLE: 正常结算
DISABLE_SETTLE: 停用结算
UNFREEZE_SETTLE: 解冻结算
若需要支持多个操作类型，则以;分隔
                     * 
                     */
                    std::string GetOperationType() const;

                    /**
                     * 设置操作类型。
ENABLE_SETTLE: 正常结算
DISABLE_SETTLE: 停用结算
UNFREEZE_SETTLE: 解冻结算
若需要支持多个操作类型，则以;分隔
                     * @param _operationType 操作类型。
ENABLE_SETTLE: 正常结算
DISABLE_SETTLE: 停用结算
UNFREEZE_SETTLE: 解冻结算
若需要支持多个操作类型，则以;分隔
                     * 
                     */
                    void SetOperationType(const std::string& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

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
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 开始时间，格式"yyyy-MM-dd hh:mm:ss"
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式"yyyy-MM-dd hh:mm:ss"
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页
                     */
                    Paging m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 操作类型。
ENABLE_SETTLE: 正常结算
DISABLE_SETTLE: 停用结算
UNFREEZE_SETTLE: 解冻结算
若需要支持多个操作类型，则以;分隔
                     */
                    std::string m_operationType;
                    bool m_operationTypeHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXSETTLEMENTORDERLISTREQUEST_H_
