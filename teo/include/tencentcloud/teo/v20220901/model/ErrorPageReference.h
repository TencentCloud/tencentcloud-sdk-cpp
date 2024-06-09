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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEREFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义错误页面被引用的来源
                */
                class ErrorPageReference : public AbstractModel
                {
                public:
                    ErrorPageReference();
                    ~ErrorPageReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引用的业务 ID，如自定义拦截规则 ID。
                     * @return BusinessId 引用的业务 ID，如自定义拦截规则 ID。
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置引用的业务 ID，如自定义拦截规则 ID。
                     * @param _businessId 引用的业务 ID，如自定义拦截规则 ID。
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                private:

                    /**
                     * 引用的业务 ID，如自定义拦截规则 ID。
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ERRORPAGEREFERENCE_H_
