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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESMARTERASETEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESMARTERASETEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateLiveSmartEraseTemplate请求参数结构体
                */
                class CreateLiveSmartEraseTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveSmartEraseTemplateRequest();
                    ~CreateLiveSmartEraseTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名称。长度上限：100字节。</p>
                     * @return TemplateName <p>模板名称。长度上限：100字节。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。长度上限：100字节。</p>
                     * @param _templateName <p>模板名称。长度上限：100字节。</p>
                     * 
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     * 
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取<p>擦除类型，如&quot;illegal audio|illegal image|logo|privacy protection 。</p>
                     * @return Type <p>擦除类型，如&quot;illegal audio|illegal image|logo|privacy protection 。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>擦除类型，如&quot;illegal audio|illegal image|logo|privacy protection 。</p>
                     * @param _type <p>擦除类型，如&quot;illegal audio|illegal image|logo|privacy protection 。</p>
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
                     * 获取<p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @return Description <p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @param _description <p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>关联的审核模板id, 表audio_conf 。</p><p>取值为DescribeAuditTemplates接口返回的AuditTemplates里面的TemplateId字段</p>
                     * @return AuditConfId <p>关联的审核模板id, 表audio_conf 。</p><p>取值为DescribeAuditTemplates接口返回的AuditTemplates里面的TemplateId字段</p>
                     * 
                     */
                    uint64_t GetAuditConfId() const;

                    /**
                     * 设置<p>关联的审核模板id, 表audio_conf 。</p><p>取值为DescribeAuditTemplates接口返回的AuditTemplates里面的TemplateId字段</p>
                     * @param _auditConfId <p>关联的审核模板id, 表audio_conf 。</p><p>取值为DescribeAuditTemplates接口返回的AuditTemplates里面的TemplateId字段</p>
                     * 
                     */
                    void SetAuditConfId(const uint64_t& _auditConfId);

                    /**
                     * 判断参数 AuditConfId 是否已赋值
                     * @return AuditConfId 是否已赋值
                     * 
                     */
                    bool AuditConfIdHasBeenSet() const;

                    /**
                     * 获取<p>天御图片审核策略BizType  Image 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Image&quot;的BizType值</p>
                     * @return ImageBizType <p>天御图片审核策略BizType  Image 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Image&quot;的BizType值</p>
                     * 
                     */
                    std::string GetImageBizType() const;

                    /**
                     * 设置<p>天御图片审核策略BizType  Image 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Image&quot;的BizType值</p>
                     * @param _imageBizType <p>天御图片审核策略BizType  Image 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Image&quot;的BizType值</p>
                     * 
                     */
                    void SetImageBizType(const std::string& _imageBizType);

                    /**
                     * 判断参数 ImageBizType 是否已赋值
                     * @return ImageBizType 是否已赋值
                     * 
                     */
                    bool ImageBizTypeHasBeenSet() const;

                    /**
                     * 获取<p>天御音频审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;ShortAudio&quot;的BizType值</p>
                     * @return AudioBizType <p>天御音频审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;ShortAudio&quot;的BizType值</p>
                     * 
                     */
                    std::string GetAudioBizType() const;

                    /**
                     * 设置<p>天御音频审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;ShortAudio&quot;的BizType值</p>
                     * @param _audioBizType <p>天御音频审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;ShortAudio&quot;的BizType值</p>
                     * 
                     */
                    void SetAudioBizType(const std::string& _audioBizType);

                    /**
                     * 判断参数 AudioBizType 是否已赋值
                     * @return AudioBizType 是否已赋值
                     * 
                     */
                    bool AudioBizTypeHasBeenSet() const;

                    /**
                     * 获取<p>天御音频文本审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Text&quot;的BizType值</p>
                     * @return AudioTextBizType <p>天御音频文本审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Text&quot;的BizType值</p>
                     * 
                     */
                    std::string GetAudioTextBizType() const;

                    /**
                     * 设置<p>天御音频文本审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Text&quot;的BizType值</p>
                     * @param _audioTextBizType <p>天御音频文本审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Text&quot;的BizType值</p>
                     * 
                     */
                    void SetAudioTextBizType(const std::string& _audioTextBizType);

                    /**
                     * 判断参数 AudioTextBizType 是否已赋值
                     * @return AudioTextBizType 是否已赋值
                     * 
                     */
                    bool AudioTextBizTypeHasBeenSet() const;

                    /**
                     * 获取<p>展示模式，取值 1:延时稳态展示; 3.实时动态展示。默认1 。</p>
                     * @return DisplayMode <p>展示模式，取值 1:延时稳态展示; 3.实时动态展示。默认1 。</p>
                     * 
                     */
                    int64_t GetDisplayMode() const;

                    /**
                     * 设置<p>展示模式，取值 1:延时稳态展示; 3.实时动态展示。默认1 。</p>
                     * @param _displayMode <p>展示模式，取值 1:延时稳态展示; 3.实时动态展示。默认1 。</p>
                     * 
                     */
                    void SetDisplayMode(const int64_t& _displayMode);

                    /**
                     * 判断参数 DisplayMode 是否已赋值
                     * @return DisplayMode 是否已赋值
                     * 
                     */
                    bool DisplayModeHasBeenSet() const;

                    /**
                     * 获取<p>字幕延迟展示时间,单位毫秒。默认10000。</p>
                     * @return DisplayDelayTime <p>字幕延迟展示时间,单位毫秒。默认10000。</p>
                     * 
                     */
                    int64_t GetDisplayDelayTime() const;

                    /**
                     * 设置<p>字幕延迟展示时间,单位毫秒。默认10000。</p>
                     * @param _displayDelayTime <p>字幕延迟展示时间,单位毫秒。默认10000。</p>
                     * 
                     */
                    void SetDisplayDelayTime(const int64_t& _displayDelayTime);

                    /**
                     * 判断参数 DisplayDelayTime 是否已赋值
                     * @return DisplayDelayTime 是否已赋值
                     * 
                     */
                    bool DisplayDelayTimeHasBeenSet() const;

                    /**
                     * 获取<p>隐私保护可选的类型名，包括人脸模糊、车牌模糊</p><p>枚举值：</p><ul><li>blur face： 人脸模糊</li><li>blur license plate： 车牌模糊</li><li>blur face|blur license plate： 复选</li></ul>
                     * @return PrivacyProtection <p>隐私保护可选的类型名，包括人脸模糊、车牌模糊</p><p>枚举值：</p><ul><li>blur face： 人脸模糊</li><li>blur license plate： 车牌模糊</li><li>blur face|blur license plate： 复选</li></ul>
                     * 
                     */
                    std::string GetPrivacyProtection() const;

                    /**
                     * 设置<p>隐私保护可选的类型名，包括人脸模糊、车牌模糊</p><p>枚举值：</p><ul><li>blur face： 人脸模糊</li><li>blur license plate： 车牌模糊</li><li>blur face|blur license plate： 复选</li></ul>
                     * @param _privacyProtection <p>隐私保护可选的类型名，包括人脸模糊、车牌模糊</p><p>枚举值：</p><ul><li>blur face： 人脸模糊</li><li>blur license plate： 车牌模糊</li><li>blur face|blur license plate： 复选</li></ul>
                     * 
                     */
                    void SetPrivacyProtection(const std::string& _privacyProtection);

                    /**
                     * 判断参数 PrivacyProtection 是否已赋值
                     * @return PrivacyProtection 是否已赋值
                     * 
                     */
                    bool PrivacyProtectionHasBeenSet() const;

                    /**
                     * 获取<p>音频处理可选项：静音擦除、哔音擦除，默认选择静音擦除</p><p>枚举值：</p><ul><li>0： 静音</li><li>1： 哔音</li></ul><p>默认值：0</p>
                     * @return AudioErasureMode <p>音频处理可选项：静音擦除、哔音擦除，默认选择静音擦除</p><p>枚举值：</p><ul><li>0： 静音</li><li>1： 哔音</li></ul><p>默认值：0</p>
                     * 
                     */
                    uint64_t GetAudioErasureMode() const;

                    /**
                     * 设置<p>音频处理可选项：静音擦除、哔音擦除，默认选择静音擦除</p><p>枚举值：</p><ul><li>0： 静音</li><li>1： 哔音</li></ul><p>默认值：0</p>
                     * @param _audioErasureMode <p>音频处理可选项：静音擦除、哔音擦除，默认选择静音擦除</p><p>枚举值：</p><ul><li>0： 静音</li><li>1： 哔音</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetAudioErasureMode(const uint64_t& _audioErasureMode);

                    /**
                     * 判断参数 AudioErasureMode 是否已赋值
                     * @return AudioErasureMode 是否已赋值
                     * 
                     */
                    bool AudioErasureModeHasBeenSet() const;

                private:

                    /**
                     * <p>模板名称。长度上限：100字节。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>擦除类型，如&quot;illegal audio|illegal image|logo|privacy protection 。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>关联的审核模板id, 表audio_conf 。</p><p>取值为DescribeAuditTemplates接口返回的AuditTemplates里面的TemplateId字段</p>
                     */
                    uint64_t m_auditConfId;
                    bool m_auditConfIdHasBeenSet;

                    /**
                     * <p>天御图片审核策略BizType  Image 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Image&quot;的BizType值</p>
                     */
                    std::string m_imageBizType;
                    bool m_imageBizTypeHasBeenSet;

                    /**
                     * <p>天御音频审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;ShortAudio&quot;的BizType值</p>
                     */
                    std::string m_audioBizType;
                    bool m_audioBizTypeHasBeenSet;

                    /**
                     * <p>天御音频文本审核策略BizType  ShortAudio 。</p><p>取值为DescribeAuditTemplates返回的SceneInfos下BizInfos里面的对应的StrategyType为&quot;Text&quot;的BizType值</p>
                     */
                    std::string m_audioTextBizType;
                    bool m_audioTextBizTypeHasBeenSet;

                    /**
                     * <p>展示模式，取值 1:延时稳态展示; 3.实时动态展示。默认1 。</p>
                     */
                    int64_t m_displayMode;
                    bool m_displayModeHasBeenSet;

                    /**
                     * <p>字幕延迟展示时间,单位毫秒。默认10000。</p>
                     */
                    int64_t m_displayDelayTime;
                    bool m_displayDelayTimeHasBeenSet;

                    /**
                     * <p>隐私保护可选的类型名，包括人脸模糊、车牌模糊</p><p>枚举值：</p><ul><li>blur face： 人脸模糊</li><li>blur license plate： 车牌模糊</li><li>blur face|blur license plate： 复选</li></ul>
                     */
                    std::string m_privacyProtection;
                    bool m_privacyProtectionHasBeenSet;

                    /**
                     * <p>音频处理可选项：静音擦除、哔音擦除，默认选择静音擦除</p><p>枚举值：</p><ul><li>0： 静音</li><li>1： 哔音</li></ul><p>默认值：0</p>
                     */
                    uint64_t m_audioErasureMode;
                    bool m_audioErasureModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESMARTERASETEMPLATEREQUEST_H_
