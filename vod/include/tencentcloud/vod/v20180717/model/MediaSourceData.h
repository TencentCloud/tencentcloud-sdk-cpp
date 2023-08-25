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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LiveRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/TrtcRecordInfo.h>
#include <tencentcloud/vod/v20180717/model/WebPageRecordInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 来源文件信息
                */
                class MediaSourceData : public AbstractModel
                {
                public:
                    MediaSourceData();
                    ~MediaSourceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件的来源类别：
<li>Record：来自录制。如直播录制、直播时移录制等。</li>
<li>Upload：来自上传。如拉取上传、服务端上传、客户端 UGC 上传等。</li>
<li>VideoProcessing：来自视频处理。如视频拼接、视频剪辑等。</li>
<li>TrtcRecord：来自TRTC 伴生录制。</li>
<li>WebPageRecord：来自全景录制。</li>
<li>Unknown：未知来源。</li>
                     * @return SourceType 媒体文件的来源类别：
<li>Record：来自录制。如直播录制、直播时移录制等。</li>
<li>Upload：来自上传。如拉取上传、服务端上传、客户端 UGC 上传等。</li>
<li>VideoProcessing：来自视频处理。如视频拼接、视频剪辑等。</li>
<li>TrtcRecord：来自TRTC 伴生录制。</li>
<li>WebPageRecord：来自全景录制。</li>
<li>Unknown：未知来源。</li>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置媒体文件的来源类别：
<li>Record：来自录制。如直播录制、直播时移录制等。</li>
<li>Upload：来自上传。如拉取上传、服务端上传、客户端 UGC 上传等。</li>
<li>VideoProcessing：来自视频处理。如视频拼接、视频剪辑等。</li>
<li>TrtcRecord：来自TRTC 伴生录制。</li>
<li>WebPageRecord：来自全景录制。</li>
<li>Unknown：未知来源。</li>
                     * @param _sourceType 媒体文件的来源类别：
<li>Record：来自录制。如直播录制、直播时移录制等。</li>
<li>Upload：来自上传。如拉取上传、服务端上传、客户端 UGC 上传等。</li>
<li>VideoProcessing：来自视频处理。如视频拼接、视频剪辑等。</li>
<li>TrtcRecord：来自TRTC 伴生录制。</li>
<li>WebPageRecord：来自全景录制。</li>
<li>Unknown：未知来源。</li>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取用户创建文件时透传的字段。
                     * @return SourceContext 用户创建文件时透传的字段。
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置用户创建文件时透传的字段。
                     * @param _sourceContext 用户创建文件时透传的字段。
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取直播录制信息，当文件来源为 Record 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveRecordInfo 直播录制信息，当文件来源为 Record 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LiveRecordInfo GetLiveRecordInfo() const;

                    /**
                     * 设置直播录制信息，当文件来源为 Record 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveRecordInfo 直播录制信息，当文件来源为 Record 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveRecordInfo(const LiveRecordInfo& _liveRecordInfo);

                    /**
                     * 判断参数 LiveRecordInfo 是否已赋值
                     * @return LiveRecordInfo 是否已赋值
                     * 
                     */
                    bool LiveRecordInfoHasBeenSet() const;

                    /**
                     * 获取TRTC 伴生录制信息，当文件来源为 TrtcRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrtcRecordInfo TRTC 伴生录制信息，当文件来源为 TrtcRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TrtcRecordInfo GetTrtcRecordInfo() const;

                    /**
                     * 设置TRTC 伴生录制信息，当文件来源为 TrtcRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trtcRecordInfo TRTC 伴生录制信息，当文件来源为 TrtcRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrtcRecordInfo(const TrtcRecordInfo& _trtcRecordInfo);

                    /**
                     * 判断参数 TrtcRecordInfo 是否已赋值
                     * @return TrtcRecordInfo 是否已赋值
                     * 
                     */
                    bool TrtcRecordInfoHasBeenSet() const;

                    /**
                     * 获取全景录制信息，当文件来源为 WebPageRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebPageRecordInfo 全景录制信息，当文件来源为 WebPageRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    WebPageRecordInfo GetWebPageRecordInfo() const;

                    /**
                     * 设置全景录制信息，当文件来源为 WebPageRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webPageRecordInfo 全景录制信息，当文件来源为 WebPageRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebPageRecordInfo(const WebPageRecordInfo& _webPageRecordInfo);

                    /**
                     * 判断参数 WebPageRecordInfo 是否已赋值
                     * @return WebPageRecordInfo 是否已赋值
                     * 
                     */
                    bool WebPageRecordInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体文件的来源类别：
<li>Record：来自录制。如直播录制、直播时移录制等。</li>
<li>Upload：来自上传。如拉取上传、服务端上传、客户端 UGC 上传等。</li>
<li>VideoProcessing：来自视频处理。如视频拼接、视频剪辑等。</li>
<li>TrtcRecord：来自TRTC 伴生录制。</li>
<li>WebPageRecord：来自全景录制。</li>
<li>Unknown：未知来源。</li>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 用户创建文件时透传的字段。
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * 直播录制信息，当文件来源为 Record 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LiveRecordInfo m_liveRecordInfo;
                    bool m_liveRecordInfoHasBeenSet;

                    /**
                     * TRTC 伴生录制信息，当文件来源为 TrtcRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TrtcRecordInfo m_trtcRecordInfo;
                    bool m_trtcRecordInfoHasBeenSet;

                    /**
                     * 全景录制信息，当文件来源为 WebPageRecord 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    WebPageRecordInfo m_webPageRecordInfo;
                    bool m_webPageRecordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIASOURCEDATA_H_
