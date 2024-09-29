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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/FunctionEnvironmentVariable.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HandleFunctionRuntimeEnvironment请求参数结构体
                */
                class HandleFunctionRuntimeEnvironmentRequest : public AbstractModel
                {
                public:
                    HandleFunctionRuntimeEnvironmentRequest();
                    ~HandleFunctionRuntimeEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取函数 ID。
                     * @return FunctionId 函数 ID。
                     * 
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID。
                     * @param _functionId 函数 ID。
                     * 
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     * 
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取操作类型，取值有：
<li>setEnvironmentVariable：设置环境变量，当环境变量存在时为修改行为，否则为添加行为；</li>
<li>deleteEnvironmentVariable：删除环境变量变量；</li>
<li>clearEnvironmentVariable：清空环境变量变量；</li>
<li>resetEnvironmentVariable：重置环境变量变量。</li>
                     * @return Operation 操作类型，取值有：
<li>setEnvironmentVariable：设置环境变量，当环境变量存在时为修改行为，否则为添加行为；</li>
<li>deleteEnvironmentVariable：删除环境变量变量；</li>
<li>clearEnvironmentVariable：清空环境变量变量；</li>
<li>resetEnvironmentVariable：重置环境变量变量。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型，取值有：
<li>setEnvironmentVariable：设置环境变量，当环境变量存在时为修改行为，否则为添加行为；</li>
<li>deleteEnvironmentVariable：删除环境变量变量；</li>
<li>clearEnvironmentVariable：清空环境变量变量；</li>
<li>resetEnvironmentVariable：重置环境变量变量。</li>
                     * @param _operation 操作类型，取值有：
<li>setEnvironmentVariable：设置环境变量，当环境变量存在时为修改行为，否则为添加行为；</li>
<li>deleteEnvironmentVariable：删除环境变量变量；</li>
<li>clearEnvironmentVariable：清空环境变量变量；</li>
<li>resetEnvironmentVariable：重置环境变量变量。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取环境变量列表，函数运行环境最多支持 64 个变量。当 Operation 取值为 setEnvironmentVariable、deleteEnvironmentVariable、resetEnvironmentVariable 时必填。
                     * @return EnvironmentVariables 环境变量列表，函数运行环境最多支持 64 个变量。当 Operation 取值为 setEnvironmentVariable、deleteEnvironmentVariable、resetEnvironmentVariable 时必填。
                     * 
                     */
                    std::vector<FunctionEnvironmentVariable> GetEnvironmentVariables() const;

                    /**
                     * 设置环境变量列表，函数运行环境最多支持 64 个变量。当 Operation 取值为 setEnvironmentVariable、deleteEnvironmentVariable、resetEnvironmentVariable 时必填。
                     * @param _environmentVariables 环境变量列表，函数运行环境最多支持 64 个变量。当 Operation 取值为 setEnvironmentVariable、deleteEnvironmentVariable、resetEnvironmentVariable 时必填。
                     * 
                     */
                    void SetEnvironmentVariables(const std::vector<FunctionEnvironmentVariable>& _environmentVariables);

                    /**
                     * 判断参数 EnvironmentVariables 是否已赋值
                     * @return EnvironmentVariables 是否已赋值
                     * 
                     */
                    bool EnvironmentVariablesHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 函数 ID。
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 操作类型，取值有：
<li>setEnvironmentVariable：设置环境变量，当环境变量存在时为修改行为，否则为添加行为；</li>
<li>deleteEnvironmentVariable：删除环境变量变量；</li>
<li>clearEnvironmentVariable：清空环境变量变量；</li>
<li>resetEnvironmentVariable：重置环境变量变量。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 环境变量列表，函数运行环境最多支持 64 个变量。当 Operation 取值为 setEnvironmentVariable、deleteEnvironmentVariable、resetEnvironmentVariable 时必填。
                     */
                    std::vector<FunctionEnvironmentVariable> m_environmentVariables;
                    bool m_environmentVariablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_HANDLEFUNCTIONRUNTIMEENVIRONMENTREQUEST_H_
