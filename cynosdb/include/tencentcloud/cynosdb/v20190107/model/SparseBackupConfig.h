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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIG_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/SparseBackupConfigInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 稀疏备份配置
                */
                class SparseBackupConfig : public AbstractModel
                {
                public:
                    SparseBackupConfig();
                    ~SparseBackupConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取稀疏备份开关：ON/OFF
                     * @return SparseBackupSwitch 稀疏备份开关：ON/OFF
                     * 
                     */
                    std::string GetSparseBackupSwitch() const;

                    /**
                     * 设置稀疏备份开关：ON/OFF
                     * @param _sparseBackupSwitch 稀疏备份开关：ON/OFF
                     * 
                     */
                    void SetSparseBackupSwitch(const std::string& _sparseBackupSwitch);

                    /**
                     * 判断参数 SparseBackupSwitch 是否已赋值
                     * @return SparseBackupSwitch 是否已赋值
                     * 
                     */
                    bool SparseBackupSwitchHasBeenSet() const;

                    /**
                     * 获取稀疏备份策略列表（1-3条）
                     * @return SparseBackupConfigInfos 稀疏备份策略列表（1-3条）
                     * 
                     */
                    std::vector<SparseBackupConfigInfo> GetSparseBackupConfigInfos() const;

                    /**
                     * 设置稀疏备份策略列表（1-3条）
                     * @param _sparseBackupConfigInfos 稀疏备份策略列表（1-3条）
                     * 
                     */
                    void SetSparseBackupConfigInfos(const std::vector<SparseBackupConfigInfo>& _sparseBackupConfigInfos);

                    /**
                     * 判断参数 SparseBackupConfigInfos 是否已赋值
                     * @return SparseBackupConfigInfos 是否已赋值
                     * 
                     */
                    bool SparseBackupConfigInfosHasBeenSet() const;

                private:

                    /**
                     * 稀疏备份开关：ON/OFF
                     */
                    std::string m_sparseBackupSwitch;
                    bool m_sparseBackupSwitchHasBeenSet;

                    /**
                     * 稀疏备份策略列表（1-3条）
                     */
                    std::vector<SparseBackupConfigInfo> m_sparseBackupConfigInfos;
                    bool m_sparseBackupConfigInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SPARSEBACKUPCONFIG_H_
