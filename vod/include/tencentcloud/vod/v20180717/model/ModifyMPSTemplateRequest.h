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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_

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
                * ModifyMPSTemplate请求参数结构体
                */
                class ModifyMPSTemplateRequest : public AbstractModel
                {
                public:
                    ModifyMPSTemplateRequest();
                    ~ModifyMPSTemplateRequest() = default;
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
                     * 获取需要修改的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持修改增强参数。</li>
                     * @return TemplateType 需要修改的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持修改增强参数。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置需要修改的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持修改增强参数。</li>
                     * @param _templateType 需要修改的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持修改增强参数。</li>
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
                     * 获取MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。
 目前仅支持通过此方式修改以下任务类型的模板：
1. 音视频增强：仅支持填写“[修改转码模板](https://cloud.tencent.com/document/api/862/37578)”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * @return MPSModifyTemplateParams MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。
 目前仅支持通过此方式修改以下任务类型的模板：
1. 音视频增强：仅支持填写“[修改转码模板](https://cloud.tencent.com/document/api/862/37578)”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * 
                     */
                    std::string GetMPSModifyTemplateParams() const;

                    /**
                     * 设置MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。
 目前仅支持通过此方式修改以下任务类型的模板：
1. 音视频增强：仅支持填写“[修改转码模板](https://cloud.tencent.com/document/api/862/37578)”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * @param _mPSModifyTemplateParams MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。
 目前仅支持通过此方式修改以下任务类型的模板：
1. 音视频增强：仅支持填写“[修改转码模板](https://cloud.tencent.com/document/api/862/37578)”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     * 
                     */
                    void SetMPSModifyTemplateParams(const std::string& _mPSModifyTemplateParams);

                    /**
                     * 判断参数 MPSModifyTemplateParams 是否已赋值
                     * @return MPSModifyTemplateParams 是否已赋值
                     * 
                     */
                    bool MPSModifyTemplateParamsHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 需要修改的 MPS 模板的类型。取值：
<li>Transcode: 创建转码模板，目前仅支持修改增强参数。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * MPS 修改模板参数。该参数用于透传至媒体处理服务（MPS），从云点播侧修改用户自定义的 MPS 任务模板。
 目前仅支持通过此方式修改以下任务类型的模板：
1. 音视频增强：仅支持填写“[修改转码模板](https://cloud.tencent.com/document/api/862/37578)”接口中的 Name、Comment、RemoveVideo、RemoveAudio、VideoTemplate、AudioTemplate 和 EnhanceConfig 几个参数的内容。目前仅支持在模板中配置以上参数，其他参数无需填写，若包含其它参数，系统将自动忽略。
                     */
                    std::string m_mPSModifyTemplateParams;
                    bool m_mPSModifyTemplateParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMPSTEMPLATEREQUEST_H_
