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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCROBTAINSTATUSREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCROBTAINSTATUSREQUEST_H_

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
                * ModifyCRObtainStatus请求参数结构体
                */
                class ModifyCRObtainStatusRequest : public AbstractModel
                {
                public:
                    ModifyCRObtainStatusRequest();
                    ~ModifyCRObtainStatusRequest() = default;
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
                     * 获取取证类型：1-网页取证 2-过程取证(暂不提供)
                     * @return ObtainType 取证类型：1-网页取证 2-过程取证(暂不提供)
                     * 
                     */
                    int64_t GetObtainType() const;

                    /**
                     * 设置取证类型：1-网页取证 2-过程取证(暂不提供)
                     * @param _obtainType 取证类型：1-网页取证 2-过程取证(暂不提供)
                     * 
                     */
                    void SetObtainType(const int64_t& _obtainType);

                    /**
                     * 判断参数 ObtainType 是否已赋值
                     * @return ObtainType 是否已赋值
                     * 
                     */
                    bool ObtainTypeHasBeenSet() const;

                    /**
                     * 获取过程取证的取证时长，单位分钟，范围0-120
                     * @return ObtainDuration 过程取证的取证时长，单位分钟，范围0-120
                     * 
                     */
                    int64_t GetObtainDuration() const;

                    /**
                     * 设置过程取证的取证时长，单位分钟，范围0-120
                     * @param _obtainDuration 过程取证的取证时长，单位分钟，范围0-120
                     * 
                     */
                    void SetObtainDuration(const int64_t& _obtainDuration);

                    /**
                     * 判断参数 ObtainDuration 是否已赋值
                     * @return ObtainDuration 是否已赋值
                     * 
                     */
                    bool ObtainDurationHasBeenSet() const;

                    /**
                     * 获取取证结果回调地址
                     * @return ObtainUrl 取证结果回调地址
                     * 
                     */
                    std::string GetObtainUrl() const;

                    /**
                     * 设置取证结果回调地址
                     * @param _obtainUrl 取证结果回调地址
                     * 
                     */
                    void SetObtainUrl(const std::string& _obtainUrl);

                    /**
                     * 判断参数 ObtainUrl 是否已赋值
                     * @return ObtainUrl 是否已赋值
                     * 
                     */
                    bool ObtainUrlHasBeenSet() const;

                private:

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 取证类型：1-网页取证 2-过程取证(暂不提供)
                     */
                    int64_t m_obtainType;
                    bool m_obtainTypeHasBeenSet;

                    /**
                     * 过程取证的取证时长，单位分钟，范围0-120
                     */
                    int64_t m_obtainDuration;
                    bool m_obtainDurationHasBeenSet;

                    /**
                     * 取证结果回调地址
                     */
                    std::string m_obtainUrl;
                    bool m_obtainUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MODIFYCROBTAINSTATUSREQUEST_H_
