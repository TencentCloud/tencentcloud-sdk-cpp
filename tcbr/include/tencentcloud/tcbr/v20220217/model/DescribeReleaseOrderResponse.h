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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBERELEASEORDERRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBERELEASEORDERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/ReleaseOrderInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeReleaseOrder返回参数结构体
                */
                class DescribeReleaseOrderResponse : public AbstractModel
                {
                public:
                    DescribeReleaseOrderResponse();
                    ~DescribeReleaseOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否存在
                     * @return IsExist 是否存在
                     * 
                     */
                    bool GetIsExist() const;

                    /**
                     * 判断参数 IsExist 是否已赋值
                     * @return IsExist 是否已赋值
                     * 
                     */
                    bool IsExistHasBeenSet() const;

                    /**
                     * 获取发布单信息
                     * @return ReleaseOrderInfo 发布单信息
                     * 
                     */
                    ReleaseOrderInfo GetReleaseOrderInfo() const;

                    /**
                     * 判断参数 ReleaseOrderInfo 是否已赋值
                     * @return ReleaseOrderInfo 是否已赋值
                     * 
                     */
                    bool ReleaseOrderInfoHasBeenSet() const;

                    /**
                     * 获取上一次成功发布时间
                     * @return LastReleasedSuccessTime 上一次成功发布时间
                     * 
                     */
                    std::string GetLastReleasedSuccessTime() const;

                    /**
                     * 判断参数 LastReleasedSuccessTime 是否已赋值
                     * @return LastReleasedSuccessTime 是否已赋值
                     * 
                     */
                    bool LastReleasedSuccessTimeHasBeenSet() const;

                private:

                    /**
                     * 是否存在
                     */
                    bool m_isExist;
                    bool m_isExistHasBeenSet;

                    /**
                     * 发布单信息
                     */
                    ReleaseOrderInfo m_releaseOrderInfo;
                    bool m_releaseOrderInfoHasBeenSet;

                    /**
                     * 上一次成功发布时间
                     */
                    std::string m_lastReleasedSuccessTime;
                    bool m_lastReleasedSuccessTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBERELEASEORDERRESPONSE_H_
