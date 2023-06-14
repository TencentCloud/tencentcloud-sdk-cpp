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

#ifndef TENCENTCLOUD_TICS_V20181115_MODEL_FILEINFOTYPE_H_
#define TENCENTCLOUD_TICS_V20181115_MODEL_FILEINFOTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * 文件信息类型
                */
                class FileInfoType : public AbstractModel
                {
                public:
                    FileInfoType();
                    ~FileInfoType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取判定渠道
                     * @return DetectId 判定渠道
                     * 
                     */
                    std::string GetDetectId() const;

                    /**
                     * 设置判定渠道
                     * @param _detectId 判定渠道
                     * 
                     */
                    void SetDetectId(const std::string& _detectId);

                    /**
                     * 判断参数 DetectId 是否已赋值
                     * @return DetectId 是否已赋值
                     * 
                     */
                    bool DetectIdHasBeenSet() const;

                    /**
                     * 获取检测优先级
                     * @return DetectPriority 检测优先级
                     * 
                     */
                    std::string GetDetectPriority() const;

                    /**
                     * 设置检测优先级
                     * @param _detectPriority 检测优先级
                     * 
                     */
                    void SetDetectPriority(const std::string& _detectPriority);

                    /**
                     * 判断参数 DetectPriority 是否已赋值
                     * @return DetectPriority 是否已赋值
                     * 
                     */
                    bool DetectPriorityHasBeenSet() const;

                    /**
                     * 获取引擎优先级
                     * @return EnginePriority 引擎优先级
                     * 
                     */
                    std::string GetEnginePriority() const;

                    /**
                     * 设置引擎优先级
                     * @param _enginePriority 引擎优先级
                     * 
                     */
                    void SetEnginePriority(const std::string& _enginePriority);

                    /**
                     * 判断参数 EnginePriority 是否已赋值
                     * @return EnginePriority 是否已赋值
                     * 
                     */
                    bool EnginePriorityHasBeenSet() const;

                    /**
                     * 获取样本是否存在
                     * @return FileExist 样本是否存在
                     * 
                     */
                    std::string GetFileExist() const;

                    /**
                     * 设置样本是否存在
                     * @param _fileExist 样本是否存在
                     * 
                     */
                    void SetFileExist(const std::string& _fileExist);

                    /**
                     * 判断参数 FileExist 是否已赋值
                     * @return FileExist 是否已赋值
                     * 
                     */
                    bool FileExistHasBeenSet() const;

                    /**
                     * 获取文件上传
                     * @return FileForceUpload 文件上传
                     * 
                     */
                    std::string GetFileForceUpload() const;

                    /**
                     * 设置文件上传
                     * @param _fileForceUpload 文件上传
                     * 
                     */
                    void SetFileForceUpload(const std::string& _fileForceUpload);

                    /**
                     * 判断参数 FileForceUpload 是否已赋值
                     * @return FileForceUpload 是否已赋值
                     * 
                     */
                    bool FileForceUploadHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件上传时间
                     * @return FileupTime 文件上传时间
                     * 
                     */
                    std::string GetFileupTime() const;

                    /**
                     * 设置文件上传时间
                     * @param _fileupTime 文件上传时间
                     * 
                     */
                    void SetFileupTime(const std::string& _fileupTime);

                    /**
                     * 判断参数 FileupTime 是否已赋值
                     * @return FileupTime 是否已赋值
                     * 
                     */
                    bool FileupTimeHasBeenSet() const;

                    /**
                     * 获取病毒文件全名
                     * @return FullVirusName 病毒文件全名
                     * 
                     */
                    std::string GetFullVirusName() const;

                    /**
                     * 设置病毒文件全名
                     * @param _fullVirusName 病毒文件全名
                     * 
                     */
                    void SetFullVirusName(const std::string& _fullVirusName);

                    /**
                     * 判断参数 FullVirusName 是否已赋值
                     * @return FullVirusName 是否已赋值
                     * 
                     */
                    bool FullVirusNameHasBeenSet() const;

                    /**
                     * 获取IDC位置
                     * @return IdcPosition IDC位置
                     * 
                     */
                    std::string GetIdcPosition() const;

                    /**
                     * 设置IDC位置
                     * @param _idcPosition IDC位置
                     * 
                     */
                    void SetIdcPosition(const std::string& _idcPosition);

                    /**
                     * 判断参数 IdcPosition 是否已赋值
                     * @return IdcPosition 是否已赋值
                     * 
                     */
                    bool IdcPositionHasBeenSet() const;

                    /**
                     * 获取文件md5值
                     * @return Md5Type 文件md5值
                     * 
                     */
                    std::string GetMd5Type() const;

                    /**
                     * 设置文件md5值
                     * @param _md5Type 文件md5值
                     * 
                     */
                    void SetMd5Type(const std::string& _md5Type);

                    /**
                     * 判断参数 Md5Type 是否已赋值
                     * @return Md5Type 是否已赋值
                     * 
                     */
                    bool Md5TypeHasBeenSet() const;

                    /**
                     * 获取PE结构是否存在
                     * @return PeExist PE结构是否存在
                     * 
                     */
                    std::string GetPeExist() const;

                    /**
                     * 设置PE结构是否存在
                     * @param _peExist PE结构是否存在
                     * 
                     */
                    void SetPeExist(const std::string& _peExist);

                    /**
                     * 判断参数 PeExist 是否已赋值
                     * @return PeExist 是否已赋值
                     * 
                     */
                    bool PeExistHasBeenSet() const;

                    /**
                     * 获取PE结构上传
                     * @return PeForceUpload PE结构上传
                     * 
                     */
                    std::string GetPeForceUpload() const;

                    /**
                     * 设置PE结构上传
                     * @param _peForceUpload PE结构上传
                     * 
                     */
                    void SetPeForceUpload(const std::string& _peForceUpload);

                    /**
                     * 判断参数 PeForceUpload 是否已赋值
                     * @return PeForceUpload 是否已赋值
                     * 
                     */
                    bool PeForceUploadHasBeenSet() const;

                    /**
                     * 获取安全性等级
                     * @return SafeLevel 安全性等级
                     * 
                     */
                    std::string GetSafeLevel() const;

                    /**
                     * 设置安全性等级
                     * @param _safeLevel 安全性等级
                     * 
                     */
                    void SetSafeLevel(const std::string& _safeLevel);

                    /**
                     * 判断参数 SafeLevel 是否已赋值
                     * @return SafeLevel 是否已赋值
                     * 
                     */
                    bool SafeLevelHasBeenSet() const;

                    /**
                     * 获取扫描时间
                     * @return ScanModiTime 扫描时间
                     * 
                     */
                    std::string GetScanModiTime() const;

                    /**
                     * 设置扫描时间
                     * @param _scanModiTime 扫描时间
                     * 
                     */
                    void SetScanModiTime(const std::string& _scanModiTime);

                    /**
                     * 判断参数 ScanModiTime 是否已赋值
                     * @return ScanModiTime 是否已赋值
                     * 
                     */
                    bool ScanModiTimeHasBeenSet() const;

                    /**
                     * 获取子判定渠道
                     * @return SubdetectId 子判定渠道
                     * 
                     */
                    std::string GetSubdetectId() const;

                    /**
                     * 设置子判定渠道
                     * @param _subdetectId 子判定渠道
                     * 
                     */
                    void SetSubdetectId(const std::string& _subdetectId);

                    /**
                     * 判断参数 SubdetectId 是否已赋值
                     * @return SubdetectId 是否已赋值
                     * 
                     */
                    bool SubdetectIdHasBeenSet() const;

                    /**
                     * 获取病毒名
                     * @return UserDefName 病毒名
                     * 
                     */
                    std::string GetUserDefName() const;

                    /**
                     * 设置病毒名
                     * @param _userDefName 病毒名
                     * 
                     */
                    void SetUserDefName(const std::string& _userDefName);

                    /**
                     * 判断参数 UserDefName 是否已赋值
                     * @return UserDefName 是否已赋值
                     * 
                     */
                    bool UserDefNameHasBeenSet() const;

                    /**
                     * 获取病毒类型
                     * @return VirusType 病毒类型
                     * 
                     */
                    std::string GetVirusType() const;

                    /**
                     * 设置病毒类型
                     * @param _virusType 病毒类型
                     * 
                     */
                    void SetVirusType(const std::string& _virusType);

                    /**
                     * 判断参数 VirusType 是否已赋值
                     * @return VirusType 是否已赋值
                     * 
                     */
                    bool VirusTypeHasBeenSet() const;

                    /**
                     * 获取白名单分数
                     * @return WhiteScore 白名单分数
                     * 
                     */
                    std::string GetWhiteScore() const;

                    /**
                     * 设置白名单分数
                     * @param _whiteScore 白名单分数
                     * 
                     */
                    void SetWhiteScore(const std::string& _whiteScore);

                    /**
                     * 判断参数 WhiteScore 是否已赋值
                     * @return WhiteScore 是否已赋值
                     * 
                     */
                    bool WhiteScoreHasBeenSet() const;

                private:

                    /**
                     * 判定渠道
                     */
                    std::string m_detectId;
                    bool m_detectIdHasBeenSet;

                    /**
                     * 检测优先级
                     */
                    std::string m_detectPriority;
                    bool m_detectPriorityHasBeenSet;

                    /**
                     * 引擎优先级
                     */
                    std::string m_enginePriority;
                    bool m_enginePriorityHasBeenSet;

                    /**
                     * 样本是否存在
                     */
                    std::string m_fileExist;
                    bool m_fileExistHasBeenSet;

                    /**
                     * 文件上传
                     */
                    std::string m_fileForceUpload;
                    bool m_fileForceUploadHasBeenSet;

                    /**
                     * 文件大小
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件上传时间
                     */
                    std::string m_fileupTime;
                    bool m_fileupTimeHasBeenSet;

                    /**
                     * 病毒文件全名
                     */
                    std::string m_fullVirusName;
                    bool m_fullVirusNameHasBeenSet;

                    /**
                     * IDC位置
                     */
                    std::string m_idcPosition;
                    bool m_idcPositionHasBeenSet;

                    /**
                     * 文件md5值
                     */
                    std::string m_md5Type;
                    bool m_md5TypeHasBeenSet;

                    /**
                     * PE结构是否存在
                     */
                    std::string m_peExist;
                    bool m_peExistHasBeenSet;

                    /**
                     * PE结构上传
                     */
                    std::string m_peForceUpload;
                    bool m_peForceUploadHasBeenSet;

                    /**
                     * 安全性等级
                     */
                    std::string m_safeLevel;
                    bool m_safeLevelHasBeenSet;

                    /**
                     * 扫描时间
                     */
                    std::string m_scanModiTime;
                    bool m_scanModiTimeHasBeenSet;

                    /**
                     * 子判定渠道
                     */
                    std::string m_subdetectId;
                    bool m_subdetectIdHasBeenSet;

                    /**
                     * 病毒名
                     */
                    std::string m_userDefName;
                    bool m_userDefNameHasBeenSet;

                    /**
                     * 病毒类型
                     */
                    std::string m_virusType;
                    bool m_virusTypeHasBeenSet;

                    /**
                     * 白名单分数
                     */
                    std::string m_whiteScore;
                    bool m_whiteScoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_MODEL_FILEINFOTYPE_H_
