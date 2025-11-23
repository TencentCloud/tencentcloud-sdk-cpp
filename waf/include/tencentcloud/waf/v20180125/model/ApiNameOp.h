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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEOP_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEOP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ApiNameMethod.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 带有匹配方式的apiname列表
                */
                class ApiNameOp : public AbstractModel
                {
                public:
                    ApiNameOp();
                    ~ApiNameOp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取匹配值列表
                     * @return Value 匹配值列表
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置匹配值列表
                     * @param _value 匹配值列表
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取匹配方式，如属于和正则等
                     * @return Op 匹配方式，如属于和正则等
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置匹配方式，如属于和正则等
                     * @param _op 匹配方式，如属于和正则等
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取手动筛选的时候，要传该结构体
                     * @return ApiNameMethod 手动筛选的时候，要传该结构体
                     * 
                     */
                    std::vector<ApiNameMethod> GetApiNameMethod() const;

                    /**
                     * 设置手动筛选的时候，要传该结构体
                     * @param _apiNameMethod 手动筛选的时候，要传该结构体
                     * 
                     */
                    void SetApiNameMethod(const std::vector<ApiNameMethod>& _apiNameMethod);

                    /**
                     * 判断参数 ApiNameMethod 是否已赋值
                     * @return ApiNameMethod 是否已赋值
                     * 
                     */
                    bool ApiNameMethodHasBeenSet() const;

                private:

                    /**
                     * 匹配值列表
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 匹配方式，如属于和正则等
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 手动筛选的时候，要传该结构体
                     */
                    std::vector<ApiNameMethod> m_apiNameMethod;
                    bool m_apiNameMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_APINAMEOP_H_
