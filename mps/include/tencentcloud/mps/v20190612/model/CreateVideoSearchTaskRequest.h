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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEOSEARCHTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEOSEARCHTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SearchValueInput.h>
#include <tencentcloud/mps/v20190612/model/TaskNotifyConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateVideoSearchTask请求参数结构体
                */
                class CreateVideoSearchTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoSearchTaskRequest();
                    ~CreateVideoSearchTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用于检索任务的输入
                     * @return SearchValueInput 用于检索任务的输入
                     * 
                     */
                    SearchValueInput GetSearchValueInput() const;

                    /**
                     * 设置用于检索任务的输入
                     * @param _searchValueInput 用于检索任务的输入
                     * 
                     */
                    void SetSearchValueInput(const SearchValueInput& _searchValueInput);

                    /**
                     * 判断参数 SearchValueInput 是否已赋值
                     * @return SearchValueInput 是否已赋值
                     * 
                     */
                    bool SearchValueInputHasBeenSet() const;

                    /**
                     * 获取返回视频的最大数量，取值范围[1,20]，将返回最相近的前Limit条视频,默认为5
                     * @return Limit 返回视频的最大数量，取值范围[1,20]，将返回最相近的前Limit条视频,默认为5
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回视频的最大数量，取值范围[1,20]，将返回最相近的前Limit条视频,默认为5
                     * @param _limit 返回视频的最大数量，取值范围[1,20]，将返回最相近的前Limit条视频,默认为5
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取可选，用于检索任务完成后向回调方发送检索结果，目前仅支持URL方式
                     * @return TaskNotifyConfig 可选，用于检索任务完成后向回调方发送检索结果，目前仅支持URL方式
                     * 
                     */
                    TaskNotifyConfig GetTaskNotifyConfig() const;

                    /**
                     * 设置可选，用于检索任务完成后向回调方发送检索结果，目前仅支持URL方式
                     * @param _taskNotifyConfig 可选，用于检索任务完成后向回调方发送检索结果，目前仅支持URL方式
                     * 
                     */
                    void SetTaskNotifyConfig(const TaskNotifyConfig& _taskNotifyConfig);

                    /**
                     * 判断参数 TaskNotifyConfig 是否已赋值
                     * @return TaskNotifyConfig 是否已赋值
                     * 
                     */
                    bool TaskNotifyConfigHasBeenSet() const;

                private:

                    /**
                     * 用于检索任务的输入
                     */
                    SearchValueInput m_searchValueInput;
                    bool m_searchValueInputHasBeenSet;

                    /**
                     * 返回视频的最大数量，取值范围[1,20]，将返回最相近的前Limit条视频,默认为5
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 可选，用于检索任务完成后向回调方发送检索结果，目前仅支持URL方式
                     */
                    TaskNotifyConfig m_taskNotifyConfig;
                    bool m_taskNotifyConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEVIDEOSEARCHTASKREQUEST_H_
