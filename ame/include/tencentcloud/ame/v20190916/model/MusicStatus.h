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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_MUSICSTATUS_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_MUSICSTATUS_H_

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
                * 返回单曲页面歌曲是否在售状态
                */
                class MusicStatus : public AbstractModel
                {
                public:
                    MusicStatus();
                    ~MusicStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取歌曲Id
                     * @return MusicId 歌曲Id
                     * 
                     */
                    std::string GetMusicId() const;

                    /**
                     * 设置歌曲Id
                     * @param _musicId 歌曲Id
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
                     * 获取在售状态,0为在售，1为临时下架，2为永久下架
                     * @return SaleStatus 在售状态,0为在售，1为临时下架，2为永久下架
                     * 
                     */
                    int64_t GetSaleStatus() const;

                    /**
                     * 设置在售状态,0为在售，1为临时下架，2为永久下架
                     * @param _saleStatus 在售状态,0为在售，1为临时下架，2为永久下架
                     * 
                     */
                    void SetSaleStatus(const int64_t& _saleStatus);

                    /**
                     * 判断参数 SaleStatus 是否已赋值
                     * @return SaleStatus 是否已赋值
                     * 
                     */
                    bool SaleStatusHasBeenSet() const;

                private:

                    /**
                     * 歌曲Id
                     */
                    std::string m_musicId;
                    bool m_musicIdHasBeenSet;

                    /**
                     * 在售状态,0为在售，1为临时下架，2为永久下架
                     */
                    int64_t m_saleStatus;
                    bool m_saleStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_MUSICSTATUS_H_
