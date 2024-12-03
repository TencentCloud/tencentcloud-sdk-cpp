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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPODINSTANCESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPODINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePodInstances请求参数结构体
                */
                class DescribePodInstancesRequest : public AbstractModel
                {
                public:
                    DescribePodInstancesRequest();
                    ~DescribePodInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所属groupId
                     * @return GroupId 实例所属groupId
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置实例所属groupId
                     * @param _groupId 实例所属groupId
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取偏移量，取值从0开始
                     * @return Offset 偏移量，取值从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值从0开始
                     * @param _offset 偏移量，取值从0开始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页个数，默认为20， 取值应为1~50
                     * @return Limit 分页个数，默认为20， 取值应为1~50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页个数，默认为20， 取值应为1~50
                     * @param _limit 分页个数，默认为20， 取值应为1~50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤字段
                     * @return PodNameList 过滤字段
                     * 
                     */
                    std::vector<std::string> GetPodNameList() const;

                    /**
                     * 设置过滤字段
                     * @param _podNameList 过滤字段
                     * 
                     */
                    void SetPodNameList(const std::vector<std::string>& _podNameList);

                    /**
                     * 判断参数 PodNameList 是否已赋值
                     * @return PodNameList 是否已赋值
                     * 
                     */
                    bool PodNameListHasBeenSet() const;

                    /**
                     * 获取新老版本pod批次标识
                     * @return DeployVersion 新老版本pod批次标识
                     * 
                     */
                    std::string GetDeployVersion() const;

                    /**
                     * 设置新老版本pod批次标识
                     * @param _deployVersion 新老版本pod批次标识
                     * 
                     */
                    void SetDeployVersion(const std::string& _deployVersion);

                    /**
                     * 判断参数 DeployVersion 是否已赋值
                     * @return DeployVersion 是否已赋值
                     * 
                     */
                    bool DeployVersionHasBeenSet() const;

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

                private:

                    /**
                     * 实例所属groupId
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 偏移量，取值从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页个数，默认为20， 取值应为1~50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤字段
                     */
                    std::vector<std::string> m_podNameList;
                    bool m_podNameListHasBeenSet;

                    /**
                     * 新老版本pod批次标识
                     */
                    std::string m_deployVersion;
                    bool m_deployVersionHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPODINSTANCESREQUEST_H_
