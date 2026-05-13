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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/BackupLog.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeDspmBackupLogList返回参数结构体
                */
                class DescribeDspmBackupLogListResponse : public AbstractModel
                {
                public:
                    DescribeDspmBackupLogListResponse();
                    ~DescribeDspmBackupLogListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>总共多少条</p>
                     * @return TotalCount <p>总共多少条</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>备份日志列表</p>
                     * @return List <p>备份日志列表</p>
                     * 
                     */
                    std::vector<BackupLog> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取<p>当前是否存在恢复中任务</p>
                     * @return HasRestoringTask <p>当前是否存在恢复中任务</p>
                     * 
                     */
                    bool GetHasRestoringTask() const;

                    /**
                     * 判断参数 HasRestoringTask 是否已赋值
                     * @return HasRestoringTask 是否已赋值
                     * 
                     */
                    bool HasRestoringTaskHasBeenSet() const;

                    /**
                     * 获取<p>最大恢复空间</p>
                     * @return MaxRestoreSizeInGB <p>最大恢复空间</p>
                     * 
                     */
                    int64_t GetMaxRestoreSizeInGB() const;

                    /**
                     * 判断参数 MaxRestoreSizeInGB 是否已赋值
                     * @return MaxRestoreSizeInGB 是否已赋值
                     * 
                     */
                    bool MaxRestoreSizeInGBHasBeenSet() const;

                private:

                    /**
                     * <p>总共多少条</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>备份日志列表</p>
                     */
                    std::vector<BackupLog> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * <p>当前是否存在恢复中任务</p>
                     */
                    bool m_hasRestoringTask;
                    bool m_hasRestoringTaskHasBeenSet;

                    /**
                     * <p>最大恢复空间</p>
                     */
                    int64_t m_maxRestoreSizeInGB;
                    bool m_maxRestoreSizeInGBHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPLOGLISTRESPONSE_H_
