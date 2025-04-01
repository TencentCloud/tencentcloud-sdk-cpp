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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_FILEINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_FILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LeftTime.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 生成的文件信息
                */
                class FileInfo : public AbstractModel
                {
                public:
                    FileInfo();
                    ~FileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件 id。
                     * @return FileId 文件 id。
                     * 
                     */
                    uint64_t GetFileId() const;

                    /**
                     * 设置文件 id。
                     * @param _fileId 文件 id。
                     * 
                     */
                    void SetFileId(const uint64_t& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件生成时间。
                     * @return CreatedOn 文件生成时间。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置文件生成时间。
                     * @param _createdOn 文件生成时间。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取文件最后更新时间。
                     * @return UpdatedOn 文件最后更新时间。
                     * 
                     */
                    std::string GetUpdatedOn() const;

                    /**
                     * 设置文件最后更新时间。
                     * @param _updatedOn 文件最后更新时间。
                     * 
                     */
                    void SetUpdatedOn(const std::string& _updatedOn);

                    /**
                     * 判断参数 UpdatedOn 是否已赋值
                     * @return UpdatedOn 是否已赋值
                     * 
                     */
                    bool UpdatedOnHasBeenSet() const;

                    /**
                     * 获取文件涉及到的域名。
                     * @return Domains 文件涉及到的域名。
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置文件涉及到的域名。
                     * @param _domains 文件涉及到的域名。
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取文件名称。
                     * @return Name 文件名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件名称。
                     * @param _name 文件名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl 文件下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置文件下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileUrl 文件下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取生成文件的任务 id。
                     * @return JobId 生成文件的任务 id。
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 设置生成文件的任务 id。
                     * @param _jobId 生成文件的任务 id。
                     * 
                     */
                    void SetJobId(const uint64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取生成文件的进度。100 表示 完成度为100%。
                     * @return Progress 生成文件的进度。100 表示 完成度为100%。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置生成文件的进度。100 表示 完成度为100%。
                     * @param _progress 生成文件的进度。100 表示 完成度为100%。
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取文件状态。
OK：已完成
RUNNING：正在生成中
ERROR：生成失败
CANCELED：文件已取消生成
CANCELING：文件正在取消生成
EXPIRED：文件已过期
                     * @return Status 文件状态。
OK：已完成
RUNNING：正在生成中
ERROR：生成失败
CANCELED：文件已取消生成
CANCELING：文件正在取消生成
EXPIRED：文件已过期
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置文件状态。
OK：已完成
RUNNING：正在生成中
ERROR：生成失败
CANCELED：文件已取消生成
CANCELING：文件正在取消生成
EXPIRED：文件已过期
                     * @param _status 文件状态。
OK：已完成
RUNNING：正在生成中
ERROR：生成失败
CANCELED：文件已取消生成
CANCELING：文件正在取消生成
EXPIRED：文件已过期
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取生成文件的任务类型。
RECORD_LOG：解析量数据
RECORD_EXPORT：导出解析记录
DOMAIN_EXPORT：导出域名列表
                     * @return Type 生成文件的任务类型。
RECORD_LOG：解析量数据
RECORD_EXPORT：导出解析记录
DOMAIN_EXPORT：导出域名列表
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置生成文件的任务类型。
RECORD_LOG：解析量数据
RECORD_EXPORT：导出解析记录
DOMAIN_EXPORT：导出域名列表
                     * @param _type 生成文件的任务类型。
RECORD_LOG：解析量数据
RECORD_EXPORT：导出解析记录
DOMAIN_EXPORT：导出域名列表
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
                     * 获取剩余时间
                     * @return LeftTime 剩余时间
                     * 
                     */
                    LeftTime GetLeftTime() const;

                    /**
                     * 设置剩余时间
                     * @param _leftTime 剩余时间
                     * 
                     */
                    void SetLeftTime(const LeftTime& _leftTime);

                    /**
                     * 判断参数 LeftTime 是否已赋值
                     * @return LeftTime 是否已赋值
                     * 
                     */
                    bool LeftTimeHasBeenSet() const;

                private:

                    /**
                     * 文件 id。
                     */
                    uint64_t m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件生成时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 文件最后更新时间。
                     */
                    std::string m_updatedOn;
                    bool m_updatedOnHasBeenSet;

                    /**
                     * 文件涉及到的域名。
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 文件名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件下载链接。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 生成文件的任务 id。
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 生成文件的进度。100 表示 完成度为100%。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 文件状态。
OK：已完成
RUNNING：正在生成中
ERROR：生成失败
CANCELED：文件已取消生成
CANCELING：文件正在取消生成
EXPIRED：文件已过期
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生成文件的任务类型。
RECORD_LOG：解析量数据
RECORD_EXPORT：导出解析记录
DOMAIN_EXPORT：导出域名列表
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 剩余时间
                     */
                    LeftTime m_leftTime;
                    bool m_leftTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_FILEINFO_H_
