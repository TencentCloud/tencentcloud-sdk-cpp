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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBECONSUMETIMEREQUEST_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBECONSUMETIMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * ModifySubscribeConsumeTime请求参数结构体
                */
                class ModifySubscribeConsumeTimeRequest : public AbstractModel
                {
                public:
                    ModifySubscribeConsumeTimeRequest();
                    ~ModifySubscribeConsumeTimeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据订阅实例的ID
                     * @return SubscribeId 数据订阅实例的ID
                     * 
                     */
                    std::string GetSubscribeId() const;

                    /**
                     * 设置数据订阅实例的ID
                     * @param _subscribeId 数据订阅实例的ID
                     * 
                     */
                    void SetSubscribeId(const std::string& _subscribeId);

                    /**
                     * 判断参数 SubscribeId 是否已赋值
                     * @return SubscribeId 是否已赋值
                     * 
                     */
                    bool SubscribeIdHasBeenSet() const;

                    /**
                     * 获取消费时间起点，也即是指定订阅数据的时间起点，时间格式如：Y-m-d h:m:s，取值范围为过去24小时之内
                     * @return ConsumeStartTime 消费时间起点，也即是指定订阅数据的时间起点，时间格式如：Y-m-d h:m:s，取值范围为过去24小时之内
                     * 
                     */
                    std::string GetConsumeStartTime() const;

                    /**
                     * 设置消费时间起点，也即是指定订阅数据的时间起点，时间格式如：Y-m-d h:m:s，取值范围为过去24小时之内
                     * @param _consumeStartTime 消费时间起点，也即是指定订阅数据的时间起点，时间格式如：Y-m-d h:m:s，取值范围为过去24小时之内
                     * 
                     */
                    void SetConsumeStartTime(const std::string& _consumeStartTime);

                    /**
                     * 判断参数 ConsumeStartTime 是否已赋值
                     * @return ConsumeStartTime 是否已赋值
                     * 
                     */
                    bool ConsumeStartTimeHasBeenSet() const;

                private:

                    /**
                     * 数据订阅实例的ID
                     */
                    std::string m_subscribeId;
                    bool m_subscribeIdHasBeenSet;

                    /**
                     * 消费时间起点，也即是指定订阅数据的时间起点，时间格式如：Y-m-d h:m:s，取值范围为过去24小时之内
                     */
                    std::string m_consumeStartTime;
                    bool m_consumeStartTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_MODIFYSUBSCRIBECONSUMETIMEREQUEST_H_
