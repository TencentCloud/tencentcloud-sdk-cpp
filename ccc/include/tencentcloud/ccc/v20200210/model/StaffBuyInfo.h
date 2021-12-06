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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 坐席购买信息
                */
                class StaffBuyInfo : public AbstractModel
                {
                public:
                    StaffBuyInfo();
                    ~StaffBuyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取购买坐席数量
                     * @return Num 购买坐席数量
                     */
                    int64_t GetNum() const;

                    /**
                     * 设置购买坐席数量
                     * @param Num 购买坐席数量
                     */
                    void SetNum(const int64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取购买时间戳
                     * @return BuyTime 购买时间戳
                     */
                    int64_t GetBuyTime() const;

                    /**
                     * 设置购买时间戳
                     * @param BuyTime 购买时间戳
                     */
                    void SetBuyTime(const int64_t& _buyTime);

                    /**
                     * 判断参数 BuyTime 是否已赋值
                     * @return BuyTime 是否已赋值
                     */
                    bool BuyTimeHasBeenSet() const;

                    /**
                     * 获取截至时间戳
                     * @return EndTime 截至时间戳
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截至时间戳
                     * @param EndTime 截至时间戳
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 购买坐席数量
                     */
                    int64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 购买时间戳
                     */
                    int64_t m_buyTime;
                    bool m_buyTimeHasBeenSet;

                    /**
                     * 截至时间戳
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFBUYINFO_H_
