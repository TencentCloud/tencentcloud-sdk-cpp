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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * ModifyAddressPool返回参数结构体
                */
                class ModifyAddressPoolResponse : public AbstractModel
                {
                public:
                    ModifyAddressPoolResponse();
                    ~ModifyAddressPoolResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否修改成功
                     * @return Msg 是否修改成功
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 是否修改成功
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_MODIFYADDRESSPOOLRESPONSE_H_
