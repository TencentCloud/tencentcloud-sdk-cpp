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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTDSEVENTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTDSEVENTREQUEST_H_

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
                * ImportDsEvent请求参数结构体
                */
                class ImportDsEventRequest : public AbstractModel
                {
                public:
                    ImportDsEventRequest();
                    ~ImportDsEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取事件名称
                     * @return FileCos 事件名称
                     * 
                     */
                    std::string GetFileCos() const;

                    /**
                     * 设置事件名称
                     * @param _fileCos 事件名称
                     * 
                     */
                    void SetFileCos(const std::string& _fileCos);

                    /**
                     * 判断参数 FileCos 是否已赋值
                     * @return FileCos 是否已赋值
                     * 
                     */
                    bool FileCosHasBeenSet() const;

                    /**
                     * 获取桶名
                     * @return BucketName 桶名
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名
                     * @param _bucketName 桶名
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
                     * 获取cos地域
                     * @return CosRegion cos地域
                     * 
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置cos地域
                     * @param _cosRegion cos地域
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
                     * 获取是否强制刷新
                     * @return ForceUpdate 是否强制刷新
                     * 
                     */
                    bool GetForceUpdate() const;

                    /**
                     * 设置是否强制刷新
                     * @param _forceUpdate 是否强制刷新
                     * 
                     */
                    void SetForceUpdate(const bool& _forceUpdate);

                    /**
                     * 判断参数 ForceUpdate 是否已赋值
                     * @return ForceUpdate 是否已赋值
                     * 
                     */
                    bool ForceUpdateHasBeenSet() const;

                    /**
                     * 获取共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName，不能为空
                     * @return FileName 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName，不能为空
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName，不能为空
                     * @param _fileName 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName，不能为空
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
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 事件名称
                     */
                    std::string m_fileCos;
                    bool m_fileCosHasBeenSet;

                    /**
                     * 桶名
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * cos地域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 是否强制刷新
                     */
                    bool m_forceUpdate;
                    bool m_forceUpdateHasBeenSet;

                    /**
                     * 共享存储临时文件名称，详情可以见 UploadFileDs 接口，该参数从 UploadFileDs 中的 TargetFileName，不能为空
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_IMPORTDSEVENTREQUEST_H_
