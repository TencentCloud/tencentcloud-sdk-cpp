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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_TRANSFERITEM_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_TRANSFERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 转存配置
                */
                class TransferItem : public AbstractModel
                {
                public:
                    TransferItem();
                    ~TransferItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转存状态， 1正常 2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 转存状态， 1正常 2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置转存状态， 1正常 2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 转存状态， 1正常 2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 转存状态， 1正常 2停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_TRANSFERITEM_H_
