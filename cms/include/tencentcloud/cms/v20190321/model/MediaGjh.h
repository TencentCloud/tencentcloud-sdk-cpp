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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAGJH_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAGJH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/MediaInfoTypeGjh.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 广角会媒体信息
                */
                class MediaGjh : public AbstractModel
                {
                public:
                    MediaGjh();
                    ~MediaGjh() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数组类图片信息
                     * @return Pic 数组类图片信息
                     */
                    std::vector<MediaInfoTypeGjh> GetPic() const;

                    /**
                     * 设置数组类图片信息
                     * @param Pic 数组类图片信息
                     */
                    void SetPic(const std::vector<MediaInfoTypeGjh>& _pic);

                    /**
                     * 判断参数 Pic 是否已赋值
                     * @return Pic 是否已赋值
                     */
                    bool PicHasBeenSet() const;

                    /**
                     * 获取数组类文本信息
                     * @return Text 数组类文本信息
                     */
                    std::vector<MediaInfoTypeGjh> GetText() const;

                    /**
                     * 设置数组类文本信息
                     * @param Text 数组类文本信息
                     */
                    void SetText(const std::vector<MediaInfoTypeGjh>& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取数组类视频信息
                     * @return Video 数组类视频信息
                     */
                    std::vector<MediaInfoTypeGjh> GetVideo() const;

                    /**
                     * 设置数组类视频信息
                     * @param Video 数组类视频信息
                     */
                    void SetVideo(const std::vector<MediaInfoTypeGjh>& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     */
                    bool VideoHasBeenSet() const;

                private:

                    /**
                     * 数组类图片信息
                     */
                    std::vector<MediaInfoTypeGjh> m_pic;
                    bool m_picHasBeenSet;

                    /**
                     * 数组类文本信息
                     */
                    std::vector<MediaInfoTypeGjh> m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 数组类视频信息
                     */
                    std::vector<MediaInfoTypeGjh> m_video;
                    bool m_videoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_MEDIAGJH_H_
