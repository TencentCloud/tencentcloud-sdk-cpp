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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 预热任务详情
                */
                class PushTask : public AbstractModel
                {
                public:
                    PushTask();
                    ~PushTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取预热任务 ID
                     * @return TaskId 预热任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置预热任务 ID
                     * @param _taskId 预热任务 ID
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
                     * 获取预热 URL
                     * @return Url 预热 URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置预热 URL
                     * @param _url 预热 URL
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取预热任务状态
fail：预热失败
done：预热成功
process：预热中
invalid：预热无效(源站返回4xx或5xx状态码)
                     * @return Status 预热任务状态
fail：预热失败
done：预热成功
process：预热中
invalid：预热无效(源站返回4xx或5xx状态码)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置预热任务状态
fail：预热失败
done：预热成功
process：预热中
invalid：预热无效(源站返回4xx或5xx状态码)
                     * @param _status 预热任务状态
fail：预热失败
done：预热成功
process：预热中
invalid：预热无效(源站返回4xx或5xx状态码)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取预热进度百分比
                     * @return Percent 预热进度百分比
                     * 
                     */
                    int64_t GetPercent() const;

                    /**
                     * 设置预热进度百分比
                     * @param _percent 预热进度百分比
                     * 
                     */
                    void SetPercent(const int64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取预热任务提交时间
                     * @return CreateTime 预热任务提交时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置预热任务提交时间
                     * @param _createTime 预热任务提交时间
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
                     * 获取预热区域
mainland：境内
overseas：境外
global：全球
                     * @return Area 预热区域
mainland：境内
overseas：境外
global：全球
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置预热区域
mainland：境内
overseas：境外
global：全球
                     * @param _area 预热区域
mainland：境内
overseas：境外
global：全球
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取预热任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 预热任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置预热任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 预热任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 预热任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 预热 URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 预热任务状态
fail：预热失败
done：预热成功
process：预热中
invalid：预热无效(源站返回4xx或5xx状态码)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 预热进度百分比
                     */
                    int64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 预热任务提交时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 预热区域
mainland：境内
overseas：境外
global：全球
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 预热任务更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PUSHTASK_H_
