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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * CheckAttributeLabelExist返回参数结构体
                */
                class CheckAttributeLabelExistResponse : public AbstractModel
                {
                public:
                    CheckAttributeLabelExistResponse();
                    ~CheckAttributeLabelExistResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否存在
                     * @return IsExist 是否存在
                     * 
                     */
                    bool GetIsExist() const;

                    /**
                     * 判断参数 IsExist 是否已赋值
                     * @return IsExist 是否已赋值
                     * 
                     */
                    bool IsExistHasBeenSet() const;

                private:

                    /**
                     * 是否存在
                     */
                    bool m_isExist;
                    bool m_isExistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CHECKATTRIBUTELABELEXISTRESPONSE_H_
