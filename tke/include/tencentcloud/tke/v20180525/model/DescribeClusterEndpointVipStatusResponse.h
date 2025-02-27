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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTVIPSTATUSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTVIPSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterEndpointVipStatus返回参数结构体
                */
                class DescribeClusterEndpointVipStatusResponse : public AbstractModel
                {
                public:
                    DescribeClusterEndpointVipStatusResponse();
                    ~DescribeClusterEndpointVipStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取端口操作状态 (Creating 创建中  CreateFailed 创建失败 Created 创建完成 Deleting 删除中 DeletedFailed 删除失败 Deleted 已删除 NotFound 未发现操作 )
                     * @return Status 端口操作状态 (Creating 创建中  CreateFailed 创建失败 Created 创建完成 Deleting 删除中 DeletedFailed 删除失败 Deleted 已删除 NotFound 未发现操作 )
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取操作失败的原因
                     * @return ErrorMsg 操作失败的原因
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 端口操作状态 (Creating 创建中  CreateFailed 创建失败 Created 创建完成 Deleting 删除中 DeletedFailed 删除失败 Deleted 已删除 NotFound 未发现操作 )
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 操作失败的原因
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERENDPOINTVIPSTATUSRESPONSE_H_
