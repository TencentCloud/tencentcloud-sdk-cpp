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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKSREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ListAITasks请求参数结构体
                */
                class ListAITasksRequest : public AbstractModel
                {
                public:
                    ListAITasksRequest();
                    ~ListAITasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否包含通道列表。"true"代表包含通道列表，"false"代表不包含通道列表，默认为 false
                     * @return IsContainChannelList 是否包含通道列表。"true"代表包含通道列表，"false"代表不包含通道列表，默认为 false
                     * 
                     */
                    bool GetIsContainChannelList() const;

                    /**
                     * 设置是否包含通道列表。"true"代表包含通道列表，"false"代表不包含通道列表，默认为 false
                     * @param _isContainChannelList 是否包含通道列表。"true"代表包含通道列表，"false"代表不包含通道列表，默认为 false
                     * 
                     */
                    void SetIsContainChannelList(const bool& _isContainChannelList);

                    /**
                     * 判断参数 IsContainChannelList 是否已赋值
                     * @return IsContainChannelList 是否已赋值
                     * 
                     */
                    bool IsContainChannelListHasBeenSet() const;

                    /**
                     * 获取是否包含AI配置。"true"代表包含任务配置，"false"代表不包含任务配置，默认为 false。
                     * @return IsContainTemplate 是否包含AI配置。"true"代表包含任务配置，"false"代表不包含任务配置，默认为 false。
                     * 
                     */
                    bool GetIsContainTemplate() const;

                    /**
                     * 设置是否包含AI配置。"true"代表包含任务配置，"false"代表不包含任务配置，默认为 false。
                     * @param _isContainTemplate 是否包含AI配置。"true"代表包含任务配置，"false"代表不包含任务配置，默认为 false。
                     * 
                     */
                    void SetIsContainTemplate(const bool& _isContainTemplate);

                    /**
                     * 判断参数 IsContainTemplate 是否已赋值
                     * @return IsContainTemplate 是否已赋值
                     * 
                     */
                    bool IsContainTemplateHasBeenSet() const;

                    /**
                     * 获取页码。默认为1
                     * @return PageNumber 页码。默认为1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码。默认为1
                     * @param _pageNumber 页码。默认为1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页数量。可选值1～200，默认为20
                     * @return PageSize 每页数量。可选值1～200，默认为20
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量。可选值1～200，默认为20
                     * @param _pageSize 每页数量。可选值1～200，默认为20
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 是否包含通道列表。"true"代表包含通道列表，"false"代表不包含通道列表，默认为 false
                     */
                    bool m_isContainChannelList;
                    bool m_isContainChannelListHasBeenSet;

                    /**
                     * 是否包含AI配置。"true"代表包含任务配置，"false"代表不包含任务配置，默认为 false。
                     */
                    bool m_isContainTemplate;
                    bool m_isContainTemplateHasBeenSet;

                    /**
                     * 页码。默认为1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数量。可选值1～200，默认为20
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTAITASKSREQUEST_H_
