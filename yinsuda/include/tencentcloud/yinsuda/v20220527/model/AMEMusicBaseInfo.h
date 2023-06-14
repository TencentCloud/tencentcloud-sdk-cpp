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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_AMEMUSICBASEINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_AMEMUSICBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * AME 曲库歌曲基础信息。
                */
                class AMEMusicBaseInfo : public AbstractModel
                {
                public:
                    AMEMusicBaseInfo();
                    ~AMEMusicBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲 Id。
                     * @return MusicId 歌曲 Id。
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲 Id。
                     * @param _musicId 歌曲 Id。
                     * 
                     */
                    void SetMusicId(const std::string& _musicId);

                    /**
                     * 判断参数 MusicId 是否已赋值
                     * @return MusicId 是否已赋值
                     * 
                     */
                    bool MusicIdHasBeenSet() const;

                    /**
                     * 获取歌曲名称。
                     * @return Name 歌曲名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置歌曲名称。
                     * @param _name 歌曲名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取歌手列表。
                     * @return SingerSet 歌手列表。
                     * 
                     */
                    std::vector<std::string> GetSingerSet() const;

                    /**
                     * 设置歌手列表。
                     * @param _singerSet 歌手列表。
                     * 
                     */
                    void SetSingerSet(const std::vector<std::string>& _singerSet);

                    /**
                     * 判断参数 SingerSet 是否已赋值
                     * @return SingerSet 是否已赋值
                     * 
                     */
                    bool SingerSetHasBeenSet() const;

                private:

                    /**
                     * 歌曲 Id。
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 歌曲名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 歌手列表。
                     */
                    std::vector<std::string> m_singerSet;
                    bool m_singerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_AMEMUSICBASEINFO_H_
