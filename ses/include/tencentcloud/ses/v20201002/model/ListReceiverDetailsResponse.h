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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ses/v20201002/model/ReceiverDetail.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListReceiverDetails返回参数结构体
                */
                class ListReceiverDetailsResponse : public AbstractModel
                {
                public:
                    ListReceiverDetailsResponse();
                    ~ListReceiverDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取数据记录
                     * @return Data 数据记录
                     * 
                     */
                    std::vector<ReceiverDetail> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取有效邮件地址数
                     * @return ValidCount 有效邮件地址数
                     * 
                     */
                    uint64_t GetValidCount() const;

                    /**
                     * 判断参数 ValidCount 是否已赋值
                     * @return ValidCount 是否已赋值
                     * 
                     */
                    bool ValidCountHasBeenSet() const;

                    /**
                     * 获取无效邮件地址数
                     * @return InvalidCount 无效邮件地址数
                     * 
                     */
                    uint64_t GetInvalidCount() const;

                    /**
                     * 判断参数 InvalidCount 是否已赋值
                     * @return InvalidCount 是否已赋值
                     * 
                     */
                    bool InvalidCountHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据记录
                     */
                    std::vector<ReceiverDetail> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 有效邮件地址数
                     */
                    uint64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * 无效邮件地址数
                     */
                    uint64_t m_invalidCount;
                    bool m_invalidCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTRECEIVERDETAILSRESPONSE_H_
