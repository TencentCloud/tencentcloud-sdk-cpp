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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBinlogBackupOverview返回参数结构体
                */
                class DescribeBinlogBackupOverviewResponse : public AbstractModel
                {
                public:
                    DescribeBinlogBackupOverviewResponse();
                    ~DescribeBinlogBackupOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总的日志备份容量，包含异地日志备份（单位为字节）。
                     * @return BinlogBackupVolume 总的日志备份容量，包含异地日志备份（单位为字节）。
                     * 
                     */
                    int64_t GetBinlogBackupVolume() const;

                    /**
                     * 判断参数 BinlogBackupVolume 是否已赋值
                     * @return BinlogBackupVolume 是否已赋值
                     * 
                     */
                    bool BinlogBackupVolumeHasBeenSet() const;

                    /**
                     * 获取总的日志备份个数，包含异地日志备份。
                     * @return BinlogBackupCount 总的日志备份个数，包含异地日志备份。
                     * 
                     */
                    int64_t GetBinlogBackupCount() const;

                    /**
                     * 判断参数 BinlogBackupCount 是否已赋值
                     * @return BinlogBackupCount 是否已赋值
                     * 
                     */
                    bool BinlogBackupCountHasBeenSet() const;

                    /**
                     * 获取异地日志备份容量（单位为字节）。
                     * @return RemoteBinlogVolume 异地日志备份容量（单位为字节）。
                     * 
                     */
                    int64_t GetRemoteBinlogVolume() const;

                    /**
                     * 判断参数 RemoteBinlogVolume 是否已赋值
                     * @return RemoteBinlogVolume 是否已赋值
                     * 
                     */
                    bool RemoteBinlogVolumeHasBeenSet() const;

                    /**
                     * 获取异地日志备份个数。
                     * @return RemoteBinlogCount 异地日志备份个数。
                     * 
                     */
                    int64_t GetRemoteBinlogCount() const;

                    /**
                     * 判断参数 RemoteBinlogCount 是否已赋值
                     * @return RemoteBinlogCount 是否已赋值
                     * 
                     */
                    bool RemoteBinlogCountHasBeenSet() const;

                    /**
                     * 获取归档日志备份容量（单位为字节）。
                     * @return BinlogArchiveVolume 归档日志备份容量（单位为字节）。
                     * 
                     */
                    int64_t GetBinlogArchiveVolume() const;

                    /**
                     * 判断参数 BinlogArchiveVolume 是否已赋值
                     * @return BinlogArchiveVolume 是否已赋值
                     * 
                     */
                    bool BinlogArchiveVolumeHasBeenSet() const;

                    /**
                     * 获取归档日志备份个数。
                     * @return BinlogArchiveCount 归档日志备份个数。
                     * 
                     */
                    int64_t GetBinlogArchiveCount() const;

                    /**
                     * 判断参数 BinlogArchiveCount 是否已赋值
                     * @return BinlogArchiveCount 是否已赋值
                     * 
                     */
                    bool BinlogArchiveCountHasBeenSet() const;

                    /**
                     * 获取标准存储日志备份容量（单位为字节）。
                     * @return BinlogStandbyVolume 标准存储日志备份容量（单位为字节）。
                     * 
                     */
                    int64_t GetBinlogStandbyVolume() const;

                    /**
                     * 判断参数 BinlogStandbyVolume 是否已赋值
                     * @return BinlogStandbyVolume 是否已赋值
                     * 
                     */
                    bool BinlogStandbyVolumeHasBeenSet() const;

                    /**
                     * 获取标准存储日志备份个数。
                     * @return BinlogStandbyCount 标准存储日志备份个数。
                     * 
                     */
                    int64_t GetBinlogStandbyCount() const;

                    /**
                     * 判断参数 BinlogStandbyCount 是否已赋值
                     * @return BinlogStandbyCount 是否已赋值
                     * 
                     */
                    bool BinlogStandbyCountHasBeenSet() const;

                private:

                    /**
                     * 总的日志备份容量，包含异地日志备份（单位为字节）。
                     */
                    int64_t m_binlogBackupVolume;
                    bool m_binlogBackupVolumeHasBeenSet;

                    /**
                     * 总的日志备份个数，包含异地日志备份。
                     */
                    int64_t m_binlogBackupCount;
                    bool m_binlogBackupCountHasBeenSet;

                    /**
                     * 异地日志备份容量（单位为字节）。
                     */
                    int64_t m_remoteBinlogVolume;
                    bool m_remoteBinlogVolumeHasBeenSet;

                    /**
                     * 异地日志备份个数。
                     */
                    int64_t m_remoteBinlogCount;
                    bool m_remoteBinlogCountHasBeenSet;

                    /**
                     * 归档日志备份容量（单位为字节）。
                     */
                    int64_t m_binlogArchiveVolume;
                    bool m_binlogArchiveVolumeHasBeenSet;

                    /**
                     * 归档日志备份个数。
                     */
                    int64_t m_binlogArchiveCount;
                    bool m_binlogArchiveCountHasBeenSet;

                    /**
                     * 标准存储日志备份容量（单位为字节）。
                     */
                    int64_t m_binlogStandbyVolume;
                    bool m_binlogStandbyVolumeHasBeenSet;

                    /**
                     * 标准存储日志备份个数。
                     */
                    int64_t m_binlogStandbyCount;
                    bool m_binlogStandbyCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBINLOGBACKUPOVERVIEWRESPONSE_H_
