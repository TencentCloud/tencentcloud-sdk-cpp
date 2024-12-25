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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBACKUPSTREAMLISTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBACKUPSTREAMLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/BackupStreamGroupInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeBackupStreamList返回参数结构体
                */
                class DescribeBackupStreamListResponse : public AbstractModel
                {
                public:
                    DescribeBackupStreamListResponse();
                    ~DescribeBackupStreamListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取主备流分组信息列表。
                     * @return StreamInfoList 主备流分组信息列表。
                     * 
                     */
                    std::vector<BackupStreamGroupInfo> GetStreamInfoList() const;

                    /**
                     * 判断参数 StreamInfoList 是否已赋值
                     * @return StreamInfoList 是否已赋值
                     * 
                     */
                    bool StreamInfoListHasBeenSet() const;

                private:

                    /**
                     * 主备流分组信息列表。
                     */
                    std::vector<BackupStreamGroupInfo> m_streamInfoList;
                    bool m_streamInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEBACKUPSTREAMLISTRESPONSE_H_
