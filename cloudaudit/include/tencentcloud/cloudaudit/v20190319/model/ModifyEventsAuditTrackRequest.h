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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYEVENTSAUDITTRACKREQUEST_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYEVENTSAUDITTRACKREQUEST_H_

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
                * ModifyEventsAuditTrack请求参数结构体
                */
                class ModifyEventsAuditTrackRequest : public AbstractModel
                {
                public:
                    ModifyEventsAuditTrackRequest();
                    ~ModifyEventsAuditTrackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取跟踪集 ID
                     * @return TrackId 跟踪集 ID
                     * 
                     */
                    uint64_t GetTrackId() const;

                    /**
                     * 设置跟踪集 ID
                     * @param _trackId 跟踪集 ID
                     * 
                     */
                    void SetTrackId(const uint64_t& _trackId);

                    /**
                     * 判断参数 TrackId 是否已赋值
                     * @return TrackId 是否已赋值
                     * 
                     */
                    bool TrackIdHasBeenSet() const;

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

                    /**
                     * 获取多产品筛选过滤条件
                     * @return Filters 多产品筛选过滤条件
                     * 
                     */
                    Filter GetFilters() const;

                    /**
                     * 设置多产品筛选过滤条件
                     * @param _filters 多产品筛选过滤条件
                     * 
                     */
                    void SetFilters(const Filter& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 跟踪集 ID
                     */
                    uint64_t m_trackId;
                    bool m_trackIdHasBeenSet;

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
                     * 是否开启将集团成员操作日志投递到集团管理账号或者可信服务管理账号(0：未开启，1：开启，只能集团管理账号或者可信服务管理账号开启此项功能)
                     */
                    uint64_t m_trackForAllMembers;
                    bool m_trackForAllMembersHasBeenSet;

                    /**
                     * 多产品筛选过滤条件
                     */
                    Filter m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_MODIFYEVENTSAUDITTRACKREQUEST_H_
