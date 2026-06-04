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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYVARIABLEREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYVARIABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Variable.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyVariable请求参数结构体
                */
                class ModifyVariableRequest : public AbstractModel
                {
                public:
                    ModifyVariableRequest();
                    ~ModifyVariableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取app_id
                     * @return AppId app_id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置app_id
                     * @param _appId app_id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取变量信息
                     * @return Variable 变量信息
                     * 
                     */
                    Variable GetVariable() const;

                    /**
                     * 设置变量信息
                     * @param _variable 变量信息
                     * 
                     */
                    void SetVariable(const Variable& _variable);

                    /**
                     * 判断参数 Variable 是否已赋值
                     * @return Variable 是否已赋值
                     * 
                     */
                    bool VariableHasBeenSet() const;

                private:

                    /**
                     * app_id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 变量信息
                     */
                    Variable m_variable;
                    bool m_variableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYVARIABLEREQUEST_H_
