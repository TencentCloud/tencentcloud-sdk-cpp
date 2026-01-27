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
                     * 获取<p>跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符</p>
                     * @return Name <p>跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符</p>
                     * @param _name <p>跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符</p>
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
                     * 获取<p>跟踪集状态（未开启：0；开启：1）</p>
                     * @return Status <p>跟踪集状态（未开启：0；开启：1）</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>跟踪集状态（未开启：0；开启：1）</p>
                     * @param _status <p>跟踪集状态（未开启：0；开启：1）</p>
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
                     * 获取<p>数据投递存储（目前支持 cos、cls 、ckafka）</p>
                     * @return Storage <p>数据投递存储（目前支持 cos、cls 、ckafka）</p>
                     * 
                     */
                    Storage GetStorage() const;

                    /**
                     * 设置<p>数据投递存储（目前支持 cos、cls 、ckafka）</p>
                     * @param _storage <p>数据投递存储（目前支持 cos、cls 、ckafka）</p>
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
                     * 获取<p>跟踪事件类型（读：Read；写：Write；全部：*）</p>
                     * @return ActionType <p>跟踪事件类型（读：Read；写：Write；全部：*）</p>
                     * 
                     */
                    std::string GetActionType() const;

                    /**
                     * 设置<p>跟踪事件类型（读：Read；写：Write；全部：*）</p>
                     * @param _actionType <p>跟踪事件类型（读：Read；写：Write；全部：*）</p>
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
                     * 获取<p>跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）</p>
                     * @return ResourceType <p>跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）</p>
                     * @param _resourceType <p>跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）</p>
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
                     * 获取<p>跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[&quot;*&quot;]；指定ResourceType时，支持全部接口：[&quot;*&quot;]；支持部分接口：[&quot;cos&quot;, &quot;cls&quot;]，接口列表上限10个）</p>
                     * @return EventNames <p>跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[&quot;*&quot;]；指定ResourceType时，支持全部接口：[&quot;*&quot;]；支持部分接口：[&quot;cos&quot;, &quot;cls&quot;]，接口列表上限10个）</p>
                     * 
                     */
                    std::vector<std::string> GetEventNames() const;

                    /**
                     * 设置<p>跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[&quot;*&quot;]；指定ResourceType时，支持全部接口：[&quot;*&quot;]；支持部分接口：[&quot;cos&quot;, &quot;cls&quot;]，接口列表上限10个）</p>
                     * @param _eventNames <p>跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[&quot;*&quot;]；指定ResourceType时，支持全部接口：[&quot;*&quot;]；支持部分接口：[&quot;cos&quot;, &quot;cls&quot;]，接口列表上限10个）</p>
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
                     * 获取<p>是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)</p>
                     * @return TrackForAllMembers <p>是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)</p>
                     * 
                     */
                    uint64_t GetTrackForAllMembers() const;

                    /**
                     * 设置<p>是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)</p>
                     * @param _trackForAllMembers <p>是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)</p>
                     * 
                     */
                    void SetTrackForAllMembers(const uint64_t& _trackForAllMembers);

                    /**
                     * 判断参数 TrackForAllMembers 是否已赋值
                     * @return TrackForAllMembers 是否已赋值
                     * 
                     */
                    bool TrackForAllMembersHasBeenSet() const;

                    /**
                     * 获取<p>任务ID</p>
                     * @return ExportId <p>任务ID</p>
                     * 
                     */
                    std::string GetExportId() const;

                    /**
                     * 设置<p>任务ID</p>
                     * @param _exportId <p>任务ID</p>
                     * 
                     */
                    void SetExportId(const std::string& _exportId);

                    /**
                     * 判断参数 ExportId 是否已赋值
                     * @return ExportId 是否已赋值
                     * 
                     */
                    bool ExportIdHasBeenSet() const;

                private:

                    /**
                     * <p>跟踪集名称，仅支持大小写字母、数字、-以及_的组合，3-48个字符</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>跟踪集状态（未开启：0；开启：1）</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>数据投递存储（目前支持 cos、cls 、ckafka）</p>
                     */
                    Storage m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * <p>跟踪事件类型（读：Read；写：Write；全部：*）</p>
                     */
                    std::string m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>跟踪事件所属产品（支持全部产品或单个产品，如：cos，全部：*）</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>跟踪事件接口名列表（ResourceType为 * 时，EventNames必须为全部：[&quot;*&quot;]；指定ResourceType时，支持全部接口：[&quot;*&quot;]；支持部分接口：[&quot;cos&quot;, &quot;cls&quot;]，接口列表上限10个）</p>
                     */
                    std::vector<std::string> m_eventNames;
                    bool m_eventNamesHasBeenSet;

                    /**
                     * <p>是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)</p>
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                    /**
                     * <p>任务ID</p>
                     */
                    std::string m_exportId;
                    bool m_exportIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_CREATEAUDITTRACKREQUEST_H_
