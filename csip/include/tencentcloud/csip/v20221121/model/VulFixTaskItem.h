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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_

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
                * 漏洞修复任务列表项
                */
                class VulFixTaskItem : public AbstractModel
                {
                public:
                    VulFixTaskItem();
                    ~VulFixTaskItem() = default;
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
                     * 获取任务ID，用于交互的hash标识
                     * @return TaskId 任务ID，用于交互的hash标识
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置任务ID，用于交互的hash标识
                     * @param _taskId 任务ID，用于交互的hash标识
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
                     * 获取任务JobId，对应后台任务系统的任务ID
                     * @return JobId 任务JobId，对应后台任务系统的任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务JobId，对应后台任务系统的任务ID
                     * @param _jobId 任务JobId，对应后台任务系统的任务ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取修复的漏洞ID列表
                     * @return VulIds 修复的漏洞ID列表
                     * 
                     */
                    std::vector<int64_t> GetVulIds() const;

                    /**
                     * 设置修复的漏洞ID列表
                     * @param _vulIds 修复的漏洞ID列表
                     * 
                     */
                    void SetVulIds(const std::vector<int64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取修复的KB补丁ID列表
                     * @return KBIds 修复的KB补丁ID列表
                     * 
                     */
                    std::vector<int64_t> GetKBIds() const;

                    /**
                     * 设置修复的KB补丁ID列表
                     * @param _kBIds 修复的KB补丁ID列表
                     * 
                     */
                    void SetKBIds(const std::vector<int64_t>& _kBIds);

                    /**
                     * 判断参数 KBIds 是否已赋值
                     * @return KBIds 是否已赋值
                     * 
                     */
                    bool KBIdsHasBeenSet() const;

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
                     * 获取修复成功的主机数
                     * @return SuccessCount 修复成功的主机数
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置修复成功的主机数
                     * @param _successCount 修复成功的主机数
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
                     * 获取修复失败的主机数
                     * @return FailCount 修复失败的主机数
                     * 
                     */
                    int64_t GetFailCount() const;

                    /**
                     * 设置修复失败的主机数
                     * @param _failCount 修复失败的主机数
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
                     * 获取修复任务用户数
                     * @return TargetAppIdsCount 修复任务用户数
                     * 
                     */
                    int64_t GetTargetAppIdsCount() const;

                    /**
                     * 设置修复任务用户数
                     * @param _targetAppIdsCount 修复任务用户数
                     * 
                     */
                    void SetTargetAppIdsCount(const int64_t& _targetAppIdsCount);

                    /**
                     * 判断参数 TargetAppIdsCount 是否已赋值
                     * @return TargetAppIdsCount 是否已赋值
                     * 
                     */
                    bool TargetAppIdsCountHasBeenSet() const;

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
                     * 获取最大修复时间
单位：秒
                     * @return Timeout 最大修复时间
单位：秒
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置最大修复时间
单位：秒
                     * @param _timeout 最大修复时间
单位：秒
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

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
                     * 获取记录创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return CreateTime 记录创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置记录创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _createTime 记录创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修复的漏洞名称列表，便于列表页直接展示
                     * @return VulNames 修复的漏洞名称列表，便于列表页直接展示
                     * 
                     */
                    std::vector<std::string> GetVulNames() const;

                    /**
                     * 设置修复的漏洞名称列表，便于列表页直接展示
                     * @param _vulNames 修复的漏洞名称列表，便于列表页直接展示
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
                     * 获取漏洞类型列表
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @return VulCategory 漏洞类型列表
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置漏洞类型列表
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @param _vulCategory 漏洞类型列表
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取创建者AppId
                     * @return AppId 创建者AppId
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置创建者AppId
                     * @param _appId 创建者AppId
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                private:

                    /**
                     * 修复任务主键ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务ID，用于交互的hash标识
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务JobId，对应后台任务系统的任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 修复的漏洞ID列表
                     */
                    std::vector<int64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * 修复的KB补丁ID列表
                     */
                    std::vector<int64_t> m_kBIds;
                    bool m_kBIdsHasBeenSet;

                    /**
                     * 修复资产总数
                     */
                    int64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 修复成功的主机数
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 修复失败的主机数
                     */
                    int64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 修复进度百分比
取值范围：[0, 100]
补充说明：计算方式为(SuccessCount+FailCount)/AssetCount×100
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 修复任务用户数
                     */
                    int64_t m_targetAppIdsCount;
                    bool m_targetAppIdsCountHasBeenSet;

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
                     * 最大修复时间
单位：秒
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

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
                     * 记录创建时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修复的漏洞名称列表，便于列表页直接展示
                     */
                    std::vector<std::string> m_vulNames;
                    bool m_vulNamesHasBeenSet;

                    /**
                     * 漏洞类型列表
枚举值：
LINUX：Linux软件漏洞
WINDOWS：Windows系统补丁漏洞
WEB_CMS：Web-CMS漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * 创建者AppId
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKITEM_H_
