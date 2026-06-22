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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPDETAIL_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 催办合同组下签署人维度详细信息。
                */
                class RemindFlowGroupDetail : public AbstractModel
                {
                public:
                    RemindFlowGroupDetail();
                    ~RemindFlowGroupDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该签署人在合同中的签署顺序</p>
                     * @return ApproverOrder <p>该签署人在合同中的签署顺序</p>
                     * 
                     */
                    int64_t GetApproverOrder() const;

                    /**
                     * 设置<p>该签署人在合同中的签署顺序</p>
                     * @param _approverOrder <p>该签署人在合同中的签署顺序</p>
                     * 
                     */
                    void SetApproverOrder(const int64_t& _approverOrder);

                    /**
                     * 判断参数 ApproverOrder 是否已赋值
                     * @return ApproverOrder 是否已赋值
                     * 
                     */
                    bool ApproverOrderHasBeenSet() const;

                    /**
                     * 获取<p>签署人对应的签署id，签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。</p><p>在<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl/">CreateFlowSignUrl</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl/">CreateBatchQuickSignUrl</a>等接口生成签署链接时，可以通过查询合同流程的详情信息接口 <a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a> 获取签署人的Signld，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</p>
                     * @return SignId <p>签署人对应的签署id，签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。</p><p>在<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl/">CreateFlowSignUrl</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl/">CreateBatchQuickSignUrl</a>等接口生成签署链接时，可以通过查询合同流程的详情信息接口 <a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a> 获取签署人的Signld，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</p>
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置<p>签署人对应的签署id，签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。</p><p>在<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl/">CreateFlowSignUrl</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl/">CreateBatchQuickSignUrl</a>等接口生成签署链接时，可以通过查询合同流程的详情信息接口 <a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a> 获取签署人的Signld，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</p>
                     * @param _signId <p>签署人对应的签署id，签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。</p><p>在<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl/">CreateFlowSignUrl</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl/">CreateBatchQuickSignUrl</a>等接口生成签署链接时，可以通过查询合同流程的详情信息接口 <a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a> 获取签署人的Signld，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</p>
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取<p>催办状态</p><p>枚举值：</p><ul><li>0： 成功</li><li>2： 无需催办</li><li>5： 超过次数限制</li></ul>
                     * @return Status <p>催办状态</p><p>枚举值：</p><ul><li>0： 成功</li><li>2： 无需催办</li><li>5： 超过次数限制</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>催办状态</p><p>枚举值：</p><ul><li>0： 成功</li><li>2： 无需催办</li><li>5： 超过次数限制</li></ul>
                     * @param _status <p>催办状态</p><p>枚举值：</p><ul><li>0： 成功</li><li>2： 无需催办</li><li>5： 超过次数限制</li></ul>
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
                     * 获取<p>描述当前催办结果的原因</p>
                     * @return Reason <p>描述当前催办结果的原因</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>描述当前催办结果的原因</p>
                     * @param _reason <p>描述当前催办结果的原因</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * <p>该签署人在合同中的签署顺序</p>
                     */
                    int64_t m_approverOrder;
                    bool m_approverOrderHasBeenSet;

                    /**
                     * <p>签署人对应的签署id，签署方唯一编号，一个全局唯一的标识符，不同的流程不会出现冲突。</p><p>在<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateFlowSignUrl/">CreateFlowSignUrl</a>、<a href="https://qian.tencent.com/developers/companyApis/startFlows/CreateBatchQuickSignUrl/">CreateBatchQuickSignUrl</a>等接口生成签署链接时，可以通过查询合同流程的详情信息接口 <a href="https://qian.tencent.com/developers/companyApis/queryFlows/DescribeFlowInfo/">DescribeFlowInfo</a> 获取签署人的Signld，然后可以将此值传入，为该签署人创建签署链接。这样可以避免重复传输姓名、手机号、证件号等其他信息。</p>
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * <p>催办状态</p><p>枚举值：</p><ul><li>0： 成功</li><li>2： 无需催办</li><li>5： 超过次数限制</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>描述当前催办结果的原因</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_REMINDFLOWGROUPDETAIL_H_
