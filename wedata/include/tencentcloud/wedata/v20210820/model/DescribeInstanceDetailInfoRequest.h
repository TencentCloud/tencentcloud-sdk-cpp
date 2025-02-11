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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCEDETAILINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCEDETAILINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeInstanceDetailInfo请求参数结构体
                */
                class DescribeInstanceDetailInfoRequest : public AbstractModel
                {
                public:
                    DescribeInstanceDetailInfoRequest();
                    ~DescribeInstanceDetailInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
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
                     * 获取实例数据时间
                     * @return CurRunDate 实例数据时间
                     * 
                     */
                    std::string GetCurRunDate() const;

                    /**
                     * 设置实例数据时间
                     * @param _curRunDate 实例数据时间
                     * 
                     */
                    void SetCurRunDate(const std::string& _curRunDate);

                    /**
                     * 判断参数 CurRunDate 是否已赋值
                     * @return CurRunDate 是否已赋值
                     * 
                     */
                    bool CurRunDateHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例的第几次执行
                     * @return LifeRound 实例的第几次执行
                     * 
                     */
                    int64_t GetLifeRound() const;

                    /**
                     * 设置实例的第几次执行
                     * @param _lifeRound 实例的第几次执行
                     * 
                     */
                    void SetLifeRound(const int64_t& _lifeRound);

                    /**
                     * 判断参数 LifeRound 是否已赋值
                     * @return LifeRound 是否已赋值
                     * 
                     */
                    bool LifeRoundHasBeenSet() const;

                    /**
                     * 获取生命周期查询起始index
                     * @return LifeRoundStartIndex 生命周期查询起始index
                     * 
                     */
                    int64_t GetLifeRoundStartIndex() const;

                    /**
                     * 设置生命周期查询起始index
                     * @param _lifeRoundStartIndex 生命周期查询起始index
                     * 
                     */
                    void SetLifeRoundStartIndex(const int64_t& _lifeRoundStartIndex);

                    /**
                     * 判断参数 LifeRoundStartIndex 是否已赋值
                     * @return LifeRoundStartIndex 是否已赋值
                     * 
                     */
                    bool LifeRoundStartIndexHasBeenSet() const;

                    /**
                     * 获取生命周期查询批次数量
                     * @return LifeRoundSize 生命周期查询批次数量
                     * 
                     */
                    int64_t GetLifeRoundSize() const;

                    /**
                     * 设置生命周期查询批次数量
                     * @param _lifeRoundSize 生命周期查询批次数量
                     * 
                     */
                    void SetLifeRoundSize(const int64_t& _lifeRoundSize);

                    /**
                     * 判断参数 LifeRoundSize 是否已赋值
                     * @return LifeRoundSize 是否已赋值
                     * 
                     */
                    bool LifeRoundSizeHasBeenSet() const;

                    /**
                     * 获取生命周期总数，可省略
                     * @return TotalLifeRound 生命周期总数，可省略
                     * 
                     */
                    std::string GetTotalLifeRound() const;

                    /**
                     * 设置生命周期总数，可省略
                     * @param _totalLifeRound 生命周期总数，可省略
                     * 
                     */
                    void SetTotalLifeRound(const std::string& _totalLifeRound);

                    /**
                     * 判断参数 TotalLifeRound 是否已赋值
                     * @return TotalLifeRound 是否已赋值
                     * 
                     */
                    bool TotalLifeRoundHasBeenSet() const;

                    /**
                     * 获取动态加载日志标识
                     * @return Dynamic 动态加载日志标识
                     * 
                     */
                    bool GetDynamic() const;

                    /**
                     * 设置动态加载日志标识
                     * @param _dynamic 动态加载日志标识
                     * 
                     */
                    void SetDynamic(const bool& _dynamic);

                    /**
                     * 判断参数 Dynamic 是否已赋值
                     * @return Dynamic 是否已赋值
                     * 
                     */
                    bool DynamicHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例数据时间
                     */
                    std::string m_curRunDate;
                    bool m_curRunDateHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例的第几次执行
                     */
                    int64_t m_lifeRound;
                    bool m_lifeRoundHasBeenSet;

                    /**
                     * 生命周期查询起始index
                     */
                    int64_t m_lifeRoundStartIndex;
                    bool m_lifeRoundStartIndexHasBeenSet;

                    /**
                     * 生命周期查询批次数量
                     */
                    int64_t m_lifeRoundSize;
                    bool m_lifeRoundSizeHasBeenSet;

                    /**
                     * 生命周期总数，可省略
                     */
                    std::string m_totalLifeRound;
                    bool m_totalLifeRoundHasBeenSet;

                    /**
                     * 动态加载日志标识
                     */
                    bool m_dynamic;
                    bool m_dynamicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEINSTANCEDETAILINFOREQUEST_H_
