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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_OFFLINEMUSICDETAIL_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_OFFLINEMUSICDETAIL_H_

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
                * 曲库包已下架歌曲详细信息
                */
                class OfflineMusicDetail : public AbstractModel
                {
                public:
                    OfflineMusicDetail();
                    ~OfflineMusicDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲Id
                     * @return ItemId 歌曲Id
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置歌曲Id
                     * @param _itemId 歌曲Id
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取歌曲名称
                     * @return MusicName 歌曲名称
                     * 
                     */
                    std::string GetMusicName() const;

                    /**
                     * 设置歌曲名称
                     * @param _musicName 歌曲名称
                     * 
                     */
                    void SetMusicName(const std::string& _musicName);

                    /**
                     * 判断参数 MusicName 是否已赋值
                     * @return MusicName 是否已赋值
                     * 
                     */
                    bool MusicNameHasBeenSet() const;

                    /**
                     * 获取不可用原因
                     * @return OffRemark 不可用原因
                     * 
                     */
                    std::string GetOffRemark() const;

                    /**
                     * 设置不可用原因
                     * @param _offRemark 不可用原因
                     * 
                     */
                    void SetOffRemark(const std::string& _offRemark);

                    /**
                     * 判断参数 OffRemark 是否已赋值
                     * @return OffRemark 是否已赋值
                     * 
                     */
                    bool OffRemarkHasBeenSet() const;

                    /**
                     * 获取不可用时间
                     * @return OffTime 不可用时间
                     * 
                     */
                    std::string GetOffTime() const;

                    /**
                     * 设置不可用时间
                     * @param _offTime 不可用时间
                     * 
                     */
                    void SetOffTime(const std::string& _offTime);

                    /**
                     * 判断参数 OffTime 是否已赋值
                     * @return OffTime 是否已赋值
                     * 
                     */
                    bool OffTimeHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 歌曲名称
                     */
                    std::string m_musicName;
                    bool m_musicNameHasBeenSet;

                    /**
                     * 不可用原因
                     */
                    std::string m_offRemark;
                    bool m_offRemarkHasBeenSet;

                    /**
                     * 不可用时间
                     */
                    std::string m_offTime;
                    bool m_offTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_OFFLINEMUSICDETAIL_H_
