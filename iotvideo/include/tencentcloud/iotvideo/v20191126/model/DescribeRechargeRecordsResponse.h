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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/RechargeRecord.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeRechargeRecords返回参数结构体
                */
                class DescribeRechargeRecordsResponse : public AbstractModel
                {
                public:
                    DescribeRechargeRecordsResponse();
                    ~DescribeRechargeRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户类型 1:设备接入 2:云存
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountType 账户类型 1:设备接入 2:云存
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取充值记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Records 充值记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RechargeRecord> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * 账户类型 1:设备接入 2:云存
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 充值记录列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RechargeRecord> m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBERECHARGERECORDSRESPONSE_H_
