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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTARESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/OverviewResourceQuotaDataLite.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeOverviewResourceQuota返回参数结构体
                */
                class DescribeOverviewResourceQuotaResponse : public AbstractModel
                {
                public:
                    DescribeOverviewResourceQuotaResponse();
                    ~DescribeOverviewResourceQuotaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资源与配额详情数据</p><p>包含详情字段和能力标识，具体字段含义见关联数据结构说明。访问控制规则同时提供汇总字段及按互联网边界、NAT边界、VPC边界拆分的字段。</p>
                     * @return Data <p>资源与配额详情数据</p><p>包含详情字段和能力标识，具体字段含义见关联数据结构说明。访问控制规则同时提供汇总字段及按互联网边界、NAT边界、VPC边界拆分的字段。</p>
                     * 
                     */
                    OverviewResourceQuotaDataLite GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>返回代码</p>
                     * @return ReturnCode <p>返回代码</p>
                     * 
                     */
                    uint64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取<p>返回状态字符</p>
                     * @return ReturnMsg <p>返回状态字符</p>
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * <p>资源与配额详情数据</p><p>包含详情字段和能力标识，具体字段含义见关联数据结构说明。访问控制规则同时提供汇总字段及按互联网边界、NAT边界、VPC边界拆分的字段。</p>
                     */
                    OverviewResourceQuotaDataLite m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>返回代码</p>
                     */
                    uint64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * <p>返回状态字符</p>
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEOVERVIEWRESOURCEQUOTARESPONSE_H_
