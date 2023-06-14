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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossBackupAddr.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 在非打包上传备份模式下，每个库对应一个备份文件
                */
                class BackupFile : public AbstractModel
                {
                public:
                    BackupFile();
                    ~BackupFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件唯一标识
                     * @return Id 备份文件唯一标识
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置备份文件唯一标识
                     * @param _id 备份文件唯一标识
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
                     * 获取备份文件名称
                     * @return FileName 备份文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置备份文件名称
                     * @param _fileName 备份文件名称
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
                     * 获取文件大小(K)
                     * @return Size 文件大小(K)
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置文件大小(K)
                     * @param _size 文件大小(K)
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取备份文件的库的名称
                     * @return DBs 备份文件的库的名称
                     * 
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置备份文件的库的名称
                     * @param _dBs 备份文件的库的名称
                     * 
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     * 
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return DownloadLink 下载地址
                     * 
                     */
                    std::string GetDownloadLink() const;

                    /**
                     * 设置下载地址
                     * @param _downloadLink 下载地址
                     * 
                     */
                    void SetDownloadLink(const std::string& _downloadLink);

                    /**
                     * 判断参数 DownloadLink 是否已赋值
                     * @return DownloadLink 是否已赋值
                     * 
                     */
                    bool DownloadLinkHasBeenSet() const;

                    /**
                     * 获取当前实例地域码
                     * @return Region 当前实例地域码
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置当前实例地域码
                     * @param _region 当前实例地域码
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
                     * 获取备份的跨地域region和所对应的下载地址
                     * @return CrossBackupAddr 备份的跨地域region和所对应的下载地址
                     * 
                     */
                    std::vector<CrossBackupAddr> GetCrossBackupAddr() const;

                    /**
                     * 设置备份的跨地域region和所对应的下载地址
                     * @param _crossBackupAddr 备份的跨地域region和所对应的下载地址
                     * 
                     */
                    void SetCrossBackupAddr(const std::vector<CrossBackupAddr>& _crossBackupAddr);

                    /**
                     * 判断参数 CrossBackupAddr 是否已赋值
                     * @return CrossBackupAddr 是否已赋值
                     * 
                     */
                    bool CrossBackupAddrHasBeenSet() const;

                private:

                    /**
                     * 备份文件唯一标识
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 备份文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小(K)
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 备份文件的库的名称
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_downloadLink;
                    bool m_downloadLinkHasBeenSet;

                    /**
                     * 当前实例地域码
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备份的跨地域region和所对应的下载地址
                     */
                    std::vector<CrossBackupAddr> m_crossBackupAddr;
                    bool m_crossBackupAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_
