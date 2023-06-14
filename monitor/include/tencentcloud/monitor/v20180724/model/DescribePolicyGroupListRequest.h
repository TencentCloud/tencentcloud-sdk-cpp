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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePolicyGroupList请求参数结构体
                */
                class DescribePolicyGroupListRequest : public AbstractModel
                {
                public:
                    DescribePolicyGroupListRequest();
                    ~DescribePolicyGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取固定值，为"monitor"
                     * @return Module 固定值，为"monitor"
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置固定值，为"monitor"
                     * @param _module 固定值，为"monitor"
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
                     * 获取分页参数，每页返回的数量，取值1~100
                     * @return Limit 分页参数，每页返回的数量，取值1~100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，每页返回的数量，取值1~100
                     * @param _limit 分页参数，每页返回的数量，取值1~100
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
                     * 获取分页参数，页偏移量，从0开始计数
                     * @return Offset 分页参数，页偏移量，从0开始计数
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，页偏移量，从0开始计数
                     * @param _offset 分页参数，页偏移量，从0开始计数
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
                     * 获取按策略名搜索
                     * @return Like 按策略名搜索
                     * 
                     */
                    std::string GetLike() const;

                    /**
                     * 设置按策略名搜索
                     * @param _like 按策略名搜索
                     * 
                     */
                    void SetLike(const std::string& _like);

                    /**
                     * 判断参数 Like 是否已赋值
                     * @return Like 是否已赋值
                     * 
                     */
                    bool LikeHasBeenSet() const;

                    /**
                     * 获取实例分组id
                     * @return InstanceGroupId 实例分组id
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置实例分组id
                     * @param _instanceGroupId 实例分组id
                     * 
                     */
                    void SetInstanceGroupId(const int64_t& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取按更新时间排序, asc 或者 desc
                     * @return UpdateTimeOrder 按更新时间排序, asc 或者 desc
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置按更新时间排序, asc 或者 desc
                     * @param _updateTimeOrder 按更新时间排序, asc 或者 desc
                     * 
                     */
                    void SetUpdateTimeOrder(const std::string& _updateTimeOrder);

                    /**
                     * 判断参数 UpdateTimeOrder 是否已赋值
                     * @return UpdateTimeOrder 是否已赋值
                     * 
                     */
                    bool UpdateTimeOrderHasBeenSet() const;

                    /**
                     * 获取项目id列表
                     * @return ProjectIds 项目id列表
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置项目id列表
                     * @param _projectIds 项目id列表
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取告警策略类型列表
                     * @return ViewNames 告警策略类型列表
                     * 
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置告警策略类型列表
                     * @param _viewNames 告警策略类型列表
                     * 
                     */
                    void SetViewNames(const std::vector<std::string>& _viewNames);

                    /**
                     * 判断参数 ViewNames 是否已赋值
                     * @return ViewNames 是否已赋值
                     * 
                     */
                    bool ViewNamesHasBeenSet() const;

                    /**
                     * 获取是否过滤无接收人策略组, 1表示过滤, 0表示不过滤
                     * @return FilterUnuseReceiver 是否过滤无接收人策略组, 1表示过滤, 0表示不过滤
                     * 
                     */
                    int64_t GetFilterUnuseReceiver() const;

                    /**
                     * 设置是否过滤无接收人策略组, 1表示过滤, 0表示不过滤
                     * @param _filterUnuseReceiver 是否过滤无接收人策略组, 1表示过滤, 0表示不过滤
                     * 
                     */
                    void SetFilterUnuseReceiver(const int64_t& _filterUnuseReceiver);

                    /**
                     * 判断参数 FilterUnuseReceiver 是否已赋值
                     * @return FilterUnuseReceiver 是否已赋值
                     * 
                     */
                    bool FilterUnuseReceiverHasBeenSet() const;

                    /**
                     * 获取过滤条件, 接收组列表
                     * @return Receivers 过滤条件, 接收组列表
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置过滤条件, 接收组列表
                     * @param _receivers 过滤条件, 接收组列表
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取过滤条件, 接收人列表
                     * @return ReceiverUserList 过滤条件, 接收人列表
                     * 
                     */
                    std::vector<std::string> GetReceiverUserList() const;

                    /**
                     * 设置过滤条件, 接收人列表
                     * @param _receiverUserList 过滤条件, 接收人列表
                     * 
                     */
                    void SetReceiverUserList(const std::vector<std::string>& _receiverUserList);

                    /**
                     * 判断参数 ReceiverUserList 是否已赋值
                     * @return ReceiverUserList 是否已赋值
                     * 
                     */
                    bool ReceiverUserListHasBeenSet() const;

                    /**
                     * 获取维度组合字段(json字符串), 例如[[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]]
                     * @return Dimensions 维度组合字段(json字符串), 例如[[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]]
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置维度组合字段(json字符串), 例如[[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]]
                     * @param _dimensions 维度组合字段(json字符串), 例如[[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]]
                     * 
                     */
                    void SetDimensions(const std::string& _dimensions);

                    /**
                     * 判断参数 Dimensions 是否已赋值
                     * @return Dimensions 是否已赋值
                     * 
                     */
                    bool DimensionsHasBeenSet() const;

                    /**
                     * 获取模板策略组id, 多个id用逗号分隔
                     * @return ConditionTempGroupId 模板策略组id, 多个id用逗号分隔
                     * 
                     */
                    std::string GetConditionTempGroupId() const;

                    /**
                     * 设置模板策略组id, 多个id用逗号分隔
                     * @param _conditionTempGroupId 模板策略组id, 多个id用逗号分隔
                     * 
                     */
                    void SetConditionTempGroupId(const std::string& _conditionTempGroupId);

                    /**
                     * 判断参数 ConditionTempGroupId 是否已赋值
                     * @return ConditionTempGroupId 是否已赋值
                     * 
                     */
                    bool ConditionTempGroupIdHasBeenSet() const;

                    /**
                     * 获取过滤条件, 接收人或者接收组, user表示接收人, group表示接收组
                     * @return ReceiverType 过滤条件, 接收人或者接收组, user表示接收人, group表示接收组
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置过滤条件, 接收人或者接收组, user表示接收人, group表示接收组
                     * @param _receiverType 过滤条件, 接收人或者接收组, user表示接收人, group表示接收组
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
                     * 获取过滤条件，告警策略是否已启动或停止
                     * @return IsOpen 过滤条件，告警策略是否已启动或停止
                     * 
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置过滤条件，告警策略是否已启动或停止
                     * @param _isOpen 过滤条件，告警策略是否已启动或停止
                     * 
                     */
                    void SetIsOpen(const bool& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * 固定值，为"monitor"
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 分页参数，每页返回的数量，取值1~100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，页偏移量，从0开始计数
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 按策略名搜索
                     */
                    std::string m_like;
                    bool m_likeHasBeenSet;

                    /**
                     * 实例分组id
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * 按更新时间排序, asc 或者 desc
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * 项目id列表
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 告警策略类型列表
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * 是否过滤无接收人策略组, 1表示过滤, 0表示不过滤
                     */
                    int64_t m_filterUnuseReceiver;
                    bool m_filterUnuseReceiverHasBeenSet;

                    /**
                     * 过滤条件, 接收组列表
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 过滤条件, 接收人列表
                     */
                    std::vector<std::string> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * 维度组合字段(json字符串), 例如[[{"name":"unInstanceId","value":"ins-6e4b2aaa"}]]
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * 模板策略组id, 多个id用逗号分隔
                     */
                    std::string m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                    /**
                     * 过滤条件, 接收人或者接收组, user表示接收人, group表示接收组
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * 过滤条件，告警策略是否已启动或停止
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_
