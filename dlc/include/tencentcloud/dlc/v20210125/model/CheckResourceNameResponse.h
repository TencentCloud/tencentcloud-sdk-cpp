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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKRESOURCENAMERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKRESOURCENAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckResourceName返回参数结构体
                */
                class CheckResourceNameResponse : public AbstractModel
                {
                public:
                    CheckResourceNameResponse();
                    ~CheckResourceNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取校验是否通过
                     * @return IsValid 校验是否通过
                     * 
                     */
                    std::string GetIsValid() const;

                    /**
                     * 判断参数 IsValid 是否已赋值
                     * @return IsValid 是否已赋值
                     * 
                     */
                    bool IsValidHasBeenSet() const;

                private:

                    /**
                     * 校验是否通过
                     */
                    std::string m_isValid;
                    bool m_isValidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKRESOURCENAMERESPONSE_H_
