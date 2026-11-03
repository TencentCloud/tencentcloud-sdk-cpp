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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/LoginWhitePlace.h>
#include <tencentcloud/csip/v20221121/model/EDRRuleTagItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 异常登录白名单规则项（自定义与自学习共用，以 Type 区分）
                */
                class LoginWhiteItem : public AbstractModel
                {
                public:
                    LoginWhiteItem();
                    ~LoginWhiteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>白名单类型：Custom-自定义白名单 Learn-自学习白名单</p>
                     * @return Type <p>白名单类型：Custom-自定义白名单 Learn-自学习白名单</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>白名单类型：Custom-自定义白名单 Learn-自学习白名单</p>
                     * @param _type <p>白名单类型：Custom-自定义白名单 Learn-自学习白名单</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>规则所属账号 AppId，多账号场景下用于区分与后续编辑定位</p>
                     * @return AppId <p>规则所属账号 AppId，多账号场景下用于区分与后续编辑定位</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>规则所属账号 AppId，多账号场景下用于区分与后续编辑定位</p>
                     * @param _appId <p>规则所属账号 AppId，多账号场景下用于区分与后续编辑定位</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * @return Id <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     * @param _id <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
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
                     * 获取<p>登录源IP（逗号分隔）；自学习白名单恒为空</p>
                     * @return SrcIp <p>登录源IP（逗号分隔）；自学习白名单恒为空</p>
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置<p>登录源IP（逗号分隔）；自学习白名单恒为空</p>
                     * @param _srcIp <p>登录源IP（逗号分隔）；自学习白名单恒为空</p>
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取<p>登录用户名（逗号分隔）；自学习白名单恒为空</p>
                     * @return UserName <p>登录用户名（逗号分隔）；自学习白名单恒为空</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>登录用户名（逗号分隔）；自学习白名单恒为空</p>
                     * @param _userName <p>登录用户名（逗号分隔）；自学习白名单恒为空</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>登录时段起始 HH:MM；自学习白名单恒为空</p>
                     * @return StartTime <p>登录时段起始 HH:MM；自学习白名单恒为空</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>登录时段起始 HH:MM；自学习白名单恒为空</p>
                     * @param _startTime <p>登录时段起始 HH:MM；自学习白名单恒为空</p>
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
                     * 获取<p>登录时段结束 HH:MM；自学习白名单恒为空</p>
                     * @return EndTime <p>登录时段结束 HH:MM；自学习白名单恒为空</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>登录时段结束 HH:MM；自学习白名单恒为空</p>
                     * @param _endTime <p>登录时段结束 HH:MM；自学习白名单恒为空</p>
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
                     * 获取<p>常用登录地列表</p>
                     * @return Places <p>常用登录地列表</p>
                     * 
                     */
                    std::vector<LoginWhitePlace> GetPlaces() const;

                    /**
                     * 设置<p>常用登录地列表</p>
                     * @param _places <p>常用登录地列表</p>
                     * 
                     */
                    void SetPlaces(const std::vector<LoginWhitePlace>& _places);

                    /**
                     * 判断参数 Places 是否已赋值
                     * @return Places 是否已赋值
                     * 
                     */
                    bool PlacesHasBeenSet() const;

                    /**
                     * 获取<p>常用登录地展示文案（逗号分隔），供列表直接展示</p>
                     * @return Locations <p>常用登录地展示文案（逗号分隔），供列表直接展示</p>
                     * 
                     */
                    std::string GetLocations() const;

                    /**
                     * 设置<p>常用登录地展示文案（逗号分隔），供列表直接展示</p>
                     * @param _locations <p>常用登录地展示文案（逗号分隔），供列表直接展示</p>
                     * 
                     */
                    void SetLocations(const std::string& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                    /**
                     * 获取<p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * @return Scope <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * 
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置<p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * @param _scope <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     * 
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>生效主机 QUUID 列表（与 InstanceIDs 一一对应）</p>
                     * @return QUUIDS <p>生效主机 QUUID 列表（与 InstanceIDs 一一对应）</p>
                     * 
                     */
                    std::vector<std::string> GetQUUIDS() const;

                    /**
                     * 设置<p>生效主机 QUUID 列表（与 InstanceIDs 一一对应）</p>
                     * @param _qUUIDS <p>生效主机 QUUID 列表（与 InstanceIDs 一一对应）</p>
                     * 
                     */
                    void SetQUUIDS(const std::vector<std::string>& _qUUIDS);

                    /**
                     * 判断参数 QUUIDS 是否已赋值
                     * @return QUUIDS 是否已赋值
                     * 
                     */
                    bool QUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>生效主机实例ID列表（与 QUUIDS 一一对应）</p>
                     * @return InstanceIDs <p>生效主机实例ID列表（与 QUUIDS 一一对应）</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>生效主机实例ID列表（与 QUUIDS 一一对应）</p>
                     * @param _instanceIDs <p>生效主机实例ID列表（与 QUUIDS 一一对应）</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>剔除主机 QUUID 列表</p>
                     * @return ExcludeQUUIDS <p>剔除主机 QUUID 列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQUUIDS() const;

                    /**
                     * 设置<p>剔除主机 QUUID 列表</p>
                     * @param _excludeQUUIDS <p>剔除主机 QUUID 列表</p>
                     * 
                     */
                    void SetExcludeQUUIDS(const std::vector<std::string>& _excludeQUUIDS);

                    /**
                     * 判断参数 ExcludeQUUIDS 是否已赋值
                     * @return ExcludeQUUIDS 是否已赋值
                     * 
                     */
                    bool ExcludeQUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>剔除主机实例ID列表</p>
                     * @return ExcludeInstanceIDs <p>剔除主机实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>剔除主机实例ID列表</p>
                     * @param _excludeInstanceIDs <p>剔除主机实例ID列表</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>生效标签详情列表</p>
                     * @return TagItems <p>生效标签详情列表</p>
                     * 
                     */
                    std::vector<EDRRuleTagItem> GetTagItems() const;

                    /**
                     * 设置<p>生效标签详情列表</p>
                     * @param _tagItems <p>生效标签详情列表</p>
                     * 
                     */
                    void SetTagItems(const std::vector<EDRRuleTagItem>& _tagItems);

                    /**
                     * 判断参数 TagItems 是否已赋值
                     * @return TagItems 是否已赋值
                     * 
                     */
                    bool TagItemsHasBeenSet() const;

                    /**
                     * 获取<p>主机数：自定义为指定主机数（Scope=1 时为 0，前端展示全部主机）；自学习为组内去重主机数</p>
                     * @return HostCount <p>主机数：自定义为指定主机数（Scope=1 时为 0，前端展示全部主机）；自学习为组内去重主机数</p>
                     * 
                     */
                    int64_t GetHostCount() const;

                    /**
                     * 设置<p>主机数：自定义为指定主机数（Scope=1 时为 0，前端展示全部主机）；自学习为组内去重主机数</p>
                     * @param _hostCount <p>主机数：自定义为指定主机数（Scope=1 时为 0，前端展示全部主机）；自学习为组内去重主机数</p>
                     * 
                     */
                    void SetHostCount(const int64_t& _hostCount);

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

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
                     * 获取<p>创建时间，格式 2006-01-02 15:04:05</p>
                     * @return CreateTime <p>创建时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，格式 2006-01-02 15:04:05</p>
                     * @param _createTime <p>创建时间，格式 2006-01-02 15:04:05</p>
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
                     * 获取<p>最近修改时间，格式 2006-01-02 15:04:05</p>
                     * @return ModifyTime <p>最近修改时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>最近修改时间，格式 2006-01-02 15:04:05</p>
                     * @param _modifyTime <p>最近修改时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>白名单类型：Custom-自定义白名单 Learn-自学习白名单</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>规则所属账号 AppId，多账号场景下用于区分与后续编辑定位</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>规则ID；自学习为规则组ID（组内最小行ID）</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>登录源IP（逗号分隔）；自学习白名单恒为空</p>
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * <p>登录用户名（逗号分隔）；自学习白名单恒为空</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>登录时段起始 HH:MM；自学习白名单恒为空</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>登录时段结束 HH:MM；自学习白名单恒为空</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>常用登录地列表</p>
                     */
                    std::vector<LoginWhitePlace> m_places;
                    bool m_placesHasBeenSet;

                    /**
                     * <p>常用登录地展示文案（逗号分隔），供列表直接展示</p>
                     */
                    std::string m_locations;
                    bool m_locationsHasBeenSet;

                    /**
                     * <p>生效资产范围：0-指定主机（主机或标签命中） 1-全部主机</p>
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>生效主机 QUUID 列表（与 InstanceIDs 一一对应）</p>
                     */
                    std::vector<std::string> m_qUUIDS;
                    bool m_qUUIDSHasBeenSet;

                    /**
                     * <p>生效主机实例ID列表（与 QUUIDS 一一对应）</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>剔除主机 QUUID 列表</p>
                     */
                    std::vector<std::string> m_excludeQUUIDS;
                    bool m_excludeQUUIDSHasBeenSet;

                    /**
                     * <p>剔除主机实例ID列表</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                    /**
                     * <p>生效标签详情列表</p>
                     */
                    std::vector<EDRRuleTagItem> m_tagItems;
                    bool m_tagItemsHasBeenSet;

                    /**
                     * <p>主机数：自定义为指定主机数（Scope=1 时为 0，前端展示全部主机）；自学习为组内去重主机数</p>
                     */
                    int64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>创建时间，格式 2006-01-02 15:04:05</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>最近修改时间，格式 2006-01-02 15:04:05</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGINWHITEITEM_H_
