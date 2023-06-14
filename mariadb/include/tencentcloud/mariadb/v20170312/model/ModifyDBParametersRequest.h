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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBPARAMETERSREQUEST_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBPARAMETERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/DBParamValue.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBParameters请求参数结构体
                */
                class ModifyDBParametersRequest : public AbstractModel
                {
                public:
                    ModifyDBParametersRequest();
                    ~ModifyDBParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如：tdsql-ow728lmc。
                     * @return InstanceId 实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如：tdsql-ow728lmc。
                     * @param _instanceId 实例 ID，形如：tdsql-ow728lmc。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取参数列表，每一个元素是Param和Value的组合
                     * @return Params 参数列表，每一个元素是Param和Value的组合
                     * 
                     */
                    std::vector<DBParamValue> GetParams() const;

                    /**
                     * 设置参数列表，每一个元素是Param和Value的组合
                     * @param _params 参数列表，每一个元素是Param和Value的组合
                     * 
                     */
                    void SetParams(const std::vector<DBParamValue>& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如：tdsql-ow728lmc。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 参数列表，每一个元素是Param和Value的组合
                     */
                    std::vector<DBParamValue> m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_MODIFYDBPARAMETERSREQUEST_H_
