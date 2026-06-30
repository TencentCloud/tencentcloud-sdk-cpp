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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/Tag.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeAlarmNotices请求参数结构体
                */
                class DescribeAlarmNoticesRequest : public AbstractModel
                {
                public:
                    DescribeAlarmNoticesRequest();
                    ~DescribeAlarmNoticesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模块名，这里填“monitor”</p>
                     * @return Module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>模块名，这里填“monitor”</p>
                     * @param _module <p>模块名，这里填“monitor”</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>页码 最小为1</p>
                     * @return PageNumber <p>页码 最小为1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码 最小为1</p>
                     * @param _pageNumber <p>页码 最小为1</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>分页大小 1～200</p>
                     * @return PageSize <p>分页大小 1～200</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小 1～200</p>
                     * @param _pageSize <p>分页大小 1～200</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>按更新时间排序方式 ASC=正序 DESC=倒序</p>
                     * @return Order <p>按更新时间排序方式 ASC=正序 DESC=倒序</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>按更新时间排序方式 ASC=正序 DESC=倒序</p>
                     * @param _order <p>按更新时间排序方式 ASC=正序 DESC=倒序</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>主账号 uid 用于创建预设通知</p>
                     * @return OwnerUid <p>主账号 uid 用于创建预设通知</p>
                     * 
                     */
                    int64_t GetOwnerUid() const;

                    /**
                     * 设置<p>主账号 uid 用于创建预设通知</p>
                     * @param _ownerUid <p>主账号 uid 用于创建预设通知</p>
                     * 
                     */
                    void SetOwnerUid(const int64_t& _ownerUid);

                    /**
                     * 判断参数 OwnerUid 是否已赋值
                     * @return OwnerUid 是否已赋值
                     * 
                     */
                    bool OwnerUidHasBeenSet() const;

                    /**
                     * 获取<p>告警通知模板名称 用来模糊搜索</p>
                     * @return Name <p>告警通知模板名称 用来模糊搜索</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警通知模板名称 用来模糊搜索</p>
                     * @param _name <p>告警通知模板名称 用来模糊搜索</p>
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
                     * 获取<p>根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤</p>
                     * @return ReceiverType <p>根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤</p>
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤</p>
                     * @param _receiverType <p>根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤</p>
                     * 
                     */
                    void SetReceiverType(const std::string& _receiverType);

                    /**
                     * 判断参数 ReceiverType 是否已赋值
                     * @return ReceiverType 是否已赋值
                     * 
                     */
                    bool ReceiverTypeHasBeenSet() const;

                    /**
                     * 获取<p>接收对象列表</p>
                     * @return UserIds <p>接收对象列表</p>
                     * 
                     */
                    std::vector<int64_t> GetUserIds() const;

                    /**
                     * 设置<p>接收对象列表</p>
                     * @param _userIds <p>接收对象列表</p>
                     * 
                     */
                    void SetUserIds(const std::vector<int64_t>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取<p>接收组列表</p>
                     * @return GroupIds <p>接收组列表</p>
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置<p>接收组列表</p>
                     * @param _groupIds <p>接收组列表</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<int64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>根据通知模板 id 过滤，空数组/不传则不过滤</p>
                     * @return NoticeIds <p>根据通知模板 id 过滤，空数组/不传则不过滤</p>
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置<p>根据通知模板 id 过滤，空数组/不传则不过滤</p>
                     * @param _noticeIds <p>根据通知模板 id 过滤，空数组/不传则不过滤</p>
                     * 
                     */
                    void SetNoticeIds(const std::vector<std::string>& _noticeIds);

                    /**
                     * 判断参数 NoticeIds 是否已赋值
                     * @return NoticeIds 是否已赋值
                     * 
                     */
                    bool NoticeIdsHasBeenSet() const;

                    /**
                     * 获取<p>模板根据标签过滤</p>
                     * @return Tags <p>模板根据标签过滤</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>模板根据标签过滤</p>
                     * @param _tags <p>模板根据标签过滤</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>值班列表</p>
                     * @return OnCallFormIDs <p>值班列表</p>
                     * 
                     */
                    std::vector<std::string> GetOnCallFormIDs() const;

                    /**
                     * 设置<p>值班列表</p>
                     * @param _onCallFormIDs <p>值班列表</p>
                     * 
                     */
                    void SetOnCallFormIDs(const std::vector<std::string>& _onCallFormIDs);

                    /**
                     * 判断参数 OnCallFormIDs 是否已赋值
                     * @return OnCallFormIDs 是否已赋值
                     * 
                     */
                    bool OnCallFormIDsHasBeenSet() const;

                private:

                    /**
                     * <p>模块名，这里填“monitor”</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>页码 最小为1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页大小 1～200</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>按更新时间排序方式 ASC=正序 DESC=倒序</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>主账号 uid 用于创建预设通知</p>
                     */
                    int64_t m_ownerUid;
                    bool m_ownerUidHasBeenSet;

                    /**
                     * <p>告警通知模板名称 用来模糊搜索</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤</p>
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>接收对象列表</p>
                     */
                    std::vector<int64_t> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>接收组列表</p>
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * <p>根据通知模板 id 过滤，空数组/不传则不过滤</p>
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * <p>模板根据标签过滤</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>值班列表</p>
                     */
                    std::vector<std::string> m_onCallFormIDs;
                    bool m_onCallFormIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
