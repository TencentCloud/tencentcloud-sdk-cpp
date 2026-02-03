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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECLIENTQPSPOLICY_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECLIENTQPSPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * http访问服务客户端限频
                */
                class CloudBaseClientQPSPolicy : public AbstractModel
                {
                public:
                    CloudBaseClientQPSPolicy();
                    ~CloudBaseClientQPSPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取UserID 或 ClientIP 或 None，如果为 None 代表不限制
                     * @return LimitBy UserID 或 ClientIP 或 None，如果为 None 代表不限制
                     * 
                     */
                    std::string GetLimitBy() const;

                    /**
                     * 设置UserID 或 ClientIP 或 None，如果为 None 代表不限制
                     * @param _limitBy UserID 或 ClientIP 或 None，如果为 None 代表不限制
                     * 
                     */
                    void SetLimitBy(const std::string& _limitBy);

                    /**
                     * 判断参数 LimitBy 是否已赋值
                     * @return LimitBy 是否已赋值
                     * 
                     */
                    bool LimitByHasBeenSet() const;

                    /**
                     * 获取限制值
                     * @return LimitValue 限制值
                     * 
                     */
                    int64_t GetLimitValue() const;

                    /**
                     * 设置限制值
                     * @param _limitValue 限制值
                     * 
                     */
                    void SetLimitValue(const int64_t& _limitValue);

                    /**
                     * 判断参数 LimitValue 是否已赋值
                     * @return LimitValue 是否已赋值
                     * 
                     */
                    bool LimitValueHasBeenSet() const;

                private:

                    /**
                     * UserID 或 ClientIP 或 None，如果为 None 代表不限制
                     */
                    std::string m_limitBy;
                    bool m_limitByHasBeenSet;

                    /**
                     * 限制值
                     */
                    int64_t m_limitValue;
                    bool m_limitValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDBASECLIENTQPSPOLICY_H_
