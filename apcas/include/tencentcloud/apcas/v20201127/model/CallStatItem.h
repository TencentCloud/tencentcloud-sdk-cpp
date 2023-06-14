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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_CALLSTATITEM_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_CALLSTATITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * 调用量统计item
                */
                class CallStatItem : public AbstractModel
                {
                public:
                    CallStatItem();
                    ~CallStatItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前统计量的时间段
                     * @return Date 当前统计量的时间段
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置当前统计量的时间段
                     * @param _date 当前统计量的时间段
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取当前时间段的调用量
                     * @return Amount 当前时间段的调用量
                     * 
                     */
                    uint64_t GetAmount() const;

                    /**
                     * 设置当前时间段的调用量
                     * @param _amount 当前时间段的调用量
                     * 
                     */
                    void SetAmount(const uint64_t& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                private:

                    /**
                     * 当前统计量的时间段
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 当前时间段的调用量
                     */
                    uint64_t m_amount;
                    bool m_amountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_CALLSTATITEM_H_
