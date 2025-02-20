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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_EXCHANGEQUOTA_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_EXCHANGEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * exchange使用配额信息
                */
                class ExchangeQuota : public AbstractModel
                {
                public:
                    ExchangeQuota();
                    ~ExchangeQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可创建最大exchange数
                     * @return MaxExchange 可创建最大exchange数
                     * 
                     */
                    int64_t GetMaxExchange() const;

                    /**
                     * 设置可创建最大exchange数
                     * @param _maxExchange 可创建最大exchange数
                     * 
                     */
                    void SetMaxExchange(const int64_t& _maxExchange);

                    /**
                     * 判断参数 MaxExchange 是否已赋值
                     * @return MaxExchange 是否已赋值
                     * 
                     */
                    bool MaxExchangeHasBeenSet() const;

                    /**
                     * 获取已创建exchange数
                     * @return UsedExchange 已创建exchange数
                     * 
                     */
                    int64_t GetUsedExchange() const;

                    /**
                     * 设置已创建exchange数
                     * @param _usedExchange 已创建exchange数
                     * 
                     */
                    void SetUsedExchange(const int64_t& _usedExchange);

                    /**
                     * 判断参数 UsedExchange 是否已赋值
                     * @return UsedExchange 是否已赋值
                     * 
                     */
                    bool UsedExchangeHasBeenSet() const;

                private:

                    /**
                     * 可创建最大exchange数
                     */
                    int64_t m_maxExchange;
                    bool m_maxExchangeHasBeenSet;

                    /**
                     * 已创建exchange数
                     */
                    int64_t m_usedExchange;
                    bool m_usedExchangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_EXCHANGEQUOTA_H_
