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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupVaultItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * binlog配置信息
                */
                class BinlogConfigInfo : public AbstractModel
                {
                public:
                    BinlogConfigInfo();
                    ~BinlogConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>binlog保留时间</p>
                     * @return BinlogSaveDays <p>binlog保留时间</p>
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置<p>binlog保留时间</p>
                     * @param _binlogSaveDays <p>binlog保留时间</p>
                     * 
                     */
                    void SetBinlogSaveDays(const int64_t& _binlogSaveDays);

                    /**
                     * 判断参数 BinlogSaveDays 是否已赋值
                     * @return BinlogSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>binlog异地地域备份是否开启</p>
                     * @return BinlogCrossRegionsEnable <p>binlog异地地域备份是否开启</p>
                     * 
                     */
                    std::string GetBinlogCrossRegionsEnable() const;

                    /**
                     * 设置<p>binlog异地地域备份是否开启</p>
                     * @param _binlogCrossRegionsEnable <p>binlog异地地域备份是否开启</p>
                     * 
                     */
                    void SetBinlogCrossRegionsEnable(const std::string& _binlogCrossRegionsEnable);

                    /**
                     * 判断参数 BinlogCrossRegionsEnable 是否已赋值
                     * @return BinlogCrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>binlog异地地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BinlogCrossRegions <p>binlog异地地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBinlogCrossRegions() const;

                    /**
                     * 设置<p>binlog异地地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _binlogCrossRegions <p>binlog异地地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBinlogCrossRegions(const std::vector<std::string>& _binlogCrossRegions);

                    /**
                     * 判断参数 BinlogCrossRegions 是否已赋值
                     * @return BinlogCrossRegions 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @return BinlogCrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetBinlogCrossRegionSaveDays() const;

                    /**
                     * 设置<p>跨地域备份保留时间</p><p>单位：天</p>
                     * @param _binlogCrossRegionSaveDays <p>跨地域备份保留时间</p><p>单位：天</p>
                     * 
                     */
                    void SetBinlogCrossRegionSaveDays(const int64_t& _binlogCrossRegionSaveDays);

                    /**
                     * 判断参数 BinlogCrossRegionSaveDays 是否已赋值
                     * @return BinlogCrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>保险箱信息</p>
                     * @return AutoCopyVaults <p>保险箱信息</p>
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置<p>保险箱信息</p>
                     * @param _autoCopyVaults <p>保险箱信息</p>
                     * 
                     */
                    void SetAutoCopyVaults(const std::vector<CreateBackupVaultItem>& _autoCopyVaults);

                    /**
                     * 判断参数 AutoCopyVaults 是否已赋值
                     * @return AutoCopyVaults 是否已赋值
                     * 
                     */
                    bool AutoCopyVaultsHasBeenSet() const;

                private:

                    /**
                     * <p>binlog保留时间</p>
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                    /**
                     * <p>binlog异地地域备份是否开启</p>
                     */
                    std::string m_binlogCrossRegionsEnable;
                    bool m_binlogCrossRegionsEnableHasBeenSet;

                    /**
                     * <p>binlog异地地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_binlogCrossRegions;
                    bool m_binlogCrossRegionsHasBeenSet;

                    /**
                     * <p>跨地域备份保留时间</p><p>单位：天</p>
                     */
                    int64_t m_binlogCrossRegionSaveDays;
                    bool m_binlogCrossRegionSaveDaysHasBeenSet;

                    /**
                     * <p>保险箱信息</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_
