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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_

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
                * CreateLiveSnapshotTemplate请求参数结构体
                */
                class CreateLiveSnapshotTemplateRequest : public AbstractModel
                {
                public:
                    CreateLiveSnapshotTemplateRequest();
                    ~CreateLiveSnapshotTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @return TemplateName <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置<p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     * @param _templateName <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
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
                     * 获取<p>Cos Bucket名称。<br>注：CosBucket参数值不能包含-[appid] 部分。</p>
                     * @return CosBucket <p>Cos Bucket名称。<br>注：CosBucket参数值不能包含-[appid] 部分。</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>Cos Bucket名称。<br>注：CosBucket参数值不能包含-[appid] 部分。</p>
                     * @param _cosBucket <p>Cos Bucket名称。<br>注：CosBucket参数值不能包含-[appid] 部分。</p>
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
                     * 获取<p>Cos地区。</p>
                     * @return CosRegion <p>Cos地区。</p>
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置<p>Cos地区。</p>
                     * @param _cosRegion <p>Cos地区。</p>
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
                     * 获取<p>截图间隔，单位s，默认10s。<br>范围： 2s ~ 300s。</p>
                     * @return SnapshotInterval <p>截图间隔，单位s，默认10s。<br>范围： 2s ~ 300s。</p>
                     * 
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置<p>截图间隔，单位s，默认10s。<br>范围： 2s ~ 300s。</p>
                     * @param _snapshotInterval <p>截图间隔，单位s，默认10s。<br>范围： 2s ~ 300s。</p>
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
                     * 获取<p>截图宽度。默认：0（原始宽）。<br>范围：0-3000 。</p>
                     * @return Width <p>截图宽度。默认：0（原始宽）。<br>范围：0-3000 。</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>截图宽度。默认：0（原始宽）。<br>范围：0-3000 。</p>
                     * @param _width <p>截图宽度。默认：0（原始宽）。<br>范围：0-3000 。</p>
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
                     * 获取<p>截图高度。默认：0（原始高）。<br>范围：0-2000 。</p>
                     * @return Height <p>截图高度。默认：0（原始高）。<br>范围：0-2000 。</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>截图高度。默认：0（原始高）。<br>范围：0-2000 。</p>
                     * @param _height <p>截图高度。默认：0（原始高）。<br>范围：0-2000 。</p>
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
                     * 获取<p>是否开启鉴黄，0：不开启，1：开启。默认：0。</p>
                     * @return PornFlag <p>是否开启鉴黄，0：不开启，1：开启。默认：0。</p>
                     * 
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置<p>是否开启鉴黄，0：不开启，1：开启。默认：0。</p>
                     * @param _pornFlag <p>是否开启鉴黄，0：不开启，1：开启。默认：0。</p>
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
                     * 获取<p>Cos Bucket文件夹前缀。<br>如不传，实际按默认值<br>/{Year}-{Month}-{Day}<br>生效</p>
                     * @return CosPrefix <p>Cos Bucket文件夹前缀。<br>如不传，实际按默认值<br>/{Year}-{Month}-{Day}<br>生效</p>
                     * 
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 设置<p>Cos Bucket文件夹前缀。<br>如不传，实际按默认值<br>/{Year}-{Month}-{Day}<br>生效</p>
                     * @param _cosPrefix <p>Cos Bucket文件夹前缀。<br>如不传，实际按默认值<br>/{Year}-{Month}-{Day}<br>生效</p>
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
                     * 获取<p>Cos 文件名称。<br>如不传，实际按默认值<br>{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}<br>生效</p>
                     * @return CosFileName <p>Cos 文件名称。<br>如不传，实际按默认值<br>{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}<br>生效</p>
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置<p>Cos 文件名称。<br>如不传，实际按默认值<br>{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}<br>生效</p>
                     * @param _cosFileName <p>Cos 文件名称。<br>如不传，实际按默认值<br>{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}<br>生效</p>
                     * 
                     */
                    void SetCosFileName(const std::string& _cosFileName);

                    /**
                     * 判断参数 CosFileName 是否已赋值
                     * @return CosFileName 是否已赋值
                     * 
                     */
                    bool CosFileNameHasBeenSet() const;

                private:

                    /**
                     * <p>模板名称。<br>长度上限：255字节。<br>仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * <p>Cos 应用 ID。</p>
                     */
                    int64_t m_cosAppId;
                    bool m_cosAppIdHasBeenSet;

                    /**
                     * <p>Cos Bucket名称。<br>注：CosBucket参数值不能包含-[appid] 部分。</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>Cos地区。</p>
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * <p>描述信息。<br>长度上限：1024字节。<br>仅支持中文、英文、数字、_、-。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>截图间隔，单位s，默认10s。<br>范围： 2s ~ 300s。</p>
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * <p>截图宽度。默认：0（原始宽）。<br>范围：0-3000 。</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>截图高度。默认：0（原始高）。<br>范围：0-2000 。</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>是否开启鉴黄，0：不开启，1：开启。默认：0。</p>
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

                    /**
                     * <p>Cos Bucket文件夹前缀。<br>如不传，实际按默认值<br>/{Year}-{Month}-{Day}<br>生效</p>
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * <p>Cos 文件名称。<br>如不传，实际按默认值<br>{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}<br>生效</p>
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_
