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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEMETHOD_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEMETHOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 带有请求方式的apiname结构体
                */
                class ApiNameMethod : public AbstractModel
                {
                public:
                    ApiNameMethod();
                    ~ApiNameMethod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取api名称
                     * @return ApiName api名称
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置api名称
                     * @param _apiName api名称
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取api请求方式
                     * @return Method api请求方式
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置api请求方式
                     * @param _method api请求方式
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取api近30天请求数量
                     * @return Count api近30天请求数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置api近30天请求数量
                     * @param _count api近30天请求数量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取api标签
                     * @return Label api标签
                     * 
                     */
                    std::vector<std::string> GetLabel() const;

                    /**
                     * 设置api标签
                     * @param _label api标签
                     * 
                     */
                    void SetLabel(const std::vector<std::string>& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * api名称
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * api请求方式
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * api近30天请求数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * api标签
                     */
                    std::vector<std::string> m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEMETHOD_H_
