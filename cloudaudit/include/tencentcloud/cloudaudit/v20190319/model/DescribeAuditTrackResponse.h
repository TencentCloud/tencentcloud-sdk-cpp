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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Storage.h>
#include <tencentcloud/cloudaudit/v20190319/model/Filter.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * DescribeAuditTrack返回参数结构体
                */
                class DescribeAuditTrackResponse : public AbstractModel
                {
                public:
                    DescribeAuditTrackResponse();
                    ~DescribeAuditTrackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集名称
                     * @return Name 跟踪集名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取跟踪事件类型（读：Read；写：Write；全部：*）
                     * @return ActionType 跟踪事件类型（读：Read；写：Write；全部：*）
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取跟踪事件所属产品（如：cos，全部：*）
                     * @return ResourceType 跟踪事件所属产品（如：cos，全部：*）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取跟踪集状态（未开启：0；开启：1）
                     * @return Status 跟踪集状态（未开启：0；开启：1）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取跟踪事件接口名列表（全部：[*]）
                     * @return EventNames 跟踪事件接口名列表（全部：[*]）
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 判断参数 EventNames 是否已赋值
                     * @return EventNames 是否已赋值
                     * 
                     */
                    bool EventNamesHasBeenSet() const;

                    /**
                     * 获取数据投递存储（目前支持 cos、cls）
                     * @return Storage 数据投递存储（目前支持 cos、cls）
                     * 
                     */
                    Storage GetStorage() const;

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取跟踪集创建时间
                     * @return CreateTime 跟踪集创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号
                     * @return TrackForAllMembers 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号
                     * 
                     */
                    uint64_t GetTrackForAllMembers() const;

                    /**
                     * 判断参数 TrackForAllMembers 是否已赋值
                     * @return TrackForAllMembers 是否已赋值
                     * 
                     */
                    bool TrackForAllMembersHasBeenSet() const;

                    /**
                     * 获取数据投递过滤条件
                     * @return Filters 数据投递过滤条件
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 跟踪集名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 跟踪事件类型（读：Read；写：Write；全部：*）
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 跟踪事件所属产品（如：cos，全部：*）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 跟踪集状态（未开启：0；开启：1）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 跟踪事件接口名列表（全部：[*]）
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * 数据投递存储（目前支持 cos、cls）
                     */
                    Storage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 跟踪集创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                    /**
                     * 数据投递过滤条件
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_DESCRIBEAUDITTRACKRESPONSE_H_
