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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOREQUEST_H_

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
                * ReviewAudioVideo请求参数结构体
                */
                class ReviewAudioVideoRequest : public AbstractModel
                {
                public:
                    ReviewAudioVideoRequest();
                    ~ReviewAudioVideoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @return FileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * @param _fileId 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取审核的内容，可选值有：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * @return ReviewContents 审核的内容，可选值有：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * 
                     */
                    std::vector<std::string> GetReviewContents() const;

                    /**
                     * 设置审核的内容，可选值有：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * @param _reviewContents 审核的内容，可选值有：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     * 
                     */
                    void SetReviewContents(const std::vector<std::string>& _reviewContents);

                    /**
                     * 判断参数 ReviewContents 是否已赋值
                     * @return ReviewContents 是否已赋值
                     * 
                     */
                    bool ReviewContentsHasBeenSet() const;

                    /**
                     * 获取审核模板 ID，默认值为 10。取值范围：
<li>10：[预置模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E9.9F.B3.E8.A7.86.E9.A2.91.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF.5B.5D(id.3Averify))，支持检测的违规标签包括色情（Porn）、暴力（Terror）、不适宜的信息（Polity）和娇喘（Moan）。</li>
                     * @return Definition 审核模板 ID，默认值为 10。取值范围：
<li>10：[预置模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E9.9F.B3.E8.A7.86.E9.A2.91.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF.5B.5D(id.3Averify))，支持检测的违规标签包括色情（Porn）、暴力（Terror）、不适宜的信息（Polity）和娇喘（Moan）。</li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置审核模板 ID，默认值为 10。取值范围：
<li>10：[预置模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E9.9F.B3.E8.A7.86.E9.A2.91.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF.5B.5D(id.3Averify))，支持检测的违规标签包括色情（Porn）、暴力（Terror）、不适宜的信息（Polity）和娇喘（Moan）。</li>
                     * @param _definition 审核模板 ID，默认值为 10。取值范围：
<li>10：[预置模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E9.9F.B3.E8.A7.86.E9.A2.91.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF.5B.5D(id.3Averify))，支持检测的违规标签包括色情（Porn）、暴力（Terror）、不适宜的信息（Polity）和娇喘（Moan）。</li>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @return TasksPriority 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * @param _tasksPriority 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取来源上下文，用于透传用户请求信息，音视频审核完成回调将返回该字段值，最长 1000 个字符。
                     * @return SessionContext 来源上下文，用于透传用户请求信息，音视频审核完成回调将返回该字段值，最长 1000 个字符。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置来源上下文，用于透传用户请求信息，音视频审核完成回调将返回该字段值，最长 1000 个字符。
                     * @param _sessionContext 来源上下文，用于透传用户请求信息，音视频审核完成回调将返回该字段值，最长 1000 个字符。
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
                     * 获取用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @return SessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     * @param _sessionId 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
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
                     * 获取保留字段，特殊用途时使用。
                     * @return ExtInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置保留字段，特殊用途时使用。
                     * @param _extInfo 保留字段，特殊用途时使用。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * 媒体文件 ID，即该文件在云点播上的全局唯一标识符，在上传成功后由云点播后台分配。可以在 [视频上传完成事件通知](/document/product/266/7830) 或 [云点播控制台](https://console.cloud.tencent.com/vod/media) 获取该字段。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 审核的内容，可选值有：
<li>Media：原始音视频；</li>
<li>Cover：封面。</li>
不填或填空数组时，默认为审核 Media。
                     */
                    std::vector<std::string> m_reviewContents;
                    bool m_reviewContentsHasBeenSet;

                    /**
                     * 审核模板 ID，默认值为 10。取值范围：
<li>10：[预置模板](https://cloud.tencent.com/document/product/266/33476#.E9.A2.84.E7.BD.AE.E9.9F.B3.E8.A7.86.E9.A2.91.E5.AE.A1.E6.A0.B8.E6.A8.A1.E6.9D.BF.5B.5D(id.3Averify))，支持检测的违规标签包括色情（Porn）、暴力（Terror）、不适宜的信息（Polity）和娇喘（Moan）。</li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 任务流的优先级，数值越大优先级越高，取值范围是 -10 到 10，不填代表 0。
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * 来源上下文，用于透传用户请求信息，音视频审核完成回调将返回该字段值，最长 1000 个字符。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 用于去重的识别码，如果三天内曾有过相同的识别码的请求，则本次的请求会返回错误。最长 50 个字符，不带或者带空字符串表示不做去重。
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 保留字段，特殊用途时使用。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REVIEWAUDIOVIDEOREQUEST_H_
