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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VideoConfigureInfo.h>
#include <tencentcloud/vod/v20180717/model/WatermarkConfigureData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 即时转码模板详情。
                */
                class JustInTimeTranscodeTemplate : public AbstractModel
                {
                public:
                    JustInTimeTranscodeTemplate();
                    ~JustInTimeTranscodeTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板类型。
                     * @return Type 模板类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置模板类型。
                     * @param _type 模板类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取模板名。
                     * @return Name 模板名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名。
                     * @param _name 模板名。
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
                     * 获取模板描述。
                     * @return Comment 模板描述。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述。
                     * @param _comment 模板描述。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取视频参数配置。
                     * @return VideoConfigure 视频参数配置。
                     * 
                     */
                    VideoConfigureInfo GetVideoConfigure() const;

                    /**
                     * 设置视频参数配置。
                     * @param _videoConfigure 视频参数配置。
                     * 
                     */
                    void SetVideoConfigure(const VideoConfigureInfo& _videoConfigure);

                    /**
                     * 判断参数 VideoConfigure 是否已赋值
                     * @return VideoConfigure 是否已赋值
                     * 
                     */
                    bool VideoConfigureHasBeenSet() const;

                    /**
                     * 获取水印参数配置。
                     * @return WatermarkConfigure 水印参数配置。
                     * 
                     */
                    WatermarkConfigureData GetWatermarkConfigure() const;

                    /**
                     * 设置水印参数配置。
                     * @param _watermarkConfigure 水印参数配置。
                     * 
                     */
                    void SetWatermarkConfigure(const WatermarkConfigureData& _watermarkConfigure);

                    /**
                     * 判断参数 WatermarkConfigure 是否已赋值
                     * @return WatermarkConfigure 是否已赋值
                     * 
                     */
                    bool WatermarkConfigureHasBeenSet() const;

                private:

                    /**
                     * 模板类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 模板名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 视频参数配置。
                     */
                    VideoConfigureInfo m_videoConfigure;
                    bool m_videoConfigureHasBeenSet;

                    /**
                     * 水印参数配置。
                     */
                    WatermarkConfigureData m_watermarkConfigure;
                    bool m_watermarkConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_JUSTINTIMETRANSCODETEMPLATE_H_
