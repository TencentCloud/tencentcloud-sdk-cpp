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
                     * 获取模块名，这里填“monitor”
                     * @return Module 模块名，这里填“monitor”
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名，这里填“monitor”
                     * @param _module 模块名，这里填“monitor”
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
                     * 获取页码 最小为1
                     * @return PageNumber 页码 最小为1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码 最小为1
                     * @param _pageNumber 页码 最小为1
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
                     * 获取分页大小 1～200
                     * @return PageSize 分页大小 1～200
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小 1～200
                     * @param _pageSize 分页大小 1～200
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
                     * 获取按更新时间排序方式 ASC=正序 DESC=倒序
                     * @return Order 按更新时间排序方式 ASC=正序 DESC=倒序
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置按更新时间排序方式 ASC=正序 DESC=倒序
                     * @param _order 按更新时间排序方式 ASC=正序 DESC=倒序
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
                     * 获取主账号 uid 用于创建预设通知
                     * @return OwnerUid 主账号 uid 用于创建预设通知
                     * 
                     */
                    int64_t GetOwnerUid() const;

                    /**
                     * 设置主账号 uid 用于创建预设通知
                     * @param _ownerUid 主账号 uid 用于创建预设通知
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
                     * 获取告警通知模板名称 用来模糊搜索
                     * @return Name 告警通知模板名称 用来模糊搜索
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警通知模板名称 用来模糊搜索
                     * @param _name 告警通知模板名称 用来模糊搜索
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
                     * 获取根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤
                     * @return ReceiverType 根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤
                     * @param _receiverType 根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤
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
                     * 获取接收对象列表
                     * @return UserIds 接收对象列表
                     * 
                     */
                    std::vector<int64_t> GetUserIds() const;

                    /**
                     * 设置接收对象列表
                     * @param _userIds 接收对象列表
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
                     * 获取接收组列表
                     * @return GroupIds 接收组列表
                     * 
                     */
                    std::vector<int64_t> GetGroupIds() const;

                    /**
                     * 设置接收组列表
                     * @param _groupIds 接收组列表
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
                     * 获取根据通知模板 id 过滤，空数组/不传则不过滤
                     * @return NoticeIds 根据通知模板 id 过滤，空数组/不传则不过滤
                     * 
                     */
                    std::vector<std::string> GetNoticeIds() const;

                    /**
                     * 设置根据通知模板 id 过滤，空数组/不传则不过滤
                     * @param _noticeIds 根据通知模板 id 过滤，空数组/不传则不过滤
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
                     * 获取模板根据标签过滤
                     * @return Tags 模板根据标签过滤
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置模板根据标签过滤
                     * @param _tags 模板根据标签过滤
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
                     * 获取值班列表
                     * @return OnCallFormIDs 值班列表
                     * 
                     */
                    std::vector<std::string> GetOnCallFormIDs() const;

                    /**
                     * 设置值班列表
                     * @param _onCallFormIDs 值班列表
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
                     * 模块名，这里填“monitor”
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 页码 最小为1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小 1～200
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 按更新时间排序方式 ASC=正序 DESC=倒序
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 主账号 uid 用于创建预设通知
                     */
                    int64_t m_ownerUid;
                    bool m_ownerUidHasBeenSet;

                    /**
                     * 告警通知模板名称 用来模糊搜索
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 根据接收人过滤告警通知模板需要选定通知用户类型 USER=用户 GROUP=用户组 传空=不按接收人过滤
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 接收对象列表
                     */
                    std::vector<int64_t> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * 接收组列表
                     */
                    std::vector<int64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 根据通知模板 id 过滤，空数组/不传则不过滤
                     */
                    std::vector<std::string> m_noticeIds;
                    bool m_noticeIdsHasBeenSet;

                    /**
                     * 模板根据标签过滤
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 值班列表
                     */
                    std::vector<std::string> m_onCallFormIDs;
                    bool m_onCallFormIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEALARMNOTICESREQUEST_H_
