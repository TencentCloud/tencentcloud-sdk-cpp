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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSWHITELISTINFO_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSWHITELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 公网白名单信息
                */
                class RabbitMQServerlessWhiteListInfo : public AbstractModel
                {
                public:
                    RabbitMQServerlessWhiteListInfo();
                    ~RabbitMQServerlessWhiteListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网数据流白名单
                     * @return PublicDataStreamWhiteList 公网数据流白名单
                     * 
                     */
                    std::string GetPublicDataStreamWhiteList() const;

                    /**
                     * 设置公网数据流白名单
                     * @param _publicDataStreamWhiteList 公网数据流白名单
                     * 
                     */
                    void SetPublicDataStreamWhiteList(const std::string& _publicDataStreamWhiteList);

                    /**
                     * 判断参数 PublicDataStreamWhiteList 是否已赋值
                     * @return PublicDataStreamWhiteList 是否已赋值
                     * 
                     */
                    bool PublicDataStreamWhiteListHasBeenSet() const;

                    /**
                     * 获取公网数据流白名单状态
                     * @return PublicDataStreamWhiteListStatus 公网数据流白名单状态
                     * 
                     */
                    std::string GetPublicDataStreamWhiteListStatus() const;

                    /**
                     * 设置公网数据流白名单状态
                     * @param _publicDataStreamWhiteListStatus 公网数据流白名单状态
                     * 
                     */
                    void SetPublicDataStreamWhiteListStatus(const std::string& _publicDataStreamWhiteListStatus);

                    /**
                     * 判断参数 PublicDataStreamWhiteListStatus 是否已赋值
                     * @return PublicDataStreamWhiteListStatus 是否已赋值
                     * 
                     */
                    bool PublicDataStreamWhiteListStatusHasBeenSet() const;

                private:

                    /**
                     * 公网数据流白名单
                     */
                    std::string m_publicDataStreamWhiteList;
                    bool m_publicDataStreamWhiteListHasBeenSet;

                    /**
                     * 公网数据流白名单状态
                     */
                    std::string m_publicDataStreamWhiteListStatus;
                    bool m_publicDataStreamWhiteListStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSWHITELISTINFO_H_
