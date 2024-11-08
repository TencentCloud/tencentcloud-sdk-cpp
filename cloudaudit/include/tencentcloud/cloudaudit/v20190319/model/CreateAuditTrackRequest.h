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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CREATEAUDITTRACKREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CREATEAUDITTRACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/Storage.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * CreateAuditTrack请求参数结构体
                */
                class CreateAuditTrackRequest : public AbstractModel
                {
                public:
                    CreateAuditTrackRequest();
                    ~CreateAuditTrackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符
                     * @return Name 跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符
                     * @param _name 跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取跟踪集状态（未开启：0；开启：1）
                     * @return Status 跟踪集状态（未开启：0；开启：1）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置跟踪集状态（未开启：0；开启：1）
                     * @param _status 跟踪集状态（未开启：0；开启：1）
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据投递存储（目前支持 cos、cls）
                     * @return Storage 数据投递存储（目前支持 cos、cls）
                     * 
                     */
                    Storage GetStorage() const;

                    /**
                     * 设置数据投递存储（目前支持 cos、cls）
                     * @param _storage 数据投递存储（目前支持 cos、cls）
                     * 
                     */
                    void SetStorage(const Storage& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取跟踪事件类型（读：Read；写：Write；全部：*）
                     * @return ActionType 跟踪事件类型（读：Read；写：Write；全部：*）
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置跟踪事件类型（读：Read；写：Write；全部：*）
                     * @param _actionType 跟踪事件类型（读：Read；写：Write；全部：*）
                     * 
                     */
                    void SetActionType(const std::string& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）
                     * @return ResourceType 跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）
                     * @param _resourceType 跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：["*"]；指定ResourceType时，支持全部接口：["*"]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * @return EventNames 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：["*"]；指定ResourceType时，支持全部接口：["*"]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 设置跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：["*"]；指定ResourceType时，支持全部接口：["*"]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * @param _eventNames 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：["*"]；指定ResourceType时，支持全部接口：["*"]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     * 
                     */
                    void SetEventNames(const std::vector<std::string>& _eventNames);

                    /**
                     * 判断参数 EventNames 是否已赋值
                     * @return EventNames 是否已赋值
                     * 
                     */
                    bool EventNamesHasBeenSet() const;

                    /**
                     * 获取是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能) 
                     * @return TrackForAllMembers 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能) 
                     * 
                     */
                    uint64_t GetTrackForAllMembers() const;

                    /**
                     * 设置是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能) 
                     * @param _trackForAllMembers 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能) 
                     * 
                     */
                    void SetTrackForAllMembers(const uint64_t& _trackForAllMembers);

                    /**
                     * 判断参数 TrackForAllMembers 是否已赋值
                     * @return TrackForAllMembers 是否已赋值
                     * 
                     */
                    bool TrackForAllMembersHasBeenSet() const;

                private:

                    /**
                     * 跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 跟踪集状态（未开启：0；开启：1）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据投递存储（目前支持 cos、cls）
                     */
                    Storage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 跟踪事件类型（读：Read；写：Write；全部：*）
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：["*"]；指定ResourceType时，支持全部接口：["*"]；支持部分接口：["cos", "cls"]，接口列表上限10个）
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能) 
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CREATEAUDITTRACKREQUEST_H_
