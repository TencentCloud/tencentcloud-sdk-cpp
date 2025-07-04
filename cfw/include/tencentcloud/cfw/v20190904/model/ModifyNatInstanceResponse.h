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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyNatInstance返回参数结构体
                */
                class ModifyNatInstanceResponse : public AbstractModel
                {
                public:
                    ModifyNatInstanceResponse();
                    ~ModifyNatInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0 正常
-1 异常
                     * @return Status 0 正常
-1 异常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取nat实例唯一ID
                     * @return NatInstanceId nat实例唯一ID
                     * 
                     */
                    std::string GetNatInstanceId() const;

                    /**
                     * 判断参数 NatInstanceId 是否已赋值
                     * @return NatInstanceId 是否已赋值
                     * 
                     */
                    bool NatInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 0 正常
-1 异常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * nat实例唯一ID
                     */
                    std::string m_natInstanceId;
                    bool m_natInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATINSTANCERESPONSE_H_
