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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPCLIMIT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPCLIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 私有网络配额
                */
                class VpcLimit : public AbstractModel
                {
                public:
                    VpcLimit();
                    ~VpcLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私有网络配额描述
                     * @return LimitType 私有网络配额描述
                     * 
                     */
                    std::string GetLimitType() const;

                    /**
                     * 设置私有网络配额描述
                     * @param _limitType 私有网络配额描述
                     * 
                     */
                    void SetLimitType(const std::string& _limitType);

                    /**
                     * 判断参数 LimitType 是否已赋值
                     * @return LimitType 是否已赋值
                     * 
                     */
                    bool LimitTypeHasBeenSet() const;

                    /**
                     * 获取私有网络配额值
                     * @return LimitValue 私有网络配额值
                     * 
                     */
                    uint64_t GetLimitValue() const;

                    /**
                     * 设置私有网络配额值
                     * @param _limitValue 私有网络配额值
                     * 
                     */
                    void SetLimitValue(const uint64_t& _limitValue);

                    /**
                     * 判断参数 LimitValue 是否已赋值
                     * @return LimitValue 是否已赋值
                     * 
                     */
                    bool LimitValueHasBeenSet() const;

                private:

                    /**
                     * 私有网络配额描述
                     */
                    std::string m_limitType;
                    bool m_limitTypeHasBeenSet;

                    /**
                     * 私有网络配额值
                     */
                    uint64_t m_limitValue;
                    bool m_limitValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPCLIMIT_H_
