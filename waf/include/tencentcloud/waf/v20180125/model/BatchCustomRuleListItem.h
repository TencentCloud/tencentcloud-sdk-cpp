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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 批量自定义规则列表信息Item
                */
                class BatchCustomRuleListItem : public AbstractModel
                {
                public:
                    BatchCustomRuleListItem();
                    ~BatchCustomRuleListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>规则Id</p>
                     * @return Id <p>规则Id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>规则Id</p>
                     * @param _id <p>规则Id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验</p>
                     * @return ActionType <p>动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验</p>
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置<p>动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验</p>
                     * @param _actionType <p>动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验</p>
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>加白模块</p>
                     * @return Bypass <p>加白模块</p>
                     * 
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置<p>加白模块</p>
                     * @param _bypass <p>加白模块</p>
                     * 
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     * 
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取<p>有效期</p>
                     * @return ExpireTime <p>有效期</p>
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置<p>有效期</p>
                     * @param _expireTime <p>有效期</p>
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则名称</p>
                     * @return Name <p>规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>规则名称</p>
                     * @param _name <p>规则名称</p>
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
                     * 获取<p>重定向地址</p>
                     * @return Redirect <p>重定向地址</p>
                     * 
                     */
                    std::string GetRedirect() const;

                    /**
                     * 设置<p>重定向地址</p>
                     * @param _redirect <p>重定向地址</p>
                     * 
                     */
                    void SetRedirect(const std::string& _redirect);

                    /**
                     * 判断参数 Redirect 是否已赋值
                     * @return Redirect 是否已赋值
                     * 
                     */
                    bool RedirectHasBeenSet() const;

                    /**
                     * 获取<p>优先级</p>
                     * @return SortId <p>优先级</p>
                     * 
                     */
                    int64_t GetSortId() const;

                    /**
                     * 设置<p>优先级</p>
                     * @param _sortId <p>优先级</p>
                     * 
                     */
                    void SetSortId(const int64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     * 
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取<p>开关状态</p>
                     * @return Status <p>开关状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>开关状态</p>
                     * @param _status <p>开关状态</p>
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
                     * 获取<p>域名列表</p>
                     * @return Domains <p>域名列表</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>域名列表</p>
                     * @param _domains <p>域名列表</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>策略列表</p>
                     * @return Strategies <p>策略列表</p>
                     * 
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置<p>策略列表</p>
                     * @param _strategies <p>策略列表</p>
                     * 
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取<p>事件Id</p>
                     * @return EventId <p>事件Id</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件Id</p>
                     * @param _eventId <p>事件Id</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>生效状态</p>
                     * @return ValidStatus <p>生效状态</p>
                     * 
                     */
                    uint64_t GetValidStatus() const;

                    /**
                     * 设置<p>生效状态</p>
                     * @param _validStatus <p>生效状态</p>
                     * 
                     */
                    void SetValidStatus(const uint64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则执行的方式，TimedJob为定时执行，CronJob为周期执行</p>
                     * @return JobType <p>规则执行的方式，TimedJob为定时执行，CronJob为周期执行</p>
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置<p>规则执行的方式，TimedJob为定时执行，CronJob为周期执行</p>
                     * @param _jobType <p>规则执行的方式，TimedJob为定时执行，CronJob为周期执行</p>
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取<p>定时任务配置</p>
                     * @return JobDateTime <p>定时任务配置</p>
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置<p>定时任务配置</p>
                     * @param _jobDateTime <p>定时任务配置</p>
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                    /**
                     * 获取<p>周期任务粒度</p>
                     * @return CronType <p>周期任务粒度</p>
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置<p>周期任务粒度</p>
                     * @param _cronType <p>周期任务粒度</p>
                     * 
                     */
                    void SetCronType(const std::string& _cronType);

                    /**
                     * 判断参数 CronType 是否已赋值
                     * @return CronType 是否已赋值
                     * 
                     */
                    bool CronTypeHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Label <p>标签</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _label <p>标签</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>页面ID</p>
                     * @return PageId <p>页面ID</p>
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置<p>页面ID</p>
                     * @param _pageId <p>页面ID</p>
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取<p>匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系</p>
                     * @return LogicalOp <p>匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系</p>
                     * 
                     */
                    std::string GetLogicalOp() const;

                    /**
                     * 设置<p>匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系</p>
                     * @param _logicalOp <p>匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系</p>
                     * 
                     */
                    void SetLogicalOp(const std::string& _logicalOp);

                    /**
                     * 判断参数 LogicalOp 是否已赋值
                     * @return LogicalOp 是否已赋值
                     * 
                     */
                    bool LogicalOpHasBeenSet() const;

                    /**
                     * 获取<p>动作灰度的比例</p>
                     * @return ActionRatio <p>动作灰度的比例</p>
                     * 
                     */
                    uint64_t GetActionRatio() const;

                    /**
                     * 设置<p>动作灰度的比例</p>
                     * @param _actionRatio <p>动作灰度的比例</p>
                     * 
                     */
                    void SetActionRatio(const uint64_t& _actionRatio);

                    /**
                     * 判断参数 ActionRatio 是否已赋值
                     * @return ActionRatio 是否已赋值
                     * 
                     */
                    bool ActionRatioHasBeenSet() const;

                    /**
                     * 获取<p>防护对象组ID</p>
                     * @return GroupIds <p>防护对象组ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetGroupIds() const;

                    /**
                     * 设置<p>防护对象组ID</p>
                     * @param _groupIds <p>防护对象组ID</p>
                     * 
                     */
                    void SetGroupIds(const std::vector<uint64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * <p>规则Id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>动作类型，1代表阻断，2代表人机识别，3代表观察，4代表重定向，5代表JS校验</p>
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>加白模块</p>
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * <p>有效期</p>
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>重定向地址</p>
                     */
                    std::string m_redirect;
                    bool m_redirectHasBeenSet;

                    /**
                     * <p>优先级</p>
                     */
                    int64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * <p>开关状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>域名列表</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>策略列表</p>
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * <p>事件Id</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>生效状态</p>
                     */
                    uint64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>规则执行的方式，TimedJob为定时执行，CronJob为周期执行</p>
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * <p>定时任务配置</p>
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * <p>周期任务粒度</p>
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>页面ID</p>
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * <p>匹配条件的逻辑关系，支持and、or，分别表示多个逻辑匹配条件是与、或的关系</p>
                     */
                    std::string m_logicalOp;
                    bool m_logicalOpHasBeenSet;

                    /**
                     * <p>动作灰度的比例</p>
                     */
                    uint64_t m_actionRatio;
                    bool m_actionRatioHasBeenSet;

                    /**
                     * <p>防护对象组ID</p>
                     */
                    std::vector<uint64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHCUSTOMRULELISTITEM_H_
