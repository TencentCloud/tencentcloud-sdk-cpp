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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ExportImages请求参数结构体
                */
                class ExportImagesRequest : public AbstractModel
                {
                public:
                    ExportImagesRequest();
                    ~ExportImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取COS存储桶名称
                     * @return BucketName COS存储桶名称
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS存储桶名称
                     * @param BucketName COS存储桶名称
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取镜像ID列表
                     * @return ImageIds 镜像ID列表
                     */
                    std::vector<std::string> GetImageIds() const;

                    /**
                     * 设置镜像ID列表
                     * @param ImageIds 镜像ID列表
                     */
                    void SetImageIds(const std::vector<std::string>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取镜像文件导出格式。取值范围：RAW，QCOW2，VHD，VMDK。默认为RAW
                     * @return ExportFormat 镜像文件导出格式。取值范围：RAW，QCOW2，VHD，VMDK。默认为RAW
                     */
                    std::string GetExportFormat() const;

                    /**
                     * 设置镜像文件导出格式。取值范围：RAW，QCOW2，VHD，VMDK。默认为RAW
                     * @param ExportFormat 镜像文件导出格式。取值范围：RAW，QCOW2，VHD，VMDK。默认为RAW
                     */
                    void SetExportFormat(const std::string& _exportFormat);

                    /**
                     * 判断参数 ExportFormat 是否已赋值
                     * @return ExportFormat 是否已赋值
                     */
                    bool ExportFormatHasBeenSet() const;

                    /**
                     * 获取导出文件的名称前缀列表
                     * @return FileNamePrefixList 导出文件的名称前缀列表
                     */
                    std::vector<std::string> GetFileNamePrefixList() const;

                    /**
                     * 设置导出文件的名称前缀列表
                     * @param FileNamePrefixList 导出文件的名称前缀列表
                     */
                    void SetFileNamePrefixList(const std::vector<std::string>& _fileNamePrefixList);

                    /**
                     * 判断参数 FileNamePrefixList 是否已赋值
                     * @return FileNamePrefixList 是否已赋值
                     */
                    bool FileNamePrefixListHasBeenSet() const;

                    /**
                     * 获取是否只导出系统盘
                     * @return OnlyExportRootDisk 是否只导出系统盘
                     */
                    bool GetOnlyExportRootDisk() const;

                    /**
                     * 设置是否只导出系统盘
                     * @param OnlyExportRootDisk 是否只导出系统盘
                     */
                    void SetOnlyExportRootDisk(const bool& _onlyExportRootDisk);

                    /**
                     * 判断参数 OnlyExportRootDisk 是否已赋值
                     * @return OnlyExportRootDisk 是否已赋值
                     */
                    bool OnlyExportRootDiskHasBeenSet() const;

                    /**
                     * 获取检测镜像是否支持导出
                     * @return DryRun 检测镜像是否支持导出
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置检测镜像是否支持导出
                     * @param DryRun 检测镜像是否支持导出
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取角色名称。默认为CVM_QcsRole，发起请求前请确认是否存在该角色，以及是否已正确配置COS写入权限。
                     * @return RoleName 角色名称。默认为CVM_QcsRole，发起请求前请确认是否存在该角色，以及是否已正确配置COS写入权限。
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称。默认为CVM_QcsRole，发起请求前请确认是否存在该角色，以及是否已正确配置COS写入权限。
                     * @param RoleName 角色名称。默认为CVM_QcsRole，发起请求前请确认是否存在该角色，以及是否已正确配置COS写入权限。
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * COS存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 镜像ID列表
                     */
                    std::vector<std::string> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * 镜像文件导出格式。取值范围：RAW，QCOW2，VHD，VMDK。默认为RAW
                     */
                    std::string m_exportFormat;
                    bool m_exportFormatHasBeenSet;

                    /**
                     * 导出文件的名称前缀列表
                     */
                    std::vector<std::string> m_fileNamePrefixList;
                    bool m_fileNamePrefixListHasBeenSet;

                    /**
                     * 是否只导出系统盘
                     */
                    bool m_onlyExportRootDisk;
                    bool m_onlyExportRootDiskHasBeenSet;

                    /**
                     * 检测镜像是否支持导出
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * 角色名称。默认为CVM_QcsRole，发起请求前请确认是否存在该角色，以及是否已正确配置COS写入权限。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_EXPORTIMAGESREQUEST_H_
