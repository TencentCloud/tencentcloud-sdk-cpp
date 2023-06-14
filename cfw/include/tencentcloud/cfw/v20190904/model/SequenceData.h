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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SEQUENCEDATA_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SEQUENCEDATA_H_

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
                * 执行顺序对象
                */
                class SequenceData : public AbstractModel
                {
                public:
                    SequenceData();
                    ~SequenceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id值
                     * @return Id 规则Id值
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则Id值
                     * @param _id 规则Id值
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取修改前执行顺序
                     * @return OrderIndex 修改前执行顺序
                     * 
                     */
                    uint64_t GetOrderIndex() const;

                    /**
                     * 设置修改前执行顺序
                     * @param _orderIndex 修改前执行顺序
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
                     * 获取修改后执行顺序
                     * @return NewOrderIndex 修改后执行顺序
                     * 
                     */
                    uint64_t GetNewOrderIndex() const;

                    /**
                     * 设置修改后执行顺序
                     * @param _newOrderIndex 修改后执行顺序
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
                     * 规则Id值
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改前执行顺序
                     */
                    uint64_t m_orderIndex;
                    bool m_orderIndexHasBeenSet;

                    /**
                     * 修改后执行顺序
                     */
                    uint64_t m_newOrderIndex;
                    bool m_newOrderIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SEQUENCEDATA_H_
