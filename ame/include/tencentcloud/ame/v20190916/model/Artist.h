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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_ARTIST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_ARTIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Artist
                */
                class Artist : public AbstractModel
                {
                public:
                    Artist();
                    ~Artist() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌手名
                     * @return ArtistName 歌手名
                     * 
                     */
                    std::string GetArtistName() const;

                    /**
                     * 设置歌手名
                     * @param _artistName 歌手名
                     * 
                     */
                    void SetArtistName(const std::string& _artistName);

                    /**
                     * 判断参数 ArtistName 是否已赋值
                     * @return ArtistName 是否已赋值
                     * 
                     */
                    bool ArtistNameHasBeenSet() const;

                private:

                    /**
                     * 歌手名
                     */
                    std::string m_artistName;
                    bool m_artistNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_ARTIST_H_
