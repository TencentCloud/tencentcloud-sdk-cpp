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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_RULEEXECUTEATTRIBUTE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_RULEEXECUTEATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * 扫描规则执行信息
                */
                class RuleExecuteAttribute : public AbstractModel
                {
                public:
                    RuleExecuteAttribute();
                    ~RuleExecuteAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>执行id</p>
                     * @return RecordId <p>执行id</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>执行id</p>
                     * @param _recordId <p>执行id</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>开始执行时间</p>
                     * @return StartTime <p>开始执行时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始执行时间</p>
                     * @param _startTime <p>开始执行时间</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行结束时间</p>
                     * @return EndTime <p>执行结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>执行结束时间</p>
                     * @param _endTime <p>执行结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>执行状态</p><p>枚举值：</p><ul><li>0： 等待中</li><li>1： 执行中</li><li>2： 已完成</li><li>3： 已跳过</li></ul><p>默认值：0</p><p>已跳过是指任务排队超过了任务的等待时间会自动跳过</p>
                     * @return Status <p>执行状态</p><p>枚举值：</p><ul><li>0： 等待中</li><li>1： 执行中</li><li>2： 已完成</li><li>3： 已跳过</li></ul><p>默认值：0</p><p>已跳过是指任务排队超过了任务的等待时间会自动跳过</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>执行状态</p><p>枚举值：</p><ul><li>0： 等待中</li><li>1： 执行中</li><li>2： 已完成</li><li>3： 已跳过</li></ul><p>默认值：0</p><p>已跳过是指任务排队超过了任务的等待时间会自动跳过</p>
                     * @param _status <p>执行状态</p><p>枚举值：</p><ul><li>0： 等待中</li><li>1： 执行中</li><li>2： 已完成</li><li>3： 已跳过</li></ul><p>默认值：0</p><p>已跳过是指任务排队超过了任务的等待时间会自动跳过</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>存储量</p><p>单位：GB</p><p>默认值：0</p><p>不足1G按照1G 统计</p>
                     * @return Capacity <p>存储量</p><p>单位：GB</p><p>默认值：0</p><p>不足1G按照1G 统计</p>
                     * 
                     */
                    uint64_t GetCapacity() const;

                    /**
                     * 设置<p>存储量</p><p>单位：GB</p><p>默认值：0</p><p>不足1G按照1G 统计</p>
                     * @param _capacity <p>存储量</p><p>单位：GB</p><p>默认值：0</p><p>不足1G按照1G 统计</p>
                     * 
                     */
                    void SetCapacity(const uint64_t& _capacity);

                    /**
                     * 判断参数 Capacity 是否已赋值
                     * @return Capacity 是否已赋值
                     * 
                     */
                    bool CapacityHasBeenSet() const;

                    /**
                     * 获取<p>文件数</p>
                     * @return FileCount <p>文件数</p>
                     * 
                     */
                    uint64_t GetFileCount() const;

                    /**
                     * 设置<p>文件数</p>
                     * @param _fileCount <p>文件数</p>
                     * 
                     */
                    void SetFileCount(const uint64_t& _fileCount);

                    /**
                     * 判断参数 FileCount 是否已赋值
                     * @return FileCount 是否已赋值
                     * 
                     */
                    bool FileCountHasBeenSet() const;

                    /**
                     * 获取<p>文件清单路径</p><p>参数格式：http://xxx/xxx/xx</p>
                     * @return ManifestUrl <p>文件清单路径</p><p>参数格式：http://xxx/xxx/xx</p>
                     * 
                     */
                    std::string GetManifestUrl() const;

                    /**
                     * 设置<p>文件清单路径</p><p>参数格式：http://xxx/xxx/xx</p>
                     * @param _manifestUrl <p>文件清单路径</p><p>参数格式：http://xxx/xxx/xx</p>
                     * 
                     */
                    void SetManifestUrl(const std::string& _manifestUrl);

                    /**
                     * 判断参数 ManifestUrl 是否已赋值
                     * @return ManifestUrl 是否已赋值
                     * 
                     */
                    bool ManifestUrlHasBeenSet() const;

                private:

                    /**
                     * <p>执行id</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>开始执行时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>执行结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>执行状态</p><p>枚举值：</p><ul><li>0： 等待中</li><li>1： 执行中</li><li>2： 已完成</li><li>3： 已跳过</li></ul><p>默认值：0</p><p>已跳过是指任务排队超过了任务的等待时间会自动跳过</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>存储量</p><p>单位：GB</p><p>默认值：0</p><p>不足1G按照1G 统计</p>
                     */
                    uint64_t m_capacity;
                    bool m_capacityHasBeenSet;

                    /**
                     * <p>文件数</p>
                     */
                    uint64_t m_fileCount;
                    bool m_fileCountHasBeenSet;

                    /**
                     * <p>文件清单路径</p><p>参数格式：http://xxx/xxx/xx</p>
                     */
                    std::string m_manifestUrl;
                    bool m_manifestUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_RULEEXECUTEATTRIBUTE_H_
