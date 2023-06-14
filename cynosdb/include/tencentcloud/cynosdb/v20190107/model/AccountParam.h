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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNTPARAM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 账号参数
                */
                class AccountParam : public AbstractModel
                {
                public:
                    AccountParam();
                    ~AccountParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称，当前仅支持参数：max_user_connections
                     * @return ParamName 参数名称，当前仅支持参数：max_user_connections
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称，当前仅支持参数：max_user_connections
                     * @param _paramName 参数名称，当前仅支持参数：max_user_connections
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取参数值
                     * @return ParamValue 参数值
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置参数值
                     * @param _paramValue 参数值
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                private:

                    /**
                     * 参数名称，当前仅支持参数：max_user_connections
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ACCOUNTPARAM_H_
