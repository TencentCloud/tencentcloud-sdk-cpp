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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_INTEGERRANGE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_INTEGERRANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 整型范围
                */
                class IntegerRange : public AbstractModel
                {
                public:
                    IntegerRange();
                    ~IntegerRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按整形代表值的下限检索。
                     * @return LowerBound 按整形代表值的下限检索。
                     * 
                     */
                    int64_t GetLowerBound() const;

                    /**
                     * 设置按整形代表值的下限检索。
                     * @param _lowerBound 按整形代表值的下限检索。
                     * 
                     */
                    void SetLowerBound(const int64_t& _lowerBound);

                    /**
                     * 判断参数 LowerBound 是否已赋值
                     * @return LowerBound 是否已赋值
                     * 
                     */
                    bool LowerBoundHasBeenSet() const;

                    /**
                     * 获取按整形代表值的上限检索。
                     * @return UpperBound 按整形代表值的上限检索。
                     * 
                     */
                    int64_t GetUpperBound() const;

                    /**
                     * 设置按整形代表值的上限检索。
                     * @param _upperBound 按整形代表值的上限检索。
                     * 
                     */
                    void SetUpperBound(const int64_t& _upperBound);

                    /**
                     * 判断参数 UpperBound 是否已赋值
                     * @return UpperBound 是否已赋值
                     * 
                     */
                    bool UpperBoundHasBeenSet() const;

                private:

                    /**
                     * 按整形代表值的下限检索。
                     */
                    int64_t m_lowerBound;
                    bool m_lowerBoundHasBeenSet;

                    /**
                     * 按整形代表值的上限检索。
                     */
                    int64_t m_upperBound;
                    bool m_upperBoundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_INTEGERRANGE_H_
