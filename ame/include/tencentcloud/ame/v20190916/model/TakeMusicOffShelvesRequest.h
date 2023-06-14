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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/TakeMusicOffShelves.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * TakeMusicOffShelves请求参数结构体
                */
                class TakeMusicOffShelvesRequest : public AbstractModel
                {
                public:
                    TakeMusicOffShelvesRequest();
                    ~TakeMusicOffShelvesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源方下架必传结构
                     * @return TakeMusicOffShelves 资源方下架必传结构
                     * 
                     */
                    std::vector<TakeMusicOffShelves> GetTakeMusicOffShelves() const;

                    /**
                     * 设置资源方下架必传结构
                     * @param _takeMusicOffShelves 资源方下架必传结构
                     * 
                     */
                    void SetTakeMusicOffShelves(const std::vector<TakeMusicOffShelves>& _takeMusicOffShelves);

                    /**
                     * 判断参数 TakeMusicOffShelves 是否已赋值
                     * @return TakeMusicOffShelves 是否已赋值
                     * 
                     */
                    bool TakeMusicOffShelvesHasBeenSet() const;

                private:

                    /**
                     * 资源方下架必传结构
                     */
                    std::vector<TakeMusicOffShelves> m_takeMusicOffShelves;
                    bool m_takeMusicOffShelvesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_TAKEMUSICOFFSHELVESREQUEST_H_
