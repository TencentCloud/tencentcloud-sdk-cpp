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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSTATE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Session 快照状态
                */
                class SessionState : public AbstractModel
                {
                public:
                    SessionState();
                    ~SessionState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义状态 JSON 对象字符串</p>
                     * @return CustomState <p>自定义状态 JSON 对象字符串</p>
                     * 
                     */
                    std::string GetCustomState() const;

                    /**
                     * 设置<p>自定义状态 JSON 对象字符串</p>
                     * @param _customState <p>自定义状态 JSON 对象字符串</p>
                     * 
                     */
                    void SetCustomState(const std::string& _customState);

                    /**
                     * 判断参数 CustomState 是否已赋值
                     * @return CustomState 是否已赋值
                     * 
                     */
                    bool CustomStateHasBeenSet() const;

                private:

                    /**
                     * <p>自定义状态 JSON 对象字符串</p>
                     */
                    std::string m_customState;
                    bool m_customStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSTATE_H_
