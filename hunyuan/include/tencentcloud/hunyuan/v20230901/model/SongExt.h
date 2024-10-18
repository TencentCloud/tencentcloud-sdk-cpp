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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SONGEXT_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SONGEXT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 歌曲详情。具体含义参考  [QQ音乐SDK](https://developer.y.qq.com/)
                */
                class SongExt : public AbstractModel
                {
                public:
                    SongExt();
                    ~SongExt() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲id
                     * @return SongId 歌曲id
                     * 
                     */
                    int64_t GetSongId() const;

                    /**
                     * 设置歌曲id
                     * @param _songId 歌曲id
                     * 
                     */
                    void SetSongId(const int64_t& _songId);

                    /**
                     * 判断参数 SongId 是否已赋值
                     * @return SongId 是否已赋值
                     * 
                     */
                    bool SongIdHasBeenSet() const;

                    /**
                     * 获取歌曲mid
                     * @return SongMid 歌曲mid
                     * 
                     */
                    std::string GetSongMid() const;

                    /**
                     * 设置歌曲mid
                     * @param _songMid 歌曲mid
                     * 
                     */
                    void SetSongMid(const std::string& _songMid);

                    /**
                     * 判断参数 SongMid 是否已赋值
                     * @return SongMid 是否已赋值
                     * 
                     */
                    bool SongMidHasBeenSet() const;

                    /**
                     * 获取歌曲是否为vip。1：vip歌曲； 0：普通歌曲。
                     * @return Vip 歌曲是否为vip。1：vip歌曲； 0：普通歌曲。
                     * 
                     */
                    int64_t GetVip() const;

                    /**
                     * 设置歌曲是否为vip。1：vip歌曲； 0：普通歌曲。
                     * @param _vip 歌曲是否为vip。1：vip歌曲； 0：普通歌曲。
                     * 
                     */
                    void SetVip(const int64_t& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * 歌曲id
                     */
                    int64_t m_songId;
                    bool m_songIdHasBeenSet;

                    /**
                     * 歌曲mid
                     */
                    std::string m_songMid;
                    bool m_songMidHasBeenSet;

                    /**
                     * 歌曲是否为vip。1：vip歌曲； 0：普通歌曲。
                     */
                    int64_t m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SONGEXT_H_
