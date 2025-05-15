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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteFlowLog请求参数结构体
                */
                class DeleteFlowLogRequest : public AbstractModel
                {
                public:
                    DeleteFlowLogRequest();
                    ~DeleteFlowLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建；可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                     * @return FlowLogId 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建；可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                     * 
                     */
                    std::string GetFlowLogId() const;

                    /**
                     * 设置流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建；可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                     * @param _flowLogId 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建；可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                     * 
                     */
                    void SetFlowLogId(const std::string& _flowLogId);

                    /**
                     * 判断参数 FlowLogId 是否已赋值
                     * @return FlowLogId 是否已赋值
                     * 
                     */
                    bool FlowLogIdHasBeenSet() const;

                    /**
                     * 获取私用网络唯一ID。删除云联网流日志时，可不填，其他流日志类型必填。可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取流日志对应的私有网络唯一ID。也可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取当前账户的私有网络唯一ID。

                     * @return VpcId 私用网络唯一ID。删除云联网流日志时，可不填，其他流日志类型必填。可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取流日志对应的私有网络唯一ID。也可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取当前账户的私有网络唯一ID。

                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私用网络唯一ID。删除云联网流日志时，可不填，其他流日志类型必填。可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取流日志对应的私有网络唯一ID。也可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取当前账户的私有网络唯一ID。

                     * @param _vpcId 私用网络唯一ID。删除云联网流日志时，可不填，其他流日志类型必填。可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取流日志对应的私有网络唯一ID。也可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取当前账户的私有网络唯一ID。

                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * 流日志唯一ID。可通过[CreateFlowLog](https://cloud.tencent.com/document/product/215/35015)接口创建；可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取。
                     */
                    std::string m_flowLogId;
                    bool m_flowLogIdHasBeenSet;

                    /**
                     * 私用网络唯一ID。删除云联网流日志时，可不填，其他流日志类型必填。可通过[DescribeFlowLogs](https://cloud.tencent.com/document/product/215/35012)接口获取流日志对应的私有网络唯一ID。也可通过[DescribeVpcs](https://cloud.tencent.com/document/product/215/15778)接口获取当前账户的私有网络唯一ID。

                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEFLOWLOGREQUEST_H_
