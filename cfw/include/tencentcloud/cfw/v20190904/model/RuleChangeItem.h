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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 规则顺序变更项，由原始id值变为新的id值。
                */
                class RuleChangeItem : public AbstractModel
                {
                public:
                    RuleChangeItem();
                    ~RuleChangeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原始sequence 值
                     * @return OrderIndex 原始sequence 值
                     * 
                     */
                    int64_t GetOrderIndex() const;

                    /**
                     * 设置原始sequence 值
                     * @param _orderIndex 原始sequence 值
                     * 
                     */
                    void SetOrderIndex(const int64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取新的sequence 值
                     * @return NewOrderIndex 新的sequence 值
                     * 
                     */
                    int64_t GetNewOrderIndex() const;

                    /**
                     * 设置新的sequence 值
                     * @param _newOrderIndex 新的sequence 值
                     * 
                     */
                    void SetNewOrderIndex(const int64_t& _newOrderIndex);

                    /**
                     * 判断参数 NewOrderIndex 是否已赋值
                     * @return NewOrderIndex 是否已赋值
                     * 
                     */
                    bool NewOrderIndexHasBeenSet() const;

                    /**
                     * 获取Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * @return IpVersion Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * 
                     */
                    int64_t GetIpVersion() const;

                    /**
                     * 设置Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * @param _ipVersion Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     * 
                     */
                    void SetIpVersion(const int64_t& _ipVersion);

                    /**
                     * 判断参数 IpVersion 是否已赋值
                     * @return IpVersion 是否已赋值
                     * 
                     */
                    bool IpVersionHasBeenSet() const;

                private:

                    /**
                     * 原始sequence 值
                     */
                    int64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 新的sequence 值
                     */
                    int64_t m_newOrderIndex;
                    bool m_newOrderIndexHasBeenSet;

                    /**
                     * Ip版本，0：IPv4，1：IPv6，默认为IPv4
                     */
                    int64_t m_ipVersion;
                    bool m_ipVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_RULECHANGEITEM_H_
