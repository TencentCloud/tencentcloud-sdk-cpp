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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 开发空间-上传脚本请求
                */
                class ScriptRequestInfo : public AbstractModel
                {
                public:
                    ScriptRequestInfo();
                    ~ScriptRequestInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取脚本路径
项目区1470575647377821696项目，f1目录下：
/datastudio/project/1470575647377821696/f1/sql1234.sql
个人区：
/datastudio/personal/sqlTTT.sql
                     * @return FilePath 脚本路径
项目区1470575647377821696项目，f1目录下：
/datastudio/project/1470575647377821696/f1/sql1234.sql
个人区：
/datastudio/personal/sqlTTT.sql
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置脚本路径
项目区1470575647377821696项目，f1目录下：
/datastudio/project/1470575647377821696/f1/sql1234.sql
个人区：
/datastudio/personal/sqlTTT.sql
                     * @param _filePath 脚本路径
项目区1470575647377821696项目，f1目录下：
/datastudio/project/1470575647377821696/f1/sql1234.sql
个人区：
/datastudio/personal/sqlTTT.sql
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

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
                     * 获取脚本版本
                     * @return Version 脚本版本
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置脚本版本
                     * @param _version 脚本版本
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return Operation 操作类型
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作类型
                     * @param _operation 操作类型
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取额外信息
                     * @return ExtraInfo 额外信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置额外信息
                     * @param _extraInfo 额外信息
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取桶名称
                     * @return BucketName 桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置桶名称
                     * @param _bucketName 桶名称
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
                     * 获取所属地区
                     * @return Region 所属地区
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置所属地区
                     * @param _region 所属地区
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
                     * 获取文件扩展类型
                     * @return FileExtensionType 文件扩展类型
                     * 
                     */
                    std::string GetFileExtensionType() const;

                    /**
                     * 设置文件扩展类型
                     * @param _fileExtensionType 文件扩展类型
                     * 
                     */
                    void SetFileExtensionType(const std::string& _fileExtensionType);

                    /**
                     * 判断参数 FileExtensionType 是否已赋值
                     * @return FileExtensionType 是否已赋值
                     * 
                     */
                    bool FileExtensionTypeHasBeenSet() const;

                private:

                    /**
                     * 脚本路径
项目区1470575647377821696项目，f1目录下：
/datastudio/project/1470575647377821696/f1/sql1234.sql
个人区：
/datastudio/personal/sqlTTT.sql
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 脚本版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 额外信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 所属地区
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 文件扩展类型
                     */
                    std::string m_fileExtensionType;
                    bool m_fileExtensionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SCRIPTREQUESTINFO_H_
