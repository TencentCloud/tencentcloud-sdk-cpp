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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_

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
                * CreateMPSTemplate请求参数结构体
                */
                class CreateMPSTemplateRequest : public AbstractModel
                {
                public:
                    CreateMPSTemplateRequest();
                    ~CreateMPSTemplateRequest() = default;
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
                     * 获取需要创建的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持创建增强模板。</li>
                     * @return TemplateType 需要创建的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持创建增强模板。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置需要创建的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持创建增强模板。</li>
                     * @param _templateType 需要创建的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持创建增强模板。</li>
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
                     * 获取MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。
目前仅支持通过此方式创建以下任务类型的模板：
1. 音视频增强：仅支持填写“[创建转码模板](https://cloud.tencent.com/document/product/862/37605)”接口中的 Container 、Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数。其中 EnhanceConfig 此处必填，且 Container 目前暂不支持 hls。

目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。

                     * @return MPSCreateTemplateParams MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。
目前仅支持通过此方式创建以下任务类型的模板：
1. 音视频增强：仅支持填写“[创建转码模板](https://cloud.tencent.com/document/product/862/37605)”接口中的 Container 、Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数。其中 EnhanceConfig 此处必填，且 Container 目前暂不支持 hls。

目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。

                     * 
                     */
                    std::string GetMPSCreateTemplateParams() const;

                    /**
                     * 设置MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。
目前仅支持通过此方式创建以下任务类型的模板：
1. 音视频增强：仅支持填写“[创建转码模板](https://cloud.tencent.com/document/product/862/37605)”接口中的 Container 、Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数。其中 EnhanceConfig 此处必填，且 Container 目前暂不支持 hls。

目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。

                     * @param _mPSCreateTemplateParams MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。
目前仅支持通过此方式创建以下任务类型的模板：
1. 音视频增强：仅支持填写“[创建转码模板](https://cloud.tencent.com/document/product/862/37605)”接口中的 Container 、Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数。其中 EnhanceConfig 此处必填，且 Container 目前暂不支持 hls。

目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。

                     * 
                     */
                    void SetMPSCreateTemplateParams(const std::string& _mPSCreateTemplateParams);

                    /**
                     * 判断参数 MPSCreateTemplateParams 是否已赋值
                     * @return MPSCreateTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSCreateTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 需要创建的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持创建增强模板。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * MPS 创建模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧创建用户自定义的 MPS 任务模板。
目前仅支持通过此方式创建以下任务类型的模板：
1. 音视频增强：仅支持填写“[创建转码模板](https://cloud.tencent.com/document/product/862/37605)”接口中的 Container 、Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数。其中 EnhanceConfig 此处必填，且 Container 目前暂不支持 hls。

目前模板中仅支持配置以上参数，其他参数无需填写。若包含其它参数，系统将自动忽略。以上透传参数以JSON形式表示。

                     */
                    std::string m_mPSCreateTemplateParams;
                    bool m_mPSCreateTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEMPSTEMPLATEREQUEST_H_
