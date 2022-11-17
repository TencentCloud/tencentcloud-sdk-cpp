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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTINFOREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTINFOREQUEST_H_

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
                * GetCptInfo请求参数结构体
                */
                class GetCptInfoRequest : public AbstractModel
                {
                public:
                    GetCptInfoRequest();
                    ~GetCptInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cpt索引
                     * @return CptIndex Cpt索引
                     */
                    uint64_t GetCptIndex() const;

                    /**
                     * 设置Cpt索引
                     * @param CptIndex Cpt索引
                     */
                    void SetCptIndex(const uint64_t& _cptIndex);

                    /**
                     * 判断参数 CptIndex 是否已赋值
                     * @return CptIndex 是否已赋值
                     */
                    bool CptIndexHasBeenSet() const;

                private:

                    /**
                     * Cpt索引
                     */
                    uint64_t m_cptIndex;
                    bool m_cptIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETCPTINFOREQUEST_H_
