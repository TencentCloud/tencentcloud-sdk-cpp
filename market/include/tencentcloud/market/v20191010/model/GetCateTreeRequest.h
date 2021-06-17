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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREEREQUEST_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * GetCateTree请求参数结构体
                */
                class GetCateTreeRequest : public AbstractModel
                {
                public:
                    GetCateTreeRequest();
                    ~GetCateTreeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分类ID
                     * @return CateId 分类ID
                     */
                    uint64_t GetCateId() const;

                    /**
                     * 设置分类ID
                     * @param CateId 分类ID
                     */
                    void SetCateId(const uint64_t& _cateId);

                    /**
                     * 判断参数 CateId 是否已赋值
                     * @return CateId 是否已赋值
                     */
                    bool CateIdHasBeenSet() const;

                private:

                    /**
                     * 分类ID
                     */
                    uint64_t m_cateId;
                    bool m_cateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREEREQUEST_H_
