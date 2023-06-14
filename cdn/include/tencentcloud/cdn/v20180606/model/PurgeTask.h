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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_PURGETASK_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_PURGETASK_H_

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
                * 刷新任务详情
                */
                class PurgeTask : public AbstractModel
                {
                public:
                    PurgeTask();
                    ~PurgeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取刷新任务 ID
                     * @return TaskId 刷新任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置刷新任务 ID
                     * @param _taskId 刷新任务 ID
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
                     * 获取刷新 URL
                     * @return Url 刷新 URL
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置刷新 URL
                     * @param _url 刷新 URL
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
                     * 获取刷新任务状态
fail：刷新失败
done：刷新成功
process：刷新中
                     * @return Status 刷新任务状态
fail：刷新失败
done：刷新成功
process：刷新中
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置刷新任务状态
fail：刷新失败
done：刷新成功
process：刷新中
                     * @param _status 刷新任务状态
fail：刷新失败
done：刷新成功
process：刷新中
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
                     * 获取刷新类型
url：URL 刷新
path：目录刷新
                     * @return PurgeType 刷新类型
url：URL 刷新
path：目录刷新
                     * 
                     */
                    std::string GetPurgeType() const;

                    /**
                     * 设置刷新类型
url：URL 刷新
path：目录刷新
                     * @param _purgeType 刷新类型
url：URL 刷新
path：目录刷新
                     * 
                     */
                    void SetPurgeType(const std::string& _purgeType);

                    /**
                     * 判断参数 PurgeType 是否已赋值
                     * @return PurgeType 是否已赋值
                     * 
                     */
                    bool PurgeTypeHasBeenSet() const;

                    /**
                     * 获取刷新方式
flush：刷新更新资源（仅目录刷新时有此类型）
delete：刷新全部资源
                     * @return FlushType 刷新方式
flush：刷新更新资源（仅目录刷新时有此类型）
delete：刷新全部资源
                     * 
                     */
                    std::string GetFlushType() const;

                    /**
                     * 设置刷新方式
flush：刷新更新资源（仅目录刷新时有此类型）
delete：刷新全部资源
                     * @param _flushType 刷新方式
flush：刷新更新资源（仅目录刷新时有此类型）
delete：刷新全部资源
                     * 
                     */
                    void SetFlushType(const std::string& _flushType);

                    /**
                     * 判断参数 FlushType 是否已赋值
                     * @return FlushType 是否已赋值
                     * 
                     */
                    bool FlushTypeHasBeenSet() const;

                    /**
                     * 获取刷新任务提交时间
                     * @return CreateTime 刷新任务提交时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置刷新任务提交时间
                     * @param _createTime 刷新任务提交时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 刷新任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 刷新 URL
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 刷新任务状态
fail：刷新失败
done：刷新成功
process：刷新中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 刷新类型
url：URL 刷新
path：目录刷新
                     */
                    std::string m_purgeType;
                    bool m_purgeTypeHasBeenSet;

                    /**
                     * 刷新方式
flush：刷新更新资源（仅目录刷新时有此类型）
delete：刷新全部资源
                     */
                    std::string m_flushType;
                    bool m_flushTypeHasBeenSet;

                    /**
                     * 刷新任务提交时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_PURGETASK_H_
