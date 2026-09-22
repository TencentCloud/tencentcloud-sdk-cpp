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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITTEMPLATE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/CMSSceneDetail.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 审核模板。
                */
                class AuditTemplate : public AbstractModel
                {
                public:
                    AuditTemplate();
                    ~AuditTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板 ID 。<br>CreateAuditTemplate 时，此参数不传或传 0 。</p><p>ModifyAuditTemplate 时，此参数必传。</p>
                     * @return TemplateId <p>模板 ID 。<br>CreateAuditTemplate 时，此参数不传或传 0 。</p><p>ModifyAuditTemplate 时，此参数必传。</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>模板 ID 。<br>CreateAuditTemplate 时，此参数不传或传 0 。</p><p>ModifyAuditTemplate 时，此参数必传。</p>
                     * @param _templateId <p>模板 ID 。<br>CreateAuditTemplate 时，此参数不传或传 0 。</p><p>ModifyAuditTemplate 时，此参数必传。</p>
                     * 
                     */
                    void SetTemplateId(const int64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>模板名称。<br>CreateAuditTemplate 必填。</p>
                     * @return TemplateName <p>模板名称。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。<br>CreateAuditTemplate 必填。</p>
                     * @param _templateName <p>模板名称。<br>CreateAuditTemplate 必填。</p>
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
                     * 获取<p>描述信息。<br>CreateAuditTemplate 必填。</p>
                     * @return Description <p>描述信息。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。<br>CreateAuditTemplate 必填。</p>
                     * @param _description <p>描述信息。<br>CreateAuditTemplate 必填。</p>
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
                     * 获取<p>Cos Bucket名称。<br>CreateAuditTemplate 必填。</p>
                     * @return CosBucket <p>Cos Bucket名称。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>Cos Bucket名称。<br>CreateAuditTemplate 必填。</p>
                     * @param _cosBucket <p>Cos Bucket名称。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * @return CosRegion <p>Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置<p>Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * @param _cosRegion <p>Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     * 
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取<p>Cos 完整文件名（包括前缀）。CreateAuditTemplate 必填。</p>
                     * @return CosFilePath <p>Cos 完整文件名（包括前缀）。CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetCosFilePath() const;

                    /**
                     * 设置<p>Cos 完整文件名（包括前缀）。CreateAuditTemplate 必填。</p>
                     * @param _cosFilePath <p>Cos 完整文件名（包括前缀）。CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetCosFilePath(const std::string& _cosFilePath);

                    /**
                     * 判断参数 CosFilePath 是否已赋值
                     * @return CosFilePath 是否已赋值
                     * 
                     */
                    bool CosFilePathHasBeenSet() const;

                    /**
                     * 获取<p>是否启用图片审核。<br>CreateAuditTemplate 必填。</p>
                     * @return AuditImage <p>是否启用图片审核。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    bool GetAuditImage() const;

                    /**
                     * 设置<p>是否启用图片审核。<br>CreateAuditTemplate 必填。</p>
                     * @param _auditImage <p>是否启用图片审核。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetAuditImage(const bool& _auditImage);

                    /**
                     * 判断参数 AuditImage 是否已赋值
                     * @return AuditImage 是否已赋值
                     * 
                     */
                    bool AuditImageHasBeenSet() const;

                    /**
                     * 获取<p>是否启用音频审核。<br>CreateAuditTemplate 必填。</p>
                     * @return AuditAudio <p>是否启用音频审核。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    bool GetAuditAudio() const;

                    /**
                     * 设置<p>是否启用音频审核。<br>CreateAuditTemplate 必填。</p>
                     * @param _auditAudio <p>是否启用音频审核。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetAuditAudio(const bool& _auditAudio);

                    /**
                     * 判断参数 AuditAudio 是否已赋值
                     * @return AuditAudio 是否已赋值
                     * 
                     */
                    bool AuditAudioHasBeenSet() const;

                    /**
                     * 获取<p>截图间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * @return SnapshotInterval <p>截图间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置<p>截图间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * @param _snapshotInterval <p>截图间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetSnapshotInterval(const int64_t& _snapshotInterval);

                    /**
                     * 判断参数 SnapshotInterval 是否已赋值
                     * @return SnapshotInterval 是否已赋值
                     * 
                     */
                    bool SnapshotIntervalHasBeenSet() const;

                    /**
                     * 获取<p>音频间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * @return AudioInterval <p>音频间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    int64_t GetAudioInterval() const;

                    /**
                     * 设置<p>音频间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * @param _audioInterval <p>音频间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetAudioInterval(const int64_t& _audioInterval);

                    /**
                     * 判断参数 AudioInterval 是否已赋值
                     * @return AudioInterval 是否已赋值
                     * 
                     */
                    bool AudioIntervalHasBeenSet() const;

                    /**
                     * 获取<p>是否开启 Cos 容灾。<br>CreateAuditTemplate 必填。</p>
                     * @return EnableFailoverCos <p>是否开启 Cos 容灾。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    bool GetEnableFailoverCos() const;

                    /**
                     * 设置<p>是否开启 Cos 容灾。<br>CreateAuditTemplate 必填。</p>
                     * @param _enableFailoverCos <p>是否开启 Cos 容灾。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetEnableFailoverCos(const bool& _enableFailoverCos);

                    /**
                     * 判断参数 EnableFailoverCos 是否已赋值
                     * @return EnableFailoverCos 是否已赋值
                     * 
                     */
                    bool EnableFailoverCosHasBeenSet() const;

                    /**
                     * 获取<p>容灾 Cos Bucket 。<br>CreateAuditTemplate 必填。</p>
                     * @return FailoverCosBucket <p>容灾 Cos Bucket 。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetFailoverCosBucket() const;

                    /**
                     * 设置<p>容灾 Cos Bucket 。<br>CreateAuditTemplate 必填。</p>
                     * @param _failoverCosBucket <p>容灾 Cos Bucket 。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetFailoverCosBucket(const std::string& _failoverCosBucket);

                    /**
                     * 判断参数 FailoverCosBucket 是否已赋值
                     * @return FailoverCosBucket 是否已赋值
                     * 
                     */
                    bool FailoverCosBucketHasBeenSet() const;

                    /**
                     * 获取<p>容灾 Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * @return FailoverCosRegion <p>容灾 Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    std::string GetFailoverCosRegion() const;

                    /**
                     * 设置<p>容灾 Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * @param _failoverCosRegion <p>容灾 Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     * 
                     */
                    void SetFailoverCosRegion(const std::string& _failoverCosRegion);

                    /**
                     * 判断参数 FailoverCosRegion 是否已赋值
                     * @return FailoverCosRegion 是否已赋值
                     * 
                     */
                    bool FailoverCosRegionHasBeenSet() const;

                    /**
                     * 获取<p>场景策略配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SceneInfos <p>场景策略配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CMSSceneDetail> GetSceneInfos() const;

                    /**
                     * 设置<p>场景策略配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sceneInfos <p>场景策略配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSceneInfos(const std::vector<CMSSceneDetail>& _sceneInfos);

                    /**
                     * 判断参数 SceneInfos 是否已赋值
                     * @return SceneInfos 是否已赋值
                     * 
                     */
                    bool SceneInfosHasBeenSet() const;

                    /**
                     * 获取<p>1：表示启用音频文本识别。0 ：不启用。默认 0 。</p>
                     * @return AuditText <p>1：表示启用音频文本识别。0 ：不启用。默认 0 。</p>
                     * 
                     */
                    int64_t GetAuditText() const;

                    /**
                     * 设置<p>1：表示启用音频文本识别。0 ：不启用。默认 0 。</p>
                     * @param _auditText <p>1：表示启用音频文本识别。0 ：不启用。默认 0 。</p>
                     * 
                     */
                    void SetAuditText(const int64_t& _auditText);

                    /**
                     * 判断参数 AuditText 是否已赋值
                     * @return AuditText 是否已赋值
                     * 
                     */
                    bool AuditTextHasBeenSet() const;

                private:

                    /**
                     * <p>模板 ID 。<br>CreateAuditTemplate 时，此参数不传或传 0 。</p><p>ModifyAuditTemplate 时，此参数必传。</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名称。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>描述信息。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Cos Bucket名称。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * <p>Cos 完整文件名（包括前缀）。CreateAuditTemplate 必填。</p>
                     */
                    std::string m_cosFilePath;
                    bool m_cosFilePathHasBeenSet;

                    /**
                     * <p>是否启用图片审核。<br>CreateAuditTemplate 必填。</p>
                     */
                    bool m_auditImage;
                    bool m_auditImageHasBeenSet;

                    /**
                     * <p>是否启用音频审核。<br>CreateAuditTemplate 必填。</p>
                     */
                    bool m_auditAudio;
                    bool m_auditAudioHasBeenSet;

                    /**
                     * <p>截图间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * <p>音频间隔，1-60秒。<br>CreateAuditTemplate 必填。</p>
                     */
                    int64_t m_audioInterval;
                    bool m_audioIntervalHasBeenSet;

                    /**
                     * <p>是否开启 Cos 容灾。<br>CreateAuditTemplate 必填。</p>
                     */
                    bool m_enableFailoverCos;
                    bool m_enableFailoverCosHasBeenSet;

                    /**
                     * <p>容灾 Cos Bucket 。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_failoverCosBucket;
                    bool m_failoverCosBucketHasBeenSet;

                    /**
                     * <p>容灾 Cos 地域。<br>CreateAuditTemplate 必填。</p>
                     */
                    std::string m_failoverCosRegion;
                    bool m_failoverCosRegionHasBeenSet;

                    /**
                     * <p>场景策略配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CMSSceneDetail> m_sceneInfos;
                    bool m_sceneInfosHasBeenSet;

                    /**
                     * <p>1：表示启用音频文本识别。0 ：不启用。默认 0 。</p>
                     */
                    int64_t m_auditText;
                    bool m_auditTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITTEMPLATE_H_
