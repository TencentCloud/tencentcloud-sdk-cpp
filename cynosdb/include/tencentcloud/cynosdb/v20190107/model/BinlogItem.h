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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/VaultInfo.h>
#include <tencentcloud/cynosdb/v20190107/model/BinlogRegionInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Binlog描述
                */
                class BinlogItem : public AbstractModel
                {
                public:
                    BinlogItem();
                    ~BinlogItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Binlog文件名称</p>
                     * @return FileName <p>Binlog文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>Binlog文件名称</p>
                     * @param _fileName <p>Binlog文件名称</p>
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
                     * 获取<p>文件大小，单位：字节</p>
                     * @return FileSize <p>文件大小，单位：字节</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小，单位：字节</p>
                     * @param _fileSize <p>文件大小，单位：字节</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>事务最早时间</p>
                     * @return StartTime <p>事务最早时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>事务最早时间</p>
                     * @param _startTime <p>事务最早时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>事务最晚时间</p>
                     * @return FinishTime <p>事务最晚时间</p>
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置<p>事务最晚时间</p>
                     * @param _finishTime <p>事务最晚时间</p>
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取<p>Binlog文件ID</p>
                     * @return BinlogId <p>Binlog文件ID</p>
                     * 
                     */
                    int64_t GetBinlogId() const;

                    /**
                     * 设置<p>Binlog文件ID</p>
                     * @param _binlogId <p>Binlog文件ID</p>
                     * 
                     */
                    void SetBinlogId(const int64_t& _binlogId);

                    /**
                     * 判断参数 BinlogId 是否已赋值
                     * @return BinlogId 是否已赋值
                     * 
                     */
                    bool BinlogIdHasBeenSet() const;

                    /**
                     * 获取<p>binlog所跨地域</p>
                     * @return CrossRegions <p>binlog所跨地域</p>
                     * 
                     */
                    std::vector<std::string> GetCrossRegions() const;

                    /**
                     * 设置<p>binlog所跨地域</p>
                     * @param _crossRegions <p>binlog所跨地域</p>
                     * 
                     */
                    void SetCrossRegions(const std::vector<std::string>& _crossRegions);

                    /**
                     * 判断参数 CrossRegions 是否已赋值
                     * @return CrossRegions 是否已赋值
                     * 
                     */
                    bool CrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>备份投递状态</p>
                     * @return CopyStatus <p>备份投递状态</p>
                     * 
                     */
                    std::string GetCopyStatus() const;

                    /**
                     * 设置<p>备份投递状态</p>
                     * @param _copyStatus <p>备份投递状态</p>
                     * 
                     */
                    void SetCopyStatus(const std::string& _copyStatus);

                    /**
                     * 判断参数 CopyStatus 是否已赋值
                     * @return CopyStatus 是否已赋值
                     * 
                     */
                    bool CopyStatusHasBeenSet() const;

                    /**
                     * 获取<p>保险箱信息</p>
                     * @return VaultInfos <p>保险箱信息</p>
                     * 
                     */
                    std::vector<VaultInfo> GetVaultInfos() const;

                    /**
                     * 设置<p>保险箱信息</p>
                     * @param _vaultInfos <p>保险箱信息</p>
                     * 
                     */
                    void SetVaultInfos(const std::vector<VaultInfo>& _vaultInfos);

                    /**
                     * 判断参数 VaultInfos 是否已赋值
                     * @return VaultInfos 是否已赋值
                     * 
                     */
                    bool VaultInfosHasBeenSet() const;

                    /**
                     * 获取<p>加密秘钥key</p>
                     * @return EncryptKeyId <p>加密秘钥key</p>
                     * 
                     */
                    std::string GetEncryptKeyId() const;

                    /**
                     * 设置<p>加密秘钥key</p>
                     * @param _encryptKeyId <p>加密秘钥key</p>
                     * 
                     */
                    void SetEncryptKeyId(const std::string& _encryptKeyId);

                    /**
                     * 判断参数 EncryptKeyId 是否已赋值
                     * @return EncryptKeyId 是否已赋值
                     * 
                     */
                    bool EncryptKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>加密秘钥地域</p>
                     * @return EncryptRegion <p>加密秘钥地域</p>
                     * 
                     */
                    std::string GetEncryptRegion() const;

                    /**
                     * 设置<p>加密秘钥地域</p>
                     * @param _encryptRegion <p>加密秘钥地域</p>
                     * 
                     */
                    void SetEncryptRegion(const std::string& _encryptRegion);

                    /**
                     * 判断参数 EncryptRegion 是否已赋值
                     * @return EncryptRegion 是否已赋值
                     * 
                     */
                    bool EncryptRegionHasBeenSet() const;

                    /**
                     * 获取<p>备份的地域分布信息</p>
                     * @return ExistRegions <p>备份的地域分布信息</p>
                     * 
                     */
                    std::vector<BinlogRegionInfo> GetExistRegions() const;

                    /**
                     * 设置<p>备份的地域分布信息</p>
                     * @param _existRegions <p>备份的地域分布信息</p>
                     * 
                     */
                    void SetExistRegions(const std::vector<BinlogRegionInfo>& _existRegions);

                    /**
                     * 判断参数 ExistRegions 是否已赋值
                     * @return ExistRegions 是否已赋值
                     * 
                     */
                    bool ExistRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>Binlog文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件大小，单位：字节</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>事务最早时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>事务最晚时间</p>
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * <p>Binlog文件ID</p>
                     */
                    int64_t m_binlogId;
                    bool m_binlogIdHasBeenSet;

                    /**
                     * <p>binlog所跨地域</p>
                     */
                    std::vector<std::string> m_crossRegions;
                    bool m_crossRegionsHasBeenSet;

                    /**
                     * <p>备份投递状态</p>
                     */
                    std::string m_copyStatus;
                    bool m_copyStatusHasBeenSet;

                    /**
                     * <p>保险箱信息</p>
                     */
                    std::vector<VaultInfo> m_vaultInfos;
                    bool m_vaultInfosHasBeenSet;

                    /**
                     * <p>加密秘钥key</p>
                     */
                    std::string m_encryptKeyId;
                    bool m_encryptKeyIdHasBeenSet;

                    /**
                     * <p>加密秘钥地域</p>
                     */
                    std::string m_encryptRegion;
                    bool m_encryptRegionHasBeenSet;

                    /**
                     * <p>备份的地域分布信息</p>
                     */
                    std::vector<BinlogRegionInfo> m_existRegions;
                    bool m_existRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGITEM_H_
