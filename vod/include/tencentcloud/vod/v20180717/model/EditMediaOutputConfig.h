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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaVideoStream.h>
#include <tencentcloud/vod/v20180717/model/EditMediaTEHDConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 编辑视频的结果文件输出。
                */
                class EditMediaOutputConfig : public AbstractModel
                {
                public:
                    EditMediaOutputConfig();
                    ~EditMediaOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     * @return MediaName 输出文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置输出文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     * @param MediaName 输出文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取输出文件格式，可选值：mp4、hls。默认是 mp4。
                     * @return Type 输出文件格式，可选值：mp4、hls。默认是 mp4。
                     */
                    std::string GetType() const;

                    /**
                     * 设置输出文件格式，可选值：mp4、hls。默认是 mp4。
                     * @param Type 输出文件格式，可选值：mp4、hls。默认是 mp4。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @return ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     * @param ClassId 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return ExpireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param ExpireTime 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取输出的视频信息。
                     * @return VideoStream 输出的视频信息。
                     */
                    EditMediaVideoStream GetVideoStream() const;

                    /**
                     * 设置输出的视频信息。
                     * @param VideoStream 输出的视频信息。
                     */
                    void SetVideoStream(const EditMediaVideoStream& _videoStream);

                    /**
                     * 判断参数 VideoStream 是否已赋值
                     * @return VideoStream 是否已赋值
                     */
                    bool VideoStreamHasBeenSet() const;

                    /**
                     * 获取极速高清转码参数。
                     * @return TEHDConfig 极速高清转码参数。
                     */
                    EditMediaTEHDConfig GetTEHDConfig() const;

                    /**
                     * 设置极速高清转码参数。
                     * @param TEHDConfig 极速高清转码参数。
                     */
                    void SetTEHDConfig(const EditMediaTEHDConfig& _tEHDConfig);

                    /**
                     * 判断参数 TEHDConfig 是否已赋值
                     * @return TEHDConfig 是否已赋值
                     */
                    bool TEHDConfigHasBeenSet() const;

                private:

                    /**
                     * 输出文件名，最长 64 个字符。缺省由系统指定生成文件名。
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * 输出文件格式，可选值：mp4、hls。默认是 mp4。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分类ID，用于对媒体进行分类管理，可通过 [创建分类](/document/product/266/7812) 接口，创建分类，获得分类 ID。
<li>默认值：0，表示其他分类。</li>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 输出文件的过期时间，超过该时间文件将被删除，默认为永久不过期，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 输出的视频信息。
                     */
                    EditMediaVideoStream m_videoStream;
                    bool m_videoStreamHasBeenSet;

                    /**
                     * 极速高清转码参数。
                     */
                    EditMediaTEHDConfig m_tEHDConfig;
                    bool m_tEHDConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAOUTPUTCONFIG_H_
