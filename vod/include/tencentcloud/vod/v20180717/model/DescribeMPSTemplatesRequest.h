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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_

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
                * DescribeMPSTemplates请求参数结构体
                */
                class DescribeMPSTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeMPSTemplatesRequest();
                    ~DescribeMPSTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
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
                     * 获取<p>MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：</p><li>AIAnalysis: 智能分析模板。</li><li>SmartSubtitle: 智能字幕模板。</li><li>SmartErase: 智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * @return TemplateType <p>MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：</p><li>AIAnalysis: 智能分析模板。</li><li>SmartSubtitle: 智能字幕模板。</li><li>SmartErase: 智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：</p><li>AIAnalysis: 智能分析模板。</li><li>SmartSubtitle: 智能字幕模板。</li><li>SmartErase: 智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * @param _templateType <p>MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：</p><li>AIAnalysis: 智能分析模板。</li><li>SmartSubtitle: 智能字幕模板。</li><li>SmartErase: 智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/37593">获取转码模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/40247">获取智能分析模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/117002">获取智能字幕模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/123733">获取智能擦除模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * @return MPSDescribeTemplateParams <p>MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/37593">获取转码模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/40247">获取智能分析模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/117002">获取智能字幕模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/123733">获取智能擦除模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * 
                     */
                    std::string GetMPSDescribeTemplateParams() const;

                    /**
                     * 设置<p>MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/37593">获取转码模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/40247">获取智能分析模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/117002">获取智能字幕模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/123733">获取智能擦除模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * @param _mPSDescribeTemplateParams <p>MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/37593">获取转码模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/40247">获取智能分析模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/117002">获取智能字幕模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/123733">获取智能擦除模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     * 
                     */
                    void SetMPSDescribeTemplateParams(const std::string& _mPSDescribeTemplateParams);

                    /**
                     * 判断参数 MPSDescribeTemplateParams 是否已赋值
                     * @return MPSDescribeTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSDescribeTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：</p><li>AIAnalysis: 智能分析模板。</li><li>SmartSubtitle: 智能字幕模板。</li><li>SmartErase: 智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：</p><ol><li>音视频增强：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/37593">获取转码模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能分析：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/40247">获取智能分析模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能字幕：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/117002">获取智能字幕模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li><li>智能擦除：仅支持填写“<a href="https://cloud.tencent.com/document/product/862/123733">获取智能擦除模板列表</a>”接口中的 Definitions、Type、Name、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。</li></ol>
                     */
                    std::string m_mPSDescribeTemplateParams;
                    bool m_mPSDescribeTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
