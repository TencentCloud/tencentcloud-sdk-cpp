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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATARESPONSE_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * CreateReceiverDetailWithData返回参数结构体
                */
                class CreateReceiverDetailWithDataResponse : public AbstractModel
                {
                public:
                    CreateReceiverDetailWithDataResponse();
                    ~CreateReceiverDetailWithDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取收件人总数
                     * @return TotalCount 收件人总数
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
                     * 获取实际上传数量
                     * @return ValidCount 实际上传数量
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
                     * 获取数据过长数量
                     * @return TooLongCount 数据过长数量
                     * 
                     */
                    uint64_t GetTooLongCount() const;

                    /**
                     * 判断参数 TooLongCount 是否已赋值
                     * @return TooLongCount 是否已赋值
                     * 
                     */
                    bool TooLongCountHasBeenSet() const;

                    /**
                     * 获取邮件地址为空数量
                     * @return EmptyEmailCount 邮件地址为空数量
                     * 
                     */
                    uint64_t GetEmptyEmailCount() const;

                    /**
                     * 判断参数 EmptyEmailCount 是否已赋值
                     * @return EmptyEmailCount 是否已赋值
                     * 
                     */
                    bool EmptyEmailCountHasBeenSet() const;

                    /**
                     * 获取重复数量
                     * @return RepeatCount 重复数量
                     * 
                     */
                    uint64_t GetRepeatCount() const;

                    /**
                     * 判断参数 RepeatCount 是否已赋值
                     * @return RepeatCount 是否已赋值
                     * 
                     */
                    bool RepeatCountHasBeenSet() const;

                private:

                    /**
                     * 收件人总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实际上传数量
                     */
                    uint64_t m_validCount;
                    bool m_validCountHasBeenSet;

                    /**
                     * 数据过长数量
                     */
                    uint64_t m_tooLongCount;
                    bool m_tooLongCountHasBeenSet;

                    /**
                     * 邮件地址为空数量
                     */
                    uint64_t m_emptyEmailCount;
                    bool m_emptyEmailCountHasBeenSet;

                    /**
                     * 重复数量
                     */
                    uint64_t m_repeatCount;
                    bool m_repeatCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_CREATERECEIVERDETAILWITHDATARESPONSE_H_
