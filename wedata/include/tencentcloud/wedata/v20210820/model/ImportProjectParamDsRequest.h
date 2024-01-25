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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTPROJECTPARAMDSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTPROJECTPARAMDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ImportProjectParamDs请求参数结构体
                */
                class ImportProjectParamDsRequest : public AbstractModel
                {
                public:
                    ImportProjectParamDsRequest();
                    ~ImportProjectParamDsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return FilesCos 已废弃
                     * 
                     */
                    std::vector<std::string> GetFilesCos() const;

                    /**
                     * 设置已废弃
                     * @param _filesCos 已废弃
                     * 
                     */
                    void SetFilesCos(const std::vector<std::string>& _filesCos);

                    /**
                     * 判断参数 FilesCos 是否已赋值
                     * @return FilesCos 是否已赋值
                     * 
                     */
                    bool FilesCosHasBeenSet() const;

                    /**
                     * 获取发布ID
                     * @return PublishInfoId 发布ID
                     * 
                     */
                    std::string GetPublishInfoId() const;

                    /**
                     * 设置发布ID
                     * @param _publishInfoId 发布ID
                     * 
                     */
                    void SetPublishInfoId(const std::string& _publishInfoId);

                    /**
                     * 判断参数 PublishInfoId 是否已赋值
                     * @return PublishInfoId 是否已赋值
                     * 
                     */
                    bool PublishInfoIdHasBeenSet() const;

                    /**
                     * 获取全局参数
                     * @return GlobalConfig 全局参数
                     * 
                     */
                    std::string GetGlobalConfig() const;

                    /**
                     * 设置全局参数
                     * @param _globalConfig 全局参数
                     * 
                     */
                    void SetGlobalConfig(const std::string& _globalConfig);

                    /**
                     * 判断参数 GlobalConfig 是否已赋值
                     * @return GlobalConfig 是否已赋值
                     * 
                     */
                    bool GlobalConfigHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return BucketName 已废弃
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置已废弃
                     * @param _bucketName 已废弃
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return CosRegion 已废弃
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置已废弃
                     * @param _cosRegion 已废弃
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
                     * 获取共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName
                     * @return FileName 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName
                     * @param _fileName 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 已废弃
                     */
                    std::vector<std::string> m_filesCos;
                    bool m_filesCosHasBeenSet;

                    /**
                     * 发布ID
                     */
                    std::string m_publishInfoId;
                    bool m_publishInfoIdHasBeenSet;

                    /**
                     * 全局参数
                     */
                    std::string m_globalConfig;
                    bool m_globalConfigHasBeenSet;

                    /**
                     * 已废弃
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 已废弃
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTPROJECTPARAMDSREQUEST_H_
