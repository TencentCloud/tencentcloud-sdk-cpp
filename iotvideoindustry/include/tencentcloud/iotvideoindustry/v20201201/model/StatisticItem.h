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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STATISTICITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STATISTICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 某天的统计数额
                */
                class StatisticItem : public AbstractModel
                {
                public:
                    StatisticItem();
                    ~StatisticItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期。格式【YYYY-MM-DD】
                     * @return Date 日期。格式【YYYY-MM-DD】
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期。格式【YYYY-MM-DD】
                     * @param _date 日期。格式【YYYY-MM-DD】
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
                     * 获取统计数额
                     * @return Sum 统计数额
                     * 
                     */
                    double GetSum() const;

                    /**
                     * 设置统计数额
                     * @param _sum 统计数额
                     * 
                     */
                    void SetSum(const double& _sum);

                    /**
                     * 判断参数 Sum 是否已赋值
                     * @return Sum 是否已赋值
                     * 
                     */
                    bool SumHasBeenSet() const;

                private:

                    /**
                     * 日期。格式【YYYY-MM-DD】
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 统计数额
                     */
                    double m_sum;
                    bool m_sumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_STATISTICITEM_H_
