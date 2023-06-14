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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMREQUEST_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeSupportedHsm请求参数结构体
                */
                class DescribeSupportedHsmRequest : public AbstractModel
                {
                public:
                    DescribeSupportedHsmRequest();
                    ~DescribeSupportedHsmRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Hsm类型，可选值all、virtulization、GHSM、EHSM、SHSM
                     * @return HsmType Hsm类型，可选值all、virtulization、GHSM、EHSM、SHSM
                     * 
                     */
                    std::string GetHsmType() const;

                    /**
                     * 设置Hsm类型，可选值all、virtulization、GHSM、EHSM、SHSM
                     * @param _hsmType Hsm类型，可选值all、virtulization、GHSM、EHSM、SHSM
                     * 
                     */
                    void SetHsmType(const std::string& _hsmType);

                    /**
                     * 判断参数 HsmType 是否已赋值
                     * @return HsmType 是否已赋值
                     * 
                     */
                    bool HsmTypeHasBeenSet() const;

                private:

                    /**
                     * Hsm类型，可选值all、virtulization、GHSM、EHSM、SHSM
                     */
                    std::string m_hsmType;
                    bool m_hsmTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMREQUEST_H_
