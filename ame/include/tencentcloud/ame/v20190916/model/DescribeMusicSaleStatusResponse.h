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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSRESPONSE_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ame/v20190916/model/MusicStatus.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeMusicSaleStatus返回参数结构体
                */
                class DescribeMusicSaleStatusResponse : public AbstractModel
                {
                public:
                    DescribeMusicSaleStatusResponse();
                    ~DescribeMusicSaleStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取musicId对应歌曲状态
                     * @return MusicStatusSet musicId对应歌曲状态
                     * 
                     */
                    std::vector<MusicStatus> GetMusicStatusSet() const;

                    /**
                     * 判断参数 MusicStatusSet 是否已赋值
                     * @return MusicStatusSet 是否已赋值
                     * 
                     */
                    bool MusicStatusSetHasBeenSet() const;

                private:

                    /**
                     * musicId对应歌曲状态
                     */
                    std::vector<MusicStatus> m_musicStatusSet;
                    bool m_musicStatusSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEMUSICSALESTATUSRESPONSE_H_
