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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/VulFixStatusItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞修复任务概要信息
                */
                class VulFixTaskInfo : public AbstractModel
                {
                public:
                    VulFixTaskInfo();
                    ~VulFixTaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取修复任务主键ID
                     * @return Id 修复任务主键ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置修复任务主键ID
                     * @param _id 修复任务主键ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取修复状态
枚举值：
0：初始化
1：修复中
2：修复成功
3：部分修复失败
4：全部修复失败
5：停止修复
                     * @return FixStatus 修复状态
枚举值：
0：初始化
1：修复中
2：修复成功
3：部分修复失败
4：全部修复失败
5：停止修复
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置修复状态
枚举值：
0：初始化
1：修复中
2：修复成功
3：部分修复失败
4：全部修复失败
5：停止修复
                     * @param _fixStatus 修复状态
枚举值：
0：初始化
1：修复中
2：修复成功
3：部分修复失败
4：全部修复失败
5：停止修复
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取修复资产总数
                     * @return AssetCount 修复资产总数
                     * 
                     */
                    int64_t GetAssetCount() const;

                    /**
                     * 设置修复资产总数
                     * @param _assetCount 修复资产总数
                     * 
                     */
                    void SetAssetCount(const int64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取修复成功数
                     * @return SuccessCount 修复成功数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置修复成功数
                     * @param _successCount 修复成功数
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取修复失败数
                     * @return FailCount 修复失败数
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置修复失败数
                     * @param _failCount 修复失败数
                     * 
                     */
                    void SetFailCount(const int64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取修复中数量
                     * @return FixingCount 修复中数量
                     * 
                     */
                    int64_t GetFixingCount() const;

                    /**
                     * 设置修复中数量
                     * @param _fixingCount 修复中数量
                     * 
                     */
                    void SetFixingCount(const int64_t& _fixingCount);

                    /**
                     * 判断参数 FixingCount 是否已赋值
                     * @return FixingCount 是否已赋值
                     * 
                     */
                    bool FixingCountHasBeenSet() const;

                    /**
                     * 获取排队中数量（等待下发或等待快照创建）
                     * @return QueueCount 排队中数量（等待下发或等待快照创建）
                     * 
                     */
                    int64_t GetQueueCount() const;

                    /**
                     * 设置排队中数量（等待下发或等待快照创建）
                     * @param _queueCount 排队中数量（等待下发或等待快照创建）
                     * 
                     */
                    void SetQueueCount(const int64_t& _queueCount);

                    /**
                     * 判断参数 QueueCount 是否已赋值
                     * @return QueueCount 是否已赋值
                     * 
                     */
                    bool QueueCountHasBeenSet() const;

                    /**
                     * 获取修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     * @return Progress 修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     * @param _progress 修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取修复成功的漏洞数
                     * @return SuccessVulCount 修复成功的漏洞数
                     * 
                     */
                    int64_t GetSuccessVulCount() const;

                    /**
                     * 设置修复成功的漏洞数
                     * @param _successVulCount 修复成功的漏洞数
                     * 
                     */
                    void SetSuccessVulCount(const int64_t& _successVulCount);

                    /**
                     * 判断参数 SuccessVulCount 是否已赋值
                     * @return SuccessVulCount 是否已赋值
                     * 
                     */
                    bool SuccessVulCountHasBeenSet() const;

                    /**
                     * 获取修复失败的漏洞数
                     * @return FailVulCount 修复失败的漏洞数
                     * 
                     */
                    int64_t GetFailVulCount() const;

                    /**
                     * 设置修复失败的漏洞数
                     * @param _failVulCount 修复失败的漏洞数
                     * 
                     */
                    void SetFailVulCount(const int64_t& _failVulCount);

                    /**
                     * 判断参数 FailVulCount 是否已赋值
                     * @return FailVulCount 是否已赋值
                     * 
                     */
                    bool FailVulCountHasBeenSet() const;

                    /**
                     * 获取修复的漏洞名称列表
                     * @return VulNames 修复的漏洞名称列表
                     * 
                     */
                    std::vector<std::string> GetVulNames() const;

                    /**
                     * 设置修复的漏洞名称列表
                     * @param _vulNames 修复的漏洞名称列表
                     * 
                     */
                    void SetVulNames(const std::vector<std::string>& _vulNames);

                    /**
                     * 判断参数 VulNames 是否已赋值
                     * @return VulNames 是否已赋值
                     * 
                     */
                    bool VulNamesHasBeenSet() const;

                    /**
                     * 获取修复启动时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return StartTime 修复启动时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置修复启动时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _startTime 修复启动时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取修复结束时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return EndTime 修复结束时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置修复结束时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _endTime 修复结束时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
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
                     * 获取漏洞维度修复状态列表，每个漏洞的修复状态详情
                     * @return VulFixStatusList 漏洞维度修复状态列表，每个漏洞的修复状态详情
                     * 
                     */
                    std::vector<VulFixStatusItem> GetVulFixStatusList() const;

                    /**
                     * 设置漏洞维度修复状态列表，每个漏洞的修复状态详情
                     * @param _vulFixStatusList 漏洞维度修复状态列表，每个漏洞的修复状态详情
                     * 
                     */
                    void SetVulFixStatusList(const std::vector<VulFixStatusItem>& _vulFixStatusList);

                    /**
                     * 判断参数 VulFixStatusList 是否已赋值
                     * @return VulFixStatusList 是否已赋值
                     * 
                     */
                    bool VulFixStatusListHasBeenSet() const;

                private:

                    /**
                     * 修复任务主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 修复状态
枚举值：
0：初始化
1：修复中
2：修复成功
3：部分修复失败
4：全部修复失败
5：停止修复
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * 修复资产总数
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 修复成功数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 修复失败数
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 修复中数量
                     */
                    int64_t m_fixingCount;
                    bool m_fixingCountHasBeenSet;

                    /**
                     * 排队中数量（等待下发或等待快照创建）
                     */
                    int64_t m_queueCount;
                    bool m_queueCountHasBeenSet;

                    /**
                     * 修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 修复成功的漏洞数
                     */
                    int64_t m_successVulCount;
                    bool m_successVulCountHasBeenSet;

                    /**
                     * 修复失败的漏洞数
                     */
                    int64_t m_failVulCount;
                    bool m_failVulCountHasBeenSet;

                    /**
                     * 修复的漏洞名称列表
                     */
                    std::vector<std::string> m_vulNames;
                    bool m_vulNamesHasBeenSet;

                    /**
                     * 修复启动时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 修复结束时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 漏洞维度修复状态列表，每个漏洞的修复状态详情
                     */
                    std::vector<VulFixStatusItem> m_vulFixStatusList;
                    bool m_vulFixStatusListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKINFO_H_
