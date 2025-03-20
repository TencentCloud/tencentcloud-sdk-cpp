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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryAssetStatus返回参数结构体
                */
                class DescribeAssetImageRegistryAssetStatusResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryAssetStatusResponse();
                    ~DescribeAssetImageRegistryAssetStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取更新进度状态,doing更新中，success更新成功，failed失败
                     * @return Status 更新进度状态,doing更新中，success更新成功，failed失败
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
                     * 获取错误信息
                     * @return Err 错误信息
                     * 
                     */
                    std::string GetErr() const;

                    /**
                     * 判断参数 Err 是否已赋值
                     * @return Err 是否已赋值
                     * 
                     */
                    bool ErrHasBeenSet() const;

                    /**
                     * 获取最后一次同步成功时间
                     * @return LatestSyncSuccessTime 最后一次同步成功时间
                     * 
                     */
                    std::string GetLatestSyncSuccessTime() const;

                    /**
                     * 判断参数 LatestSyncSuccessTime 是否已赋值
                     * @return LatestSyncSuccessTime 是否已赋值
                     * 
                     */
                    bool LatestSyncSuccessTimeHasBeenSet() const;

                private:

                    /**
                     * 更新进度状态,doing更新中，success更新成功，failed失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_err;
                    bool m_errHasBeenSet;

                    /**
                     * 最后一次同步成功时间
                     */
                    std::string m_latestSyncSuccessTime;
                    bool m_latestSyncSuccessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYASSETSTATUSRESPONSE_H_
