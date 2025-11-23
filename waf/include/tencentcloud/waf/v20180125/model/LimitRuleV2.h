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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LIMITRULEV2_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LIMITRULEV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LimitMethod.h>
#include <tencentcloud/waf/v20180125/model/LimitPath.h>
#include <tencentcloud/waf/v20180125/model/LimitHeader.h>
#include <tencentcloud/waf/v20180125/model/LimitWindow.h>
#include <tencentcloud/waf/v20180125/model/LimitHeaderName.h>
#include <tencentcloud/waf/v20180125/model/MatchOption.h>
#include <tencentcloud/waf/v20180125/model/RedirectInfo.h>
#include <tencentcloud/waf/v20180125/model/PathItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 自研版限流规则数据结构
                */
                class LimitRuleV2 : public AbstractModel
                {
                public:
                    LimitRuleV2();
                    ~LimitRuleV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return LimitRuleID 规则ID
                     * 
                     */
                    int64_t GetLimitRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _limitRuleID 规则ID
                     * 
                     */
                    void SetLimitRuleID(const int64_t& _limitRuleID);

                    /**
                     * 判断参数 LimitRuleID 是否已赋值
                     * @return LimitRuleID 是否已赋值
                     * 
                     */
                    bool LimitRuleIDHasBeenSet() const;

                    /**
                     * 获取规则名
                     * @return Name 规则名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名
                     * @param _name 规则名
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
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取规则开关，0表示关闭，1表示开启
                     * @return Status 规则开关，0表示关闭，1表示开启
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则开关，0表示关闭，1表示开启
                     * @param _status 规则开关，0表示关闭，1表示开启
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return TsVersion 时间戳
                     * 
                     */
                    int64_t GetTsVersion() const;

                    /**
                     * 设置时间戳
                     * @param _tsVersion 时间戳
                     * 
                     */
                    void SetTsVersion(const int64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取限流对象，API或Domain
                     * @return LimitObject 限流对象，API或Domain
                     * 
                     */
                    std::string GetLimitObject() const;

                    /**
                     * 设置限流对象，API或Domain
                     * @param _limitObject 限流对象，API或Domain
                     * 
                     */
                    void SetLimitObject(const std::string& _limitObject);

                    /**
                     * 判断参数 LimitObject 是否已赋值
                     * @return LimitObject 是否已赋值
                     * 
                     */
                    bool LimitObjectHasBeenSet() const;

                    /**
                     * 获取限流方法名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitMethod 限流方法名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LimitMethod GetLimitMethod() const;

                    /**
                     * 设置限流方法名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitMethod 限流方法名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitMethod(const LimitMethod& _limitMethod);

                    /**
                     * 判断参数 LimitMethod 是否已赋值
                     * @return LimitMethod 是否已赋值
                     * 
                     */
                    bool LimitMethodHasBeenSet() const;

                    /**
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitPaths 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LimitPath GetLimitPaths() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitPaths 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitPaths(const LimitPath& _limitPaths);

                    /**
                     * 判断参数 LimitPaths 是否已赋值
                     * @return LimitPaths 是否已赋值
                     * 
                     */
                    bool LimitPathsHasBeenSet() const;

                    /**
                     * 获取Header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitHeaders Header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LimitHeader> GetLimitHeaders() const;

                    /**
                     * 设置Header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitHeaders Header参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitHeaders(const std::vector<LimitHeader>& _limitHeaders);

                    /**
                     * 判断参数 LimitHeaders 是否已赋值
                     * @return LimitHeaders 是否已赋值
                     * 
                     */
                    bool LimitHeadersHasBeenSet() const;

                    /**
                     * 获取限流窗口
                     * @return LimitWindow 限流窗口
                     * 
                     */
                    LimitWindow GetLimitWindow() const;

                    /**
                     * 设置限流窗口
                     * @param _limitWindow 限流窗口
                     * 
                     */
                    void SetLimitWindow(const LimitWindow& _limitWindow);

                    /**
                     * 判断参数 LimitWindow 是否已赋值
                     * @return LimitWindow 是否已赋值
                     * 
                     */
                    bool LimitWindowHasBeenSet() const;

                    /**
                     * 获取限流策略，0:观察,1:拦截，2:人机
                     * @return LimitStrategy 限流策略，0:观察,1:拦截，2:人机
                     * 
                     */
                    int64_t GetLimitStrategy() const;

                    /**
                     * 设置限流策略，0:观察,1:拦截，2:人机
                     * @param _limitStrategy 限流策略，0:观察,1:拦截，2:人机
                     * 
                     */
                    void SetLimitStrategy(const int64_t& _limitStrategy);

                    /**
                     * 判断参数 LimitStrategy 是否已赋值
                     * @return LimitStrategy 是否已赋值
                     * 
                     */
                    bool LimitStrategyHasBeenSet() const;

                    /**
                     * 获取Header参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LimitHeaderName Header参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LimitHeaderName GetLimitHeaderName() const;

                    /**
                     * 设置Header参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _limitHeaderName Header参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLimitHeaderName(const LimitHeaderName& _limitHeaderName);

                    /**
                     * 判断参数 LimitHeaderName 是否已赋值
                     * @return LimitHeaderName 是否已赋值
                     * 
                     */
                    bool LimitHeaderNameHasBeenSet() const;

                    /**
                     * 获取Get参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GetParamsName Get参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchOption GetGetParamsName() const;

                    /**
                     * 设置Get参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _getParamsName Get参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGetParamsName(const MatchOption& _getParamsName);

                    /**
                     * 判断参数 GetParamsName 是否已赋值
                     * @return GetParamsName 是否已赋值
                     * 
                     */
                    bool GetParamsNameHasBeenSet() const;

                    /**
                     * 获取Get参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GetParamsValue Get参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchOption GetGetParamsValue() const;

                    /**
                     * 设置Get参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _getParamsValue Get参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGetParamsValue(const MatchOption& _getParamsValue);

                    /**
                     * 判断参数 GetParamsValue 是否已赋值
                     * @return GetParamsValue 是否已赋值
                     * 
                     */
                    bool GetParamsValueHasBeenSet() const;

                    /**
                     * 获取Post参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostParamsName Post参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchOption GetPostParamsName() const;

                    /**
                     * 设置Post参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postParamsName Post参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostParamsName(const MatchOption& _postParamsName);

                    /**
                     * 判断参数 PostParamsName 是否已赋值
                     * @return PostParamsName 是否已赋值
                     * 
                     */
                    bool PostParamsNameHasBeenSet() const;

                    /**
                     * 获取Post参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostParamsValue Post参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchOption GetPostParamsValue() const;

                    /**
                     * 设置Post参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postParamsValue Post参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostParamsValue(const MatchOption& _postParamsValue);

                    /**
                     * 判断参数 PostParamsValue 是否已赋值
                     * @return PostParamsValue 是否已赋值
                     * 
                     */
                    bool PostParamsValueHasBeenSet() const;

                    /**
                     * 获取Ip属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpLocation Ip属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MatchOption GetIpLocation() const;

                    /**
                     * 设置Ip属地
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ipLocation Ip属地
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIpLocation(const MatchOption& _ipLocation);

                    /**
                     * 判断参数 IpLocation 是否已赋值
                     * @return IpLocation 是否已赋值
                     * 
                     */
                    bool IpLocationHasBeenSet() const;

                    /**
                     * 获取重定向信息，当LimitStrategy为2时，此字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectInfo 重定向信息，当LimitStrategy为2时，此字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RedirectInfo GetRedirectInfo() const;

                    /**
                     * 设置重定向信息，当LimitStrategy为2时，此字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _redirectInfo 重定向信息，当LimitStrategy为2时，此字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRedirectInfo(const RedirectInfo& _redirectInfo);

                    /**
                     * 判断参数 RedirectInfo 是否已赋值
                     * @return RedirectInfo 是否已赋值
                     * 
                     */
                    bool RedirectInfoHasBeenSet() const;

                    /**
                     * 获取拦截页面，0表示429，否则为BlockPageID
                     * @return BlockPage 拦截页面，0表示429，否则为BlockPageID
                     * 
                     */
                    int64_t GetBlockPage() const;

                    /**
                     * 设置拦截页面，0表示429，否则为BlockPageID
                     * @param _blockPage 拦截页面，0表示429，否则为BlockPageID
                     * 
                     */
                    void SetBlockPage(const int64_t& _blockPage);

                    /**
                     * 判断参数 BlockPage 是否已赋值
                     * @return BlockPage 是否已赋值
                     * 
                     */
                    bool BlockPageHasBeenSet() const;

                    /**
                     * 获取限流对象来源，0：手动填写，1：API资产
                     * @return ObjectSrc 限流对象来源，0：手动填写，1：API资产
                     * 
                     */
                    int64_t GetObjectSrc() const;

                    /**
                     * 设置限流对象来源，0：手动填写，1：API资产
                     * @param _objectSrc 限流对象来源，0：手动填写，1：API资产
                     * 
                     */
                    void SetObjectSrc(const int64_t& _objectSrc);

                    /**
                     * 判断参数 ObjectSrc 是否已赋值
                     * @return ObjectSrc 是否已赋值
                     * 
                     */
                    bool ObjectSrcHasBeenSet() const;

                    /**
                     * 获取是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
                     * @return QuotaShare 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
                     * 
                     */
                    bool GetQuotaShare() const;

                    /**
                     * 设置是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
                     * @param _quotaShare 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
                     * 
                     */
                    void SetQuotaShare(const bool& _quotaShare);

                    /**
                     * 判断参数 QuotaShare 是否已赋值
                     * @return QuotaShare 是否已赋值
                     * 
                     */
                    bool QuotaShareHasBeenSet() const;

                    /**
                     * 获取路径选项,可配置每个路径的请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathsOption 路径选项,可配置每个路径的请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathItem> GetPathsOption() const;

                    /**
                     * 设置路径选项,可配置每个路径的请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathsOption 路径选项,可配置每个路径的请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathsOption(const std::vector<PathItem>& _pathsOption);

                    /**
                     * 判断参数 PathsOption 是否已赋值
                     * @return PathsOption 是否已赋值
                     * 
                     */
                    bool PathsOptionHasBeenSet() const;

                    /**
                     * 获取574新增需求，限流执行顺序，0：默认情况，限流优先，1：安全防护优先
                     * @return Order 574新增需求，限流执行顺序，0：默认情况，限流优先，1：安全防护优先
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置574新增需求，限流执行顺序，0：默认情况，限流优先，1：安全防护优先
                     * @param _order 574新增需求，限流执行顺序，0：默认情况，限流优先，1：安全防护优先
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    int64_t m_limitRuleID;
                    bool m_limitRuleIDHasBeenSet;

                    /**
                     * 规则名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则开关，0表示关闭，1表示开启
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 时间戳
                     */
                    int64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 限流对象，API或Domain
                     */
                    std::string m_limitObject;
                    bool m_limitObjectHasBeenSet;

                    /**
                     * 限流方法名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LimitMethod m_limitMethod;
                    bool m_limitMethodHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LimitPath m_limitPaths;
                    bool m_limitPathsHasBeenSet;

                    /**
                     * Header参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LimitHeader> m_limitHeaders;
                    bool m_limitHeadersHasBeenSet;

                    /**
                     * 限流窗口
                     */
                    LimitWindow m_limitWindow;
                    bool m_limitWindowHasBeenSet;

                    /**
                     * 限流策略，0:观察,1:拦截，2:人机
                     */
                    int64_t m_limitStrategy;
                    bool m_limitStrategyHasBeenSet;

                    /**
                     * Header参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LimitHeaderName m_limitHeaderName;
                    bool m_limitHeaderNameHasBeenSet;

                    /**
                     * Get参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchOption m_getParamsName;
                    bool m_getParamsNameHasBeenSet;

                    /**
                     * Get参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchOption m_getParamsValue;
                    bool m_getParamsValueHasBeenSet;

                    /**
                     * Post参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchOption m_postParamsName;
                    bool m_postParamsNameHasBeenSet;

                    /**
                     * Post参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchOption m_postParamsValue;
                    bool m_postParamsValueHasBeenSet;

                    /**
                     * Ip属地
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MatchOption m_ipLocation;
                    bool m_ipLocationHasBeenSet;

                    /**
                     * 重定向信息，当LimitStrategy为2时，此字段不为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RedirectInfo m_redirectInfo;
                    bool m_redirectInfoHasBeenSet;

                    /**
                     * 拦截页面，0表示429，否则为BlockPageID
                     */
                    int64_t m_blockPage;
                    bool m_blockPageHasBeenSet;

                    /**
                     * 限流对象来源，0：手动填写，1：API资产
                     */
                    int64_t m_objectSrc;
                    bool m_objectSrcHasBeenSet;

                    /**
                     * 是否共享配额，只有当对象为URL时有效，false表示URL独享配额，true表示所有URL共享配额
                     */
                    bool m_quotaShare;
                    bool m_quotaShareHasBeenSet;

                    /**
                     * 路径选项,可配置每个路径的请求方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathItem> m_pathsOption;
                    bool m_pathsOptionHasBeenSet;

                    /**
                     * 574新增需求，限流执行顺序，0：默认情况，限流优先，1：安全防护优先
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LIMITRULEV2_H_
