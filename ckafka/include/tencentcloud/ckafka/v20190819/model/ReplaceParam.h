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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_REPLACEPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_REPLACEPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理——Value处理参数——替换参数
                */
                class ReplaceParam : public AbstractModel
                {
                public:
                    ReplaceParam();
                    ~ReplaceParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取被替换值
                     * @return OldValue 被替换值
                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置被替换值
                     * @param _oldValue 被替换值
                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取替换值
                     * @return NewValue 替换值
                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置替换值
                     * @param _newValue 替换值
                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                private:

                    /**
                     * 被替换值
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 替换值
                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_REPLACEPARAM_H_
