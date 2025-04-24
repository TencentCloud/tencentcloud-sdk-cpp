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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_FETCHANDROIDINSTANCESLOGSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_FETCHANDROIDINSTANCESLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * FetchAndroidInstancesLogs请求参数结构体
                */
                class FetchAndroidInstancesLogsRequest : public AbstractModel
                {
                public:
                    FetchAndroidInstancesLogsRequest();
                    ~FetchAndroidInstancesLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安卓实例 ID 列表
                     * @return AndroidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置安卓实例 ID 列表
                     * @param _androidInstanceIds 安卓实例 ID 列表
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取cos 桶名称
                     * @return BucketName cos 桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置cos 桶名称
                     * @param _bucketName cos 桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取cos 桶区域
                     * @return BucketRegion cos 桶区域
                     * 
                     */
                    std::string GetBucketRegion() const;

                    /**
                     * 设置cos 桶区域
                     * @param _bucketRegion cos 桶区域
                     * 
                     */
                    void SetBucketRegion(const std::string& _bucketRegion);

                    /**
                     * 判断参数 BucketRegion 是否已赋值
                     * @return BucketRegion 是否已赋值
                     * 
                     */
                    bool BucketRegionHasBeenSet() const;

                    /**
                     * 获取cos 桶目录，默认为 /log/
                     * @return BucketDirectory cos 桶目录，默认为 /log/
                     * 
                     */
                    std::string GetBucketDirectory() const;

                    /**
                     * 设置cos 桶目录，默认为 /log/
                     * @param _bucketDirectory cos 桶目录，默认为 /log/
                     * 
                     */
                    void SetBucketDirectory(const std::string& _bucketDirectory);

                    /**
                     * 判断参数 BucketDirectory 是否已赋值
                     * @return BucketDirectory 是否已赋值
                     * 
                     */
                    bool BucketDirectoryHasBeenSet() const;

                    /**
                     * 获取下载最近几天的日志，默认值为 1
                     * @return RecentDays 下载最近几天的日志，默认值为 1
                     * 
                     */
                    uint64_t GetRecentDays() const;

                    /**
                     * 设置下载最近几天的日志，默认值为 1
                     * @param _recentDays 下载最近几天的日志，默认值为 1
                     * 
                     */
                    void SetRecentDays(const uint64_t& _recentDays);

                    /**
                     * 判断参数 RecentDays 是否已赋值
                     * @return RecentDays 是否已赋值
                     * 
                     */
                    bool RecentDaysHasBeenSet() const;

                private:

                    /**
                     * 安卓实例 ID 列表
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * cos 桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * cos 桶区域
                     */
                    std::string m_bucketRegion;
                    bool m_bucketRegionHasBeenSet;

                    /**
                     * cos 桶目录，默认为 /log/
                     */
                    std::string m_bucketDirectory;
                    bool m_bucketDirectoryHasBeenSet;

                    /**
                     * 下载最近几天的日志，默认值为 1
                     */
                    uint64_t m_recentDays;
                    bool m_recentDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_FETCHANDROIDINSTANCESLOGSREQUEST_H_
