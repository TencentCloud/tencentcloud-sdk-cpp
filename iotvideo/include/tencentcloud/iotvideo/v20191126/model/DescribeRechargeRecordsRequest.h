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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeRechargeRecords请求参数结构体
                */
                class DescribeRechargeRecordsRequest : public AbstractModel
                {
                public:
                    DescribeRechargeRecordsRequest();
                    ~DescribeRechargeRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账户类型 1:设备接入 2:云存。
                     * @return AccountType 账户类型 1:设备接入 2:云存。
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置账户类型 1:设备接入 2:云存。
                     * @param _accountType 账户类型 1:设备接入 2:云存。
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取从第几条记录开始显示, 默认值为0。
                     * @return Offset 从第几条记录开始显示, 默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置从第几条记录开始显示, 默认值为0。
                     * @param _offset 从第几条记录开始显示, 默认值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取总共查询多少条记录，默认为值50。
                     * @return Limit 总共查询多少条记录，默认为值50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置总共查询多少条记录，默认为值50。
                     * @param _limit 总共查询多少条记录，默认为值50。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 账户类型 1:设备接入 2:云存。
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 从第几条记录开始显示, 默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 总共查询多少条记录，默认为值50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSREQUEST_H_
