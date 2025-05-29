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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 备份下载集群限制参数
                */
                class BackupLimitClusterRestriction : public AbstractModel
                {
                public:
                    BackupLimitClusterRestriction();
                    ~BackupLimitClusterRestriction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取下载限制配置
                     * @return BackupLimitRestriction 下载限制配置
                     * 
                     */
                    BackupLimitRestriction GetBackupLimitRestriction() const;

                    /**
                     * 设置下载限制配置
                     * @param _backupLimitRestriction 下载限制配置
                     * 
                     */
                    void SetBackupLimitRestriction(const BackupLimitRestriction& _backupLimitRestriction);

                    /**
                     * 判断参数 BackupLimitRestriction 是否已赋值
                     * @return BackupLimitRestriction 是否已赋值
                     * 
                     */
                    bool BackupLimitRestrictionHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 下载限制配置
                     */
                    BackupLimitRestriction m_backupLimitRestriction;
                    bool m_backupLimitRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPLIMITCLUSTERRESTRICTION_H_
