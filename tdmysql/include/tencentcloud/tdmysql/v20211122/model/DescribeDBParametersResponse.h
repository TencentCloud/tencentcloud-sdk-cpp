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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmysql/v20211122/model/ParamDesc.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * DescribeDBParameters返回参数结构体
                */
                class DescribeDBParametersResponse : public AbstractModel
                {
                public:
                    DescribeDBParametersResponse();
                    ~DescribeDBParametersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql3-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql3-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取请求实例的当前参数值
                     * @return Params 请求实例的当前参数值
                     * 
                     */
                    std::vector<ParamDesc> GetParams() const;

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql3-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 请求实例的当前参数值
                     */
                    std::vector<ParamDesc> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_DESCRIBEDBPARAMETERSRESPONSE_H_
