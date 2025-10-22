/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险调用记录详情
                */
                class RiskCallRecord : public AbstractModel
                {
                public:
                    RiskCallRecord();
                    ~RiskCallRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接口名称
                     * @return EventName 接口名称
                     * 
                     */
                    std::string GetEventName() const;

                    /**
                     * 设置接口名称
                     * @param _eventName 接口名称
                     * 
                     */
                    void SetEventName(const std::string& _eventName);

                    /**
                     * 判断参数 EventName 是否已赋值
                     * @return EventName 是否已赋值
                     * 
                     */
                    bool EventNameHasBeenSet() const;

                    /**
                     * 获取接口中文描述
                     * @return EventDescCN 接口中文描述
                     * 
                     */
                    std::string GetEventDescCN() const;

                    /**
                     * 设置接口中文描述
                     * @param _eventDescCN 接口中文描述
                     * 
                     */
                    void SetEventDescCN(const std::string& _eventDescCN);

                    /**
                     * 判断参数 EventDescCN 是否已赋值
                     * @return EventDescCN 是否已赋值
                     * 
                     */
                    bool EventDescCNHasBeenSet() const;

                    /**
                     * 获取接口英文描述
                     * @return EventDescEN 接口英文描述
                     * 
                     */
                    std::string GetEventDescEN() const;

                    /**
                     * 设置接口英文描述
                     * @param _eventDescEN 接口英文描述
                     * 
                     */
                    void SetEventDescEN(const std::string& _eventDescEN);

                    /**
                     * 判断参数 EventDescEN 是否已赋值
                     * @return EventDescEN 是否已赋值
                     * 
                     */
                    bool EventDescENHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品中文名称
                     * @return ProductNameCN 产品中文名称
                     * 
                     */
                    std::string GetProductNameCN() const;

                    /**
                     * 设置产品中文名称
                     * @param _productNameCN 产品中文名称
                     * 
                     */
                    void SetProductNameCN(const std::string& _productNameCN);

                    /**
                     * 判断参数 ProductNameCN 是否已赋值
                     * @return ProductNameCN 是否已赋值
                     * 
                     */
                    bool ProductNameCNHasBeenSet() const;

                    /**
                     * 获取调用次数
                     * @return CallCount 调用次数
                     * 
                     */
                    int64_t GetCallCount() const;

                    /**
                     * 设置调用次数
                     * @param _callCount 调用次数
                     * 
                     */
                    void SetCallCount(const int64_t& _callCount);

                    /**
                     * 判断参数 CallCount 是否已赋值
                     * @return CallCount 是否已赋值
                     * 
                     */
                    bool CallCountHasBeenSet() const;

                private:

                    /**
                     * 接口名称
                     */
                    std::string m_eventName;
                    bool m_eventNameHasBeenSet;

                    /**
                     * 接口中文描述
                     */
                    std::string m_eventDescCN;
                    bool m_eventDescCNHasBeenSet;

                    /**
                     * 接口英文描述
                     */
                    std::string m_eventDescEN;
                    bool m_eventDescENHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品中文名称
                     */
                    std::string m_productNameCN;
                    bool m_productNameCNHasBeenSet;

                    /**
                     * 调用次数
                     */
                    int64_t m_callCount;
                    bool m_callCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKCALLRECORD_H_
