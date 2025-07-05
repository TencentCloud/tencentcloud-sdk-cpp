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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRRIGHTSTATUSREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRRIGHTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * ModifyCRRightStatus请求参数结构体
                */
                class ModifyCRRightStatusRequest : public AbstractModel
                {
                public:
                    ModifyCRRightStatusRequest();
                    ~ModifyCRRightStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取侵权ID
                     * @return TortId 侵权ID
                     * 
                     */
                    int64_t GetTortId() const;

                    /**
                     * 设置侵权ID
                     * @param _tortId 侵权ID
                     * 
                     */
                    void SetTortId(const int64_t& _tortId);

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     * 
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取发函结果回调地址
                     * @return RightUrl 发函结果回调地址
                     * 
                     */
                    std::string GetRightUrl() const;

                    /**
                     * 设置发函结果回调地址
                     * @param _rightUrl 发函结果回调地址
                     * 
                     */
                    void SetRightUrl(const std::string& _rightUrl);

                    /**
                     * 判断参数 RightUrl 是否已赋值
                     * @return RightUrl 是否已赋值
                     * 
                     */
                    bool RightUrlHasBeenSet() const;

                private:

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 发函结果回调地址
                     */
                    std::string m_rightUrl;
                    bool m_rightUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCRRIGHTSTATUSREQUEST_H_
