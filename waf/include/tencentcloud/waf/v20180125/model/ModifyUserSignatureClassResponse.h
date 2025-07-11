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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURECLASSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURECLASSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyUserSignatureClass返回参数结构体
                */
                class ModifyUserSignatureClassResponse : public AbstractModel
                {
                public:
                    ModifyUserSignatureClassResponse();
                    ~ModifyUserSignatureClassResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则类型ID
                     * @return TypeID 规则类型ID
                     * 
                     */
                    std::string GetTypeID() const;

                    /**
                     * 判断参数 TypeID 是否已赋值
                     * @return TypeID 是否已赋值
                     * 
                     */
                    bool TypeIDHasBeenSet() const;

                    /**
                     * 获取规则类型状态，0：关闭，1：开启
                     * @return Status 规则类型状态，0：关闭，1：开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则类型ID
                     */
                    std::string m_typeID;
                    bool m_typeIDHasBeenSet;

                    /**
                     * 规则类型状态，0：关闭，1：开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURECLASSRESPONSE_H_
