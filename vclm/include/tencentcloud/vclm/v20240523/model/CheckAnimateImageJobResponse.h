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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * CheckAnimateImageJob返回参数结构体
                */
                class CheckAnimateImageJobResponse : public AbstractModel
                {
                public:
                    CheckAnimateImageJobResponse();
                    ~CheckAnimateImageJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取输入图是否通过校验。
                     * @return CheckPass 输入图是否通过校验。
                     * 
                     */
                    bool GetCheckPass() const;

                    /**
                     * 判断参数 CheckPass 是否已赋值
                     * @return CheckPass 是否已赋值
                     * 
                     */
                    bool CheckPassHasBeenSet() const;

                private:

                    /**
                     * 输入图是否通过校验。
                     */
                    bool m_checkPass;
                    bool m_checkPassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CHECKANIMATEIMAGEJOBRESPONSE_H_
