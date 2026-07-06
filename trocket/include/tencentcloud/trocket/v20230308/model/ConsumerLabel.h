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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABEL_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 消费组标签
                */
                class ConsumerLabel : public AbstractModel
                {
                public:
                    ConsumerLabel();
                    ~ConsumerLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签</p>
                     * @return Label <p>标签</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _label <p>标签</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>标签状态</p><p>枚举值：</p><ul><li>ACTIVE： 生效中</li><li>DELETING： 删除中</li><li>UNKNOWN： 未知</li></ul>
                     * @return State <p>标签状态</p><p>枚举值：</p><ul><li>ACTIVE： 生效中</li><li>DELETING： 删除中</li><li>UNKNOWN： 未知</li></ul>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>标签状态</p><p>枚举值：</p><ul><li>ACTIVE： 生效中</li><li>DELETING： 删除中</li><li>UNKNOWN： 未知</li></ul>
                     * @param _state <p>标签状态</p><p>枚举值：</p><ul><li>ACTIVE： 生效中</li><li>DELETING： 删除中</li><li>UNKNOWN： 未知</li></ul>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p><p>单位：毫秒(ms)</p>
                     * @return UpdatedAt <p>更新时间</p><p>单位：毫秒(ms)</p>
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p><p>单位：毫秒(ms)</p>
                     * @param _updatedAt <p>更新时间</p><p>单位：毫秒(ms)</p>
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>标签</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>标签状态</p><p>枚举值：</p><ul><li>ACTIVE： 生效中</li><li>DELETING： 删除中</li><li>UNKNOWN： 未知</li></ul>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>更新时间</p><p>单位：毫秒(ms)</p>
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CONSUMERLABEL_H_
