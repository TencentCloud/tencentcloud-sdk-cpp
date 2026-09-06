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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询AIGC任务列表过滤条件
                */
                class QueryTaskFilter : public AbstractModel
                {
                public:
                    QueryTaskFilter();
                    ~QueryTaskFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务ID</p>
                     * @return TaskId <p>任务ID</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _taskId <p>任务ID</p>
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
                     * 获取<p>任务类型</p><p>枚举值：</p><ul><li>RedrawVideo： 视频重绘</li><li>AIDrama： AI漫剧</li><li>DocGenVideo： 文档生视频</li><li>FissionVideo： 视频裂变</li></ul>
                     * @return TaskType <p>任务类型</p><p>枚举值：</p><ul><li>RedrawVideo： 视频重绘</li><li>AIDrama： AI漫剧</li><li>DocGenVideo： 文档生视频</li><li>FissionVideo： 视频裂变</li></ul>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p><p>枚举值：</p><ul><li>RedrawVideo： 视频重绘</li><li>AIDrama： AI漫剧</li><li>DocGenVideo： 文档生视频</li><li>FissionVideo： 视频裂变</li></ul>
                     * @param _taskType <p>任务类型</p><p>枚举值：</p><ul><li>RedrawVideo： 视频重绘</li><li>AIDrama： AI漫剧</li><li>DocGenVideo： 文档生视频</li><li>FissionVideo： 视频裂变</li></ul>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p>
                     * @return TaskStatus <p>任务状态</p>
                     * 
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置<p>任务状态</p>
                     * @param _taskStatus <p>任务状态</p>
                     * 
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     * 
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>分辨率</p>
                     * @return Resolution <p>分辨率</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>分辨率</p>
                     * @param _resolution <p>分辨率</p>
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取<p>宽高比</p>
                     * @return Ratio <p>宽高比</p>
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置<p>宽高比</p>
                     * @param _ratio <p>宽高比</p>
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>任务执行模式</p><p>枚举值：</p><ul><li>auto： 直接生成</li><li>phased： 确认后再生成</li></ul>
                     * @return ExecuteMode <p>任务执行模式</p><p>枚举值：</p><ul><li>auto： 直接生成</li><li>phased： 确认后再生成</li></ul>
                     * 
                     */
                    std::string GetExecuteMode() const;

                    /**
                     * 设置<p>任务执行模式</p><p>枚举值：</p><ul><li>auto： 直接生成</li><li>phased： 确认后再生成</li></ul>
                     * @param _executeMode <p>任务执行模式</p><p>枚举值：</p><ul><li>auto： 直接生成</li><li>phased： 确认后再生成</li></ul>
                     * 
                     */
                    void SetExecuteMode(const std::string& _executeMode);

                    /**
                     * 判断参数 ExecuteMode 是否已赋值
                     * @return ExecuteMode 是否已赋值
                     * 
                     */
                    bool ExecuteModeHasBeenSet() const;

                    /**
                     * 获取<p>裂变任务视频类型过滤: ugc、talk、display、unboxing、reaction</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * @return VideoType <p>裂变任务视频类型过滤: ugc、talk、display、unboxing、reaction</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * 
                     */
                    std::string GetVideoType() const;

                    /**
                     * 设置<p>裂变任务视频类型过滤: ugc、talk、display、unboxing、reaction</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * @param _videoType <p>裂变任务视频类型过滤: ugc、talk、display、unboxing、reaction</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     * 
                     */
                    void SetVideoType(const std::string& _videoType);

                    /**
                     * 判断参数 VideoType 是否已赋值
                     * @return VideoType 是否已赋值
                     * 
                     */
                    bool VideoTypeHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 高级版</li></ul>
                     * @return ModelTier <p>模型类型</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 高级版</li></ul>
                     * 
                     */
                    std::string GetModelTier() const;

                    /**
                     * 设置<p>模型类型</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 高级版</li></ul>
                     * @param _modelTier <p>模型类型</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 高级版</li></ul>
                     * 
                     */
                    void SetModelTier(const std::string& _modelTier);

                    /**
                     * 判断参数 ModelTier 是否已赋值
                     * @return ModelTier 是否已赋值
                     * 
                     */
                    bool ModelTierHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>任务类型</p><p>枚举值：</p><ul><li>RedrawVideo： 视频重绘</li><li>AIDrama： AI漫剧</li><li>DocGenVideo： 文档生视频</li><li>FissionVideo： 视频裂变</li></ul>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>任务状态</p>
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * <p>分辨率</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>宽高比</p>
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>任务执行模式</p><p>枚举值：</p><ul><li>auto： 直接生成</li><li>phased： 确认后再生成</li></ul>
                     */
                    std::string m_executeMode;
                    bool m_executeModeHasBeenSet;

                    /**
                     * <p>裂变任务视频类型过滤: ugc、talk、display、unboxing、reaction</p><p>枚举值：</p><ul><li>ugc： UGC种草</li><li>talk： 产品口播</li><li>display： 产品展示</li><li>unboxing： 开箱分享</li><li>reaction： 反应展示</li></ul>
                     */
                    std::string m_videoType;
                    bool m_videoTypeHasBeenSet;

                    /**
                     * <p>模型类型</p><p>枚举值：</p><ul><li>standard： 标准版</li><li>flagship： 高级版</li></ul>
                     */
                    std::string m_modelTier;
                    bool m_modelTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUERYTASKFILTER_H_
