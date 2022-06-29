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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * CreateNatFwInstance返回参数结构体
                */
                class CreateNatFwInstanceResponse : public AbstractModel
                {
                public:
                    CreateNatFwInstanceResponse();
                    ~CreateNatFwInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防火墙实例id
                     * @return CfwInsId 防火墙实例id
                     */
                    std::string GetCfwInsId() const;

                    /**
                     * 判断参数 CfwInsId 是否已赋值
                     * @return CfwInsId 是否已赋值
                     */
                    bool CfwInsIdHasBeenSet() const;

                private:

                    /**
                     * 防火墙实例id
                     */
                    std::string m_cfwInsId;
                    bool m_cfwInsIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_CREATENATFWINSTANCERESPONSE_H_
