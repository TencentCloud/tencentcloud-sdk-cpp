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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 客户信息
                */
                class CustomerInfo : public AbstractModel
                {
                public:
                    CustomerInfo();
                    ~CustomerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公司全称
                     * @return CustomerName 公司全称
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置公司全称
                     * @param _customerName 公司全称
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取公司简称
                     * @return ShortCustomerName 公司简称
                     * 
                     */
                    std::string GetShortCustomerName() const;

                    /**
                     * 设置公司简称
                     * @param _shortCustomerName 公司简称
                     * 
                     */
                    void SetShortCustomerName(const std::string& _shortCustomerName);

                    /**
                     * 判断参数 ShortCustomerName 是否已赋值
                     * @return ShortCustomerName 是否已赋值
                     * 
                     */
                    bool ShortCustomerNameHasBeenSet() const;

                    /**
                     * 获取是否全托管用户
                     * @return WholeFlag 是否全托管用户
                     * 
                     */
                    bool GetWholeFlag() const;

                    /**
                     * 设置是否全托管用户
                     * @param _wholeFlag 是否全托管用户
                     * 
                     */
                    void SetWholeFlag(const bool& _wholeFlag);

                    /**
                     * 判断参数 WholeFlag 是否已赋值
                     * @return WholeFlag 是否已赋值
                     * 
                     */
                    bool WholeFlagHasBeenSet() const;

                private:

                    /**
                     * 公司全称
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 公司简称
                     */
                    std::string m_shortCustomerName;
                    bool m_shortCustomerNameHasBeenSet;

                    /**
                     * 是否全托管用户
                     */
                    bool m_wholeFlag;
                    bool m_wholeFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_CUSTOMERINFO_H_
