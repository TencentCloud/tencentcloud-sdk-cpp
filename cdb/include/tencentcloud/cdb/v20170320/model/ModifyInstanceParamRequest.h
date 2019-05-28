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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/Parameter.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * ModifyInstanceParam请求参数结构体
                */
                class ModifyInstanceParamRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamRequest();
                    ~ModifyInstanceParamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例短Id列表。
                     * @return InstanceIds 实例短Id列表。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例短Id列表。
                     * @param InstanceIds 实例短Id列表。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取要修改的参数列表。每一个元素是name和currentValue的组合。name是参数名，currentValue是要修改成的值。
                     * @return ParamList 要修改的参数列表。每一个元素是name和currentValue的组合。name是参数名，currentValue是要修改成的值。
                     */
                    std::vector<Parameter> GetParamList() const;

                    /**
                     * 设置要修改的参数列表。每一个元素是name和currentValue的组合。name是参数名，currentValue是要修改成的值。
                     * @param ParamList 要修改的参数列表。每一个元素是name和currentValue的组合。name是参数名，currentValue是要修改成的值。
                     */
                    void SetParamList(const std::vector<Parameter>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

                private:

                    /**
                     * 实例短Id列表。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 要修改的参数列表。每一个元素是name和currentValue的组合。name是参数名，currentValue是要修改成的值。
                     */
                    std::vector<Parameter> m_paramList;
                    bool m_paramListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYINSTANCEPARAMREQUEST_H_
