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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ASSIGNMANGEDTABLEPROPERTIESRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ASSIGNMANGEDTABLEPROPERTIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Property.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * AssignMangedTableProperties返回参数结构体
                */
                class AssignMangedTablePropertiesResponse : public AbstractModel
                {
                public:
                    AssignMangedTablePropertiesResponse();
                    ~AssignMangedTablePropertiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分配的原生表表属性
                     * @return Properties 分配的原生表表属性
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 分配的原生表表属性
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ASSIGNMANGEDTABLEPROPERTIESRESPONSE_H_
