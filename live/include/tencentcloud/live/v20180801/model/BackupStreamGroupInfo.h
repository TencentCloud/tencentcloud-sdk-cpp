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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMGROUPINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BackupStreamDetailData.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 主备流分组信息。
                */
                class BackupStreamGroupInfo : public AbstractModel
                {
                public:
                    BackupStreamGroupInfo();
                    ~BackupStreamGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取主备流信息。
                     * @return BackupList 主备流信息。
                     * 
                     */
                    std::vector<BackupStreamDetailData> GetBackupList() const;

                    /**
                     * 设置主备流信息。
                     * @param _backupList 主备流信息。
                     * 
                     */
                    void SetBackupList(const std::vector<BackupStreamDetailData>& _backupList);

                    /**
                     * 判断参数 BackupList 是否已赋值
                     * @return BackupList 是否已赋值
                     * 
                     */
                    bool BackupListHasBeenSet() const;

                    /**
                     * 获取是否对该流开启了择优调度。
0 - 未开启。
1 - 已开启。
                     * @return OptimalEnable 是否对该流开启了择优调度。
0 - 未开启。
1 - 已开启。
                     * 
                     */
                    int64_t GetOptimalEnable() const;

                    /**
                     * 设置是否对该流开启了择优调度。
0 - 未开启。
1 - 已开启。
                     * @param _optimalEnable 是否对该流开启了择优调度。
0 - 未开启。
1 - 已开启。
                     * 
                     */
                    void SetOptimalEnable(const int64_t& _optimalEnable);

                    /**
                     * 判断参数 OptimalEnable 是否已赋值
                     * @return OptimalEnable 是否已赋值
                     * 
                     */
                    bool OptimalEnableHasBeenSet() const;

                    /**
                     * 获取域名分组的分组名称。
                     * @return HostGroupName 域名分组的分组名称。
                     * 
                     */
                    std::string GetHostGroupName() const;

                    /**
                     * 设置域名分组的分组名称。
                     * @param _hostGroupName 域名分组的分组名称。
                     * 
                     */
                    void SetHostGroupName(const std::string& _hostGroupName);

                    /**
                     * 判断参数 HostGroupName 是否已赋值
                     * @return HostGroupName 是否已赋值
                     * 
                     */
                    bool HostGroupNameHasBeenSet() const;

                private:

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 主备流信息。
                     */
                    std::vector<BackupStreamDetailData> m_backupList;
                    bool m_backupListHasBeenSet;

                    /**
                     * 是否对该流开启了择优调度。
0 - 未开启。
1 - 已开启。
                     */
                    int64_t m_optimalEnable;
                    bool m_optimalEnableHasBeenSet;

                    /**
                     * 域名分组的分组名称。
                     */
                    std::string m_hostGroupName;
                    bool m_hostGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_BACKUPSTREAMGROUPINFO_H_
