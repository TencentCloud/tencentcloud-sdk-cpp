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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcSubject请求参数结构体
                */
                class CreateAigcSubjectRequest : public AbstractModel
                {
                public:
                    CreateAigcSubjectRequest();
                    ~CreateAigcSubjectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>主体名称。</p>
                     * @return SubjectName <p>主体名称。</p>
                     * 
                     */
                    std::string GetSubjectName() const;

                    /**
                     * 设置<p>主体名称。</p>
                     * @param _subjectName <p>主体名称。</p>
                     * 
                     */
                    void SetSubjectName(const std::string& _subjectName);

                    /**
                     * 判断参数 SubjectName 是否已赋值
                     * @return SubjectName 是否已赋值
                     * 
                     */
                    bool SubjectNameHasBeenSet() const;

                    /**
                     * 获取<p>主体图片，至少上传 1 张主体图片。</p><ul><li>注1：支持传入图片 Base64 编码或图片URL（确保可访问）；</li><li>注2：最多支持输入 3 张图；</li><li>注3：图片支持 png、jpeg、jpg、webp格式；</li><li>注4：图片比例需要小于 1:4 或者 4:1 ；</li><li>注5：图片大小不超过 50 MB；</li></ul>
                     * @return SubjectImages <p>主体图片，至少上传 1 张主体图片。</p><ul><li>注1：支持传入图片 Base64 编码或图片URL（确保可访问）；</li><li>注2：最多支持输入 3 张图；</li><li>注3：图片支持 png、jpeg、jpg、webp格式；</li><li>注4：图片比例需要小于 1:4 或者 4:1 ；</li><li>注5：图片大小不超过 50 MB；</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSubjectImages() const;

                    /**
                     * 设置<p>主体图片，至少上传 1 张主体图片。</p><ul><li>注1：支持传入图片 Base64 编码或图片URL（确保可访问）；</li><li>注2：最多支持输入 3 张图；</li><li>注3：图片支持 png、jpeg、jpg、webp格式；</li><li>注4：图片比例需要小于 1:4 或者 4:1 ；</li><li>注5：图片大小不超过 50 MB；</li></ul>
                     * @param _subjectImages <p>主体图片，至少上传 1 张主体图片。</p><ul><li>注1：支持传入图片 Base64 编码或图片URL（确保可访问）；</li><li>注2：最多支持输入 3 张图；</li><li>注3：图片支持 png、jpeg、jpg、webp格式；</li><li>注4：图片比例需要小于 1:4 或者 4:1 ；</li><li>注5：图片大小不超过 50 MB；</li></ul>
                     * 
                     */
                    void SetSubjectImages(const std::vector<std::string>& _subjectImages);

                    /**
                     * 判断参数 SubjectImages 是否已赋值
                     * @return SubjectImages 是否已赋值
                     * 
                     */
                    bool SubjectImagesHasBeenSet() const;

                    /**
                     * 获取<p>视频参考支持上传 1 个主体视频</p><ul><li>注1：仅参考生viduq2-pro模型支持使用视频主体</li><li>注2：最多支持上传 1个5秒 的视频</li><li>注3：视频支持 mp4、avi、mov格式</li><li>注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1，且大小不超过100M。</li></ul>
                     * @return SubjectVideos <p>视频参考支持上传 1 个主体视频</p><ul><li>注1：仅参考生viduq2-pro模型支持使用视频主体</li><li>注2：最多支持上传 1个5秒 的视频</li><li>注3：视频支持 mp4、avi、mov格式</li><li>注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1，且大小不超过100M。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetSubjectVideos() const;

                    /**
                     * 设置<p>视频参考支持上传 1 个主体视频</p><ul><li>注1：仅参考生viduq2-pro模型支持使用视频主体</li><li>注2：最多支持上传 1个5秒 的视频</li><li>注3：视频支持 mp4、avi、mov格式</li><li>注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1，且大小不超过100M。</li></ul>
                     * @param _subjectVideos <p>视频参考支持上传 1 个主体视频</p><ul><li>注1：仅参考生viduq2-pro模型支持使用视频主体</li><li>注2：最多支持上传 1个5秒 的视频</li><li>注3：视频支持 mp4、avi、mov格式</li><li>注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1，且大小不超过100M。</li></ul>
                     * 
                     */
                    void SetSubjectVideos(const std::vector<std::string>& _subjectVideos);

                    /**
                     * 判断参数 SubjectVideos 是否已赋值
                     * @return SubjectVideos 是否已赋值
                     * 
                     */
                    bool SubjectVideosHasBeenSet() const;

                    /**
                     * 获取<p>主体音色Id，该信息仅在创建音视频直出任务时使用</p><ul><li>注1：不传音色id 生成音视频直出任务时，系统会自动推荐音色</li><li>注2：q2-pro不支持使用音色id</li></ul>
                     * @return VoiceId <p>主体音色Id，该信息仅在创建音视频直出任务时使用</p><ul><li>注1：不传音色id 生成音视频直出任务时，系统会自动推荐音色</li><li>注2：q2-pro不支持使用音色id</li></ul>
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置<p>主体音色Id，该信息仅在创建音视频直出任务时使用</p><ul><li>注1：不传音色id 生成音视频直出任务时，系统会自动推荐音色</li><li>注2：q2-pro不支持使用音色id</li></ul>
                     * @param _voiceId <p>主体音色Id，该信息仅在创建音视频直出任务时使用</p><ul><li>注1：不传音色id 生成音视频直出任务时，系统会自动推荐音色</li><li>注2：q2-pro不支持使用音色id</li></ul>
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @return SessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * @param _sessionId <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>来源上下文，用于透传用户请求信息，任务完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @return SessionContext <p>来源上下文，用于透传用户请求信息，任务完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>来源上下文，用于透传用户请求信息，任务完成回调将返回该字段值，最长 1000 个字符。</p>
                     * @param _sessionContext <p>来源上下文，用于透传用户请求信息，任务完成回调将返回该字段值，最长 1000 个字符。</p>
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @return TasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * @param _tasksPriority <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="https://cloud.tencent.com/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>主体名称。</p>
                     */
                    std::string m_subjectName;
                    bool m_subjectNameHasBeenSet;

                    /**
                     * <p>主体图片，至少上传 1 张主体图片。</p><ul><li>注1：支持传入图片 Base64 编码或图片URL（确保可访问）；</li><li>注2：最多支持输入 3 张图；</li><li>注3：图片支持 png、jpeg、jpg、webp格式；</li><li>注4：图片比例需要小于 1:4 或者 4:1 ；</li><li>注5：图片大小不超过 50 MB；</li></ul>
                     */
                    std::vector<std::string> m_subjectImages;
                    bool m_subjectImagesHasBeenSet;

                    /**
                     * <p>视频参考支持上传 1 个主体视频</p><ul><li>注1：仅参考生viduq2-pro模型支持使用视频主体</li><li>注2：最多支持上传 1个5秒 的视频</li><li>注3：视频支持 mp4、avi、mov格式</li><li>注4：视频像素不能小于 128*128，且比例需要小于1:4或者4:1，且大小不超过100M。</li></ul>
                     */
                    std::vector<std::string> m_subjectVideos;
                    bool m_subjectVideosHasBeenSet;

                    /**
                     * <p>主体音色Id，该信息仅在创建音视频直出任务时使用</p><ul><li>注1：不传音色id 生成音视频直出任务时，系统会自动推荐音色</li><li>注2：q2-pro不支持使用音色id</li></ul>
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                    /**
                     * <p>用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>来源上下文，用于透传用户请求信息，任务完成回调将返回该字段值，最长 1000 个字符。</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>任务的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCSUBJECTREQUEST_H_
