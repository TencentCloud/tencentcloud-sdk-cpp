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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveAvatarCloneFigureList请求参数结构体
                */
                class DescribeLiveAvatarCloneFigureListRequest : public AbstractModel
                {
                public:
                    DescribeLiveAvatarCloneFigureListRequest();
                    ~DescribeLiveAvatarCloneFigureListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>待查询的克隆形象的TaskId</p>
                     * @return TaskId <p>待查询的克隆形象的TaskId</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>待查询的克隆形象的TaskId</p>
                     * @param _taskId <p>待查询的克隆形象的TaskId</p>
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
                     * 获取<p>根据状态查询克隆形象</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * @return Status <p>根据状态查询克隆形象</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>根据状态查询克隆形象</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     * @param _status <p>根据状态查询克隆形象</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
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
                     * 获取<p>期望返回克隆形象的个数（最多20个）</p>
                     * @return Limit <p>期望返回克隆形象的个数（最多20个）</p>
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置<p>期望返回克隆形象的个数（最多20个）</p>
                     * @param _limit <p>期望返回克隆形象的个数（最多20个）</p>
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>期望返回克隆形象的起始偏移位置（默认为0）</p>
                     * @return Offset <p>期望返回克隆形象的起始偏移位置（默认为0）</p>
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置<p>期望返回克隆形象的起始偏移位置（默认为0）</p>
                     * @param _offset <p>期望返回克隆形象的起始偏移位置（默认为0）</p>
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>待查询的克隆形象的TaskId</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>根据状态查询克隆形象</p><p>枚举值：</p><ul><li>SUBMITTING： 已受理</li><li>CHECKING： 检查中</li><li>QUEUE： 排队中</li><li>MAKING： 训练中</li><li>CONFIRMING： 效果确认</li><li>SUCCESS： 成功</li><li>FAIL： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>期望返回克隆形象的个数（最多20个）</p>
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>期望返回克隆形象的起始偏移位置（默认为0）</p>
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEAVATARCLONEFIGURELISTREQUEST_H_
