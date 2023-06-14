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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSLEVELRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSLEVELRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * ModifyDDoSLevel返回参数结构体
                */
                class ModifyDDoSLevelResponse : public AbstractModel
                {
                public:
                    ModifyDDoSLevelResponse();
                    ~ModifyDDoSLevelResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防护等级，取值[low,middle,high]
                     * @return DDoSLevel 防护等级，取值[low,middle,high]
                     * 
                     */
                    std::string GetDDoSLevel() const;

                    /**
                     * 判断参数 DDoSLevel 是否已赋值
                     * @return DDoSLevel 是否已赋值
                     * 
                     */
                    bool DDoSLevelHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return Id 资源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 防护等级，取值[low,middle,high]
                     */
                    std::string m_dDoSLevel;
                    bool m_dDoSLevelHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_MODIFYDDOSLEVELRESPONSE_H_
