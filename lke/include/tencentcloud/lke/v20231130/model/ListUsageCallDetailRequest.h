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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListUsageCallDetail请求参数结构体
                */
                class ListUsageCallDetailRequest : public AbstractModel
                {
                public:
                    ListUsageCallDetailRequest();
                    ~ListUsageCallDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模型标识
                     * @return ModelName 模型标识
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型标识
                     * @param _modelName 模型标识
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
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
                     * 获取页码（从1开始）
                     * @return PageNumber 页码（从1开始）
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码（从1开始）
                     * @param _pageNumber 页码（从1开始）
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
                     * 获取分页数量(最大值1000)
                     * @return PageSize 分页数量(最大值1000)
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页数量(最大值1000)
                     * @param _pageSize 分页数量(最大值1000)
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取uin列表
                     * @return UinAccount uin列表
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置uin列表
                     * @param _uinAccount uin列表
                     * 
                     */
                    void SetUinAccount(const std::vector<std::string>& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取应用ID列表
                     * @return AppBizIds 应用ID列表
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置应用ID列表
                     * @param _appBizIds 应用ID列表
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                    /**
                     * 获取调用类型列表
                     * @return CallType 调用类型列表
                     * 
                     */
                    std::string GetCallType() const;

                    /**
                     * 设置调用类型列表
                     * @param _callType 调用类型列表
                     * 
                     */
                    void SetCallType(const std::string& _callType);

                    /**
                     * 判断参数 CallType 是否已赋值
                     * @return CallType 是否已赋值
                     * 
                     */
                    bool CallTypeHasBeenSet() const;

                    /**
                     * 获取筛选子场景
                     * @return SubScenes 筛选子场景
                     * 
                     */
                    std::vector<std::string> GetSubScenes() const;

                    /**
                     * 设置筛选子场景
                     * @param _subScenes 筛选子场景
                     * 
                     */
                    void SetSubScenes(const std::vector<std::string>& _subScenes);

                    /**
                     * 判断参数 SubScenes 是否已赋值
                     * @return SubScenes 是否已赋值
                     * 
                     */
                    bool SubScenesHasBeenSet() const;

                    /**
                     * 获取应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * @return AppType 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * @param _appType 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取账单明细对应的自定义tag
                     * @return BillingTag 账单明细对应的自定义tag
                     * 
                     */
                    std::string GetBillingTag() const;

                    /**
                     * 设置账单明细对应的自定义tag
                     * @param _billingTag 账单明细对应的自定义tag
                     * 
                     */
                    void SetBillingTag(const std::string& _billingTag);

                    /**
                     * 判断参数 BillingTag 是否已赋值
                     * @return BillingTag 是否已赋值
                     * 
                     */
                    bool BillingTagHasBeenSet() const;

                private:

                    /**
                     * 模型标识
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 页码（从1开始）
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页数量(最大值1000)
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * uin列表
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * 应用ID列表
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                    /**
                     * 调用类型列表
                     */
                    std::string m_callType;
                    bool m_callTypeHasBeenSet;

                    /**
                     * 筛选子场景
                     */
                    std::vector<std::string> m_subScenes;
                    bool m_subScenesHasBeenSet;

                    /**
                     * 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 账单明细对应的自定义tag
                     */
                    std::string m_billingTag;
                    bool m_billingTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTUSAGECALLDETAILREQUEST_H_
