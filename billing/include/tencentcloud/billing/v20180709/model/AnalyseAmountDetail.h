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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 成本分析金额返回数据模型
                */
                class AnalyseAmountDetail : public AbstractModel
                {
                public:
                    AnalyseAmountDetail();
                    ~AnalyseAmountDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取费用类型
                     * @return Key 费用类型
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置费用类型
                     * @param _key 费用类型
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取是否展示
                     * @return Display 是否展示
                     * 
                     */
                    int64_t GetDisplay() const;

                    /**
                     * 设置是否展示
                     * @param _display 是否展示
                     * 
                     */
                    void SetDisplay(const int64_t& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                private:

                    /**
                     * 费用类型
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 是否展示
                     */
                    int64_t m_display;
                    bool m_displayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_ANALYSEAMOUNTDETAIL_H_
