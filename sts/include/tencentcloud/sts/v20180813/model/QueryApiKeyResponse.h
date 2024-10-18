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

#ifndef TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYRESPONSE_H_
#define TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sts/v20180813/model/ApiKey.h>


namespace TencentCloud
{
    namespace Sts
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * QueryApiKey返回参数结构体
                */
                class QueryApiKeyResponse : public AbstractModel
                {
                public:
                    QueryApiKeyResponse();
                    ~QueryApiKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥ID列表。
                     * @return IdKeys 密钥ID列表。
                     * 
                     */
                    std::vector<ApiKey> GetIdKeys() const;

                    /**
                     * 判断参数 IdKeys 是否已赋值
                     * @return IdKeys 是否已赋值
                     * 
                     */
                    bool IdKeysHasBeenSet() const;

                private:

                    /**
                     * 密钥ID列表。
                     */
                    std::vector<ApiKey> m_idKeys;
                    bool m_idKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_STS_V20180813_MODEL_QUERYAPIKEYRESPONSE_H_
