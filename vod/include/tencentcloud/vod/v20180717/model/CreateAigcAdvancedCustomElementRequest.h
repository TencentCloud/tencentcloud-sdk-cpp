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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_

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
                * CreateAigcAdvancedCustomElement请求参数结构体
                */
                class CreateAigcAdvancedCustomElementRequest : public AbstractModel
                {
                public:
                    CreateAigcAdvancedCustomElementRequest();
                    ~CreateAigcAdvancedCustomElementRequest() = default;
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
                     * 获取<p>主体名称，不能超过20个字符。</p>
                     * @return ElementName <p>主体名称，不能超过20个字符。</p>
                     * 
                     */
                    std::string GetElementName() const;

                    /**
                     * 设置<p>主体名称，不能超过20个字符。</p>
                     * @param _elementName <p>主体名称，不能超过20个字符。</p>
                     * 
                     */
                    void SetElementName(const std::string& _elementName);

                    /**
                     * 判断参数 ElementName 是否已赋值
                     * @return ElementName 是否已赋值
                     * 
                     */
                    bool ElementNameHasBeenSet() const;

                    /**
                     * 获取<p>主体描述，不能超过100个字符。</p>
                     * @return ElementDescription <p>主体描述，不能超过100个字符。</p>
                     * 
                     */
                    std::string GetElementDescription() const;

                    /**
                     * 设置<p>主体描述，不能超过100个字符。</p>
                     * @param _elementDescription <p>主体描述，不能超过100个字符。</p>
                     * 
                     */
                    void SetElementDescription(const std::string& _elementDescription);

                    /**
                     * 判断参数 ElementDescription 是否已赋值
                     * @return ElementDescription 是否已赋值
                     * 
                     */
                    bool ElementDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>主体参考方式。通过视频定制的主体和通过图片定制的主体的可用范围不同。</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体，此时将参考element_video_list定义主体外表。</li><li>image_refer： 多图主体，此时将参考element_image_list定义主体外表。</li></ul>
                     * @return ReferenceType <p>主体参考方式。通过视频定制的主体和通过图片定制的主体的可用范围不同。</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体，此时将参考element_video_list定义主体外表。</li><li>image_refer： 多图主体，此时将参考element_image_list定义主体外表。</li></ul>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置<p>主体参考方式。通过视频定制的主体和通过图片定制的主体的可用范围不同。</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体，此时将参考element_video_list定义主体外表。</li><li>image_refer： 多图主体，此时将参考element_image_list定义主体外表。</li></ul>
                     * @param _referenceType <p>主体参考方式。通过视频定制的主体和通过图片定制的主体的可用范围不同。</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体，此时将参考element_video_list定义主体外表。</li><li>image_refer： 多图主体，此时将参考element_image_list定义主体外表。</li></ul>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取<p>主体音色，可绑定音色库中已有音色。</p><ul><li>当前参数为空时，当前主体不绑定音色。</li><li>仅视频定制的主体支持绑定音色。</li></ul>
                     * @return ElementVoiceId <p>主体音色，可绑定音色库中已有音色。</p><ul><li>当前参数为空时，当前主体不绑定音色。</li><li>仅视频定制的主体支持绑定音色。</li></ul>
                     * 
                     */
                    std::string GetElementVoiceId() const;

                    /**
                     * 设置<p>主体音色，可绑定音色库中已有音色。</p><ul><li>当前参数为空时，当前主体不绑定音色。</li><li>仅视频定制的主体支持绑定音色。</li></ul>
                     * @param _elementVoiceId <p>主体音色，可绑定音色库中已有音色。</p><ul><li>当前参数为空时，当前主体不绑定音色。</li><li>仅视频定制的主体支持绑定音色。</li></ul>
                     * 
                     */
                    void SetElementVoiceId(const std::string& _elementVoiceId);

                    /**
                     * 判断参数 ElementVoiceId 是否已赋值
                     * @return ElementVoiceId 是否已赋值
                     * 
                     */
                    bool ElementVoiceIdHasBeenSet() const;

                    /**
                     * 获取<p>主体参考视频，可通过视频设定主体及其细节。</p><ul><li>可上传有声视频，有声视频包含人声则触发音色定制（定制+入音色库+与主体绑定）</li><li>参考视频时当前参数必填，参考图片时当前参数无效</li><li>用key:value承载，如下：<br><pre><code>{  &quot;refer_videos&quot;:[    {      &quot;video_url&quot;:&quot;video_url_1&quot;    }  ]}</code></pre>● 视频格式仅支持MP4/MOV<br>● 仅支持时长介于3s～8s之间、宽高比例需为16:9或9:16的1080P视频<br>● 至多仅支持上传1段视频，视频大小不超过200MB<br>● video_url参数值不得为空</li></ul>
                     * @return ElementVideoList <p>主体参考视频，可通过视频设定主体及其细节。</p><ul><li>可上传有声视频，有声视频包含人声则触发音色定制（定制+入音色库+与主体绑定）</li><li>参考视频时当前参数必填，参考图片时当前参数无效</li><li>用key:value承载，如下：<br><pre><code>{  &quot;refer_videos&quot;:[    {      &quot;video_url&quot;:&quot;video_url_1&quot;    }  ]}</code></pre>● 视频格式仅支持MP4/MOV<br>● 仅支持时长介于3s～8s之间、宽高比例需为16:9或9:16的1080P视频<br>● 至多仅支持上传1段视频，视频大小不超过200MB<br>● video_url参数值不得为空</li></ul>
                     * 
                     */
                    std::string GetElementVideoList() const;

                    /**
                     * 设置<p>主体参考视频，可通过视频设定主体及其细节。</p><ul><li>可上传有声视频，有声视频包含人声则触发音色定制（定制+入音色库+与主体绑定）</li><li>参考视频时当前参数必填，参考图片时当前参数无效</li><li>用key:value承载，如下：<br><pre><code>{  &quot;refer_videos&quot;:[    {      &quot;video_url&quot;:&quot;video_url_1&quot;    }  ]}</code></pre>● 视频格式仅支持MP4/MOV<br>● 仅支持时长介于3s～8s之间、宽高比例需为16:9或9:16的1080P视频<br>● 至多仅支持上传1段视频，视频大小不超过200MB<br>● video_url参数值不得为空</li></ul>
                     * @param _elementVideoList <p>主体参考视频，可通过视频设定主体及其细节。</p><ul><li>可上传有声视频，有声视频包含人声则触发音色定制（定制+入音色库+与主体绑定）</li><li>参考视频时当前参数必填，参考图片时当前参数无效</li><li>用key:value承载，如下：<br><pre><code>{  &quot;refer_videos&quot;:[    {      &quot;video_url&quot;:&quot;video_url_1&quot;    }  ]}</code></pre>● 视频格式仅支持MP4/MOV<br>● 仅支持时长介于3s～8s之间、宽高比例需为16:9或9:16的1080P视频<br>● 至多仅支持上传1段视频，视频大小不超过200MB<br>● video_url参数值不得为空</li></ul>
                     * 
                     */
                    void SetElementVideoList(const std::string& _elementVideoList);

                    /**
                     * 判断参数 ElementVideoList 是否已赋值
                     * @return ElementVideoList 是否已赋值
                     * 
                     */
                    bool ElementVideoListHasBeenSet() const;

                    /**
                     * 获取<p>主体参考图，可通过多张图片设定主体及其细节。</p><ul><li>包括正面参考图和其他角度或特写参考图，其中：<ul><li>至少包括1张正面参考图，由frontal_image参数定义。</li><li>需包括1～3张其他参考图，需与正面参考图有差异，由image_url参数定义。</li></ul></li><li>用key:value承载，如下：<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * @return ElementImageList <p>主体参考图，可通过多张图片设定主体及其细节。</p><ul><li>包括正面参考图和其他角度或特写参考图，其中：<ul><li>至少包括1张正面参考图，由frontal_image参数定义。</li><li>需包括1～3张其他参考图，需与正面参考图有差异，由image_url参数定义。</li></ul></li><li>用key:value承载，如下：<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * 
                     */
                    std::string GetElementImageList() const;

                    /**
                     * 设置<p>主体参考图，可通过多张图片设定主体及其细节。</p><ul><li>包括正面参考图和其他角度或特写参考图，其中：<ul><li>至少包括1张正面参考图，由frontal_image参数定义。</li><li>需包括1～3张其他参考图，需与正面参考图有差异，由image_url参数定义。</li></ul></li><li>用key:value承载，如下：<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * @param _elementImageList <p>主体参考图，可通过多张图片设定主体及其细节。</p><ul><li>包括正面参考图和其他角度或特写参考图，其中：<ul><li>至少包括1张正面参考图，由frontal_image参数定义。</li><li>需包括1～3张其他参考图，需与正面参考图有差异，由image_url参数定义。</li></ul></li><li>用key:value承载，如下：<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     * 
                     */
                    void SetElementImageList(const std::string& _elementImageList);

                    /**
                     * 判断参数 ElementImageList 是否已赋值
                     * @return ElementImageList 是否已赋值
                     * 
                     */
                    bool ElementImageListHasBeenSet() const;

                    /**
                     * 获取<p>为主体配置标签，一个主体可以配置多个标签。</p><ul><li>用key:value承载，其中具体如下：</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * @return TagList <p>为主体配置标签，一个主体可以配置多个标签。</p><ul><li>用key:value承载，其中具体如下：</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * 
                     */
                    std::string GetTagList() const;

                    /**
                     * 设置<p>为主体配置标签，一个主体可以配置多个标签。</p><ul><li>用key:value承载，其中具体如下：</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * @param _tagList <p>为主体配置标签，一个主体可以配置多个标签。</p><ul><li>用key:value承载，其中具体如下：</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     * 
                     */
                    void SetTagList(const std::string& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

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
                     * <p>主体名称，不能超过20个字符。</p>
                     */
                    std::string m_elementName;
                    bool m_elementNameHasBeenSet;

                    /**
                     * <p>主体描述，不能超过100个字符。</p>
                     */
                    std::string m_elementDescription;
                    bool m_elementDescriptionHasBeenSet;

                    /**
                     * <p>主体参考方式。通过视频定制的主体和通过图片定制的主体的可用范围不同。</p><p>枚举值：</p><ul><li>video_refer： 视频角色主体，此时将参考element_video_list定义主体外表。</li><li>image_refer： 多图主体，此时将参考element_image_list定义主体外表。</li></ul>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * <p>主体音色，可绑定音色库中已有音色。</p><ul><li>当前参数为空时，当前主体不绑定音色。</li><li>仅视频定制的主体支持绑定音色。</li></ul>
                     */
                    std::string m_elementVoiceId;
                    bool m_elementVoiceIdHasBeenSet;

                    /**
                     * <p>主体参考视频，可通过视频设定主体及其细节。</p><ul><li>可上传有声视频，有声视频包含人声则触发音色定制（定制+入音色库+与主体绑定）</li><li>参考视频时当前参数必填，参考图片时当前参数无效</li><li>用key:value承载，如下：<br><pre><code>{  &quot;refer_videos&quot;:[    {      &quot;video_url&quot;:&quot;video_url_1&quot;    }  ]}</code></pre>● 视频格式仅支持MP4/MOV<br>● 仅支持时长介于3s～8s之间、宽高比例需为16:9或9:16的1080P视频<br>● 至多仅支持上传1段视频，视频大小不超过200MB<br>● video_url参数值不得为空</li></ul>
                     */
                    std::string m_elementVideoList;
                    bool m_elementVideoListHasBeenSet;

                    /**
                     * <p>主体参考图，可通过多张图片设定主体及其细节。</p><ul><li>包括正面参考图和其他角度或特写参考图，其中：<ul><li>至少包括1张正面参考图，由frontal_image参数定义。</li><li>需包括1～3张其他参考图，需与正面参考图有差异，由image_url参数定义。</li></ul></li><li>用key:value承载，如下：<br><pre><code>{  &quot;frontal_image&quot;:&quot;image_url_0&quot;,  &quot;refer_images&quot;:[    {      &quot;image_url&quot;:&quot;image_url_1&quot;    },    {      &quot;image_url&quot;:&quot;image_url_2&quot;    },    {      &quot;image_url&quot;:&quot;image_url_3&quot;    }  ]}</code></pre></li></ul>
                     */
                    std::string m_elementImageList;
                    bool m_elementImageListHasBeenSet;

                    /**
                     * <p>为主体配置标签，一个主体可以配置多个标签。</p><ul><li>用key:value承载，其中具体如下：</li></ul><p><pre><code>[  {        &quot;tag_id&quot;: &quot;o_101&quot;  }, {        &quot;tag_id&quot;: &quot;o_102&quot;    }]</code></pre></p>
                     */
                    std::string m_tagList;
                    bool m_tagListHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCADVANCEDCUSTOMELEMENTREQUEST_H_
