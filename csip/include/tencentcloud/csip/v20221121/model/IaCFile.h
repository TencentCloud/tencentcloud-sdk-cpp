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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KeyValueInt.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * IaC检测文件
                */
                class IaCFile : public AbstractModel
                {
                public:
                    IaCFile();
                    ~IaCFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>ID</p>
                     * @return Id <p>ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>ID</p>
                     * @param _id <p>ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>文件ID</p>
                     * @return FileId <p>文件ID</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>文件ID</p>
                     * @param _fileId <p>文件ID</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取<p>文件名称</p>
                     * @return FileName <p>文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名称</p>
                     * @param _fileName <p>文件名称</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>CI/CD名称</p>
                     * @return CICDName <p>CI/CD名称</p>
                     * 
                     */
                    std::string GetCICDName() const;

                    /**
                     * 设置<p>CI/CD名称</p>
                     * @param _cICDName <p>CI/CD名称</p>
                     * 
                     */
                    void SetCICDName(const std::string& _cICDName);

                    /**
                     * 判断参数 CICDName 是否已赋值
                     * @return CICDName 是否已赋值
                     * 
                     */
                    bool CICDNameHasBeenSet() const;

                    /**
                     * 获取<p>文件路径</p>
                     * @return FilePath <p>文件路径</p>
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置<p>文件路径</p>
                     * @param _filePath <p>文件路径</p>
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
                     * 获取<p>文件类型(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * @return FileType <p>文件类型(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置<p>文件类型(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * @param _fileType <p>文件类型(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>风险总计数量</p>
                     * @return RiskTotalCnt <p>风险总计数量</p>
                     * 
                     */
                    uint64_t GetRiskTotalCnt() const;

                    /**
                     * 设置<p>风险总计数量</p>
                     * @param _riskTotalCnt <p>风险总计数量</p>
                     * 
                     */
                    void SetRiskTotalCnt(const uint64_t& _riskTotalCnt);

                    /**
                     * 判断参数 RiskTotalCnt 是否已赋值
                     * @return RiskTotalCnt 是否已赋值
                     * 
                     */
                    bool RiskTotalCntHasBeenSet() const;

                    /**
                     * 获取<p>风险等级数量(0:低危,1:中危,2:高危,3:严重)</p>
                     * @return RiskLevelCnt <p>风险等级数量(0:低危,1:中危,2:高危,3:严重)</p>
                     * 
                     */
                    std::vector<KeyValueInt> GetRiskLevelCnt() const;

                    /**
                     * 设置<p>风险等级数量(0:低危,1:中危,2:高危,3:严重)</p>
                     * @param _riskLevelCnt <p>风险等级数量(0:低危,1:中危,2:高危,3:严重)</p>
                     * 
                     */
                    void SetRiskLevelCnt(const std::vector<KeyValueInt>& _riskLevelCnt);

                    /**
                     * 判断参数 RiskLevelCnt 是否已赋值
                     * @return RiskLevelCnt 是否已赋值
                     * 
                     */
                    bool RiskLevelCntHasBeenSet() const;

                    /**
                     * 获取<p>扫描时间</p>
                     * @return ScanTime <p>扫描时间</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置<p>扫描时间</p>
                     * @param _scanTime <p>扫描时间</p>
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * @return Status <p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * @param _status <p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>扫描失败类型(0:无失败, 1:检测超时, 2:文件格式解析失败, 3:检测失败)</p>
                     * @return FailType <p>扫描失败类型(0:无失败, 1:检测超时, 2:文件格式解析失败, 3:检测失败)</p>
                     * 
                     */
                    int64_t GetFailType() const;

                    /**
                     * 设置<p>扫描失败类型(0:无失败, 1:检测超时, 2:文件格式解析失败, 3:检测失败)</p>
                     * @param _failType <p>扫描失败类型(0:无失败, 1:检测超时, 2:文件格式解析失败, 3:检测失败)</p>
                     * 
                     */
                    void SetFailType(const int64_t& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                private:

                    /**
                     * <p>ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>文件ID</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>CI/CD名称</p>
                     */
                    std::string m_cICDName;
                    bool m_cICDNameHasBeenSet;

                    /**
                     * <p>文件路径</p>
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * <p>文件类型(1:Dockerfile,2:Terraform,3:KubernetesYaml)</p>
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>风险总计数量</p>
                     */
                    uint64_t m_riskTotalCnt;
                    bool m_riskTotalCntHasBeenSet;

                    /**
                     * <p>风险等级数量(0:低危,1:中危,2:高危,3:严重)</p>
                     */
                    std::vector<KeyValueInt> m_riskLevelCnt;
                    bool m_riskLevelCntHasBeenSet;

                    /**
                     * <p>扫描时间</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>扫描失败类型(0:无失败, 1:检测超时, 2:文件格式解析失败, 3:检测失败)</p>
                     */
                    int64_t m_failType;
                    bool m_failTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IACFILE_H_
