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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPORDERINDEXDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPORDERINDEXDATA_H_

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
                * 企业安全组规则执行顺序修改对象
                */
                class SecurityGroupOrderIndexData : public AbstractModel
                {
                public:
                    SecurityGroupOrderIndexData();
                    ~SecurityGroupOrderIndexData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业安全组规则当前执行顺序
                     * @return OrderIndex 企业安全组规则当前执行顺序
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置企业安全组规则当前执行顺序
                     * @param _orderIndex 企业安全组规则当前执行顺序
                     * 
                     */
                    void SetOrderIndex(const uint64_t& _orderIndex);

                    /**
                     * 判断参数 OrderIndex 是否已赋值
                     * @return OrderIndex 是否已赋值
                     * 
                     */
                    bool OrderIndexHasBeenSet() const;

                    /**
                     * 获取企业安全组规则更新目标执行顺序
                     * @return NewOrderIndex 企业安全组规则更新目标执行顺序
                     * 
                     */
                    uint64_t GetNewOrderIndex() const;

                    /**
                     * 设置企业安全组规则更新目标执行顺序
                     * @param _newOrderIndex 企业安全组规则更新目标执行顺序
                     * 
                     */
                    void SetNewOrderIndex(const uint64_t& _newOrderIndex);

                    /**
                     * 判断参数 NewOrderIndex 是否已赋值
                     * @return NewOrderIndex 是否已赋值
                     * 
                     */
                    bool NewOrderIndexHasBeenSet() const;

                private:

                    /**
                     * 企业安全组规则当前执行顺序
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 企业安全组规则更新目标执行顺序
                     */
                    uint64_t m_newOrderIndex;
                    bool m_newOrderIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SECURITYGROUPORDERINDEXDATA_H_
