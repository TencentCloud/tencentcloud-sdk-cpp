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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 截图模板信息。
                */
                class SnapshotTemplateInfo : public AbstractModel
                {
                public:
                    SnapshotTemplateInfo();
                    ~SnapshotTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模板 ID。</p>
                     * @return TemplateId <p>模板 ID。</p>
                     * 
                     */
                    int64_t GetTemplateId() const;

                    /**
                     * 设置<p>模板 ID。</p>
                     * @param _templateId <p>模板 ID。</p>
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
                     * 获取<p>模板名称。</p>
                     * @return TemplateName <p>模板名称。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。</p>
                     * @param _templateName <p>模板名称。</p>
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
                     * 获取<p>截图时间间隔，5-300秒。</p>
                     * @return SnapshotInterval <p>截图时间间隔，5-300秒。</p>
                     * 
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置<p>截图时间间隔，5-300秒。</p>
                     * @param _snapshotInterval <p>截图时间间隔，5-300秒。</p>
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
                     * 获取<p>截图宽度，范围：0-3000。<br>0：原始宽度并适配原始比例。</p>
                     * @return Width <p>截图宽度，范围：0-3000。<br>0：原始宽度并适配原始比例。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>截图宽度，范围：0-3000。<br>0：原始宽度并适配原始比例。</p>
                     * @param _width <p>截图宽度，范围：0-3000。<br>0：原始宽度并适配原始比例。</p>
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>截图高度，范围：0-2000。<br>0：原始高度并适配原始比例。</p>
                     * @return Height <p>截图高度，范围：0-2000。<br>0：原始高度并适配原始比例。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>截图高度，范围：0-2000。<br>0：原始高度并适配原始比例。</p>
                     * @param _height <p>截图高度，范围：0-2000。<br>0：原始高度并适配原始比例。</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>是否开启鉴黄，0：不开启，1：开启。</p>
                     * @return PornFlag <p>是否开启鉴黄，0：不开启，1：开启。</p>
                     * 
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置<p>是否开启鉴黄，0：不开启，1：开启。</p>
                     * @param _pornFlag <p>是否开启鉴黄，0：不开启，1：开启。</p>
                     * 
                     */
                    void SetPornFlag(const int64_t& _pornFlag);

                    /**
                     * 判断参数 PornFlag 是否已赋值
                     * @return PornFlag 是否已赋值
                     * 
                     */
                    bool PornFlagHasBeenSet() const;

                    /**
                     * 获取<p>Cos 应用 ID。</p>
                     * @return CosAppId <p>Cos 应用 ID。</p>
                     * 
                     */
                    int64_t GetCosAppId() const;

                    /**
                     * 设置<p>Cos 应用 ID。</p>
                     * @param _cosAppId <p>Cos 应用 ID。</p>
                     * 
                     */
                    void SetCosAppId(const int64_t& _cosAppId);

                    /**
                     * 判断参数 CosAppId 是否已赋值
                     * @return CosAppId 是否已赋值
                     * 
                     */
                    bool CosAppIdHasBeenSet() const;

                    /**
                     * 获取<p>Cos Bucket名称。</p>
                     * @return CosBucket <p>Cos Bucket名称。</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>Cos Bucket名称。</p>
                     * @param _cosBucket <p>Cos Bucket名称。</p>
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
                     * 获取<p>Cos 地域。</p>
                     * @return CosRegion <p>Cos 地域。</p>
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置<p>Cos 地域。</p>
                     * @param _cosRegion <p>Cos 地域。</p>
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
                     * 获取<p>模板描述。</p>
                     * @return Description <p>模板描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>模板描述。</p>
                     * @param _description <p>模板描述。</p>
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
                     * 获取<p>Cos Bucket文件夹前缀。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPrefix <p>Cos Bucket文件夹前缀。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 设置<p>Cos Bucket文件夹前缀。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPrefix <p>Cos Bucket文件夹前缀。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPrefix(const std::string& _cosPrefix);

                    /**
                     * 判断参数 CosPrefix 是否已赋值
                     * @return CosPrefix 是否已赋值
                     * 
                     */
                    bool CosPrefixHasBeenSet() const;

                    /**
                     * 获取<p>Cos 文件名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosFileName <p>Cos 文件名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置<p>Cos 文件名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosFileName <p>Cos 文件名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                    /**
                     * 获取<p>第三方存储时账号的SecretId</p>
                     * @return CosSecretId <p>第三方存储时账号的SecretId</p>
                     * 
                     */
                    std::string GetCosSecretId() const;

                    /**
                     * 设置<p>第三方存储时账号的SecretId</p>
                     * @param _cosSecretId <p>第三方存储时账号的SecretId</p>
                     * 
                     */
                    void SetCosSecretId(const std::string& _cosSecretId);

                    /**
                     * 判断参数 CosSecretId 是否已赋值
                     * @return CosSecretId 是否已赋值
                     * 
                     */
                    bool CosSecretIdHasBeenSet() const;

                    /**
                     * 获取<p>第三方存储时，账号的SecretKey</p><p>当查询时，该值返回为<code>******</code></p>
                     * @return CosSecretKey <p>第三方存储时，账号的SecretKey</p><p>当查询时，该值返回为<code>******</code></p>
                     * 
                     */
                    std::string GetCosSecretKey() const;

                    /**
                     * 设置<p>第三方存储时，账号的SecretKey</p><p>当查询时，该值返回为<code>******</code></p>
                     * @param _cosSecretKey <p>第三方存储时，账号的SecretKey</p><p>当查询时，该值返回为<code>******</code></p>
                     * 
                     */
                    void SetCosSecretKey(const std::string& _cosSecretKey);

                    /**
                     * 判断参数 CosSecretKey 是否已赋值
                     * @return CosSecretKey 是否已赋值
                     * 
                     */
                    bool CosSecretKeyHasBeenSet() const;

                private:

                    /**
                     * <p>模板 ID。</p>
                     */
                    int64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>模板名称。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>截图时间间隔，5-300秒。</p>
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * <p>截图宽度，范围：0-3000。<br>0：原始宽度并适配原始比例。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>截图高度，范围：0-2000。<br>0：原始高度并适配原始比例。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>是否开启鉴黄，0：不开启，1：开启。</p>
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

                    /**
                     * <p>Cos 应用 ID。</p>
                     */
                    int64_t m_cosAppId;
                    bool m_cosAppIdHasBeenSet;

                    /**
                     * <p>Cos Bucket名称。</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Cos 地域。</p>
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * <p>模板描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>Cos Bucket文件夹前缀。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * <p>Cos 文件名称。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                    /**
                     * <p>第三方存储时账号的SecretId</p>
                     */
                    std::string m_cosSecretId;
                    bool m_cosSecretIdHasBeenSet;

                    /**
                     * <p>第三方存储时，账号的SecretKey</p><p>当查询时，该值返回为<code>******</code></p>
                     */
                    std::string m_cosSecretKey;
                    bool m_cosSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SNAPSHOTTEMPLATEINFO_H_
