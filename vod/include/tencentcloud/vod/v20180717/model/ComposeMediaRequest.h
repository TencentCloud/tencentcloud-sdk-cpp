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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaTrack.h>
#include <tencentcloud/vod/v20180717/model/ComposeMediaOutput.h>
#include <tencentcloud/vod/v20180717/model/Canvas.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ComposeMedia请求参数结构体
                */
                class ComposeMediaRequest : public AbstractModel
                {
                public:
                    ComposeMediaRequest();
                    ~ComposeMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐，时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面；音频素材进行混音。
                     * @return Tracks 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐，时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面；音频素材进行混音。
                     */
                    std::vector<MediaTrack> GetTracks() const;

                    /**
                     * 设置输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐，时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面；音频素材进行混音。
                     * @param Tracks 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐，时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面；音频素材进行混音。
                     */
                    void SetTracks(const std::vector<MediaTrack>& _tracks);

                    /**
                     * 判断参数 Tracks 是否已赋值
                     * @return Tracks 是否已赋值
                     */
                    bool TracksHasBeenSet() const;

                    /**
                     * 获取输出的媒体文件信息。
                     * @return Output 输出的媒体文件信息。
                     */
                    ComposeMediaOutput GetOutput() const;

                    /**
                     * 设置输出的媒体文件信息。
                     * @param Output 输出的媒体文件信息。
                     */
                    void SetOutput(const ComposeMediaOutput& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取制作视频文件时使用的画布。
                     * @return Canvas 制作视频文件时使用的画布。
                     */
                    Canvas GetCanvas() const;

                    /**
                     * 设置制作视频文件时使用的画布。
                     * @param Canvas 制作视频文件时使用的画布。
                     */
                    void SetCanvas(const Canvas& _canvas);

                    /**
                     * 判断参数 Canvas 是否已赋值
                     * @return Canvas 是否已赋值
                     */
                    bool CanvasHasBeenSet() const;

                    /**
                     * 获取标识来源上下文，用于透传用户请求信息，在ComposeMediaComplete回调将返回该字段值，最长 1000个字符。
                     * @return SessionContext 标识来源上下文，用于透传用户请求信息，在ComposeMediaComplete回调将返回该字段值，最长 1000个字符。
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置标识来源上下文，用于透传用户请求信息，在ComposeMediaComplete回调将返回该字段值，最长 1000个字符。
                     * @param SessionContext 标识来源上下文，用于透传用户请求信息，在ComposeMediaComplete回调将返回该字段值，最长 1000个字符。
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取用于任务去重的识别码，如果一天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于任务去重的识别码，如果一天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于任务去重的识别码，如果一天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param SessionId 用于任务去重的识别码，如果一天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 输入的媒体轨道列表，包括视频、音频、图片等素材组成的多个轨道信息。输入的多个轨道在时间轴上和输出媒体文件的时间轴对齐，时间轴上相同时间点的各个轨道的素材进行重叠，视频或者图片按轨道顺序进行图像的叠加，轨道顺序高的素材叠加在上面；音频素材进行混音。
                     */
                    std::vector<MediaTrack> m_tracks;
                    bool m_tracksHasBeenSet;

                    /**
                     * 输出的媒体文件信息。
                     */
                    ComposeMediaOutput m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 制作视频文件时使用的画布。
                     */
                    Canvas m_canvas;
                    bool m_canvasHasBeenSet;

                    /**
                     * 标识来源上下文，用于透传用户请求信息，在ComposeMediaComplete回调将返回该字段值，最长 1000个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 用于任务去重的识别码，如果一天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPOSEMEDIAREQUEST_H_
