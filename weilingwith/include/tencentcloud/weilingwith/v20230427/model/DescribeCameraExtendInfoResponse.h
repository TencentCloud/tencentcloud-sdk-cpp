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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECAMERAEXTENDINFORESPONSE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECAMERAEXTENDINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/CameraExtendInfoRes.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeCameraExtendInfo返回参数结构体
                */
                class DescribeCameraExtendInfoResponse : public AbstractModel
                {
                public:
                    DescribeCameraExtendInfoResponse();
                    ~DescribeCameraExtendInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取获取视频扩展信息结果
                     * @return Result 获取视频扩展信息结果
                     * 
                     */
                    CameraExtendInfoRes GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 获取视频扩展信息结果
                     */
                    CameraExtendInfoRes m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBECAMERAEXTENDINFORESPONSE_H_
