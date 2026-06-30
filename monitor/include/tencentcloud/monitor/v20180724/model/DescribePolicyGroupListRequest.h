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
                     * 获取<p>固定值，为&quot;monitor&quot;</p>
                     * @return Module <p>固定值，为&quot;monitor&quot;</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>固定值，为&quot;monitor&quot;</p>
                     * @param _module <p>固定值，为&quot;monitor&quot;</p>
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
                     * 获取<p>分页参数，每页返回的数量，取值1~100</p>
                     * @return Limit <p>分页参数，每页返回的数量，取值1~100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页参数，每页返回的数量，取值1~100</p>
                     * @param _limit <p>分页参数，每页返回的数量，取值1~100</p>
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
                     * 获取<p>分页参数，页偏移量，从0开始计数</p>
                     * @return Offset <p>分页参数，页偏移量，从0开始计数</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页参数，页偏移量，从0开始计数</p>
                     * @param _offset <p>分页参数，页偏移量，从0开始计数</p>
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
                     * 获取<p>按策略名搜索</p>
                     * @return Like <p>按策略名搜索</p>
                     * 
                     */
                    std::string GetLike() const;

                    /**
                     * 设置<p>按策略名搜索</p>
                     * @param _like <p>按策略名搜索</p>
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
                     * 获取<p>实例分组id</p>
                     * @return InstanceGroupId <p>实例分组id</p>
                     * 
                     */
                    int64_t GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例分组id</p>
                     * @param _instanceGroupId <p>实例分组id</p>
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
                     * 获取<p>按更新时间排序, asc 或者 desc</p>
                     * @return UpdateTimeOrder <p>按更新时间排序, asc 或者 desc</p>
                     * 
                     */
                    std::string GetUpdateTimeOrder() const;

                    /**
                     * 设置<p>按更新时间排序, asc 或者 desc</p>
                     * @param _updateTimeOrder <p>按更新时间排序, asc 或者 desc</p>
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
                     * 获取<p>项目id列表</p>
                     * @return ProjectIds <p>项目id列表</p>
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目id列表</p>
                     * @param _projectIds <p>项目id列表</p>
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
                     * 获取<p>告警策略类型列表</p>
                     * @return ViewNames <p>告警策略类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetViewNames() const;

                    /**
                     * 设置<p>告警策略类型列表</p>
                     * @param _viewNames <p>告警策略类型列表</p>
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
                     * 获取<p>是否过滤无接收人策略组, 1表示过滤, 0表示不过滤</p>
                     * @return FilterUnuseReceiver <p>是否过滤无接收人策略组, 1表示过滤, 0表示不过滤</p>
                     * 
                     */
                    int64_t GetFilterUnuseReceiver() const;

                    /**
                     * 设置<p>是否过滤无接收人策略组, 1表示过滤, 0表示不过滤</p>
                     * @param _filterUnuseReceiver <p>是否过滤无接收人策略组, 1表示过滤, 0表示不过滤</p>
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
                     * 获取<p>过滤条件, 接收组列表</p>
                     * @return Receivers <p>过滤条件, 接收组列表</p>
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置<p>过滤条件, 接收组列表</p>
                     * @param _receivers <p>过滤条件, 接收组列表</p>
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
                     * 获取<p>过滤条件, 接收人列表</p>
                     * @return ReceiverUserList <p>过滤条件, 接收人列表</p>
                     * 
                     */
                    std::vector<std::string> GetReceiverUserList() const;

                    /**
                     * 设置<p>过滤条件, 接收人列表</p>
                     * @param _receiverUserList <p>过滤条件, 接收人列表</p>
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
                     * 获取<p>维度组合字段(json字符串), 例如[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-6e4b2aaa&quot;}]]</p>
                     * @return Dimensions <p>维度组合字段(json字符串), 例如[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-6e4b2aaa&quot;}]]</p>
                     * 
                     */
                    std::string GetDimensions() const;

                    /**
                     * 设置<p>维度组合字段(json字符串), 例如[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-6e4b2aaa&quot;}]]</p>
                     * @param _dimensions <p>维度组合字段(json字符串), 例如[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-6e4b2aaa&quot;}]]</p>
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
                     * 获取<p>模板策略组id, 多个id用逗号分隔</p>
                     * @return ConditionTempGroupId <p>模板策略组id, 多个id用逗号分隔</p>
                     * 
                     */
                    std::string GetConditionTempGroupId() const;

                    /**
                     * 设置<p>模板策略组id, 多个id用逗号分隔</p>
                     * @param _conditionTempGroupId <p>模板策略组id, 多个id用逗号分隔</p>
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
                     * 获取<p>过滤条件, 接收人或者接收组, user表示接收人, group表示接收组</p>
                     * @return ReceiverType <p>过滤条件, 接收人或者接收组, user表示接收人, group表示接收组</p>
                     * 
                     */
                    std::string GetReceiverType() const;

                    /**
                     * 设置<p>过滤条件, 接收人或者接收组, user表示接收人, group表示接收组</p>
                     * @param _receiverType <p>过滤条件, 接收人或者接收组, user表示接收人, group表示接收组</p>
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
                     * 获取<p>过滤条件，告警策略是否已启动或停止</p>
                     * @return IsOpen <p>过滤条件，告警策略是否已启动或停止</p>
                     * 
                     */
                    bool GetIsOpen() const;

                    /**
                     * 设置<p>过滤条件，告警策略是否已启动或停止</p>
                     * @param _isOpen <p>过滤条件，告警策略是否已启动或停止</p>
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
                     * <p>固定值，为&quot;monitor&quot;</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>分页参数，每页返回的数量，取值1~100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页参数，页偏移量，从0开始计数</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>按策略名搜索</p>
                     */
                    std::string m_like;
                    bool m_likeHasBeenSet;

                    /**
                     * <p>实例分组id</p>
                     */
                    int64_t m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>按更新时间排序, asc 或者 desc</p>
                     */
                    std::string m_updateTimeOrder;
                    bool m_updateTimeOrderHasBeenSet;

                    /**
                     * <p>项目id列表</p>
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>告警策略类型列表</p>
                     */
                    std::vector<std::string> m_viewNames;
                    bool m_viewNamesHasBeenSet;

                    /**
                     * <p>是否过滤无接收人策略组, 1表示过滤, 0表示不过滤</p>
                     */
                    int64_t m_filterUnuseReceiver;
                    bool m_filterUnuseReceiverHasBeenSet;

                    /**
                     * <p>过滤条件, 接收组列表</p>
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>过滤条件, 接收人列表</p>
                     */
                    std::vector<std::string> m_receiverUserList;
                    bool m_receiverUserListHasBeenSet;

                    /**
                     * <p>维度组合字段(json字符串), 例如[[{&quot;name&quot;:&quot;unInstanceId&quot;,&quot;value&quot;:&quot;ins-6e4b2aaa&quot;}]]</p>
                     */
                    std::string m_dimensions;
                    bool m_dimensionsHasBeenSet;

                    /**
                     * <p>模板策略组id, 多个id用逗号分隔</p>
                     */
                    std::string m_conditionTempGroupId;
                    bool m_conditionTempGroupIdHasBeenSet;

                    /**
                     * <p>过滤条件, 接收人或者接收组, user表示接收人, group表示接收组</p>
                     */
                    std::string m_receiverType;
                    bool m_receiverTypeHasBeenSet;

                    /**
                     * <p>过滤条件，告警策略是否已启动或停止</p>
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPOLICYGROUPLISTREQUEST_H_
