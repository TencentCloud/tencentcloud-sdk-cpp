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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DEPLOYBYNAMERESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DEPLOYBYNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * DeployByName返回参数结构体
                */
                class DeployByNameResponse : public AbstractModel
                {
                public:
                    DeployByNameResponse();
                    ~DeployByNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取哈希值
                     * @return Hash 哈希值
                     */
                    std::string GetHash() const;

                    /**
                     * 判断参数 Hash 是否已赋值
                     * @return Hash 是否已赋值
                     */
                    bool HashHasBeenSet() const;

                private:

                    /**
                     * 哈希值
                     */
                    std::string m_hash;
                    bool m_hashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DEPLOYBYNAMERESPONSE_H_
