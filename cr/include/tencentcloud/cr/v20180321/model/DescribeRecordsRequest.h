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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeRecords请求参数结构体
                */
                class DescribeRecordsRequest : public AbstractModel
                {
                public:
                    DescribeRecordsRequest();
                    ~DescribeRecordsRequest() = default;
                    std::string ToJsonString();


                    /**
                     * 获取模块
                     * @return Module 模块
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块
                     * @param Module 模块
                     */
                    void SetModule(const std::string& module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作
                     * @return Operation 操作
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作
                     * @param Operation 操作
                     */
                    void SetOperation(const std::string& operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductId 产品ID
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param ProductId 产品ID
                     */
                    void SetProductId(const std::string& productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取案件编号
                     * @return AccountNum 案件编号
                     */
                    std::string GetAccountNum() const;

                    /**
                     * 设置案件编号
                     * @param AccountNum 案件编号
                     */
                    void SetAccountNum(const std::string& accountNum);

                    /**
                     * 判断参数 AccountNum 是否已赋值
                     * @return AccountNum 是否已赋值
                     */
                    bool AccountNumHasBeenSet() const;

                    /**
                     * 获取被叫号码
                     * @return CalledPhone 被叫号码
                     */
                    std::string GetCalledPhone() const;

                    /**
                     * 设置被叫号码
                     * @param CalledPhone 被叫号码
                     */
                    void SetCalledPhone(const std::string& calledPhone);

                    /**
                     * 判断参数 CalledPhone 是否已赋值
                     * @return CalledPhone 是否已赋值
                     */
                    bool CalledPhoneHasBeenSet() const;

                    /**
                     * 获取查询起始日期
                     * @return StartBizDate 查询起始日期
                     */
                    std::string GetStartBizDate() const;

                    /**
                     * 设置查询起始日期
                     * @param StartBizDate 查询起始日期
                     */
                    void SetStartBizDate(const std::string& startBizDate);

                    /**
                     * 判断参数 StartBizDate 是否已赋值
                     * @return StartBizDate 是否已赋值
                     */
                    bool StartBizDateHasBeenSet() const;

                    /**
                     * 获取查询结束日期
                     * @return EndBizDate 查询结束日期
                     */
                    std::string GetEndBizDate() const;

                    /**
                     * 设置查询结束日期
                     * @param EndBizDate 查询结束日期
                     */
                    void SetEndBizDate(const std::string& endBizDate);

                    /**
                     * 判断参数 EndBizDate 是否已赋值
                     * @return EndBizDate 是否已赋值
                     */
                    bool EndBizDateHasBeenSet() const;

                    /**
                     * 获取分页参数，索引，从0开始
                     * @return Offset 分页参数，索引，从0开始
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置分页参数，索引，从0开始
                     * @param Offset 分页参数，索引，从0开始
                     */
                    void SetOffset(const std::string& offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页参数，页长
                     * @return Limit 分页参数，页长
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置分页参数，页长
                     * @param Limit 分页参数，页长
                     */
                    void SetLimit(const std::string& limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取实例ID，不传默认为系统分配的初始实例
                     * @return InstId 实例ID，不传默认为系统分配的初始实例
                     */
                    std::string GetInstId() const;

                    /**
                     * 设置实例ID，不传默认为系统分配的初始实例
                     * @param InstId 实例ID，不传默认为系统分配的初始实例
                     */
                    void SetInstId(const std::string& instId);

                    /**
                     * 判断参数 InstId 是否已赋值
                     * @return InstId 是否已赋值
                     */
                    bool InstIdHasBeenSet() const;

                private:

                    /**
                     * 模块
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 案件编号
                     */
                    std::string m_accountNum;
                    bool m_accountNumHasBeenSet;

                    /**
                     * 被叫号码
                     */
                    std::string m_calledPhone;
                    bool m_calledPhoneHasBeenSet;

                    /**
                     * 查询起始日期
                     */
                    std::string m_startBizDate;
                    bool m_startBizDateHasBeenSet;

                    /**
                     * 查询结束日期
                     */
                    std::string m_endBizDate;
                    bool m_endBizDateHasBeenSet;

                    /**
                     * 分页参数，索引，从0开始
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，页长
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 实例ID，不传默认为系统分配的初始实例
                     */
                    std::string m_instId;
                    bool m_instIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DESCRIBERECORDSREQUEST_H_
