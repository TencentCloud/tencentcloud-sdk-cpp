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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERINFO_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERINFO_H_

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
                * 直播互动歌曲的歌手信息。
                */
                class KTVSingerInfo : public AbstractModel
                {
                public:
                    KTVSingerInfo();
                    ~KTVSingerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌手id
                     * @return SingerId 歌手id
                     * 
                     */
                    std::string GetSingerId() const;

                    /**
                     * 设置歌手id
                     * @param _singerId 歌手id
                     * 
                     */
                    void SetSingerId(const std::string& _singerId);

                    /**
                     * 判断参数 SingerId 是否已赋值
                     * @return SingerId 是否已赋值
                     * 
                     */
                    bool SingerIdHasBeenSet() const;

                    /**
                     * 获取歌手名
                     * @return Name 歌手名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置歌手名
                     * @param _name 歌手名
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
                     * 获取歌手性别: 男，女，组合
                     * @return Gender 歌手性别: 男，女，组合
                     * 
                     */
                    std::string GetGender() const;

                    /**
                     * 设置歌手性别: 男，女，组合
                     * @param _gender 歌手性别: 男，女，组合
                     * 
                     */
                    void SetGender(const std::string& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取地区: 大陆，港台，欧美，日本
                     * @return Area 地区: 大陆，港台，欧美，日本
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地区: 大陆，港台，欧美，日本
                     * @param _area 地区: 大陆，港台，欧美，日本
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取歌曲数
                     * @return MusicCount 歌曲数
                     * 
                     */
                    int64_t GetMusicCount() const;

                    /**
                     * 设置歌曲数
                     * @param _musicCount 歌曲数
                     * 
                     */
                    void SetMusicCount(const int64_t& _musicCount);

                    /**
                     * 判断参数 MusicCount 是否已赋值
                     * @return MusicCount 是否已赋值
                     * 
                     */
                    bool MusicCountHasBeenSet() const;

                    /**
                     * 获取歌曲总播放次数
                     * @return PlayCount 歌曲总播放次数
                     * 
                     */
                    int64_t GetPlayCount() const;

                    /**
                     * 设置歌曲总播放次数
                     * @param _playCount 歌曲总播放次数
                     * 
                     */
                    void SetPlayCount(const int64_t& _playCount);

                    /**
                     * 判断参数 PlayCount 是否已赋值
                     * @return PlayCount 是否已赋值
                     * 
                     */
                    bool PlayCountHasBeenSet() const;

                private:

                    /**
                     * 歌手id
                     */
                    std::string m_singerId;
                    bool m_singerIdHasBeenSet;

                    /**
                     * 歌手名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 歌手性别: 男，女，组合
                     */
                    std::string m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 地区: 大陆，港台，欧美，日本
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 歌曲数
                     */
                    int64_t m_musicCount;
                    bool m_musicCountHasBeenSet;

                    /**
                     * 歌曲总播放次数
                     */
                    int64_t m_playCount;
                    bool m_playCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_KTVSINGERINFO_H_
