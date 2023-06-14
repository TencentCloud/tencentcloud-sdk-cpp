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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_PUTMUSICONTHESHELVESREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_PUTMUSICONTHESHELVESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * PutMusicOnTheShelves请求参数结构体
                */
                class PutMusicOnTheShelvesRequest : public AbstractModel
                {
                public:
                    PutMusicOnTheShelvesRequest();
                    ~PutMusicOnTheShelvesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源方歌曲Id
                     * @return MusicIds 资源方歌曲Id
                     * 
                     */
                    std::vector<std::string> GetMusicIds() const;

                    /**
                     * 设置资源方歌曲Id
                     * @param _musicIds 资源方歌曲Id
                     * 
                     */
                    void SetMusicIds(const std::vector<std::string>& _musicIds);

                    /**
                     * 判断参数 MusicIds 是否已赋值
                     * @return MusicIds 是否已赋值
                     * 
                     */
                    bool MusicIdsHasBeenSet() const;

                private:

                    /**
                     * 资源方歌曲Id
                     */
                    std::vector<std::string> m_musicIds;
                    bool m_musicIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_PUTMUSICONTHESHELVESREQUEST_H_
