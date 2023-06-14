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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDRMDATAKEYRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDRMDATAKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SimpleAesEdkPair.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeDrmDataKey返回参数结构体
                */
                class DescribeDrmDataKeyResponse : public AbstractModel
                {
                public:
                    DescribeDrmDataKeyResponse();
                    ~DescribeDrmDataKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取密钥列表，包含加密的数据密钥。
                     * @return KeyList 密钥列表，包含加密的数据密钥。
                     * 
                     */
                    std::vector<SimpleAesEdkPair> GetKeyList() const;

                    /**
                     * 判断参数 KeyList 是否已赋值
                     * @return KeyList 是否已赋值
                     * 
                     */
                    bool KeyListHasBeenSet() const;

                private:

                    /**
                     * 密钥列表，包含加密的数据密钥。
                     */
                    std::vector<SimpleAesEdkPair> m_keyList;
                    bool m_keyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEDRMDATAKEYRESPONSE_H_
