/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_THUMBNAILURLINFOLIST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_THUMBNAILURLINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 缩略图信息
                */
                class ThumbnailURLInfoList : public AbstractModel
                {
                public:
                    ThumbnailURLInfoList();
                    ~ThumbnailURLInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取缩略图访问地址
                     * @return ThumbnailURL 缩略图访问地址
                     * 
                     */
                    std::string GetThumbnailURL() const;

                    /**
                     * 设置缩略图访问地址
                     * @param _thumbnailURL 缩略图访问地址
                     * 
                     */
                    void SetThumbnailURL(const std::string& _thumbnailURL);

                    /**
                     * 判断参数 ThumbnailURL 是否已赋值
                     * @return ThumbnailURL 是否已赋值
                     * 
                     */
                    bool ThumbnailURLHasBeenSet() const;

                    /**
                     * 获取缩略图访问地址的过期时间
                     * @return ExpireTime 缩略图访问地址的过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置缩略图访问地址的过期时间
                     * @param _expireTime 缩略图访问地址的过期时间
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 缩略图访问地址
                     */
                    std::string m_thumbnailURL;
                    bool m_thumbnailURLHasBeenSet;

                    /**
                     * 缩略图访问地址的过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_THUMBNAILURLINFOLIST_H_
