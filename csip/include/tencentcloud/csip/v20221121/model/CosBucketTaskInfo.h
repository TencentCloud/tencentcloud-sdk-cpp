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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos存储桶任务信息
                */
                class CosBucketTaskInfo : public AbstractModel
                {
                public:
                    CosBucketTaskInfo();
                    ~CosBucketTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>appid</p>
                     * @return AppId <p>appid</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appId <p>appid</p>
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>存储桶名</p>
                     * @return BucketName <p>存储桶名</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>存储桶名</p>
                     * @param _bucketName <p>存储桶名</p>
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
                     * 获取<p>任务id</p>
                     * @return TaskId <p>任务id</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _taskId <p>任务id</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>最后一次扫描时间</p>
                     * @return LastScanTime <p>最后一次扫描时间</p>
                     * 
                     */
                    int64_t GetLastScanTime() const;

                    /**
                     * 设置<p>最后一次扫描时间</p>
                     * @param _lastScanTime <p>最后一次扫描时间</p>
                     * 
                     */
                    void SetLastScanTime(const int64_t& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>识别文件数量</p>
                     * @return IdentifyFileCount <p>识别文件数量</p>
                     * 
                     */
                    uint64_t GetIdentifyFileCount() const;

                    /**
                     * 设置<p>识别文件数量</p>
                     * @param _identifyFileCount <p>识别文件数量</p>
                     * 
                     */
                    void SetIdentifyFileCount(const uint64_t& _identifyFileCount);

                    /**
                     * 判断参数 IdentifyFileCount 是否已赋值
                     * @return IdentifyFileCount 是否已赋值
                     * 
                     */
                    bool IdentifyFileCountHasBeenSet() const;

                    /**
                     * 获取<p>敏感文件数量</p>
                     * @return SensitiveFileCount <p>敏感文件数量</p>
                     * 
                     */
                    uint64_t GetSensitiveFileCount() const;

                    /**
                     * 设置<p>敏感文件数量</p>
                     * @param _sensitiveFileCount <p>敏感文件数量</p>
                     * 
                     */
                    void SetSensitiveFileCount(const uint64_t& _sensitiveFileCount);

                    /**
                     * 判断参数 SensitiveFileCount 是否已赋值
                     * @return SensitiveFileCount 是否已赋值
                     * 
                     */
                    bool SensitiveFileCountHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>存储桶名</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>最后一次扫描时间</p>
                     */
                    int64_t m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * <p>识别文件数量</p>
                     */
                    uint64_t m_identifyFileCount;
                    bool m_identifyFileCountHasBeenSet;

                    /**
                     * <p>敏感文件数量</p>
                     */
                    uint64_t m_sensitiveFileCount;
                    bool m_sensitiveFileCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSBUCKETTASKINFO_H_
