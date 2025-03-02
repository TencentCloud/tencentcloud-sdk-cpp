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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 用量明细
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子客企业标识
                     * @return ProxyOrganizationOpenId 子客企业标识
                     * 
                     */
                    std::string GetProxyOrganizationOpenId() const;

                    /**
                     * 设置子客企业标识
                     * @param _proxyOrganizationOpenId 子客企业标识
                     * 
                     */
                    void SetProxyOrganizationOpenId(const std::string& _proxyOrganizationOpenId);

                    /**
                     * 判断参数 ProxyOrganizationOpenId 是否已赋值
                     * @return ProxyOrganizationOpenId 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationOpenIdHasBeenSet() const;

                    /**
                     * 获取子客企业名
                     * @return ProxyOrganizationName 子客企业名
                     * 
                     */
                    std::string GetProxyOrganizationName() const;

                    /**
                     * 设置子客企业名
                     * @param _proxyOrganizationName 子客企业名
                     * 
                     */
                    void SetProxyOrganizationName(const std::string& _proxyOrganizationName);

                    /**
                     * 判断参数 ProxyOrganizationName 是否已赋值
                     * @return ProxyOrganizationName 是否已赋值
                     * 
                     */
                    bool ProxyOrganizationNameHasBeenSet() const;

                    /**
                     * 获取对应的消耗日期, **如果是汇总数据则为1970-01-01**
                     * @return Date 对应的消耗日期, **如果是汇总数据则为1970-01-01**
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置对应的消耗日期, **如果是汇总数据则为1970-01-01**
                     * @param _date 对应的消耗日期, **如果是汇总数据则为1970-01-01**
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取消耗合同数量
                     * @return Usage 消耗合同数量
                     * 
                     */
                    uint64_t GetUsage() const;

                    /**
                     * 设置消耗合同数量
                     * @param _usage 消耗合同数量
                     * 
                     */
                    void SetUsage(const uint64_t& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取撤回合同数量
                     * @return Cancel 撤回合同数量
                     * 
                     */
                    uint64_t GetCancel() const;

                    /**
                     * 设置撤回合同数量
                     * @param _cancel 撤回合同数量
                     * 
                     */
                    void SetCancel(const uint64_t& _cancel);

                    /**
                     * 判断参数 Cancel 是否已赋值
                     * @return Cancel 是否已赋值
                     * 
                     */
                    bool CancelHasBeenSet() const;

                    /**
                     * 获取消耗渠道
                     * @return FlowChannel 消耗渠道
                     * 
                     */
                    std::string GetFlowChannel() const;

                    /**
                     * 设置消耗渠道
                     * @param _flowChannel 消耗渠道
                     * 
                     */
                    void SetFlowChannel(const std::string& _flowChannel);

                    /**
                     * 判断参数 FlowChannel 是否已赋值
                     * @return FlowChannel 是否已赋值
                     * 
                     */
                    bool FlowChannelHasBeenSet() const;

                private:

                    /**
                     * 子客企业标识
                     */
                    std::string m_proxyOrganizationOpenId;
                    bool m_proxyOrganizationOpenIdHasBeenSet;

                    /**
                     * 子客企业名
                     */
                    std::string m_proxyOrganizationName;
                    bool m_proxyOrganizationNameHasBeenSet;

                    /**
                     * 对应的消耗日期, **如果是汇总数据则为1970-01-01**
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 消耗合同数量
                     */
                    uint64_t m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 撤回合同数量
                     */
                    uint64_t m_cancel;
                    bool m_cancelHasBeenSet;

                    /**
                     * 消耗渠道
                     */
                    std::string m_flowChannel;
                    bool m_flowChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_USAGEDETAIL_H_
