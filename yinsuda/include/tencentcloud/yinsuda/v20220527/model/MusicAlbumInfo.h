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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_MUSICALBUMINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_MUSICALBUMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/MusicAlbumCoverInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 歌曲专辑信息。
                */
                class MusicAlbumInfo : public AbstractModel
                {
                public:
                    MusicAlbumInfo();
                    ~MusicAlbumInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专辑名称。
                     * @return Name 专辑名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置专辑名称。
                     * @param _name 专辑名称。
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
                     * 获取封面列表。
                     * @return CoverInfoSet 封面列表。
                     * 
                     */
                    std::vector<MusicAlbumCoverInfo> GetCoverInfoSet() const;

                    /**
                     * 设置封面列表。
                     * @param _coverInfoSet 封面列表。
                     * 
                     */
                    void SetCoverInfoSet(const std::vector<MusicAlbumCoverInfo>& _coverInfoSet);

                    /**
                     * 判断参数 CoverInfoSet 是否已赋值
                     * @return CoverInfoSet 是否已赋值
                     * 
                     */
                    bool CoverInfoSetHasBeenSet() const;

                private:

                    /**
                     * 专辑名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 封面列表。
                     */
                    std::vector<MusicAlbumCoverInfo> m_coverInfoSet;
                    bool m_coverInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_MUSICALBUMINFO_H_
