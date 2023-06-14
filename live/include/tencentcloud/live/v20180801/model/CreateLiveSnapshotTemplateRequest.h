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
                     * 获取模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @return TemplateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     * @param _templateName 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
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
                     * 获取Cos 应用 ID。
                     * @return CosAppId Cos 应用 ID。
                     * 
                     */
                    int64_t GetCosAppId() const;

                    /**
                     * 设置Cos 应用 ID。
                     * @param _cosAppId Cos 应用 ID。
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
                     * 获取Cos Bucket名称。
注：CosBucket参数值不能包含-[appid] 部分。
                     * @return CosBucket Cos Bucket名称。
注：CosBucket参数值不能包含-[appid] 部分。
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置Cos Bucket名称。
注：CosBucket参数值不能包含-[appid] 部分。
                     * @param _cosBucket Cos Bucket名称。
注：CosBucket参数值不能包含-[appid] 部分。
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
                     * 获取Cos地区。
                     * @return CosRegion Cos地区。
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置Cos地区。
                     * @param _cosRegion Cos地区。
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
                     * 获取描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * @return Description 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     * @param _description 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
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
                     * 获取截图间隔，单位s，默认10s。
范围： 2s ~ 300s。
                     * @return SnapshotInterval 截图间隔，单位s，默认10s。
范围： 2s ~ 300s。
                     * 
                     */
                    int64_t GetSnapshotInterval() const;

                    /**
                     * 设置截图间隔，单位s，默认10s。
范围： 2s ~ 300s。
                     * @param _snapshotInterval 截图间隔，单位s，默认10s。
范围： 2s ~ 300s。
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
                     * 获取截图宽度。默认：0（原始宽）。
范围：0-3000 。
                     * @return Width 截图宽度。默认：0（原始宽）。
范围：0-3000 。
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置截图宽度。默认：0（原始宽）。
范围：0-3000 。
                     * @param _width 截图宽度。默认：0（原始宽）。
范围：0-3000 。
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
                     * 获取截图高度。默认：0（原始高）。
范围：0-2000 。
                     * @return Height 截图高度。默认：0（原始高）。
范围：0-2000 。
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置截图高度。默认：0（原始高）。
范围：0-2000 。
                     * @param _height 截图高度。默认：0（原始高）。
范围：0-2000 。
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
                     * 获取是否开启鉴黄，0：不开启，1：开启。默认：0。
                     * @return PornFlag 是否开启鉴黄，0：不开启，1：开启。默认：0。
                     * 
                     */
                    int64_t GetPornFlag() const;

                    /**
                     * 设置是否开启鉴黄，0：不开启，1：开启。默认：0。
                     * @param _pornFlag 是否开启鉴黄，0：不开启，1：开启。默认：0。
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
                     * 获取Cos Bucket文件夹前缀。
如不传，实际按默认值
/{Year}-{Month}-{Day}
生效
                     * @return CosPrefix Cos Bucket文件夹前缀。
如不传，实际按默认值
/{Year}-{Month}-{Day}
生效
                     * 
                     */
                    std::string GetCosPrefix() const;

                    /**
                     * 设置Cos Bucket文件夹前缀。
如不传，实际按默认值
/{Year}-{Month}-{Day}
生效
                     * @param _cosPrefix Cos Bucket文件夹前缀。
如不传，实际按默认值
/{Year}-{Month}-{Day}
生效
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
                     * 获取Cos 文件名称。
如不传，实际按默认值
{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}
生效
                     * @return CosFileName Cos 文件名称。
如不传，实际按默认值
{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}
生效
                     * 
                     */
                    std::string GetCosFileName() const;

                    /**
                     * 设置Cos 文件名称。
如不传，实际按默认值
{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}
生效
                     * @param _cosFileName Cos 文件名称。
如不传，实际按默认值
{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}
生效
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
                     * 模板名称。
长度上限：255字节。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * Cos 应用 ID。
                     */
                    int64_t m_cosAppId;
                    bool m_cosAppIdHasBeenSet;

                    /**
                     * Cos Bucket名称。
注：CosBucket参数值不能包含-[appid] 部分。
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * Cos地区。
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 描述信息。
长度上限：1024字节。
仅支持中文、英文、数字、_、-。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 截图间隔，单位s，默认10s。
范围： 2s ~ 300s。
                     */
                    int64_t m_snapshotInterval;
                    bool m_snapshotIntervalHasBeenSet;

                    /**
                     * 截图宽度。默认：0（原始宽）。
范围：0-3000 。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 截图高度。默认：0（原始高）。
范围：0-2000 。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 是否开启鉴黄，0：不开启，1：开启。默认：0。
                     */
                    int64_t m_pornFlag;
                    bool m_pornFlagHasBeenSet;

                    /**
                     * Cos Bucket文件夹前缀。
如不传，实际按默认值
/{Year}-{Month}-{Day}
生效
                     */
                    std::string m_cosPrefix;
                    bool m_cosPrefixHasBeenSet;

                    /**
                     * Cos 文件名称。
如不传，实际按默认值
{StreamID}-screenshot-{Hour}-{Minute}-{Second}-{Width}x{Height}{Ext}
生效
                     */
                    std::string m_cosFileName;
                    bool m_cosFileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATELIVESNAPSHOTTEMPLATEREQUEST_H_
