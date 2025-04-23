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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 创建应用，创建仓库参数
                */
                class UseDefaultRepoParameters : public AbstractModel
                {
                public:
                    UseDefaultRepoParameters();
                    ~UseDefaultRepoParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取企业版实例名
                     * @return EnterpriseInstanceName 企业版实例名
                     * 
                     */
                    std::string GetEnterpriseInstanceName() const;

                    /**
                     * 设置企业版实例名
                     * @param _enterpriseInstanceName 企业版实例名
                     * 
                     */
                    void SetEnterpriseInstanceName(const std::string& _enterpriseInstanceName);

                    /**
                     * 判断参数 EnterpriseInstanceName 是否已赋值
                     * @return EnterpriseInstanceName 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceNameHasBeenSet() const;

                    /**
                     * 获取企业版收费类型  0 按量收费   1 包年包月
                     * @return EnterpriseInstanceChargeType 企业版收费类型  0 按量收费   1 包年包月
                     * 
                     */
                    int64_t GetEnterpriseInstanceChargeType() const;

                    /**
                     * 设置企业版收费类型  0 按量收费   1 包年包月
                     * @param _enterpriseInstanceChargeType 企业版收费类型  0 按量收费   1 包年包月
                     * 
                     */
                    void SetEnterpriseInstanceChargeType(const int64_t& _enterpriseInstanceChargeType);

                    /**
                     * 判断参数 EnterpriseInstanceChargeType 是否已赋值
                     * @return EnterpriseInstanceChargeType 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceChargeTypeHasBeenSet() const;

                    /**
                     * 获取企业版规格：basic-基础班 ，standard-标准版，premium-高级版
                     * @return EnterpriseInstanceType 企业版规格：basic-基础班 ，standard-标准版，premium-高级版
                     * 
                     */
                    std::string GetEnterpriseInstanceType() const;

                    /**
                     * 设置企业版规格：basic-基础班 ，standard-标准版，premium-高级版
                     * @param _enterpriseInstanceType 企业版规格：basic-基础班 ，standard-标准版，premium-高级版
                     * 
                     */
                    void SetEnterpriseInstanceType(const std::string& _enterpriseInstanceType);

                    /**
                     * 判断参数 EnterpriseInstanceType 是否已赋值
                     * @return EnterpriseInstanceType 是否已赋值
                     * 
                     */
                    bool EnterpriseInstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 企业版实例名
                     */
                    std::string m_enterpriseInstanceName;
                    bool m_enterpriseInstanceNameHasBeenSet;

                    /**
                     * 企业版收费类型  0 按量收费   1 包年包月
                     */
                    int64_t m_enterpriseInstanceChargeType;
                    bool m_enterpriseInstanceChargeTypeHasBeenSet;

                    /**
                     * 企业版规格：basic-基础班 ，standard-标准版，premium-高级版
                     */
                    std::string m_enterpriseInstanceType;
                    bool m_enterpriseInstanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_USEDEFAULTREPOPARAMETERS_H_
