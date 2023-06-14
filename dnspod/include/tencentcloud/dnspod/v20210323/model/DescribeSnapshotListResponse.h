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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTLISTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SnapshotPageInfo.h>
#include <tencentcloud/dnspod/v20210323/model/SnapshotInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeSnapshotList返回参数结构体
                */
                class DescribeSnapshotListResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotListResponse();
                    ~DescribeSnapshotListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分页信息
                     * @return Info 分页信息
                     * 
                     */
                    SnapshotPageInfo GetInfo() const;

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取快照列表
                     * @return SnapshotList 快照列表
                     * 
                     */
                    std::vector<SnapshotInfo> GetSnapshotList() const;

                    /**
                     * 判断参数 SnapshotList 是否已赋值
                     * @return SnapshotList 是否已赋值
                     * 
                     */
                    bool SnapshotListHasBeenSet() const;

                private:

                    /**
                     * 分页信息
                     */
                    SnapshotPageInfo m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 快照列表
                     */
                    std::vector<SnapshotInfo> m_snapshotList;
                    bool m_snapshotListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTLISTRESPONSE_H_
