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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CheckDataEngineConfigPairsValidity返回参数结构体
                */
                class CheckDataEngineConfigPairsValidityResponse : public AbstractModel
                {
                public:
                    CheckDataEngineConfigPairsValidityResponse();
                    ~CheckDataEngineConfigPairsValidityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数有效性：ture:有效，false:至少存在一个无效参数；
                     * @return IsAvailable 参数有效性：ture:有效，false:至少存在一个无效参数；
                     * 
                     */
                    bool GetIsAvailable() const;

                    /**
                     * 判断参数 IsAvailable 是否已赋值
                     * @return IsAvailable 是否已赋值
                     * 
                     */
                    bool IsAvailableHasBeenSet() const;

                    /**
                     * 获取无效参数集合
                     * @return UnavailableConfig 无效参数集合
                     * 
                     */
                    std::vector<std::string> GetUnavailableConfig() const;

                    /**
                     * 判断参数 UnavailableConfig 是否已赋值
                     * @return UnavailableConfig 是否已赋值
                     * 
                     */
                    bool UnavailableConfigHasBeenSet() const;

                private:

                    /**
                     * 参数有效性：ture:有效，false:至少存在一个无效参数；
                     */
                    bool m_isAvailable;
                    bool m_isAvailableHasBeenSet;

                    /**
                     * 无效参数集合
                     */
                    std::vector<std::string> m_unavailableConfig;
                    bool m_unavailableConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CHECKDATAENGINECONFIGPAIRSVALIDITYRESPONSE_H_
