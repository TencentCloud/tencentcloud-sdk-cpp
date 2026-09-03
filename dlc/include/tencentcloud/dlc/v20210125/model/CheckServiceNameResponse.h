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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKSERVICENAMERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKSERVICENAMERESPONSE_H_

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
                * CheckServiceName返回参数结构体
                */
                class CheckServiceNameResponse : public AbstractModel
                {
                public:
                    CheckServiceNameResponse();
                    ~CheckServiceNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>名称是否已存在</p>
                     * @return Exists <p>名称是否已存在</p>
                     * 
                     */
                    bool GetExists() const;

                    /**
                     * 判断参数 Exists 是否已赋值
                     * @return Exists 是否已赋值
                     * 
                     */
                    bool ExistsHasBeenSet() const;

                private:

                    /**
                     * <p>名称是否已存在</p>
                     */
                    bool m_exists;
                    bool m_existsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKSERVICENAMERESPONSE_H_
