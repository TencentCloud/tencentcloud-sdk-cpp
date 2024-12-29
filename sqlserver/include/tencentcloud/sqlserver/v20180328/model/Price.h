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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRICE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 参考价格，该价格为CPU、内存规格价格，不包括磁盘用量，实际价格以询价接口为准。
                */
                class Price : public AbstractModel
                {
                public:
                    Price();
                    ~Price() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取包年包月参考价格，单位-分
                     * @return PrepaidPrice 包年包月参考价格，单位-分
                     * 
                     */
                    uint64_t GetPrepaidPrice() const;

                    /**
                     * 设置包年包月参考价格，单位-分
                     * @param _prepaidPrice 包年包月参考价格，单位-分
                     * 
                     */
                    void SetPrepaidPrice(const uint64_t& _prepaidPrice);

                    /**
                     * 判断参数 PrepaidPrice 是否已赋值
                     * @return PrepaidPrice 是否已赋值
                     * 
                     */
                    bool PrepaidPriceHasBeenSet() const;

                    /**
                     * 获取包年包月价格单位，M-月
                     * @return PrepaidPriceUnit 包年包月价格单位，M-月
                     * 
                     */
                    std::string GetPrepaidPriceUnit() const;

                    /**
                     * 设置包年包月价格单位，M-月
                     * @param _prepaidPriceUnit 包年包月价格单位，M-月
                     * 
                     */
                    void SetPrepaidPriceUnit(const std::string& _prepaidPriceUnit);

                    /**
                     * 判断参数 PrepaidPriceUnit 是否已赋值
                     * @return PrepaidPriceUnit 是否已赋值
                     * 
                     */
                    bool PrepaidPriceUnitHasBeenSet() const;

                    /**
                     * 获取按量付费价格，单位-分
                     * @return PostpaidPrice 按量付费价格，单位-分
                     * 
                     */
                    uint64_t GetPostpaidPrice() const;

                    /**
                     * 设置按量付费价格，单位-分
                     * @param _postpaidPrice 按量付费价格，单位-分
                     * 
                     */
                    void SetPostpaidPrice(const uint64_t& _postpaidPrice);

                    /**
                     * 判断参数 PostpaidPrice 是否已赋值
                     * @return PostpaidPrice 是否已赋值
                     * 
                     */
                    bool PostpaidPriceHasBeenSet() const;

                    /**
                     * 获取按量付费价格单位，H-小时
                     * @return PostpaidPriceUnit 按量付费价格单位，H-小时
                     * 
                     */
                    std::string GetPostpaidPriceUnit() const;

                    /**
                     * 设置按量付费价格单位，H-小时
                     * @param _postpaidPriceUnit 按量付费价格单位，H-小时
                     * 
                     */
                    void SetPostpaidPriceUnit(const std::string& _postpaidPriceUnit);

                    /**
                     * 判断参数 PostpaidPriceUnit 是否已赋值
                     * @return PostpaidPriceUnit 是否已赋值
                     * 
                     */
                    bool PostpaidPriceUnitHasBeenSet() const;

                private:

                    /**
                     * 包年包月参考价格，单位-分
                     */
                    uint64_t m_prepaidPrice;
                    bool m_prepaidPriceHasBeenSet;

                    /**
                     * 包年包月价格单位，M-月
                     */
                    std::string m_prepaidPriceUnit;
                    bool m_prepaidPriceUnitHasBeenSet;

                    /**
                     * 按量付费价格，单位-分
                     */
                    uint64_t m_postpaidPrice;
                    bool m_postpaidPriceHasBeenSet;

                    /**
                     * 按量付费价格单位，H-小时
                     */
                    std::string m_postpaidPriceUnit;
                    bool m_postpaidPriceUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_PRICE_H_
