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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/TranscodeTaskResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 转码任务搜索结果
                */
                class TranscodeTaskSearchResult : public AbstractModel
                {
                public:
                    TranscodeTaskSearchResult();
                    ~TranscodeTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
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
                     * 获取任务唯一ID
                     * @return TaskId 任务唯一ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param _taskId 任务唯一ID
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
                     * 获取任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     * @return Status 任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     * @param _status 任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
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
                     * 获取转码文件原始名称
                     * @return OriginalFilename 转码文件原始名称
                     * 
                     */
                    std::string GetOriginalFilename() const;

                    /**
                     * 设置转码文件原始名称
                     * @param _originalFilename 转码文件原始名称
                     * 
                     */
                    void SetOriginalFilename(const std::string& _originalFilename);

                    /**
                     * 判断参数 OriginalFilename 是否已赋值
                     * @return OriginalFilename 是否已赋值
                     * 
                     */
                    bool OriginalFilenameHasBeenSet() const;

                    /**
                     * 获取用户应用SdkAppId
                     * @return SdkAppId 用户应用SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置用户应用SdkAppId
                     * @param _sdkAppId 用户应用SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取转码任务结果
                     * @return Result 转码任务结果
                     * 
                     */
                    TranscodeTaskResult GetResult() const;

                    /**
                     * 设置转码任务结果
                     * @param _result 转码任务结果
                     * 
                     */
                    void SetResult(const TranscodeTaskResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取是否静态转码
                     * @return IsStatic 是否静态转码
                     * 
                     */
                    bool GetIsStatic() const;

                    /**
                     * 设置是否静态转码
                     * @param _isStatic 是否静态转码
                     * 
                     */
                    void SetIsStatic(const bool& _isStatic);

                    /**
                     * 判断参数 IsStatic 是否已赋值
                     * @return IsStatic 是否已赋值
                     * 
                     */
                    bool IsStaticHasBeenSet() const;

                private:

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务唯一ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务的当前状态
- QUEUED: 正在排队等待转换
- PROCESSING: 转换中
- FINISHED: 转换完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 转码文件原始名称
                     */
                    std::string m_originalFilename;
                    bool m_originalFilenameHasBeenSet;

                    /**
                     * 用户应用SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 转码任务结果
                     */
                    TranscodeTaskResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 是否静态转码
                     */
                    bool m_isStatic;
                    bool m_isStaticHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_TRANSCODETASKSEARCHRESULT_H_
