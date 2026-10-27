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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_IMAGEINFO_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_IMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * 云桌面镜像信息
                */
                class ImageInfo : public AbstractModel
                {
                public:
                    ImageInfo();
                    ~ImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageID <p>镜像id</p>
                     * 
                     */
                    std::string GetImageID() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageID <p>镜像id</p>
                     * 
                     */
                    void SetImageID(const std::string& _imageID);

                    /**
                     * 判断参数 ImageID 是否已赋值
                     * @return ImageID 是否已赋值
                     * 
                     */
                    bool ImageIDHasBeenSet() const;

                    /**
                     * 获取<p>镜像名称</p>
                     * @return ImageName <p>镜像名称</p>
                     * 
                     */
                    std::string GetImageName() const;

                    /**
                     * 设置<p>镜像名称</p>
                     * @param _imageName <p>镜像名称</p>
                     * 
                     */
                    void SetImageName(const std::string& _imageName);

                    /**
                     * 判断参数 ImageName 是否已赋值
                     * @return ImageName 是否已赋值
                     * 
                     */
                    bool ImageNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像类型：<br>PUBLIC_IMAGE-公共镜像<br>PRIVATE_IMAGE-自定义镜像<br>TENCENT_OFFICE_IMAGE-腾讯办公镜像</p>
                     * @return ImageType <p>镜像类型：<br>PUBLIC_IMAGE-公共镜像<br>PRIVATE_IMAGE-自定义镜像<br>TENCENT_OFFICE_IMAGE-腾讯办公镜像</p>
                     * 
                     */
                    std::string GetImageType() const;

                    /**
                     * 设置<p>镜像类型：<br>PUBLIC_IMAGE-公共镜像<br>PRIVATE_IMAGE-自定义镜像<br>TENCENT_OFFICE_IMAGE-腾讯办公镜像</p>
                     * @param _imageType <p>镜像类型：<br>PUBLIC_IMAGE-公共镜像<br>PRIVATE_IMAGE-自定义镜像<br>TENCENT_OFFICE_IMAGE-腾讯办公镜像</p>
                     * 
                     */
                    void SetImageType(const std::string& _imageType);

                    /**
                     * 判断参数 ImageType 是否已赋值
                     * @return ImageType 是否已赋值
                     * 
                     */
                    bool ImageTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像状态：<br>CREATING-创建中<br>NORMAL-正常<br>CREATEFAILED-创建失败<br>USING-使用中<br>SYNCING-同步中<br>IMPORTING-导入中<br>IMPORTFAILED-导入失败<br>INVISIBLE-淘汰的镜像<br>DELETIING-删除中<br>DELETED-删除的</p>
                     * @return ImageState <p>镜像状态：<br>CREATING-创建中<br>NORMAL-正常<br>CREATEFAILED-创建失败<br>USING-使用中<br>SYNCING-同步中<br>IMPORTING-导入中<br>IMPORTFAILED-导入失败<br>INVISIBLE-淘汰的镜像<br>DELETIING-删除中<br>DELETED-删除的</p>
                     * 
                     */
                    std::string GetImageState() const;

                    /**
                     * 设置<p>镜像状态：<br>CREATING-创建中<br>NORMAL-正常<br>CREATEFAILED-创建失败<br>USING-使用中<br>SYNCING-同步中<br>IMPORTING-导入中<br>IMPORTFAILED-导入失败<br>INVISIBLE-淘汰的镜像<br>DELETIING-删除中<br>DELETED-删除的</p>
                     * @param _imageState <p>镜像状态：<br>CREATING-创建中<br>NORMAL-正常<br>CREATEFAILED-创建失败<br>USING-使用中<br>SYNCING-同步中<br>IMPORTING-导入中<br>IMPORTFAILED-导入失败<br>INVISIBLE-淘汰的镜像<br>DELETIING-删除中<br>DELETED-删除的</p>
                     * 
                     */
                    void SetImageState(const std::string& _imageState);

                    /**
                     * 判断参数 ImageState 是否已赋值
                     * @return ImageState 是否已赋值
                     * 
                     */
                    bool ImageStateHasBeenSet() const;

                    /**
                     * 获取<p>镜像操作系统</p>
                     * @return OsName <p>镜像操作系统</p>
                     * 
                     */
                    std::string GetOsName() const;

                    /**
                     * 设置<p>镜像操作系统</p>
                     * @param _osName <p>镜像操作系统</p>
                     * 
                     */
                    void SetOsName(const std::string& _osName);

                    /**
                     * 判断参数 OsName 是否已赋值
                     * @return OsName 是否已赋值
                     * 
                     */
                    bool OsNameHasBeenSet() const;

                    /**
                     * 获取<p>镜像大小（单位G）</p>
                     * @return ImageSize <p>镜像大小（单位G）</p>
                     * 
                     */
                    int64_t GetImageSize() const;

                    /**
                     * 设置<p>镜像大小（单位G）</p>
                     * @param _imageSize <p>镜像大小（单位G）</p>
                     * 
                     */
                    void SetImageSize(const int64_t& _imageSize);

                    /**
                     * 判断参数 ImageSize 是否已赋值
                     * @return ImageSize 是否已赋值
                     * 
                     */
                    bool ImageSizeHasBeenSet() const;

                    /**
                     * 获取<p>镜像描述</p>
                     * @return Description <p>镜像描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>镜像描述</p>
                     * @param _description <p>镜像描述</p>
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
                     * 获取<p>镜像所在区域</p>
                     * @return Region <p>镜像所在区域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>镜像所在区域</p>
                     * @param _region <p>镜像所在区域</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>内核类型：<br>CPU<br>GPU<br>GPU_A10<br>GPU_RTX6000<br>GPU_2080Ti<br>GPU_3080Ti</p>
                     * @return CoreType <p>内核类型：<br>CPU<br>GPU<br>GPU_A10<br>GPU_RTX6000<br>GPU_2080Ti<br>GPU_3080Ti</p>
                     * 
                     */
                    std::string GetCoreType() const;

                    /**
                     * 设置<p>内核类型：<br>CPU<br>GPU<br>GPU_A10<br>GPU_RTX6000<br>GPU_2080Ti<br>GPU_3080Ti</p>
                     * @param _coreType <p>内核类型：<br>CPU<br>GPU<br>GPU_A10<br>GPU_RTX6000<br>GPU_2080Ti<br>GPU_3080Ti</p>
                     * 
                     */
                    void SetCoreType(const std::string& _coreType);

                    /**
                     * 判断参数 CoreType 是否已赋值
                     * @return CoreType 是否已赋值
                     * 
                     */
                    bool CoreTypeHasBeenSet() const;

                    /**
                     * 获取<p>cvm侧镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CvmImageId <p>cvm侧镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCvmImageId() const;

                    /**
                     * 设置<p>cvm侧镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cvmImageId <p>cvm侧镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCvmImageId(const std::string& _cvmImageId);

                    /**
                     * 判断参数 CvmImageId 是否已赋值
                     * @return CvmImageId 是否已赋值
                     * 
                     */
                    bool CvmImageIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是整机镜像，整机镜像无法用于桌面重置<br>true：整机镜像<br>false: 不是整机镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsWhole <p>是否是整机镜像，整机镜像无法用于桌面重置<br>true：整机镜像<br>false: 不是整机镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsWhole() const;

                    /**
                     * 设置<p>是否是整机镜像，整机镜像无法用于桌面重置<br>true：整机镜像<br>false: 不是整机镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isWhole <p>是否是整机镜像，整机镜像无法用于桌面重置<br>true：整机镜像<br>false: 不是整机镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsWhole(const bool& _isWhole);

                    /**
                     * 判断参数 IsWhole 是否已赋值
                     * @return IsWhole 是否已赋值
                     * 
                     */
                    bool IsWholeHasBeenSet() const;

                    /**
                     * 获取<p>整机镜像中数据盘大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataDiskSize <p>整机镜像中数据盘大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataDiskSize() const;

                    /**
                     * 设置<p>整机镜像中数据盘大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataDiskSize <p>整机镜像中数据盘大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataDiskSize(const int64_t& _dataDiskSize);

                    /**
                     * 判断参数 DataDiskSize 是否已赋值
                     * @return DataDiskSize 是否已赋值
                     * 
                     */
                    bool DataDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>镜像创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>镜像创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>镜像创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>镜像创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageID;
                    bool m_imageIDHasBeenSet;

                    /**
                     * <p>镜像名称</p>
                     */
                    std::string m_imageName;
                    bool m_imageNameHasBeenSet;

                    /**
                     * <p>镜像类型：<br>PUBLIC_IMAGE-公共镜像<br>PRIVATE_IMAGE-自定义镜像<br>TENCENT_OFFICE_IMAGE-腾讯办公镜像</p>
                     */
                    std::string m_imageType;
                    bool m_imageTypeHasBeenSet;

                    /**
                     * <p>镜像状态：<br>CREATING-创建中<br>NORMAL-正常<br>CREATEFAILED-创建失败<br>USING-使用中<br>SYNCING-同步中<br>IMPORTING-导入中<br>IMPORTFAILED-导入失败<br>INVISIBLE-淘汰的镜像<br>DELETIING-删除中<br>DELETED-删除的</p>
                     */
                    std::string m_imageState;
                    bool m_imageStateHasBeenSet;

                    /**
                     * <p>镜像操作系统</p>
                     */
                    std::string m_osName;
                    bool m_osNameHasBeenSet;

                    /**
                     * <p>镜像大小（单位G）</p>
                     */
                    int64_t m_imageSize;
                    bool m_imageSizeHasBeenSet;

                    /**
                     * <p>镜像描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>镜像所在区域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>内核类型：<br>CPU<br>GPU<br>GPU_A10<br>GPU_RTX6000<br>GPU_2080Ti<br>GPU_3080Ti</p>
                     */
                    std::string m_coreType;
                    bool m_coreTypeHasBeenSet;

                    /**
                     * <p>cvm侧镜像id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cvmImageId;
                    bool m_cvmImageIdHasBeenSet;

                    /**
                     * <p>是否是整机镜像，整机镜像无法用于桌面重置<br>true：整机镜像<br>false: 不是整机镜像</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isWhole;
                    bool m_isWholeHasBeenSet;

                    /**
                     * <p>整机镜像中数据盘大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataDiskSize;
                    bool m_dataDiskSizeHasBeenSet;

                    /**
                     * <p>镜像创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_IMAGEINFO_H_
