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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/AssetFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddEditImageAutoAuthorizedRule请求参数结构体
                */
                class AddEditImageAutoAuthorizedRuleRequest : public AbstractModel
                {
                public:
                    AddEditImageAutoAuthorizedRuleRequest();
                    ~AddEditImageAutoAuthorizedRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
                     * @return RangeType 授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
                     * 
                     */
                    std::string GetRangeType() const;

                    /**
                     * 设置授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
                     * @param _rangeType 授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
                     * 
                     */
                    void SetRangeType(const std::string& _rangeType);

                    /**
                     * 判断参数 RangeType 是否已赋值
                     * @return RangeType 是否已赋值
                     * 
                     */
                    bool RangeTypeHasBeenSet() const;

                    /**
                     * 获取每天最大的镜像授权数限制, 0表示无限制
                     * @return MaxDailyCount 每天最大的镜像授权数限制, 0表示无限制
                     * 
                     */
                    int64_t GetMaxDailyCount() const;

                    /**
                     * 设置每天最大的镜像授权数限制, 0表示无限制
                     * @param _maxDailyCount 每天最大的镜像授权数限制, 0表示无限制
                     * 
                     */
                    void SetMaxDailyCount(const int64_t& _maxDailyCount);

                    /**
                     * 判断参数 MaxDailyCount 是否已赋值
                     * @return MaxDailyCount 是否已赋值
                     * 
                     */
                    bool MaxDailyCountHasBeenSet() const;

                    /**
                     * 获取规则是否生效，0:不生效，1:已生效
                     * @return IsEnabled 规则是否生效，0:不生效，1:已生效
                     * 
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置规则是否生效，0:不生效，1:已生效
                     * @param _isEnabled 规则是否生效，0:不生效，1:已生效
                     * 
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     * 
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取自选主机id，当授权范围为MANUAL:自选主机时且HostIdFilters为空时，必填
                     * @return HostIdSet 自选主机id，当授权范围为MANUAL:自选主机时且HostIdFilters为空时，必填
                     * 
                     */
                    std::vector<std::string> GetHostIdSet() const;

                    /**
                     * 设置自选主机id，当授权范围为MANUAL:自选主机时且HostIdFilters为空时，必填
                     * @param _hostIdSet 自选主机id，当授权范围为MANUAL:自选主机时且HostIdFilters为空时，必填
                     * 
                     */
                    void SetHostIdSet(const std::vector<std::string>& _hostIdSet);

                    /**
                     * 判断参数 HostIdSet 是否已赋值
                     * @return HostIdSet 是否已赋值
                     * 
                     */
                    bool HostIdSetHasBeenSet() const;

                    /**
                     * 获取规则id，在编辑时，必填
                     * @return RuleId 规则id，在编辑时，必填
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则id，在编辑时，必填
                     * @param _ruleId 规则id，在编辑时，必填
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取根据条件过滤，当授权范围为MANUAL:自选主机时且HostIdSet为空时，必填
                     * @return HostIdFilters 根据条件过滤，当授权范围为MANUAL:自选主机时且HostIdSet为空时，必填
                     * 
                     */
                    std::vector<AssetFilters> GetHostIdFilters() const;

                    /**
                     * 设置根据条件过滤，当授权范围为MANUAL:自选主机时且HostIdSet为空时，必填
                     * @param _hostIdFilters 根据条件过滤，当授权范围为MANUAL:自选主机时且HostIdSet为空时，必填
                     * 
                     */
                    void SetHostIdFilters(const std::vector<AssetFilters>& _hostIdFilters);

                    /**
                     * 判断参数 HostIdFilters 是否已赋值
                     * @return HostIdFilters 是否已赋值
                     * 
                     */
                    bool HostIdFiltersHasBeenSet() const;

                    /**
                     * 获取根据条件过滤而且排除指定主机id
                     * @return ExcludeHostIdSet 根据条件过滤而且排除指定主机id
                     * 
                     */
                    std::vector<std::string> GetExcludeHostIdSet() const;

                    /**
                     * 设置根据条件过滤而且排除指定主机id
                     * @param _excludeHostIdSet 根据条件过滤而且排除指定主机id
                     * 
                     */
                    void SetExcludeHostIdSet(const std::vector<std::string>& _excludeHostIdSet);

                    /**
                     * 判断参数 ExcludeHostIdSet 是否已赋值
                     * @return ExcludeHostIdSet 是否已赋值
                     * 
                     */
                    bool ExcludeHostIdSetHasBeenSet() const;

                    /**
                     * 获取自动扫描开关
                     * @return AutoScanEnabled 自动扫描开关
                     * 
                     */
                    int64_t GetAutoScanEnabled() const;

                    /**
                     * 设置自动扫描开关
                     * @param _autoScanEnabled 自动扫描开关
                     * 
                     */
                    void SetAutoScanEnabled(const int64_t& _autoScanEnabled);

                    /**
                     * 判断参数 AutoScanEnabled 是否已赋值
                     * @return AutoScanEnabled 是否已赋值
                     * 
                     */
                    bool AutoScanEnabledHasBeenSet() const;

                    /**
                     * 获取自动扫描范围
                     * @return ScanType 自动扫描范围
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置自动扫描范围
                     * @param _scanType 自动扫描范围
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                private:

                    /**
                     * 授权范围类别，MANUAL:自选主机节点，ALL:全部镜像
                     */
                    std::string m_rangeType;
                    bool m_rangeTypeHasBeenSet;

                    /**
                     * 每天最大的镜像授权数限制, 0表示无限制
                     */
                    int64_t m_maxDailyCount;
                    bool m_maxDailyCountHasBeenSet;

                    /**
                     * 规则是否生效，0:不生效，1:已生效
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 自选主机id，当授权范围为MANUAL:自选主机时且HostIdFilters为空时，必填
                     */
                    std::vector<std::string> m_hostIdSet;
                    bool m_hostIdSetHasBeenSet;

                    /**
                     * 规则id，在编辑时，必填
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 根据条件过滤，当授权范围为MANUAL:自选主机时且HostIdSet为空时，必填
                     */
                    std::vector<AssetFilters> m_hostIdFilters;
                    bool m_hostIdFiltersHasBeenSet;

                    /**
                     * 根据条件过滤而且排除指定主机id
                     */
                    std::vector<std::string> m_excludeHostIdSet;
                    bool m_excludeHostIdSetHasBeenSet;

                    /**
                     * 自动扫描开关
                     */
                    int64_t m_autoScanEnabled;
                    bool m_autoScanEnabledHasBeenSet;

                    /**
                     * 自动扫描范围
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDEDITIMAGEAUTOAUTHORIZEDRULEREQUEST_H_
