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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FLOWUSAGE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FLOWUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 流量包用量
                */
                class FlowUsage : public AbstractModel
                {
                public:
                    FlowUsage();
                    ~FlowUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量包类型：ZONE 私有域；TRAFFIC 解析流量包
                     * @return FlowType 流量包类型：ZONE 私有域；TRAFFIC 解析流量包
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置流量包类型：ZONE 私有域；TRAFFIC 解析流量包
                     * @param _flowType 流量包类型：ZONE 私有域；TRAFFIC 解析流量包
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流量包总额度
                     * @return TotalQuantity 流量包总额度
                     * 
                     */
                    int64_t GetTotalQuantity() const;

                    /**
                     * 设置流量包总额度
                     * @param _totalQuantity 流量包总额度
                     * 
                     */
                    void SetTotalQuantity(const int64_t& _totalQuantity);

                    /**
                     * 判断参数 TotalQuantity 是否已赋值
                     * @return TotalQuantity 是否已赋值
                     * 
                     */
                    bool TotalQuantityHasBeenSet() const;

                    /**
                     * 获取流量包可用额度
                     * @return AvailableQuantity 流量包可用额度
                     * 
                     */
                    int64_t GetAvailableQuantity() const;

                    /**
                     * 设置流量包可用额度
                     * @param _availableQuantity 流量包可用额度
                     * 
                     */
                    void SetAvailableQuantity(const int64_t& _availableQuantity);

                    /**
                     * 判断参数 AvailableQuantity 是否已赋值
                     * @return AvailableQuantity 是否已赋值
                     * 
                     */
                    bool AvailableQuantityHasBeenSet() const;

                private:

                    /**
                     * 流量包类型：ZONE 私有域；TRAFFIC 解析流量包
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流量包总额度
                     */
                    int64_t m_totalQuantity;
                    bool m_totalQuantityHasBeenSet;

                    /**
                     * 流量包可用额度
                     */
                    int64_t m_availableQuantity;
                    bool m_availableQuantityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_FLOWUSAGE_H_
