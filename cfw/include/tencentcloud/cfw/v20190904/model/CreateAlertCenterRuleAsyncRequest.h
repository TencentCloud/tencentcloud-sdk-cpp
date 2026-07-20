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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateAlertCenterRuleAsync请求参数结构体
                */
                class CreateAlertCenterRuleAsyncRequest : public AbstractModel
                {
                public:
                    CreateAlertCenterRuleAsyncRequest();
                    ~CreateAlertCenterRuleAsyncRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>处置时间<br>1  1天<br>7   7天<br>-2 永久</p>
                     * @return HandleTime <p>处置时间<br>1  1天<br>7   7天<br>-2 永久</p>
                     * 
                     */
                    int64_t GetHandleTime() const;

                    /**
                     * 设置<p>处置时间<br>1  1天<br>7   7天<br>-2 永久</p>
                     * @param _handleTime <p>处置时间<br>1  1天<br>7   7天<br>-2 永久</p>
                     * 
                     */
                    void SetHandleTime(const int64_t& _handleTime);

                    /**
                     * 判断参数 HandleTime 是否已赋值
                     * @return HandleTime 是否已赋值
                     * 
                     */
                    bool HandleTimeHasBeenSet() const;

                    /**
                     * 获取<p>处置类型<br>当HandleIdList 不为空时：1封禁 2放通<br>当HandleIpList 不为空时：3放通 4封禁</p>
                     * @return HandleType <p>处置类型<br>当HandleIdList 不为空时：1封禁 2放通<br>当HandleIpList 不为空时：3放通 4封禁</p>
                     * 
                     */
                    int64_t GetHandleType() const;

                    /**
                     * 设置<p>处置类型<br>当HandleIdList 不为空时：1封禁 2放通<br>当HandleIpList 不为空时：3放通 4封禁</p>
                     * @param _handleType <p>处置类型<br>当HandleIdList 不为空时：1封禁 2放通<br>当HandleIpList 不为空时：3放通 4封禁</p>
                     * 
                     */
                    void SetHandleType(const int64_t& _handleType);

                    /**
                     * 判断参数 HandleType 是否已赋值
                     * @return HandleType 是否已赋值
                     * 
                     */
                    bool HandleTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前日志方向： 0 出向 1 入向</p>
                     * @return AlertDirection <p>当前日志方向： 0 出向 1 入向</p>
                     * 
                     */
                    int64_t GetAlertDirection() const;

                    /**
                     * 设置<p>当前日志方向： 0 出向 1 入向</p>
                     * @param _alertDirection <p>当前日志方向： 0 出向 1 入向</p>
                     * 
                     */
                    void SetAlertDirection(const int64_t& _alertDirection);

                    /**
                     * 判断参数 AlertDirection 是否已赋值
                     * @return AlertDirection 是否已赋值
                     * 
                     */
                    bool AlertDirectionHasBeenSet() const;

                    /**
                     * 获取<p>处置方向： 0出向 1入向 0,1出入向 3内网</p>
                     * @return HandleDirection <p>处置方向： 0出向 1入向 0,1出入向 3内网</p>
                     * 
                     */
                    std::string GetHandleDirection() const;

                    /**
                     * 设置<p>处置方向： 0出向 1入向 0,1出入向 3内网</p>
                     * @param _handleDirection <p>处置方向： 0出向 1入向 0,1出入向 3内网</p>
                     * 
                     */
                    void SetHandleDirection(const std::string& _handleDirection);

                    /**
                     * 判断参数 HandleDirection 是否已赋值
                     * @return HandleDirection 是否已赋值
                     * 
                     */
                    bool HandleDirectionHasBeenSet() const;

                    /**
                     * 获取<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @return CfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    std::string GetCfwAiAgentOperationSource() const;

                    /**
                     * 设置<p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * @param _cfwAiAgentOperationSource <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     * 
                     */
                    void SetCfwAiAgentOperationSource(const std::string& _cfwAiAgentOperationSource);

                    /**
                     * 判断参数 CfwAiAgentOperationSource 是否已赋值
                     * @return CfwAiAgentOperationSource 是否已赋值
                     * 
                     */
                    bool CfwAiAgentOperationSourceHasBeenSet() const;

                    /**
                     * 获取<p>处置对象,ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * @return HandleIdList <p>处置对象,ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIdList() const;

                    /**
                     * 设置<p>处置对象,ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * @param _handleIdList <p>处置对象,ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    void SetHandleIdList(const std::vector<std::string>& _handleIdList);

                    /**
                     * 判断参数 HandleIdList 是否已赋值
                     * @return HandleIdList 是否已赋值
                     * 
                     */
                    bool HandleIdListHasBeenSet() const;

                    /**
                     * 获取<p>处置对象,IP列表，  IdLists,IpList,EventIdList三选一</p>
                     * @return HandleIpList <p>处置对象,IP列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    std::vector<std::string> GetHandleIpList() const;

                    /**
                     * 设置<p>处置对象,IP列表，  IdLists,IpList,EventIdList三选一</p>
                     * @param _handleIpList <p>处置对象,IP列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    void SetHandleIpList(const std::vector<std::string>& _handleIpList);

                    /**
                     * 判断参数 HandleIpList 是否已赋值
                     * @return HandleIpList 是否已赋值
                     * 
                     */
                    bool HandleIpListHasBeenSet() const;

                    /**
                     * 获取<p>处置描述</p>
                     * @return HandleComment <p>处置描述</p>
                     * 
                     */
                    std::string GetHandleComment() const;

                    /**
                     * 设置<p>处置描述</p>
                     * @param _handleComment <p>处置描述</p>
                     * 
                     */
                    void SetHandleComment(const std::string& _handleComment);

                    /**
                     * 判断参数 HandleComment 是否已赋值
                     * @return HandleComment 是否已赋值
                     * 
                     */
                    bool HandleCommentHasBeenSet() const;

                    /**
                     * 获取<p>放通原因:<br>0默认 1重复 2误报 3紧急放通</p>
                     * @return IgnoreReason <p>放通原因:<br>0默认 1重复 2误报 3紧急放通</p>
                     * 
                     */
                    int64_t GetIgnoreReason() const;

                    /**
                     * 设置<p>放通原因:<br>0默认 1重复 2误报 3紧急放通</p>
                     * @param _ignoreReason <p>放通原因:<br>0默认 1重复 2误报 3紧急放通</p>
                     * 
                     */
                    void SetIgnoreReason(const int64_t& _ignoreReason);

                    /**
                     * 判断参数 IgnoreReason 是否已赋值
                     * @return IgnoreReason 是否已赋值
                     * 
                     */
                    bool IgnoreReasonHasBeenSet() const;

                    /**
                     * 获取<p>封禁域名-保留字段</p>
                     * @return BlockDomain <p>封禁域名-保留字段</p>
                     * 
                     */
                    std::string GetBlockDomain() const;

                    /**
                     * 设置<p>封禁域名-保留字段</p>
                     * @param _blockDomain <p>封禁域名-保留字段</p>
                     * 
                     */
                    void SetBlockDomain(const std::string& _blockDomain);

                    /**
                     * 判断参数 BlockDomain 是否已赋值
                     * @return BlockDomain 是否已赋值
                     * 
                     */
                    bool BlockDomainHasBeenSet() const;

                    /**
                     * 获取<p>处置对象,事件ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * @return HandleEventIdList <p>处置对象,事件ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    std::vector<std::string> GetHandleEventIdList() const;

                    /**
                     * 设置<p>处置对象,事件ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * @param _handleEventIdList <p>处置对象,事件ID列表，  IdLists,IpList,EventIdList三选一</p>
                     * 
                     */
                    void SetHandleEventIdList(const std::vector<std::string>& _handleEventIdList);

                    /**
                     * 判断参数 HandleEventIdList 是否已赋值
                     * @return HandleEventIdList 是否已赋值
                     * 
                     */
                    bool HandleEventIdListHasBeenSet() const;

                    /**
                     * 获取<p>加白IP列表 隔离时放通的ip列表</p>
                     * @return WhiteIpList <p>加白IP列表 隔离时放通的ip列表</p>
                     * 
                     */
                    std::vector<std::string> GetWhiteIpList() const;

                    /**
                     * 设置<p>加白IP列表 隔离时放通的ip列表</p>
                     * @param _whiteIpList <p>加白IP列表 隔离时放通的ip列表</p>
                     * 
                     */
                    void SetWhiteIpList(const std::vector<std::string>& _whiteIpList);

                    /**
                     * 判断参数 WhiteIpList 是否已赋值
                     * @return WhiteIpList 是否已赋值
                     * 
                     */
                    bool WhiteIpListHasBeenSet() const;

                    /**
                     * 获取<p>隔离类型 1 互联网入站 2 互联网出站 4 内网访问</p>
                     * @return IsolateType <p>隔离类型 1 互联网入站 2 互联网出站 4 内网访问</p>
                     * 
                     */
                    std::vector<int64_t> GetIsolateType() const;

                    /**
                     * 设置<p>隔离类型 1 互联网入站 2 互联网出站 4 内网访问</p>
                     * @param _isolateType <p>隔离类型 1 互联网入站 2 互联网出站 4 内网访问</p>
                     * 
                     */
                    void SetIsolateType(const std::vector<int64_t>& _isolateType);

                    /**
                     * 判断参数 IsolateType 是否已赋值
                     * @return IsolateType 是否已赋值
                     * 
                     */
                    bool IsolateTypeHasBeenSet() const;

                    /**
                     * 获取<p>隔离资产列表</p>
                     * @return AssetIdList <p>隔离资产列表</p>
                     * 
                     */
                    std::vector<std::string> GetAssetIdList() const;

                    /**
                     * 设置<p>隔离资产列表</p>
                     * @param _assetIdList <p>隔离资产列表</p>
                     * 
                     */
                    void SetAssetIdList(const std::vector<std::string>& _assetIdList);

                    /**
                     * 判断参数 AssetIdList 是否已赋值
                     * @return AssetIdList 是否已赋值
                     * 
                     */
                    bool AssetIdListHasBeenSet() const;

                    /**
                     * 获取<p>处置HandleIpList，属于的告警事件ID</p>
                     * @return TargetEventIdList <p>处置HandleIpList，属于的告警事件ID</p>
                     * 
                     */
                    std::vector<std::string> GetTargetEventIdList() const;

                    /**
                     * 设置<p>处置HandleIpList，属于的告警事件ID</p>
                     * @param _targetEventIdList <p>处置HandleIpList，属于的告警事件ID</p>
                     * 
                     */
                    void SetTargetEventIdList(const std::vector<std::string>& _targetEventIdList);

                    /**
                     * 判断参数 TargetEventIdList 是否已赋值
                     * @return TargetEventIdList 是否已赋值
                     * 
                     */
                    bool TargetEventIdListHasBeenSet() const;

                private:

                    /**
                     * <p>处置时间<br>1  1天<br>7   7天<br>-2 永久</p>
                     */
                    int64_t m_handleTime;
                    bool m_handleTimeHasBeenSet;

                    /**
                     * <p>处置类型<br>当HandleIdList 不为空时：1封禁 2放通<br>当HandleIpList 不为空时：3放通 4封禁</p>
                     */
                    int64_t m_handleType;
                    bool m_handleTypeHasBeenSet;

                    /**
                     * <p>当前日志方向： 0 出向 1 入向</p>
                     */
                    int64_t m_alertDirection;
                    bool m_alertDirectionHasBeenSet;

                    /**
                     * <p>处置方向： 0出向 1入向 0,1出入向 3内网</p>
                     */
                    std::string m_handleDirection;
                    bool m_handleDirectionHasBeenSet;

                    /**
                     * <p>AI操作来源</p><p>枚举值：</p><ul><li>console： 控制台来源值</li><li>wechat： 微信</li></ul>
                     */
                    std::string m_cfwAiAgentOperationSource;
                    bool m_cfwAiAgentOperationSourceHasBeenSet;

                    /**
                     * <p>处置对象,ID列表，  IdLists,IpList,EventIdList三选一</p>
                     */
                    std::vector<std::string> m_handleIdList;
                    bool m_handleIdListHasBeenSet;

                    /**
                     * <p>处置对象,IP列表，  IdLists,IpList,EventIdList三选一</p>
                     */
                    std::vector<std::string> m_handleIpList;
                    bool m_handleIpListHasBeenSet;

                    /**
                     * <p>处置描述</p>
                     */
                    std::string m_handleComment;
                    bool m_handleCommentHasBeenSet;

                    /**
                     * <p>放通原因:<br>0默认 1重复 2误报 3紧急放通</p>
                     */
                    int64_t m_ignoreReason;
                    bool m_ignoreReasonHasBeenSet;

                    /**
                     * <p>封禁域名-保留字段</p>
                     */
                    std::string m_blockDomain;
                    bool m_blockDomainHasBeenSet;

                    /**
                     * <p>处置对象,事件ID列表，  IdLists,IpList,EventIdList三选一</p>
                     */
                    std::vector<std::string> m_handleEventIdList;
                    bool m_handleEventIdListHasBeenSet;

                    /**
                     * <p>加白IP列表 隔离时放通的ip列表</p>
                     */
                    std::vector<std::string> m_whiteIpList;
                    bool m_whiteIpListHasBeenSet;

                    /**
                     * <p>隔离类型 1 互联网入站 2 互联网出站 4 内网访问</p>
                     */
                    std::vector<int64_t> m_isolateType;
                    bool m_isolateTypeHasBeenSet;

                    /**
                     * <p>隔离资产列表</p>
                     */
                    std::vector<std::string> m_assetIdList;
                    bool m_assetIdListHasBeenSet;

                    /**
                     * <p>处置HandleIpList，属于的告警事件ID</p>
                     */
                    std::vector<std::string> m_targetEventIdList;
                    bool m_targetEventIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATEALERTCENTERRULEASYNCREQUEST_H_
