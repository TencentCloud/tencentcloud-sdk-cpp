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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 扩容实例结果描述
                */
                class ScaleOutInstanceResult : public AbstractModel
                {
                public:
                    ScaleOutInstanceResult();
                    ~ScaleOutInstanceResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端调用时传入的TOKEN
                     * @return ClientToken 客户端调用时传入的TOKEN
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置客户端调用时传入的TOKEN
                     * @param ClientToken 客户端调用时传入的TOKEN
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取扩容实例ID
                     * @return InstanceId 扩容实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置扩容实例ID
                     * @param InstanceId 扩容实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取订单名称
                     * @return DealNames 订单名称
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置订单名称
                     * @param DealNames 订单名称
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 客户端调用时传入的TOKEN
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * 扩容实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 订单名称
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SCALEOUTINSTANCERESULT_H_
