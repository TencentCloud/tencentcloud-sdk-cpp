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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/SpotMarketOptions.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 竞价请求相关选项
                */
                class InstanceMarketOptionsRequest : public AbstractModel
                {
                public:
                    InstanceMarketOptionsRequest();
                    ~InstanceMarketOptionsRequest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取竞价相关选项
                     * @return SpotOptions 竞价相关选项
                     * 
                     */
                    SpotMarketOptions GetSpotOptions() const;

                    /**
                     * 设置竞价相关选项
                     * @param _spotOptions 竞价相关选项
                     * 
                     */
                    void SetSpotOptions(const SpotMarketOptions& _spotOptions);

                    /**
                     * 判断参数 SpotOptions 是否已赋值
                     * @return SpotOptions 是否已赋值
                     * 
                     */
                    bool SpotOptionsHasBeenSet() const;

                    /**
                     * 获取市场选项类型，当前只支持取值：spot
                     * @return MarketType 市场选项类型，当前只支持取值：spot
                     * 
                     */
                    std::string GetMarketType() const;

                    /**
                     * 设置市场选项类型，当前只支持取值：spot
                     * @param _marketType 市场选项类型，当前只支持取值：spot
                     * 
                     */
                    void SetMarketType(const std::string& _marketType);

                    /**
                     * 判断参数 MarketType 是否已赋值
                     * @return MarketType 是否已赋值
                     * 
                     */
                    bool MarketTypeHasBeenSet() const;

                private:

                    /**
                     * 竞价相关选项
                     */
                    SpotMarketOptions m_spotOptions;
                    bool m_spotOptionsHasBeenSet;

                    /**
                     * 市场选项类型，当前只支持取值：spot
                     */
                    std::string m_marketType;
                    bool m_marketTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_INSTANCEMARKETOPTIONSREQUEST_H_
