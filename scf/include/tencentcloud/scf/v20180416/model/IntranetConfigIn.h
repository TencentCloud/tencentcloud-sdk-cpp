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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGIN_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 内网配置
                */
                class IntranetConfigIn : public AbstractModel
                {
                public:
                    IntranetConfigIn();
                    ~IntranetConfigIn() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启固定内网IP
ENABLE 为开启
DISABLE 为不开启

                     * @return IpFixed 是否开启固定内网IP
ENABLE 为开启
DISABLE 为不开启

                     * 
                     */
                    std::string GetIpFixed() const;

                    /**
                     * 设置是否开启固定内网IP
ENABLE 为开启
DISABLE 为不开启

                     * @param _ipFixed 是否开启固定内网IP
ENABLE 为开启
DISABLE 为不开启

                     * 
                     */
                    void SetIpFixed(const std::string& _ipFixed);

                    /**
                     * 判断参数 IpFixed 是否已赋值
                     * @return IpFixed 是否已赋值
                     * 
                     */
                    bool IpFixedHasBeenSet() const;

                private:

                    /**
                     * 是否开启固定内网IP
ENABLE 为开启
DISABLE 为不开启

                     */
                    std::string m_ipFixed;
                    bool m_ipFixedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_INTRANETCONFIGIN_H_
