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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。</b>
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
                     * 获取MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：
<li>Transcode: 查询转码模板列表。</li>
                     * @return TemplateType MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：
<li>Transcode: 查询转码模板列表。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：
<li>Transcode: 查询转码模板列表。</li>
                     * @param _templateType MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：
<li>Transcode: 查询转码模板列表。</li>
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
                     * 获取MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：
1. 音视频增强：仅支持填写“[获取转码模板列表](https://cloud.tencent.com/document/product/862/37593)”接口中的 Definitions、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * @return MPSDescribeTemplateParams MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：
1. 音视频增强：仅支持填写“[获取转码模板列表](https://cloud.tencent.com/document/product/862/37593)”接口中的 Definitions、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * 
                     */
                    std::string GetMPSDescribeTemplateParams() const;

                    /**
                     * 设置MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：
1. 音视频增强：仅支持填写“[获取转码模板列表](https://cloud.tencent.com/document/product/862/37593)”接口中的 Definitions、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * @param _mPSDescribeTemplateParams MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：
1. 音视频增强：仅支持填写“[获取转码模板列表](https://cloud.tencent.com/document/product/862/37593)”接口中的 Definitions、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
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
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * MPS 模板类型。根据需要查询的 MPS 模板的类型对结果进行过滤。取值：
<li>Transcode: 查询转码模板列表。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * MPS 查询模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧查询 MPS 任务模板列表。目前仅支持通过此方式查询以下任务类型的模板：
1. 音视频增强：仅支持填写“[获取转码模板列表](https://cloud.tencent.com/document/product/862/37593)”接口中的 Definitions、Offset 和 Limit 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     */
                    std::string m_mPSDescribeTemplateParams;
                    bool m_mPSDescribeTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEMPSTEMPLATESREQUEST_H_
